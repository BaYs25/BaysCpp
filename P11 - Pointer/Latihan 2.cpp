#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int vint=55;
	int *pint;
	pint=&vint;
	cout<<"Alamat vint = "<<&vint<<endl;
	cout<<"pint = "<<pint<<endl;
}
