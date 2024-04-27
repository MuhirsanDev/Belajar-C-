/*

Di C++, "reference" adalah cara untuk membuat alias atau nama alternatif untuk suatu variabel yang sudah ada. Reference tidak sama dengan pointer; setelah reference diinisialisasi dengan variabel tertentu, ia akan selalu merujuk pada variabel tersebut. Dalam sintaksis, reference ditandai dengan tanda &.

*/


#include <iostream>
using namespace std;

int main() {
    int angka = 10;
    int &refAngka = angka; // reference ke variabel 'angka'

    cout << "angka: " << angka << endl;     // Output: angka: 10
    cout << "refAngka: " << refAngka << endl; // Output: refAngka: 10

    refAngka = 20; // Mengubah nilai melalui reference

    cout << "angka setelah diubah melalui reference: " << angka << endl; // Output: angka setelah diubah melalui reference: 20

    return 0;
}


/*

Penjelasan:

- Dalam contoh di atas, refAngka adalah reference ke variabel angka.
- Setelah refAngka diinisialisasi dengan angka, mereka berdua akan merujuk ke lokasi memori yang sama.
- Jika nilai refAngka diubah, nilai angka juga akan berubah karena keduanya merujuk ke alamat memori yang sama.
- Reference berguna saat ingin mengirim variabel ke fungsi tanpa overhead copy, atau saat ingin mengubah nilai variabel dalam fungsi dan ingin perubahannya terlihat di luar fungsi tersebut.

*/