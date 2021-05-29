#include<iostream>
#include<conio.h>
#include<sttring.h>
using namespace std;
int main(){
    int jumlah=0;
	char nama[30], alamat[40];
	cout<<"Masukan Nama Anda : "; cin.getline(nama, sizeof(nama));
	cout<<"Masukan Alamat Anda : "; cin.getline(alamat, sizeof(alamat));
	cout<<"Nama : "<<nama<<endl;
	for(int i=0; nama[i]; i++){
        jumlah++;
	}cout<<jumlah<<endl;
	cout<<"Alamat : "<<alamat<<endl;

}
