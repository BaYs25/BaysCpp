#include<iostream>
using namespace std;
int main(){
	int tinggi,baris,kolom,barisb,kolomb,last;
	cout<<"Tinggi Segitiga = ";
	cin>>tinggi;
	cout<<endl;
			
//	 for(baris=1;baris<=6;baris++){
//	 	for(kolom=1;kolom<=4;kolom++){
//	 		cout<<"*";
//		 }
//		 cout<<endl;
//	 }

	for(baris=1;baris<=tinggi;baris++){
	 	for(kolom=1;kolom<=baris;kolom++){
	 		cout<<"*";
		 }
		 cout<<endl;
	 }

	 last=1;
	 barisb=tinggi-1;
	for(barisb;barisb>=last;barisb--){
	 	for(kolomb=barisb;kolomb>=last;kolomb--){
	 		cout<<"*";
		 }
		 cout<<endl;
	 }
}
