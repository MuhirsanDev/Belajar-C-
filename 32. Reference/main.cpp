/*

Reference dalam C++ adalah sebuah alias atau nama lain untuk suatu variabel yang sudah ada. Reference memungkinkan kita untuk membuat nama baru untuk variabel yang sama, sehingga perubahan yang dilakukan melalui reference akan mempengaruhi nilai asli dari variabel tersebut. Reference sangat berguna untuk mengoptimalkan penggunaan memori dan performa program, terutama saat menggunakan fungsi yang membutuhkan parameter besar; dengan menggunakan reference, kita dapat menghindari penyalinan objek yang mahal.

*/


#include <iostream>
using namespace std;

void gantiNilai(int &ref)
{
    ref = 20;
}

int main()
{
    int a = 10;
    cout << "Sebelum diubah: " << a << endl;
    gantiNilai(a); // Memanggil fungsi dengan reference
    cout << "Setelah diubah: " << a << endl;
    return 0;
}


/*

Penjelasan Program
- Program di atas mendemonstrasikan penggunaan reference untuk mengubah nilai dari suatu variabel.
- Fungsi gantiNilai memiliki satu parameter, int &ref, yang merupakan reference ke variabel integer. Ini berarti bahwa setiap perubahan yang dilakukan pada ref akan langsung mempengaruhi variabel yang ia referensikan.
- Di dalam main, variabel a diinisialisasi dengan nilai 10. Kemudian, nilai a dicetak ke layar.
- Fungsi gantiNilai dipanggil dengan a sebagai argumennya. Karena a dilewatkan sebagai reference, fungsi tersebut dapat mengubah nilai a secara langsung.
- Setelah pemanggilan fungsi, nilai a yang telah diubah (menjadi 20) dicetak ke layar.

Dengan menggunakan reference, kita dapat mengubah nilai variabel asli tanpa perlu mengembalikan nilai dari fungsi atau menggunakan pointer. Ini membuat kode lebih sederhana dan mudah dibaca, sekaligus efisien.

*/