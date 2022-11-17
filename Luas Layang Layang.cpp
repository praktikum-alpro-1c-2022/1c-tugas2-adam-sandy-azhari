#include<iostream>
using namespace std;

int main(){
    //Menghitung keliling dan luas Layang Layang
    double d1,d2,a,b,K,L;

    cout<<"MENGHITUNG KELILING LUAS LAYANG LAYANG"<<endl;
    cout<<"======================================"<<endl;
    cout<<endl;

    //input data
    cout<<"Masukan diagonal satu atau d1 = ";
    cin>>d1;
    cout<<"Maukan diagonal dua atau d2 = ";
    cin>>d2;
    cout<<"Masukan sisi a = ";
    cin>>a;
    cout<<"Masukan sisi b = ";
    cin>>b;
    cout<<endl;

    cout<<"======================================="<<endl;
    cout<<"Rumus keliling layang layang = 2 * (a + b)"<<endl;
    cout<<"======================================="<<endl;
    cout<<""<<endl;

    //Rumus keliling layang layang
    K = 2 * (a + b) ;
    //hasil
    cout<<"Jadi kelilingnya adalah = "<<endl;
    cout<<endl;

    cout<<"========================================"<<endl;
    cout<<"Rumus luas layang layang = d1 * d2 /2   "<<endl;
    cout<<"========================================"<<endl;

    // Rumus Luas Layang layang
    L = d1 * d2 /2;
    cout<<"Jadi luasnya adalah     = "<<endl;

    return 0;
}
