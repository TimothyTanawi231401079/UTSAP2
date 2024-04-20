#include <iostream>
using namespace std;

main(){
    system("cls");
    string nama, nim, mata_kuliah, dosenpa;
    char kom, nilai_huruf;
    int tugas, quiz, uts, uas;
    float nilai;
    cout<<"Masukkan nama: "; getline(cin, nama);
    cout<<"Masukkan NIM: "; getline(cin, nim);
    cout<<"Masukkan kom: "; cin>>kom; getchar();
    cout<<"Masukkan Mata Kuliah: "; getline(cin, mata_kuliah);
    cout<<"Masukkan Nilai Tugas: "; cin>>tugas; getchar();
    if (tugas < 0 || tugas > 100){ 
        cout<<"Nilai tugas anda tidak valid"<<endl;
        return 1;
    }
    cout<<"Masukkan Nilai Quiz: "; cin>>quiz; getchar();
    if (quiz < 0 || quiz > 100){
        cout<<"Nilai quiz anda tidak valid"<<endl;
        return 1;
    }
    cout<<"Masukkan Nilai UTS: "; cin>>uts; getchar();
        if (uts < 0 || uts > 100){
        cout<<"Nilai UTS anda tidak valid"<<endl;
        return 1;
    }
    cout<<"Masukkan Nilai UAS: "; cin>>uas; getchar();
        if (uas < 0 || uas > 100){
        cout<<"Nilai UAS anda tidak valid"<<endl;
        return 1;
    }
    cout<<"Masukkan Nama Dosen PA: "; getline(cin, dosenpa);

    nilai = 0.3*tugas + 0.1*quiz + 0.3*uts + 0.3*uas;
    if (nilai <= 100 && nilai>= 80){
        nilai_huruf = 'A';
    }
    else if (nilai < 80 && nilai>= 60){
        nilai_huruf = 'B';
    }
    else if (nilai < 60 && nilai>= 40){
        nilai_huruf = 'C';
    }
    else if (nilai <= 40 && nilai>= 20){
        nilai_huruf = 'D';
    }
    else{
        nilai_huruf = 'E';
    }
    system("cls");
    cout<<"Nama: "<<nama<<endl;
    cout<<"NIM: "<<nim<<endl;
    cout<<"KOM: "<<kom<<endl;
    cout<<"Mata Kuliah: "<<mata_kuliah<<endl;
    cout<<"Nilai: "<<nilai_huruf<<endl;
    cout<<"Dosen PA: "<<dosenpa<<endl;
    return 0;
}