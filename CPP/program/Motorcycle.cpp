// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vehicle) dari kelas Motorcycle
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Motorcycle yang digunakan untuk merepresentasikan data Motorcycle, sehingga kelas Motorcycle merupakan kelas turunan dari kelas Vehicle.
*/
class Motorcycle : public Vehicle {
    private:
        // Atribut yang digunakan pada kelas Motorcycle terdiri dari jenis motor dan kapasitas tangki
        string jenismotor;
        int kapasitastangki;

    public:
        // Constructor
        Motorcycle()
        {
            
        }

        // Constructor : Overloading
        Motorcycle(string jenismotor, string platnomor, string merk, int tahunproduksi, string warna) : Vehicle(platnomor, merk, tahunproduksi, warna)
        {
            this->jenismotor = jenismotor;
            kapasitastangki = 0;
        }

        // Constructor : Overloading
        Motorcycle(string jenismotor, int kapasitastangki, string platnomor, string merk, int tahunproduksi, string warna) : Vehicle(platnomor, merk, tahunproduksi, warna)
        {
            this->jenismotor = jenismotor;
            this->kapasitastangki = kapasitastangki;
        }

        // Method set untuk set setiap nilai atribut pada kelas Motorcycle
        void set_jenismotor(string jenismotor)
        {
            this->jenismotor = jenismotor;
        }

        void set_kapasitastangki(int kapasitastangki)
        {
            kapasitastangki = kapasitastangki;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Motorcycle
        string get_jenismotor()
        {
            return jenismotor;
        }

        int get_kapasitastangki()
        {
            return kapasitastangki;
        }

        // Destructor
        ~Motorcycle()
        {

        }
};
