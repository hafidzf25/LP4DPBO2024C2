// Menggunakan pragma once agar header file hanya di-include satu kali
#pragma once

// Memasukan library yang digunakan
#include <iostream>
#include <string>

// Deklarasi namespace
using namespace std;

/*
    Kelas Vehicle yang digunakan untuk merepresentasikan data Vehicle, Vehicle merupakan kelas induk dari kelas Car dan Motorcycle
*/
class Vehicle {

    private:
        // Atribut yang digunakan pada kelas Vehicle terdiri dari platnomor, merk, warna dan tahunproduksi.
        // Pada dasarnya tiap kendaraan mempunyai 4 atribut tersebut
        string platnomor;
        string merk;
        int tahunproduksi;
        string warna;

    public:
        // Constructor
        Vehicle()
        {

        }

        // Constructor : Overloading
        Vehicle(string platnomor) {
            this->platnomor = platnomor;
            merk = "";
            tahunproduksi = 0;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platnomor, string merk)
        {
            this->platnomor = platnomor;
            this->merk = merk;
            tahunproduksi = 0;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platnomor, string merk, int tahunproduksi)
        {
            this->platnomor = platnomor;
            this->merk = merk;
            this->tahunproduksi = tahunproduksi;
            warna = "";
        }

        // Constructor : Overloading
        Vehicle(string platnomor, string merk, int tahunproduksi, string warna)
        {
            this->platnomor = platnomor;
            this->merk = merk;
            this->tahunproduksi = tahunproduksi;
            this->warna = warna;
        }

        // Method setter untuk set nilai setiap atribut pada kelas Vehicle
        void set_platnomor(string platnomor)
        {
            this->platnomor = platnomor;
        }

        void set_merk(string merk)
        {
            this->merk = merk;
        }

        void set_tahunproduksi(int tahunproduksi)
        {
            this->tahunproduksi = tahunproduksi;
        }

        void set_warna(int warna)
        {
            this->warna = warna;
        }

        // Method getter untuk mendapatkan nilai setiap atribut pada kelas Vehicle
        string get_platnomor()
        {
            return platnomor;
        }

        string get_merk()
        {
            return merk;
        }

        int get_tahunproduksi()
        {
            return tahunproduksi;
        }

        string get_warna()
        {
            return warna;
        }

        // Destructor
        ~Vehicle()
        {

        }
};
