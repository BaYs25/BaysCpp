#include<iostream>
#include<fstream>

using namespace std;
int main (){
	const int maks=80;
	char penyangga[maks+1];
	
	ifstream Nyoba("Algoritma.txt");
	while(Nyoba){
		Nyoba.getline(penyangga,maks);
		cout<<penyangga<<endl;
	}
	Nyoba.close();
}
