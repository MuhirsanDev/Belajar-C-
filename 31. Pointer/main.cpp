/*

Pointer dalam C++ adalah variabel yang menyimpan alamat memori dari variabel lain. Dengan pointer, kita bisa langsung mengakses atau mengubah nilai dari lokasi memori yang ditunjuk tanpa harus tahu variabel aslinya. Pointer sangat berguna dalam pemrograman karena memberikan kontrol yang lebih besar atas bagaimana program mengakses memori.

*/

#include <iostream>
using namespace std;

int main() {
    int var = 20; // variabel biasa
    int *ptr; // deklarasi pointer

    ptr = &var; // menyimpan alamat dari variabel var ke dalam pointer

    cout << "Nilai dari var: " << var << endl;
    cout << "Alamat dari var: " << &var << endl;
    cout << "Nilai dari ptr (alamat var): " << ptr << endl;
    cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl; // dereferencing

    return 0;
}


/*

Penjelasan:

- int var = 20; mendeklarasikan variabel var dengan nilai 20.
- int *ptr; mendeklarasikan variabel ptr sebagai pointer yang dapat menunjuk ke tipe data int.
- ptr = &var; menyimpan alamat dari variabel var ke dalam pointer ptr. Operator & digunakan untuk mendapatkan alamat dari variabel.
- cout << "Nilai dari var: " << var << endl; menampilkan nilai dari variabel var.
- cout << "Alamat dari var: " << &var << endl; menampilkan alamat memori dari variabel var.
- cout << "Nilai dari ptr (alamat var): " << ptr << endl; menampilkan nilai dari ptr, yang merupakan alamat memori dari var.
- cout << "Nilai yang ditunjuk oleh ptr: " << *ptr << endl; menampilkan nilai dari lokasi memori yang ditunjuk oleh ptr. Operator * digunakan untuk dereferencing, yaitu mengakses atau mengubah nilai dari lokasi memori yang ditunjuk oleh pointer.

Dengan menggunakan pointer, kita bisa mengakses dan mengubah nilai dari variabel var melalui ptr tanpa harus berinteraksi langsung dengan var. Ini menunjukkan bagaimana pointer memberikan fleksibilitas dalam mengakses dan memanipulasi data dalam memori.
*/