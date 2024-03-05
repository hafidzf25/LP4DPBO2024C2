// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan, termasuk kelas induk (kelas Vechile) dari kelas Car
#include <iostream>
#include <string>
#include "Vehicle.cpp"

// Deklarasi namespace
using namespace std;

/*
    Kelas Car yang digunakan untuk merepresentasikan data Car, Car merupakan kelas turunan atau warisan dari Vehicle yang merupakan kendaraan detail dari si Mobil
*/
class Car : public Vehicle {
    private:
        // Atribut yang digunakan pada kelas Car terdiri dari asal jumlahkursi dan jumlah pintu
        int jumlahkursi;
        int jumlahpintu;

    public:
        // Constructor
        Car()
        {
            
        }

        // Constructor : Overloading
        Car(int jumlahkursi, string platnomor, string merk, int tahunproduksi, string warna) : Vehicle(platnomor, merk, tahunproduksi, warna)
        {
            this->jumlahkursi = jumlahkursi;
            jumlahpintu = 0;
        }

        // Constructor : Overloading
        Car(int jumlahkursi, int jumlahpintu, string platnomor, string merk, int tahunproduksi, string warna) : Vehicle(platnomor, merk, tahunproduksi, warna)
        {
            this->jumlahkursi = jumlahkursi;
            this->jumlahpintu = jumlahpintu;
        }

        // Method set untuk set setiap nilai atribut pada kelas Car
        void set_jumlahkursi(int jumlahkursi)
        {
            this->jumlahkursi = jumlahkursi;
        }

        void set_jumlahpintu(string jumlahpintu)
        {
            jumlahpintu = jumlahpintu;
        }

        // Method get untuk mendapatkan nilai setiap atribut pada kelas Car
        int get_jumlahkursi()
        {
            return jumlahkursi;
        }

        int get_jumlahpintu()
        {
            return jumlahpintu;
        }

        // Destructor
        ~Car()
        {

        }
};
