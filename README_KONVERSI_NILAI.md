# Program Konversi Nilai Mahasiswa

Program ini dibuat untuk mengkonversi nilai mahasiswa dari **nilai angka (0.0 - 4.0)** menjadi **nilai huruf (A, B, C, D, E)**.

## Fitur Program

### Fitur Utama:
1. ✅ **Input jumlah mahasiswa** - User dapat menentukan berapa banyak nilai yang ingin dikonversi
2. ✅ **Array dinamis** - Menggunakan dynamic memory allocation untuk menyimpan nilai
3. ✅ **Input nilai per mahasiswa** - Input nilai satu per satu dengan validasi
4. ✅ **Konversi otomatis** - Menampilkan nilai angka dan huruf sekaligus
5. ✅ **Rata-rata nilai** - Menghitung dan menampilkan rata-rata nilai angka

### Fitur Tambahan (Menarik):
6. ✨ **Nilai tertinggi dan terendah** - Menampilkan nilai maksimum dan minimum
7. ✨ **Keterangan nilai** - Menampilkan deskripsi untuk setiap grade (Sangat Baik, Baik, Cukup, Kurang, Gagal)
8. ✨ **Statistik distribusi** - Menampilkan jumlah dan persentase mahasiswa per grade
9. ✨ **Validasi input** - Memastikan nilai berada dalam rentang 0.0 - 4.0
10. ✨ **Tampilan menarik** - Menggunakan box drawing characters untuk tampilan yang rapi

## Kategori Nilai

| Nilai Angka | Nilai Huruf | Keterangan |
|-------------|-------------|------------|
| 4.0         | A           | Sangat Baik |
| 3.0 - 3.9   | B           | Baik |
| 2.0 - 2.9   | C           | Cukup |
| 1.0 - 1.9   | D           | Kurang |
| < 1.0       | E           | Gagal |

## Cara Kompilasi

```bash
gcc -o konversi_nilai konversi_nilai.c -Wall
```

## Cara Menjalankan

```bash
./konversi_nilai
```

## Contoh Penggunaan

```
╔════════════════════════════════════════════════════╗
║   PROGRAM KONVERSI NILAI MAHASISWA (ANGKA → HURUF) ║
╚════════════════════════════════════════════════════╝

Masukkan jumlah mahasiswa: 5

Masukkan nilai mahasiswa ke-1 (0.0 - 4.0): 3.8
Masukkan nilai mahasiswa ke-2 (0.0 - 4.0): 4.0
Masukkan nilai mahasiswa ke-3 (0.0 - 4.0): 2.5
Masukkan nilai mahasiswa ke-4 (0.0 - 4.0): 1.2
Masukkan nilai mahasiswa ke-5 (0.0 - 4.0): 0.8

╔════════════════════════════════════════════════════╗
║           DAFTAR NILAI MAHASISWA                   ║
╠════════════════════════════════════════════════════╣
║ No. │ Nilai Angka │ Nilai Huruf │ Keterangan     ║
╠════════════════════════════════════════════════════╣
║   1 │    3.80      │      B      │ Baik          ║
║   2 │    4.00      │      A      │ Sangat Baik   ║
║   3 │    2.50      │      C      │ Cukup         ║
║   4 │    1.20      │      D      │ Kurang        ║
║   5 │    0.80      │      E      │ Gagal         ║
╚════════════════════════════════════════════════════╝

╔════════════════════════════════════════════════════╗
║         RINGKASAN STATISTIK                        ║
╠════════════════════════════════════════════════════╣
║ Rata-rata Nilai    : 2.46 (C)                     ║
║ Nilai Tertinggi    : 4.00 (A)                     ║
║ Nilai Terendah     : 0.80 (E)                     ║
║ Jumlah Mahasiswa   : 5                            ║
╚════════════════════════════════════════════════════╝

╔════════════════════════════════════════════════════╗
║      STATISTIK DISTRIBUSI NILAI                    ║
╠════════════════════════════════════════════════════╣
║ Grade A:  1 mahasiswa (20.0%)                     ║
║ Grade B:  1 mahasiswa (20.0%)                     ║
║ Grade C:  1 mahasiswa (20.0%)                     ║
║ Grade D:  1 mahasiswa (20.0%)                     ║
║ Grade E:  1 mahasiswa (20.0%)                     ║
╚════════════════════════════════════════════════════╝

✅ Program selesai!
```

## Struktur Program

### Fungsi-fungsi:
- `konversiNilai()` - Mengkonversi nilai angka ke huruf
- `hitungRataRata()` - Menghitung rata-rata nilai
- `cariNilaiTertinggi()` - Mencari nilai tertinggi
- `cariNilaiTerendah()` - Mencari nilai terendah
- `hitungStatistikGrade()` - Menghitung distribusi grade
- `main()` - Fungsi utama program

## Teknologi
- Bahasa: **C**
- Compiler: **GCC**
- Memory Management: **Dynamic allocation** dengan `malloc()` dan `free()`

## Catatan
- Program menggunakan validasi input untuk memastikan nilai berada dalam rentang 0.0 - 4.0
- Jika input tidak valid, program akan meminta input ulang
- Memory dialokasikan secara dinamis dan dibebaskan setelah program selesai
