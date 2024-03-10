# Deklarasi Class Vehicle

class Vehicle:
    __platnomor = ""
    __merk = ""
    __tahunproduksi = 0
    __warna = ""

    # Konstruktor untuk kelas vehicle
    def __init__(self, platnomor = "", merk = "", tahunproduksi = 0, warna = ""):
        self.__platnomor = platnomor
        self.__merk = merk
        self.__tahunproduksi = tahunproduksi
        self.__warna = warna
        
    # Getter and setter untuk plat nomor
    def get_platnomor(self):
        return self.__platnomor
    def set_platnomor(self, platnomor):
        self.__platnomor = platnomor

    # Getter and setter untuk merk
    def get_merk(self):
        return self.__merk
    def set_merk(self, merk):
        self.__merk = merk

    # Getter and setter untuk tahun produksi
    def get_tahunproduksi(self):
        return self.__tahunproduksi
    def set_tahunproduksi(self, tahunproduksi):
        self.__tahunproduksi = tahunproduksi

    # Getter and setter untuk warna
    def get_warna(self):
        return self.__warna
    def set_warna(self, warna):
        self.__warna = warna

    