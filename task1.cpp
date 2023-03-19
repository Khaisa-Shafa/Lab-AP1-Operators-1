#include <iostream>

using namespace std;

int main() {
   int i,j,k,l,m;
    cout<<"masukkan 4 digit angka : ";
    cin>>i;
    //misal 1233
    j = i+8; 
    cout<<"tambahkan 8 ke 1233 : "<<j<<endl;
    k = j/3;
    cout<<"bagi dengan 3 : "<<k<<endl;
    l = k%5;
    cout<<"mod dengan 5 : "<<l<<endl;
    m = l*5;
    cout<<"kali dengan 5 : "<<m<<endl;

    cout<<"hasilnya adalah : "<<m; 

    return 0;
}