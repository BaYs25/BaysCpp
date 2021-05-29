#include<iostream>
using namespace std;
int main(){
	int tahun, prodi, data_lulus[2][4], ta[4];
	string pro[2]; 
	data_lulus[0][0]=40;
	data_lulus[0][1]=20;
	data_lulus[0][2]=5;
	data_lulus[1][0]=80;
	data_lulus[1][1]=30;
	data_lulus[1][2]=10;
	pro[0]= "Elektro";
	pro[1]="Mekatronika";
	ta[0]=2017;
	ta[1]=2018;
	ta[2]=2019;
	cout<<"Data Lulusan Prodi Elektro dan Mekatronika\n";
	while(1){
		cout<<"Pilih Prodi (0=Elektro, 1=Mekatro)\n --> ";
		cin>>prodi;
		if(prodi==0||prodi==1)
		break;
		system("cls");
	}
	while(1){
		cout<<"Pilih Tahun (0=2017, 1=2018, 2=2019)\n --> ";
		cin>>tahun;
		if(tahun==0||tahun==1||tahun==2)
		break;
		system("cls");
	}
	cout<<"Jumlah Lulusan Prodi "<<pro[prodi]<<" Tahun "<<ta[tahun]<<" = "<<data_lulus[prodi][tahun];
}

