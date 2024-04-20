#include <iostream>
using namespace std; //kurang namespace

int main () {
    system ("CLS");

    int a; // karena a adalah bilangan

    umur: //umur merupakan label, maka seharusnya menggunakan titik dua (:)
    cout << "Tebak Umur Saya : "; // perlu ditambah titik koma (;)
    cin >> a; //cin menggunakan >>, bukan <<

    if (a == 20){ //a == 20 , karena merupakan relasi
        cout << "Jawaban Anda Benar" << endl;
    } else { //menggunakan else karena merupakan opsi akhir dari sebuah kondisi
        cout << "Jawaban Salah, Coba Lagi..." << endl; //perlu ditambah titik koma (;)
        goto umur;
    }
    
    cout << "Program Selesai";

    return 0;
}
