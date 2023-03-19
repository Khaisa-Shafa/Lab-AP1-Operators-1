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

    cout<<"HH:MM:SS"<<endl;
    cout<<"0"<<hours<<" : "<<"0"<<min<<" : "<<"0"<<sec;
    return 0;
}