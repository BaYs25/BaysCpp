#include<iostream>
using namespace std;
int main(){
//	int bb[]= {50,60,70,80,90,100};
//	for (int i=0; i<=5; i++){
//		cout<<"Berat Mahasiswa ke - "<<i+1<<" adalah "<<bb[i]<<" Kg\n";
//	}
//	cout<<"jumlah total data berat badan Mahasiswa : "<<sizeof(bb)/sizeof(bb[0]);

	int nilaim[56], ttlm, tn;
	char tampil;
	//Memasukan DATA
	cout<<"Masukan Jumlah nilai mahasiswa : ";
	cin>>ttlm;
	cout<<endl;
	for(int a=0; a<ttlm; a++){
		cout<<"Masukan nilai mahasiswa ke - "<<a+1<<" = ";
		cin>>nilaim[a];
		cout<<endl;
	}
	//Menampilkan DATA
	cout<<"Ingin menampilkan data nilai mahasiswa ? (y/n)";
	cin>>tampil;
	cout<<endl<<endl;
	if(tampil=='y'){
	for(int a=0; a<ttlm; a++){
		cout<<"nilai mahasiswa ke - "<<a+1<<" = "<<nilaim[a]<<endl;
		cout<<endl;
	}
	tn=0;
	for(int a=0; a<ttlm; a++){
		nilaim[a];
		tn = tn + nilaim[a];
	}
	cout<<"Rata-rata nilai mahasiswa = "<<tn/ttlm<<endl;
	cout<<"Total nilai mahasiswa = "<<tn<<endl;
	}
	else {
		cout<<"Anda telah menginputkan nilai mahasiswa dengan total nilai : "<<ttlm;
		tn=0;
	for(int a=0; a<ttlm; a++){
		nilaim[a];
		tn = tn + nilaim[a];
	}
	cout<<"Rata-rata nilai mahasiswa = "<<tn/ttlm<<endl;
	cout<<"Total nilai mahasiswa = "<<tn<<endl;
	}
}
