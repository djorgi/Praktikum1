#include<iostream>
using namespace std;

struct buku{
	string kode;
	string judul;
	int harga;
};
buku data[100];

main(){
	int n, total;
	
	cout<<"Masukkan jumlah buku : ";cin>>n;
	cout<<endl;
	
	cout<<"===== Input Data Buku =====\n";
	for (int i=0; i<n; i++){
		cout<<"Buku ke-"<<i+1<<endl;
		cout<<"   Masukkan kode buku\t: ";cin>>data[i].kode;cin.ignore();
		cout<<"   Masukkan judul buku\t: ";getline(cin, data[i].judul);
		cout<<"   Masukkan harga buku\t: ";cin>>data[i].harga;
		
		total+=data[i].harga;
		cout<<endl;
	}
	
	cout<<"===== Data Buku =====\n";
	for (int i=0; i<n; i++){
		cout<<"Buku ke-"<<i+1<<endl;
		cout<<"Kode Buku\t: "<<data[i].kode<<endl;
		cout<<"Judul Buku\t: "<<data[i].judul<<endl;
		cout<<"Harga Buku\t: "<<data[i].harga<<endl<<endl;
	}
	
	cout<<"Total Harga Buku : "<<total<<endl;
}
