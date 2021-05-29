#include<iostream>
#include<string>
using namespace std;
int main(){
	int lulus[3][2], tahun[3];
	int P, T;
	char lagi;
	string jurusan[2];
	//0=elektro ; 1=mekatro
	//0=2017; 1=2018; 2; 2019
	lulus[0][0]=50;
	lulus[0][1]=20;
	lulus[1][0]=34;
	lulus[1][1]=23;
	lulus[2][0]=45;
	lulus[2][1]=67;
	tahun[0]=2017;
	tahun[1]=2018;
	tahun[2]=2019;
	jurusan[0]="Mekatronika";
	jurusan[1]="Elektro";
	do{
	system("cls"); //Pembersih screen setelah terjadi perulangan
	cout<<"Data pelulusan Jurusan Mekatronika & Elektronika"<<endl;
	cout<<"Masukan Prodi yang ingin diketahui =(0=Elektro ; 1=Mekatro)"<<endl;
	cin>>P;
	cout<<"Masukan Tahun yang ingin diketahui =(0=2017; 1=2018; 2; 2019)"<<endl;
	cin>>T;
	if(P>=2||T>=3){
		cout<<"Input yang anda masukan tidak valid";
		return 0;
	}
	cout<<"Jumlah Mahasiswa "<<jurusan[P]<<" Lulus = "<<lulus[P][T]<<" orang pada tahun "<<tahun[T]<<endl;
	cout<<"ingin melihat data lulusan lain ?(y/n)\n";
	cin>>lagi;
	}while(lagi=='y');
	if(lagi=='n'){
		cout<<"Terimaksih Telah Melihat Data Lulusan";
		return 0;
	}		
}
