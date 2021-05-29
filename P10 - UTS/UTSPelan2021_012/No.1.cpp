#include<iostream>
using namespace std;
int main (){
    int I, X[5];
    cout<<"Masukan 5 Buah Bilangan Integer ! \n";
    for (I=1; I<=5; I++){
        cout<<"Bilangan ke - "<<I<<" : "; 
        cin>>X[I];  
    }
    cout<<"Hasil keluaran : \n";
    for (I=1; I<=5; I++){
        cout<<"Bilangan ke - "<<I<<" : "<<X[I]<<endl;  
    }
}
