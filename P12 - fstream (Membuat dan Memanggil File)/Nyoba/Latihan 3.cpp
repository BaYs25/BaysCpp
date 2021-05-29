#include<iostream>
#include<fstream>
using namespace std;
int main (){
	const int maks=80;
	char penyangga[maks];
	ifstream Nyoba("Algoritma.txt");
	system("cls");
	while (!Nyoba.eof()){
		Nyoba.getline(penyangga,maks);
		cout<<penyangga<<endl;
	}
	Nyoba.close();
}
