#include<iostream>
using namespace std;

int main(){
    /*Menghitung Luas Segitiga
        L =  (a x t)/2

        L = Luas Segitiga
        a = Panjang alas segitiga
        t = tinggi segitiga
    */
    double L, a, t;
    cout<<"Menghitung Luas Segitiga\n======================="<<endl;
    cout<<"masukan alas \t ";
    cin>>a;
    cout<<"masukan tinggi \t= ";
    cin>>t;

    L = (a * t)/2;

    cout<<"Luas segitiga yang diketahui : "<<endl;
    cout<<"alas\t= "<<a<<"cm"<<endl;
    cout<<"tinggi\t= "<<a<<"cm"<<endl;
    cout<<"adalah : "<<endl;
    cout<<"L = (a x t)/2\nL = ("<<a<<" x "<<t<<")/2"<<endl;
    cout<<"L = "<<L;
}
