#include <iostream>
using namespace std;

main(){
    system("cls");
    int input;
    cout << "Daftar Calon Presiden: "<<endl;
    cout << "1. Anies Baswedas"<<endl;
    cout << "2. Prabowo Subianto"<<endl;
    cout << "3. Ganjar Pranowo"<<endl;
    cout <<endl;
    cout<< "Masukkan Pilihan Presiden Anda : "; cin>>input;
    system("cls");
    switch (input)
    {
    case 1 :
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 1. Anies Baswedas";
        break;
    case 2 :
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 2. Prabowo Subianto";
        break;
    case 3 :
        cout << "Pilihan anda telah disimpan, pilihan anda adalah 3. Ganjar Pranowo";
        break;
    default:
        cout<<"Pilihan Anda tidak valid";
        return 1;
        break;
    }


}