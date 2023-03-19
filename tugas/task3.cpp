#include <iostream>

using namespace std;

int main() {
    int input,a,b,c,d,e;

    cout<<"input nilai : ";
    cin>>input;

    a = input%10;
    cout<<"nilai a: " <<a<<endl;
    b = (input/10)%10;
    cout<<"nilai b : "<<b<<endl;
    c = (input/100)%10;
    cout<<"nilai c : "<<c<<endl;
    d = (input/1000)%10;
    cout<<"nilai d : "<<d<<endl;

    e=a+b+c+d;
    cout<<"output : "<<e;
    return 0;
}