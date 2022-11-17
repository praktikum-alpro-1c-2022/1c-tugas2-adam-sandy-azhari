#include<iostream>
using namespace std;

double hitungLPersegi(double s){
    double L = s * s;
    return L;
}

void tampilanLuas(double s){
    double L = hitungLPersegi(s);
    cout<<"Luas : "<<endl;
    cout<<"L \t = s x s"<<endl;
    cout<<"L \t = "<<s<<" x "<<s<<endl;
    cout<<"L \t = "<<L<<endl;
}

int main(){
    double s;
    cout<<"masukan sisi : "; cin>>s;
    tampilanLuas(s);
}
