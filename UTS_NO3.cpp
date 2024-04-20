#include <iostream>
using namespace std;

main(){
    system("cls");
    int n, jumlah = 0;
    cout<<"n : "; cin>>n;
    for(int i = 1; i<=n; i++){
        if(i % 2 == 1){
            jumlah += i*i;
        }
    }
    cout<<"\nn : "<<n<<" = "<<jumlah;
}