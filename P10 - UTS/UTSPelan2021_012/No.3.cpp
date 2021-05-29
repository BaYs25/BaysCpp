#include<iostream>
using namespace std;
int main(){
	int I;
//	char X[10]={'a','b','c','d','e','f','g','h','i','j'};
	char X[11]={' ','a','b','c','d','e','f','g','h','i','j'};
	for(I=1; I<=10; I++){
		swap(X[I],X[10-I+1]);
	}
	for(I=1; I<=10; I++){
		cout<<X[I];
	}
}
