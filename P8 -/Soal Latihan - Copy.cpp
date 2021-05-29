#include<iostream>
using namespace std;
int main(){
    string prodi[10], tahun[10];
	int data_lulus[10][10], TP, TT, pilt, pilp;
	cout<<"     Pengimputan Data Jumlah Lulusan UTM "<<endl;
	cout<<"_____________________________________________"<<endl;
	cout<<"\nMasukan Jumlah Data Prodi yang akan diinputkan = ";
	cin>>TP;
	for(int i=0; i<TP; i++){
        cout<<"Masukan Nama Prodi ke - "<<i+1<<" : ";
        cin>>prodi[i];
	}
	cout<<endl<<"Masukan Jumlah data Tahun = ";
	cin>>TT;
	for(int i=0; i<TT; i++){
        cout<<"Masukan Tahun ke - "<<i+1<<" : ";
        cin>>tahun[i];
	}
	cout<<endl;
    for(int i=0; i<TP; i++){
        for(int a=0; a<TT; a++){
            cout<<"Masukan Data Prodi "<<prodi[i]<<" Tahun "<<tahun[a]<<" = ";
            cin>>data_lulus[i][a];
        }
        cout<<endl;
    }
	cout<<endl<<"Data Lulusan Prodi (prodi) \n";
	for(int i=0; i<TP; i++){
        cout<<" | ["<<i+1<<"] "<<prodi[i];
	}cout<<endl;
    for(int i=0; i<TT; i++){
        cout<<" | ["<<i+1<<"] "<<tahun[i];
	}cout<<endl;
	cout<<"\n   `Masukan kode Prodi : "; cin>>pilp;
	cout<<"masukan kode Tahun : "; cin>>pilt;
	cout<<"Jumlah Lulusan prodi "<<prodi[pilp-1]<<" Tahun "<<tahun[pilt-1]<<" = "<<data_lulus[pilp-1][pilt-1];
}

