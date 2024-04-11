/*

Fungsi dengan pointer adalah fungsi yang menggunakan pointer sebagai parameter atau mengembalikan nilai berupa alamat memori. Pointer digunakan untuk menyimpan alamat memori dari variabel, sehingga dengan menggunakan pointer, fungsi dapat memodifikasi nilai variabel yang ada di alamat memori tersebut secara langsung atau mengakses data tanpa perlu membuat salinan data tersebut.
=> Penjelasan
- Fungsi yang Menerima Pointer sebagai Parameter: Fungsi ini dapat mengubah nilai variabel yang dilewatkan kepadanya karena memiliki akses langsung ke alamat memori variabel tersebut.
- Fungsi yang Mengembalikan Pointer: Fungsi ini mengembalikan alamat memori. Hal ini berguna ketika kita ingin fungsi mengembalikan lebih dari satu nilai atau ketika kita bekerja dengan alokasi memori dinamis.

*/

#include <iostream>
using namespace std;

// Fungsi untuk menukar nilai menggunakan pointer
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Fungsi utama
int main() {
    int a = 5, b = 10;

    cout << "Nilai sebelum ditukar: \n";
    cout << "a = " << a << ", b = " << b << endl;

    // Memanggil fungsi swap
    swap(&a, &b);

    cout << "Nilai setelah ditukar: \n";
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

/*

Penjelasan Program
- Program di atas mendefinisikan fungsi swap yang menerima dua pointer ke integer sebagai parameter. Fungsi ini menukar nilai dari dua variabel yang alamatnya dilewatkan kepadanya.
- Di dalam fungsi swap, *x dan *y digunakan untuk mengakses nilai dari alamat yang ditunjuk oleh x dan y. Kemudian, nilai-nilai tersebut ditukar.
- Dalam fungsi main, dua variabel a dan b didefinisikan dan nilai awalnya ditampilkan.
- Fungsi swap dipanggil dengan mengirimkan alamat dari a dan b menggunakan operator &.
- Setelah pemanggilan fungsi, nilai dari a dan b telah ditukar, dan nilai baru mereka ditampilkan.

Penggunaan pointer dalam fungsi memungkinkan kita untuk melakukan operasi pada data yang disimpan di lokasi memori tertentu, yang membuat program lebih efisien dalam hal penggunaan memori dan waktu eksekusi.

*/