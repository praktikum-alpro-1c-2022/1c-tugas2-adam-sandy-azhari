#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main(){

    int a,b,c,t,l,k;
    cout<<"==================program luas dan keliling trapesium===================="<<endl;
    cout<<"input panjang sisi a : ";
    cin>>a;
    cout<<"input panjang sisi b : ";
    cin>>b;
    cout<<"input panjang sisi miring : ";
    cin>>c;
    cout<<"input tinggi trapesium : ";
    cin>>t;
    l=((a+b)*t)/2;
    k=a+b+c+c;
    cout<<"luas trapesium = "<<l<<endl;
    cout<<"keliling trapesium = "<<k<<endl;
    getch();
    return 0;
}

