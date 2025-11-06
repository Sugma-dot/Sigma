#include <stdio.h>
#include <stdlib.h>

// Fungsi untuk mengkonversi nilai angka ke nilai huruf
char konversiNilai(float nilai) {
    if (nilai >= 4.0) {
        return 'A';
    } else if (nilai >= 3.0) {
        return 'B';
    } else if (nilai >= 2.0) {
        return 'C';
    } else if (nilai >= 1.0) {
        return 'D';
    } else {
        return 'E';
    }
}

// Fungsi untuk menghitung rata-rata
float hitungRataRata(float nilai[], int jumlah) {
    float total = 0;
    for (int i = 0; i < jumlah; i++) {
        total += nilai[i];
    }
    return total / jumlah;
}

// Fungsi untuk mencari nilai tertinggi
float cariNilaiTertinggi(float nilai[], int jumlah) {
    float max = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] > max) {
            max = nilai[i];
        }
    }
    return max;
}

// Fungsi untuk mencari nilai terendah
float cariNilaiTerendah(float nilai[], int jumlah) {
    float min = nilai[0];
    for (int i = 1; i < jumlah; i++) {
        if (nilai[i] < min) {
            min = nilai[i];
        }
    }
    return min;
}

// Fungsi untuk menghitung jumlah mahasiswa per grade
void hitungStatistikGrade(float nilai[], int jumlah) {
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0;
    
    for (int i = 0; i < jumlah; i++) {
        char grade = konversiNilai(nilai[i]);
        switch(grade) {
            case 'A': countA++; break;
            case 'B': countB++; break;
            case 'C': countC++; break;
            case 'D': countD++; break;
            case 'E': countE++; break;
        }
    }
    
    printf("\n╔════════════════════════════════════════╗\n");
    printf("║      STATISTIK DISTRIBUSI NILAI       ║\n");
    printf("╠════════════════════════════════════════╣\n");
    printf("║ Grade A: %2d mahasiswa (%.1f%%)         ║\n", countA, (countA * 100.0) / jumlah);
    printf("║ Grade B: %2d mahasiswa (%.1f%%)         ║\n", countB, (countB * 100.0) / jumlah);
    printf("║ Grade C: %2d mahasiswa (%.1f%%)         ║\n", countC, (countC * 100.0) / jumlah);
    printf("║ Grade D: %2d mahasiswa (%.1f%%)         ║\n", countD, (countD * 100.0) / jumlah);
    printf("║ Grade E: %2d mahasiswa (%.1f%%)         ║\n", countE, (countE * 100.0) / jumlah);
    printf("╚════════════════════════════════════════╝\n");
}

int main() {
    int jumlahMahasiswa;
    float *nilaiMahasiswa;
    
    printf("╔════════════════════════════════════════════════════╗\n");
    printf("║   PROGRAM KONVERSI NILAI MAHASISWA (ANGKA → HURUF) ║\n");
    printf("╚════════════════════════════════════════════════════╝\n\n");
    
    printf("Masukkan jumlah mahasiswa: ");
    scanf("%d", &jumlahMahasiswa);
    
    // Validasi input
    if (jumlahMahasiswa <= 0) {
        printf("Jumlah mahasiswa harus lebih dari 0!\n");
        return 1;
    }
    
    // Alokasi memori untuk array nilai
    nilaiMahasiswa = (float *)malloc(jumlahMahasiswa * sizeof(float));
    
    if (nilaiMahasiswa == NULL) {
        printf("Gagal mengalokasi memori!\n");
        return 1;
    }
    
    // Input nilai mahasiswa
    printf("\n");
    for (int i = 0; i < jumlahMahasiswa; i++) {
        printf("Masukkan nilai mahasiswa ke-%d (0.0 - 4.0): ", i + 1);
        scanf("%f", &nilaiMahasiswa[i]);
        
        // Validasi nilai
        if (nilaiMahasiswa[i] < 0.0 || nilaiMahasiswa[i] > 4.0) {
            printf("⚠️  Peringatan: Nilai harus antara 0.0 - 4.0!\n");
            i--; // Ulangi input untuk mahasiswa ini
        }
    }
    
    // Tampilkan hasil konversi
    printf("\n╔════════════════════════════════════════════════════╗\n");
    printf("║           DAFTAR NILAI MAHASISWA                   ║\n");
    printf("╠════════════════════════════════════════════════════╣\n");
    printf("║ No. │ Nilai Angka │ Nilai Huruf │ Keterangan     ║\n");
    printf("╠════════════════════════════════════════════════════╣\n");
    
    for (int i = 0; i < jumlahMahasiswa; i++) {
        char nilaiHuruf = konversiNilai(nilaiMahasiswa[i]);
        char *keterangan;
        
        // Menentukan keterangan
        switch(nilaiHuruf) {
            case 'A': keterangan = "Sangat Baik"; break;
            case 'B': keterangan = "Baik       "; break;
            case 'C': keterangan = "Cukup      "; break;
            case 'D': keterangan = "Kurang     "; break;
            case 'E': keterangan = "Gagal      "; break;
            default: keterangan = "Unknown    "; break;
        }
        
        printf("║ %3d │    %.2f      │      %c      │ %s   ║\n", 
               i + 1, nilaiMahasiswa[i], nilaiHuruf, keterangan);
    }
    
    printf("╚════════════════════════════════════════════════════╝\n");
    
    // Hitung dan tampilkan statistik
    float rataRata = hitungRataRata(nilaiMahasiswa, jumlahMahasiswa);
    float nilaiTertinggi = cariNilaiTertinggi(nilaiMahasiswa, jumlahMahasiswa);
    float nilaiTerendah = cariNilaiTerendah(nilaiMahasiswa, jumlahMahasiswa);
    
    printf("\n╔════════════════════════════════════════╗\n");
    printf("║         RINGKASAN STATISTIK            ║\n");
    printf("╠════════════════════════════════════════╣\n");
    printf("║ Rata-rata Nilai    : %.2f (%c)         ║\n", rataRata, konversiNilai(rataRata));
    printf("║ Nilai Tertinggi    : %.2f (%c)         ║\n", nilaiTertinggi, konversiNilai(nilaiTertinggi));
    printf("║ Nilai Terendah     : %.2f (%c)         ║\n", nilaiTerendah, konversiNilai(nilaiTerendah));
    printf("║ Jumlah Mahasiswa   : %d                ║\n", jumlahMahasiswa);
    printf("╚════════════════════════════════════════╝\n");
    
    // Tampilkan statistik distribusi nilai
    hitungStatistikGrade(nilaiMahasiswa, jumlahMahasiswa);
    
    // Bebaskan memori
    free(nilaiMahasiswa);
    
    printf("\n✅ Program selesai!\n");
    
    return 0;
}
