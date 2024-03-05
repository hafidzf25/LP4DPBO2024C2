// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, serta kelas yang dimiliki oleh Car dan Motorcycle yang merupakan composition
#include <iostream>
#include <string>
#include <vector>
#include "Car.cpp"
#include "Motorcycle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Garage yang digunakan untuk merepresentasikan data Garage yang merupakan Garasi tempat parkir dalam ruangan
*/
class Garage
{
    private:
        // Atribut yang digunakan pada kelas Garage terdiri dari nama dan luas dari garage tersebut. Garage ini memiliki daftar Mobil dan daftar Motor
        string nama;
        string luas;
        vector<Car*> daftarMobil;
        vector<Motorcycle*> daftarMotor;
        
    public:
        // Constructor
        Garage()
        {

        }

        // Constructor : Overloading
        Garage(string nama)
        {  
            this->nama = nama;
            luas = "";
        }

        // Constructor : Overloading
        Garage(string nama, string luas)
        {  
            this->nama = nama;
            this->luas = luas;
        }

        // Method setter untuk set setiap nilai atribut pada kelas Garage
        void set_nama(string nama)
        {
            this->nama = nama;
        }

        void set_luas(string luas)
        {
            this->luas = luas;
        }

        // Method untuk menambahkan motor ke dalam daftar motor di dalam class ini
        void add_motor(Motorcycle* motor) {
            daftarMotor.push_back(motor);
        }

        // Method untuk menambahkan mobil ke dalam daftar mobil di dalam class ini
        void add_mobil(Car* mobil) {
            daftarMobil.push_back(mobil);
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Garage
        string get_nama()
        {
            return nama;
        }

        string get_luas()
        {
            return luas;
        }

        // Digunakan untuk menampilkan isi daftar kendaraan dari si garasi
        void get_datakendaraan() {
            cout << "Daftar Mobil di Garasi" << nama << ":" << endl << endl;
            for (Car* mobil : daftarMobil) {
                cout << "Plat Mobil " << mobil->get_platnomor() << " dengan Merk " << mobil->get_merk() << 
                " dengan Jumlah Pintu " << mobil->get_jumlahpintu() << " dengan Jumlah Kursi " << mobil->get_jumlahkursi()
                << " dirilis pada Tahun " << mobil->get_tahunproduksi() << endl;
            }
            cout << "-----------------------------------------------------------------" << endl;
            cout << "Daftar Motor di Garasi" << nama << ":" << endl << endl;;
            for (Motorcycle* motor : daftarMotor) {
                cout << "Plat Motor " << motor->get_platnomor() << " dengan Merk " << motor->get_merk() << 
                " dengan Jenis Motor " << motor->get_jenismotor() << " dengan Kapasitas Tangki " << motor->get_kapasitastangki()
                << " dirilis pada Tahun " << motor->get_tahunproduksi() << endl;
            }
        }

        // Destructor
        ~Garage()
        {

        }
};
