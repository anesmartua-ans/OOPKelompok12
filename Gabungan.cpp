#include <iostream>
#include <string>
#include <vector>
using namespace std;

class WargaKampus{
protected:
    string nama;

public:
    WargaKampus(){
        nama = "";
    }

    void setNama(string x){
        nama = x;
    }

    string getNama(){
        return nama;
    }

    virtual void input() = 0;
    virtual void display() = 0;
    virtual ~WargaKampus() {}
};

class Mahasiswa : public WargaKampus{
private:
    string nim;
    string prodi;

public:
    Mahasiswa() : WargaKampus(){
        nim = "";
        prodi = "";
    }

    void setNim(string n){
        nim = n;
    }

    void setProdi(string p){
        prodi = p;
    }

    void input(){
        string temp;
        cin.ignore();

        cout << "\nMasukkan Nama Mahasiswa : ";
        getline(cin, temp);
        setNama(temp);

        cout << "Masukkan NIM            : ";
        getline(cin, temp);
        setNim(temp);

        cout << "Masukkan Program Studi  : ";
        getline(cin, temp);
        setProdi(temp);
    }

    void display(){
        cout << "\n===== DATA MAHASISWA =====\n";
        cout << "Nama          : " << nama << endl;
        cout << "NIM           : " << nim << endl;
        cout << "Program Studi : " << prodi << endl;
        cout << "===========================\n";
    }
};

class Dosen : public WargaKampus{
private:
    string nidn;
    string homebase;

public:
    Dosen() : WargaKampus(){
        nidn = "";
        homebase = "";
    }

    void setNidn(string n){
        nidn = n;
    }

    void setHomebase(string h){
        homebase = h;
    }

    void input(){
        string temp;
        cin.ignore();

        cout << "\nMasukkan Nama Dosen : ";
        getline(cin, temp);
        setNama(temp);

        cout << "Masukkan NIDN       : ";
        getline(cin, temp);
        setNidn(temp);

        cout << "Masukkan Homebase   : ";
        getline(cin, temp);
        setHomebase(temp);
    }

    void display(){
        cout << "\n===== DATA DOSEN =====\n";
        cout << "Nama     : " << nama << endl;
        cout << "NIDN     : " << nidn << endl;
        cout << "Homebase : " << homebase << endl;
        cout << "=======================\n";
    }
};

class Karyawan : public WargaKampus{
private:
    string nip;
    string divisi;

public:
    Karyawan() : WargaKampus(){
        nip = "";
        divisi = "";
    }

    void input(){
        cin.ignore();

        cout << "\nMasukkan Nama   : ";
        getline(cin, nama);

        cout << "Masukkan NIP    : ";
        getline(cin, nip);

        cout << "Masukkan Divisi : ";
        getline(cin, divisi);
    }

    void display(){
        cout << "\n===== DATA KARYAWAN =====\n";
        cout << "Nama   : " << nama << endl;
        cout << "NIP    : " << nip << endl;
        cout << "Divisi : " << divisi << endl;
        cout << "==========================\n";
    }
};

int main(){
    vector<WargaKampus*> semuaData;

    while (true){
        int pilihan;

        cout << "\n===== MENU INPUT DATA UNIVERSITAS =====\n";
        cout << "1. Input Data Mahasiswa\n";
        cout << "2. Input Data Dosen\n";
        cout << "3. Input Data Karyawan\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        if (pilihan == 4){
            for (int i = 0; i < semuaData.size(); i++){
                delete semuaData[i];
            }
            break;
        }

        WargaKampus* p;

        if (pilihan == 1){
            p = new Mahasiswa();
        }
        else if (pilihan == 2){
            p = new Dosen();
        }
        else if (pilihan == 3){
            p = new Karyawan();
        }
        else{
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        p->input();
        p->display();
        semuaData.push_back(p);
    }

    return 0;
}

