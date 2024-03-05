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
    Kelas Parkinglot yang digunakan untuk merepresentasikan data Parkinglot yang merupakan tempat parkir di luar ruangan
*/
class Parkinglot
{
    private:
        // Atribut yang digunakan pada kelas Parkinglot terdiri dari nama dan kapasitas dan jumlah kendaraan motor dan mobil.
        string nama;
        int kapasitas;
        int jumlahkendaraanMobil;
        int jumlahkendaraanMotor;
        vector<Car*> daftarMobil;
        vector<Motorcycle*> daftarMotor;
        
    public:
        // Constructor
        Parkinglot()
        {

        }

        // Constructor : Overloading
        Parkinglot(int kapasitas)
        {  
            this->kapasitas = kapasitas;
            jumlahkendaraanMobil = 0;
            jumlahkendaraanMotor = 0;
        }

        Parkinglot(int kapasitas, string nama)
        {  
            this->kapasitas = kapasitas;
            this->nama = nama;
            jumlahkendaraanMobil = 0;
            jumlahkendaraanMotor = 0;
        }

        // Method setter untuk set setiap nilai atribut pada kelas Parkinglot
        void set_kapasitas(int kapasitas)
        {
            this->kapasitas = kapasitas;
        }

        void set_nama(int nama)
        {
            this->nama = nama;
        }

        // Method untuk menambahkan motor ke dalam daftar motor di dalam class ini
        void add_motor(Motorcycle* motor) {
            if (jumlahkendaraanMotor < kapasitas)
            {
                jumlahkendaraanMotor++;
                daftarMotor.push_back(motor);
            }
            else
            {
                cout << "Maaf sudah penuh." << endl << endl;
            }
        }

        // Method untuk menambahkan mobil ke dalam daftar motor di dalam class ini
        void add_mobil(Car* mobil) {
            if (jumlahkendaraanMobil < kapasitas)
            {
                jumlahkendaraanMobil++;
                daftarMobil.push_back(mobil);
            }
            else
            {
                cout << "Maaf sudah penuh." << endl << endl;
            }
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Parkinglot
        int get_kapasitas()
        {
            return kapasitas;
        }

        string get_nama()
        {
            return nama;
        }

        int get_jumlahkendaraan()
        {
            return jumlahkendaraanMobil+jumlahkendaraanMotor;
        }

        void get_datakendaraan() {
            cout << "Daftar Mobil di Parking Lot " << nama << ":" << endl << endl;
            for (Car* mobil : daftarMobil) {
                cout << "Plat Mobil " << mobil->get_platnomor() << " dengan Merk " << mobil->get_merk() << 
                " dengan Jumlah Pintu " << mobil->get_jumlahpintu() << " dengan Jumlah Kursi " << mobil->get_jumlahkursi()
                << " dirilis pada Tahun " << mobil->get_tahunproduksi() << endl;
            }
            cout << "-----------------------------------------------------------------" << endl;
            cout << "Daftar Motor di Parking Lot " << nama << ":" << endl << endl;
            for (Motorcycle* motor : daftarMotor) {
                cout << "Plat Motor " << motor->get_platnomor() << " dengan Merk " << motor->get_merk() << 
                " dengan Jenis Motor " << motor->get_jenismotor() << " dengan Kapasitas Tangki " << motor->get_kapasitastangki()
                << " dirilis pada Tahun " << motor->get_tahunproduksi() << endl;
            }
        }

        // Destructor
        ~Parkinglot()
        {

        }
};
