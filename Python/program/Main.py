# Import kelas yang dibutuhkan
from Vehicle import Vehicle
from Motorcycle import Motorcycle
from Car import Car
from Garage import Garage
from Parkinglot import Parkinglot

# Membuat object motor
Motor1 = Motorcycle("A123XYZ", "Honda", 2020, "Merah", "Matic", 5)
Motor2 = Motorcycle("B456ABC", "Yamaha", 2019, "Biru", "Kopling", 6)
Motor3 = Motorcycle("C789DEF", "Suzuki", 2018, "Hitam", "Matic", 4)
Motor4 = Motorcycle("D012GHI", "Kawasaki", 2021, "Hijau", "Kopling", 6)
Motor5 = Motorcycle("E345JKL", "Ducati", 2020, "Merah", "Matic", 4)
Motor6 = Motorcycle("F678MNO", "Harley Davidson", 2017, "Hitam", "Kopling", 5)
Motor7 = Motorcycle("G901PQR", "BMW", 2019, "Putih", "Matic", 4)
Motor8 = Motorcycle("H234STU", "Aprilia", 2022, "Biru", "Kopling", 6)

# Membuat object mobil
Mobil1 = Car("B123XYZ", "Toyota", 2018, "Hitam", 5, 4)
Mobil2 = Car("C456ABC", "Honda", 2019, "Putih", 7, 5)
Mobil3 = Car("D789DEF", "Suzuki", 2020, "Biru", 5, 4)
Mobil4 = Car("E012GHI", "Mitsubishi", 2017, "Merah", 5, 4)
Mobil5 = Car("F345JKL", "Ford", 2016, "Hijau", 7, 5)
Mobil6 = Car("G678MNO", "Chevrolet", 2015, "Silver", 5, 4)
Mobil7 = Car("H901PQR", "Nissan", 2019, "Orange", 7, 5)
Mobil8 = Car("I234STU", "BMW", 2021, "Hitam", 5, 4)

# Membuat object garasi
Garasi1 = Garage("Blok RA 4 No 23", 15)
Garasi2 = Garage("Blok RB 2 No 19", 28)

# Membuat object parking lot
Parkiran1 = Parkinglot("Musium UPI", 3, 4)
Parkiran2 = Parkinglot("Deket FPTK", 3, 1)

# Menambahkan object motor pada tiap object garasi
Garasi1.add_motor(Motor1)
Garasi1.add_motor(Motor2)
Garasi2.add_motor(Motor3)

# Menambahkan object mobil pada tiap object garasi
Garasi1.add_mobil(Mobil1)
Garasi2.add_mobil(Mobil2)
Garasi2.add_mobil(Mobil3)

# Menambahkan object motor pada tiap parking lot
Parkiran1.add_motor(Motor4)
Parkiran1.add_motor(Motor5)
Parkiran1.add_motor(Motor6)
Parkiran2.add_motor(Motor7)
Parkiran2.add_motor(Motor8)

# Menambahkan object motor pada tiap parking lot
Parkiran1.add_mobil(Mobil4)
Parkiran1.add_mobil(Mobil5)
Parkiran1.add_mobil(Mobil6)
Parkiran1.add_mobil(Mobil7)
Parkiran2.add_mobil(Mobil8)

# Menampilkan kendaraan pada tiap garasi
Garasi1.display_kendaraan()
Garasi2.display_kendaraan()

# Menampilkan kendaraan pada tiap parking lot
Parkiran1.display_kendaraan()
Parkiran2.display_kendaraan()

