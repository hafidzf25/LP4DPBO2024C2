# Import library atau class induk
from Vehicle import Vehicle

# Deklarasi Class Car
class Car(Vehicle):
    __jumlahkursi = ""
    __jumlahpintu = 0

    # Konstruktor untuk kelas vehicle
    def __init__(self, platnomor = "", merk = "", tahunproduksi = 0, warna = "", jumlahkursi = 0, jumlahpintu=0):
        super().__init__(platnomor, merk, tahunproduksi, warna)
        self.__jumlahkursi = jumlahkursi
        self.__jumlahpintu = jumlahpintu
        
    # Getter and setter untuk jenis motor
    def get_jumlahkursi(self):
        return self.__jumlahkursi
    def set_jumlahkursi(self, jumlahkursi):
        self.__jumlahkursi = jumlahkursi

    # Getter and setter untuk kapasitas tangki
    def get_jumlahpintu(self):
        return self.__jumlahpintu
    def set_jumlahpintu(self, jumlahpintu):
        self.__jumlahpintu = jumlahpintu