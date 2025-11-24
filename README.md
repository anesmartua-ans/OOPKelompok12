# Program Pendataan Warga Kampus (OOP C++)

##  Deskripsi Program
Program ini merupakan aplikasi sederhana berbasis C++ yang menggunakan konsep **Object-Oriented Programming (OOP)** untuk mendata tiga jenis warga kampus:

- Mahasiswa  
- Dosen  
- Karyawan  

Program ini menerapkan konsep OOP seperti inheritance, encapsulation, abstract class, polymorphism, dan dynamic memory allocation.

---

##  Struktur Class

### **1. WargaKampus (Abstract Class)**
Atribut:
- `nama`

Method:
- `input()` → pure virtual  
- `display()` → pure virtual  
- `setNama()` & `getNama()`  

---

### **2. Mahasiswa**
Atribut:
- `nim`
- `prodi`

Method:
- `input()`
- `display()`

---

### **3. Dosen**
Atribut:
- `nidn`
- `homebase`

Method:
- `input()`
- `display()`

---

### **4. Karyawan**
Atribut:
- `nip`
- `divisi`

Method:
- `input()`
- `display()`

---

#  UML Class Diagram (Markdown ASCII)

```plaintext
                   +----------------------+
                   |    WargaKampus       |
                   +----------------------+
                   | - nama : string      |
                   +----------------------+
                   | + setNama()          |
                   | + getNama()          |
                   | + input() = 0        |
                   | + display() = 0      |
                   +----------+-----------+
                              ^
              +---------------+------------------+
              |               |                  |
              |               |                  |
+---------------------+ +-------------------+ +-------------------+
|     Mahasiswa       | |       Dosen       | |     Karyawan      |
+---------------------+ +-------------------+ +-------------------+
| - nim : string      | | - nidn : string   | | - nip : string    |
| - prodi : string    | | - homebase: string| | - divisi : string |
+---------------------+ +-------------------+ +-------------------+
| + input()           | | + input()         | | + input()         |
| + display()         | | + display()       | | + display()       |
+---------------------+ +-------------------+ +-------------------+
---

#  Flowchart

```plaintext
                 +-----------------------+
                 |      Mulai Program    |
                 +-----------+-----------+
                             |
                             v
                 +------------------------+
                 | Tampilkan Menu Input   |
                 +-----------+------------+
                             |
                             v
                +-------------------------+
                |  Baca Pilihan User      |
                +-----------+-------------+
                            |
      +---------------------+----------------------+
      |            |                |              |
      |1           |2               |3             |4
      v            v                v              v
+-------------+ +-------------+ +-------------+ +-------------+
| Mahasiswa   | |   Dosen     | |  Karyawan   | |   Keluar    |
+-------------+ +-------------+ +-------------+ +-------------+
      |            |                |              |
      v            v                v              |
+-------------+ +-------------+ +-------------+    |
| p = new     | | p = new     | | p = new     |    |
| Mahasiswa   | | Dosen       | | Karyawan    |    |
+-------------+ +-------------+ +-------------+    |
      |            |                |              |
      +------------+----------------+              |
                   |                               |
                   v                               |
          +------------------+                      |
          | p->input()       |                      |
          +------------------+                      |
                   |                               |
                   v                               |
          +------------------+                      |
          | p->display()     |                      |
          +------------------+                      |
                   |                               |
                   v                               |
        +------------------------+                  |
        | simpan ke vector       |                  |
        +------------------------+                  |
                   |                               |
                   +---------------+---------------+
                                   |
                                   v
                     +----------------------------+
                     |   Hapus semua pointer      |
                     | (delete semuaData[i])      |
                     +--------------+-------------+
                                    |
                                    v
                            +---------------+
                            |  Program Selesai |
                            +---------------+
