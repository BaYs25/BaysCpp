#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	void *ptr;
	int vint=50;
	float vfl=51.5;
	ptr=&vint;
	cout<<"vint semula = "<<*(int *)ptr<<vint<<endl;
	*(int *)ptr=77;
	cout<<"vint sekarang = "<<vint<<endl;
}

