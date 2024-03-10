# Deklarasi Kelas Garasi
class Garage:
    __namagarasi=""
    __luasgarasi=0
    __daftarkendaraanMotor=[]
    __daftarkendaraanMobil=[]

    # Konstruktor kelas Garasi
    def __init__(self, namagarasi="", luasgarasi=0):
        self.__namagarasi = namagarasi
        self.__luasgarasi = luasgarasi
        self.__daftarkendaraanMotor=[]
        self.__daftarkendaraanMobil=[]

    # Getter dan setter nama garasi
    def get_namagarasi(self):
        return self.__namagarasi
    def set_namagarasi(self, namagarasi):
        self.__namagarasi = namagarasi

    # Getter dan setter luas garasi
    def get_luasgarasi(self):
        return self.__luasgarasi
    def set_luasgarasi(self, luasgarasi):
        self.__luasgarasi = luasgarasi

    # Setter untuk menambah daftar kendaraan motor dan mobil
    def add_motor(self, motor):
        self.__daftarkendaraanMotor.append(motor)
    def add_mobil(self, mobil):
        self.__daftarkendaraanMobil.append(mobil)
    
    # Getter untuk menampilkan daftar kendaraan dalam garasi
    def display_kendaraan(self):
        print(f"======================================================================================================================================================")
        print(f"! Garasi {self.__namagarasi} dengan luas {self.__luasgarasi} m2 !\n")
        print(f"Daftar Mobil:")
        for mobil in self.__daftarkendaraanMobil:
            print(f"- Mobil dengan plat nomor {mobil.get_platnomor()} merk {mobil.get_merk()} diproduksi pada tahun {mobil.get_tahunproduksi()} berwarna {mobil.get_warna()} dengan jumlah kursi {mobil.get_jumlahkursi()} dan jumlah pintu {mobil.get_jumlahpintu()}")
        
        print(f"\nDaftar Motor:")
        for motor in self.__daftarkendaraanMotor:
            print(f"- Motor {motor.get_jenismotor()} dengan plat nomor {motor.get_platnomor()} merk {motor.get_merk()} diproduksi pada tahun {motor.get_tahunproduksi()} berwarna {motor.get_warna()} ber kapasitas {motor.get_kapasitastangki()} liter")
        print(f"======================================================================================================================================================\n")