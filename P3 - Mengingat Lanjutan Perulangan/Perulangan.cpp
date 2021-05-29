#include<iostream>
using namespace std;
int main(){
	int Jumlah, Total, i, Nilai;
	float r;
	 Total=0;
	 cout<<"Masukan Jumlah Mahsiswa : ";
	 cin>>Jumlah;
	 cout<<"\n";
	 for(i=1;i<=Jumlah;i++){
	 	cout<<"Data ke - "<<i<<" : ";
	 	cin>>Nilai;
	 	Total=Total+Nilai;
	 }
	 cout<<"\n";
	 cout<<"Total Nilai Seluruh Mahasiswa : "<<Total<<"\n\nDengan Total : "<<Jumlah<<" Mahasiswa \n";
	 r=Total/Jumlah;
	 cout<<"\nRata- Rata Nilai Dari "<<Jumlah<<" Mahasiswa : "<<r;
}



