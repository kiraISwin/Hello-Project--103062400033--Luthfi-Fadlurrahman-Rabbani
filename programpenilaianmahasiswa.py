
def main():
    # Judul program
    print("=== Program Penilaian Mahasiswa ===")
    
    # Input data mahasiswa
    nama = input("masukkan nama mahasiswa: ")
    nim = input("masukkan nim mahasiswa: ")

    try:
        # Input nilai akhir
        nilai = float(input("nilai mahasiswa(0-100): "))

        # Validasi nilai
        if 0 <= nilai <= 100:
            # Penentuan grade dan keterangan
            if nilai >= 85:
                grade = 'A'
                keterangan = 'Sangat Baik'
            elif nilai >= 75:
                grade = 'B'
                keterangan = 'Baik'
            elif nilai >= 65:
                grade = 'C'
                keterangan = 'Cukup'
            elif nilai >= 50:
                grade = 'D'
                keterangan = 'Kurang'
            else:
                grade = 'E'
                keterangan = 'Gagal'

            # Output hasil penilaian
            print("\n=== Hasil Penilaian ===")
            print(f"Nama       : {nama}")
            print(f"NIM        : {nim}")
            print(f"Nilai Akhir: {nilai:.2f}")
            print(f"Grade      : {grade}")
            print(f"Keterangan : {keterangan}")
        else:
            print("Error: Nilai harus antara 0 hingga 100.")
    except ValueError:
        print("Error: Input nilai harus berupa angka.")

# Memastikan program dijalankan langsung
if __name__ == "__main__":
    main()