#include<iostream>
using namespace std;

int main()
{ int nilai,i,j,k,l,m,n,o,p,q,r,s,t;

cout<<"input nilai : ";
cin>>nilai;

i = nilai%10;
j = (nilai/10)%10;
k = (nilai/100)%10;
l = (nilai/1000)%10;
m = (nilai/10000)%10;
n = (nilai/100000)%10;

o = n+2;
p = m+2;
q = l+2;
r = k+2;
s = j+2;
t = i+2;

if (o>=10)
    o = o%10;
if (p>=10)
    p = p%10;
if (q>=10)
    q = q%10;
if (r>=10)
    r = r%10;
if (s>=10)
    s = s%10;
if (t>=10)
    t = t%10;


//781890
cout<<"setelah ditambah 2 setiap digitnya : "<<o<<p<<q<<r<<s<<t<<endl;
return 0;

}
    