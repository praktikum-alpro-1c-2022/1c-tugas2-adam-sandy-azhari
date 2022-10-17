#include<iostream>
using namespace std;

double hitungL(double p, double l){
    double L = p * l;
    return L;
}

double hitungK(double p, double l){
    double K = 2 * (p + l);
    return K;
}

void tampilL(double p, double l){
    double L = hitungL(p, l);
    cout<<"Luas : "<<endl;
    cout<<"L \t= p x l"<<endl;
    cout<<"L \t= "<<p<<" x "<<l<<endl;
    cout<<"L \t= "<<L<<endl;
}

void tampilK(double p, double l){
    double K = hitungK(p, l);
    cout<<"Keliling : "<<endl;
    cout<<"K \t= 2 x ( p + l )"<<endl;
    cout<<"K \t= "<<2<<" x ("<<p<<" + "<<1<<" )"<<endl;
    cout<<"K \t= "<<K<<endl;
}

int main(){
    //L = p x l
    //K = 2 x (p +l)
    double  p, l;
    cout<<"masukan p : "; cin>>p;
    cout<<"masukan l : "; cin>>l;
    tampilL(p, l);
    tampilK(p, l);
}
