#include<iostream>
 using namespace std;
 void garis(){
 	cout<<"=================================================\n\n";
 }
 int main () {
 	int bb,tbb,bm;
 	cout<<"===Data Berat Badan Dari Mahasiswa Mekatronika===\n";
 	cout<<endl;
	garis();
 	cout<<"Masukan Banyak Mahasiswa = ";
 	cin>>bm;
 	cout<<endl;
 	garis();
 	tbb=0;
 	for(int a=1;a<=bm;a++){
 		cout<<"Masukan Berat badan Mahasiswa ke-"<<a<<" = ";
 		cin>>bb;
 		tbb=tbb+bb;
	}
	cout<<endl;
	garis();
	cout<<"Berat Total "<<bm<<" Mahasiswa Adalah = "<<tbb<<" Kg"<<endl;
	cout<<"Rata-rata Berat Badan "<<bm<<" Mahasiswa Mekatronika = "<<tbb/bm<<" Kg\n"<<endl;
	garis();
 }
