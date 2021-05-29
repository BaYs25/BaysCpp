#include<iostream>
using namespace std;
int main(){
	int lulus[3][2];
	int P, T;
	char lagi;
	//0=elektro ; 1=mekatro
	//0=2017; 1=2018; 2; 2019
	lulus[0][0]=50;
	lulus[0][1]=20;
	lulus[1][0]=34;
	lulus[1][1]=23;
	lulus[2][0]=45;
	lulus[2][1]=67;
//	cout<<"Jumlah mahasiswa lulus = "<<lulus[T][P];
	do{
	system("cls");
	cout<<"Data pelulusan Jurusan Mekatronika & Elektronika"<<endl;
	cout<<"Masukan Prodi yang ingin diketahui =(0=Elektro ; 1=Mekatro)"<<endl;
	cin>>P;
	cout<<"Masukan Tahun yang ingin diketahui =(0=2017; 1=2018; 2; 2019)"<<endl;
	cin>>T;
	switch (P) {
		case 0 :
			if(T==0){
				cout<<"Lulusan Prodi Elektro Pada Tahun 2017 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			if(T==1){
				cout<<"Lulusan Prodi Elektro Pada Tahun 2018 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			if(T==2){
				cout<<"Lulusan Prodi Elektro Pada Tahun 2019 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			break;
		case 1 :
			if(T==0){
				cout<<"Lulusan Prodi Mekatro Pada Tahun 2017 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			if(T==1){
				cout<<"Lulusan Prodi Mekatro Pada Tahun 2018 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			if(T==2){
				cout<<"Lulusan Prodi Mekatro Pada Tahun 2019 Berjumlah : "<<lulus[T][P]<<endl;
				cout<<endl;
				cout<<"ingin melihat data lulusan lain ?(y/n)\n";
				cin>>lagi;
			}
			break;
		default :
			cout<<"Input prodi tidak Valid";
			break;
	}
	}while(lagi=='y');
	if(lagi=='n'){
		cout<<"Terimaksih Telah Melihat Data Lulusan";
		return 0;
	}		
}
