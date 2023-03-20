#include <iostream>

using namespace std;

int main() {
    int time,hours,min,sec;
    
    cout<<"input time in sec : ";
    cin>>time;

    hours= time / 3600;          
    sec = time % 3600;   
    min = sec / 60;     
    sec %= 60;            

    if (hours < 10)
        cout<<"0"<<hours<<" : ";
    if (min < 10)
        cout<<"0"<<min<<" : ";
    if (sec < 10)
        cout<<"0"<<sec<<endl;
    else 
        cout<<min<<" : "<<sec<<endl;

    cout<<"HH : MM : SS"<<endl;
   
    return 0;
}