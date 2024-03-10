# Import library atau class induk
from Vehicle import Vehicle

# Deklarasi Class Motorcycle
class Motorcycle(Vehicle):
    __jenismotor = ""
    __kapasitastangki = 0

    # Konstruktor untuk kelas vehicle
    def __init__(self, platnomor = "", merk = "", tahunproduksi = 0, warna = "", jenismotor = "", kapasitastangki=0):
        super().__init__(platnomor, merk, tahunproduksi, warna)
        self.__jenismotor = jenismotor
        self.__kapasitastangki = kapasitastangki
        
    # Getter and setter untuk jenis motor
    def get_jenismotor(self):
        return self.__jenismotor
    def set_jenismotor(self, jenismotor):
        self.__jenismotor = jenismotor

    # Getter and setter untuk kapasitas tangki
    def get_kapasitastangki(self):
        return self.__kapasitastangki
    def set_kapasitastangki(self, kapasitastangki):
        self.__kapasitastangki = kapasitastangki