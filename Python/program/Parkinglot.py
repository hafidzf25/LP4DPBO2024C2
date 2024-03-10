# Deklarasi Kelas Garasi
class Parkinglot:
    __nama=""
    __kapasitasMotor=0
    __kapasitasMobil=0
    __jumlahkendaraansaatiniMotor=0
    __jumlahkendaraansaatiniMobil=0
    __daftarkendaraanMotor=[]
    __daftarkendaraanMobil=[]

    # Konstruktor kelas Garasi
    def __init__(self, nama="", kapasitasMotor=0, kapasitasMobil=0):
        self.__nama = nama
        self.__kapasitasMotor = kapasitasMotor
        self.__kapasitasMobil = kapasitasMobil
        self.__jumlahkendaraansaatiniMotor = 0
        self.__jumlahkendaraansaatiniMobil = 0
        self.__daftarkendaraanMotor=[]
        self.__daftarkendaraanMobil=[]

    # Getter dan setter nama parkiran
    def get_nama(self):
        return self.__nama
    def set_nama(self, nama):
        self.__nama = nama

    # Getter dan setter luas kapasitas
    def get_kapasitas(self):
        return self.__kapasitas
    def set_kapasitas(self, kapasitas):
        self.__kapasitas = kapasitas

    # Getter jumlah semua kendaraan di parking lot
    def get_jumlahkendaraanMotor(self):
        return self.__jumlahkendaraansaatiniMotor
    
    # Getter jumlah semua kendaraan di parking lot
    def get_jumlahkendaraanMobil(self):
        return self.__jumlahkendaraansaatiniMobil

    # Getter jumlah semua kendaraan di parking lot
    def get_jumlahkendaraanSemua(self):
        return self.__jumlahkendaraansaatiniMobil + self.__jumlahkendaraansaatiniMotor

    # Setter untuk menambah daftar kendaraan motor dan mobil
    def add_motor(self, motor):
        if self.__jumlahkendaraansaatiniMotor < self.__kapasitasMotor:
            self.__jumlahkendaraansaatiniMotor += 1
            self.__daftarkendaraanMotor.append(motor)
        else:
            print(f"\n=====\nMohon maaf, tidak bisa menambah kendaraan.\n=====\n")
    def add_mobil(self, mobil):
        if self.__jumlahkendaraansaatiniMobil < self.__kapasitasMobil:
            self.__jumlahkendaraansaatiniMobil += 1
            self.__daftarkendaraanMobil.append(mobil)
        else:
            print(f"\n=====\nMohon maaf, tidak bisa menambah kendaraan.\n=====\n")
    
    # Getter untuk menampilkan daftar kendaraan dalam garasi
    def display_kendaraan(self):
        print(f"======================================================================================================================================================")
        print(f"! Parking Lot {self.__nama} berkapasitas motor {self.__kapasitasMotor} dan berkapasitas mobil {self.__kapasitasMobil} dengan jumlah kendaraan saat ini {self.__jumlahkendaraansaatiniMobil + self.__jumlahkendaraansaatiniMotor} !\n")
        print(f"Daftar Mobil:")
        for mobil in self.__daftarkendaraanMobil:
            print(f"- Mobil dengan plat nomor {mobil.get_platnomor()} merk {mobil.get_merk()} diproduksi pada tahun {mobil.get_tahunproduksi()} berwarna {mobil.get_warna()} dengan jumlah kursi {mobil.get_jumlahkursi()} dan jumlah pintu {mobil.get_jumlahpintu()}")
        
        print(f"\nDaftar Motor:")
        for motor in self.__daftarkendaraanMotor:
            print(f"- Motor {motor.get_jenismotor()} dengan plat nomor {motor.get_platnomor()} merk {motor.get_merk()} diproduksi pada tahun {motor.get_tahunproduksi()} berwarna {motor.get_warna()} ber kapasitas {motor.get_kapasitastangki()} liter")
        print(f"======================================================================================================================================================\n")