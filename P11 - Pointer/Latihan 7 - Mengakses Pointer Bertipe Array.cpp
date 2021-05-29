#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	void *ptr;
	int tgl_lahir[]={24,6,1965};
	int *ptgl;
	ptgl=tgl_lahir;
	for(int i=0; i<3; i++){
        cout<<"*ptgl = "<<ptgl+i<<endl;
		cout<<"nilai ptgl = "<<*(ptgl+i)<<endl;
	}
}
