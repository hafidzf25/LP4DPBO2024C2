// Memasukan library yang digunakan ke dalam fungsi main (program utama)
#include <bits/stdc++.h>
#include "Vehicle.cpp"
#include "Car.cpp"
#include "Motorcycle.cpp"
#include "Garage.cpp"
#include "Parkinglot.cpp"

// Deklarasi namespace
using namespace std;

// Fungsi main() yang digunakan sebagai program utama
int main() {
    ios::sync_with_stdio(0);
    cin.tie();

    // Instansiasi objek Motor yang akan dimasukkan ke dalam class Garasi dan Parkinglot
    Motorcycle motor1("Kopling", 5, "A10001A", "Beat Karbu", 2012, "Putih Merah");
    Motorcycle motor2("Kopling", 6,  "A10002B", "Beat Pop", 2015, "Pink");
    Motorcycle motor3("Matic", 7,  "A10003C", "Beat Street", 2020, "Hitam Orange");
    Motorcycle motor4("Kopling", 8,  "A10004D", "Beat ak", 2023, "Merah Putih");
    Motorcycle motor5("Matic", 9,  "A10005E", "Beat ai", 2029, "Kuning");

    // Instansiasi objek Mobil yang akan dimasukkan ke dalam class Garasi dan Parkinglot
    Car mobil1(6, 2, "B10001A", "Avanza Brio", 2012, "Hitam");
    Car mobil2(4, 4, "B10002B", "Avanza Brao", 2013, "Orange");
    Car mobil3(6, 4,  "B10003C", "Avanza Breo", 2014, "Biru");
    Car mobil4(4, 4,  "B10004D", "Avanza Bruo", 2015, "Kuning");
    Car mobil5(6, 2,  "B10005E", "Avanza Broo", 2016, "Merah");

    // Instansiasi objek Garasi yang akan menjadi tempat untuk beberapa Mobil dan Motor
    Garage Garasi1("Blok A No 2", "7 Hektar");
    Garage Garasi2("Blok A No 5", "5 Hektar");

    // Instansiasi objek Parking Lot yang akan menjadi tempat untuk beberapa Mobil dan Motor
    Parkinglot Parkirbawah(20, "UPI FPTK");
    Parkinglot Parkiratas(30, "UPI Musium");

    // Memasukkan object mobil satu per satu ke dalam garasi dan parkir
    Garasi1.add_mobil(&mobil1);
    Garasi2.add_mobil(&mobil2);
    Garasi1.add_mobil(&mobil3);
    Parkiratas.add_mobil(&mobil4);
    Parkirbawah.add_mobil(&mobil5);

    // Memasukkan object motor satu per satu ke dalam garasi dan parkir
    Garasi1.add_motor(&motor1);
    Garasi2.add_motor(&motor2);
    Garasi1.add_motor(&motor3);
    Parkiratas.add_motor(&motor4);
    Parkirbawah.add_motor(&motor5);

    // Menampilkan informasi daftar kendaraan dari tiap garasi dan parkiran
    cout << "=================================================================" << endl;
    Garasi1.get_datakendaraan();
    cout << "=================================================================" << endl;
    Garasi2.get_datakendaraan();
    cout << "=================================================================" << endl;
    Parkiratas.get_datakendaraan();
    cout << "=================================================================" << endl;
    Parkirbawah.get_datakendaraan();
    cout << "=================================================================" << endl;

    return 0; // Menyatakan keluaran dari fungsi main() adalah true
}
