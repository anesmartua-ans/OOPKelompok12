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

##  Cara Menjalankan Program

### **1. Compile Program**
```bash
g++ main.cpp -o warga
