#include<iostream>
using namespace std;
int main(){
	int b, jm[100], jl[100];
	cout<<"Berapa Jumlah Tahun yang Ingin Dimasukan = ";
	cin>>b;
	for(int i=0; i<b; i++){
		cout<<"Jumlah Mahasiswa Teknik Mekatronika Masuk Tahun ke - "<<i+1<<" = ";
		cin>>jm[i];
		cout<<"Jumlah Mahasiswa Teknik Mekatronika Lulus Tahun ke - "<<i+1<<" = ";
		cin>>jl[i];
		cout<<endl;
	}
	for(int i=0; i<b; i++){
		cout<<"Jumlah Mahasiswa Teknik Mekatronika Masuk Tahun ke - "<<i+1<<" = "<<jm[i]<<" dan mahasiswa lulus = "<<jl[i]<<endl;
	}
}
