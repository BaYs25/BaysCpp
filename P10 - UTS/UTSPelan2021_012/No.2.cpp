#include<iostream>
using namespace std;
int data[10]={3,9,2,6,1,4,7,8,5,10};
void kambing(int m){
	if(m<=10){
		kambing(m*2);
		cout<<data[m]<<" ";
		kambing(m*2+1);
	}
}
int main(){
	kambing(1);
}
