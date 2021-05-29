#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	int vint =55;
	int *pint;
	cout<<"vint semula = "<<vint<<endl;
	pint=&vint;
	*pint=77;
	cout<<"vint sekarang = "<<vint<<endl;
}
