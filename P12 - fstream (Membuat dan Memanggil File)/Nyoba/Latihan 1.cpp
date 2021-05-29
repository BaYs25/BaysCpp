#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream Nyoba;
	Nyoba.open("Algoritma.TXT");
	cout<<"Sedang Merekam...";
	Nyoba<<"Algoritma Pemprograman"<<endl;
	Nyoba<<"Notasi Algoritma Ada 3 : "<<endl;
	Nyoba<<"1. Deskriptif"<<endl;
	Nyoba<<"2. Flowchart"<<endl;
	Nyoba<<"3. Pseudocode"<<endl;
	Nyoba.close();
}
