/*

Dalam C++, array adalah kumpulan dari tipe data yang sama yang disusun secara berurutan dalam memori. Setiap elemen dalam array dapat diakses melalui indeksnya. Indeks array dimulai dari 0.

*/


#include <iostream>
using namespace std;

int main() {
    // Mendeklarasikan array dengan 5 elemen bertipe int
    int angka[5];

    // Menginisialisasi nilai-nilai elemen array
    angka[0] = 10;
    angka[1] = 20;
    angka[2] = 30;
    angka[3] = 40;
    angka[4] = 50;

    // Mengakses dan mencetak nilai-nilai elemen array
    cout << "Elemen array angka[0]: " << angka[0] << endl; // Output: Elemen array angka[0]: 10
    cout << "Elemen array angka[2]: " << angka[2] << endl; // Output: Elemen array angka[2]: 30

    return 0;
}


/*

Penjelasan:

- Dalam contoh di atas, angka adalah array bertipe int dengan 5 elemen.
- Untuk mengakses elemen tertentu dari array, kita menggunakan indeks array dalam tanda kurung siku ([]). Sebagai contoh, angka[0] mengakses elemen pertama dari array angka, yang bernilai 10.
- Array di C++ adalah struktur data yang sederhana namun sangat berguna untuk menyimpan sejumlah besar data yang serupa dalam memori secara terstruktur. Mereka digunakan secara luas dalam pemrograman untuk menyimpan dan memanipulasi data dalam aplikasi.

*/