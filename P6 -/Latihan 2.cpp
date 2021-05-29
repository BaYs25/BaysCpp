#include<iostream>
using namespace std;
int main(){
    int tahun[100], i;
    cout<<"Masukan total data : "<<endl;
    cin>>i;
    for(int a=0; a<=1; a++){
        cout<<"Tahun ke-"<<a<<" : ";
        cin>>tahun[a];
    }
    for(int a=0; a<=i; a++){
        cout<<"Data Mahasiswa  Lulus Tahun ke-"<<a<<" : "<<tahun[a];
    }

}
