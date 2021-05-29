#include<iostream>
#include<fstream>
using namespace std;
int main (){
	const int maks=100;
	char menampilkan[maks];
	
	ofstream Nyoba("Algoritma.txt",ios::app);
	system("cls");
	Nyoba<<"Deskriptif berupa narasi/uraian"<<endl;
	Nyoba<<"Flowchart berupa bagian aliran"<<endl;
	Nyoba<<"Pseudocode berupa menyerupai kode pemprograman"<<endl;
	cout<<"Perubahann File Sedang Dilakukan"<<endl;
	Nyoba.close();
	
//	ifstream Nyoba("Algoritma.txt");
//	while(!Nyoba.eof()){
//		Nyoba.getline(menampilkan, maks);
//		cout<menampilkan;
//	}
//	Nyoba.close();
}
