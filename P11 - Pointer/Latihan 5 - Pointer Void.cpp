#include<iostream>
#include<conio.h>
using namespace std;
int main (){
	void *ptr;
	int vint=50;
	float vfl=51.5;
	ptr=&vint;
	cout<<"Nilai yang ditunjukan oleh ptr = "<<*(int *)ptr<<endl;
	ptr=&vfl;
	cout<<"Nilai yang ditunjukan oleh ptr = "<<*(float *)ptr<<endl;
}
