#include <iostream>
#include <stdlib.h>
#include <conio.h>  

using namespace std;
 
int main()
{
	double uang;
	int barang;
	string yakin, yakin2;
	
	awal:
	cout<< "Masukan Jumlah Uang Anda: ";
	cin>>uang;
	cout<< "Jumlah Uang Anda"<< " ["<<uang<<"]";
	cout<<endl;
	cout<<"Apakah Anda Yakin Dengan Jumlah Uang Anda [Y/N]?";
	cin>>yakin;
	
	if (yakin == "y" || yakin == "Y"){
		do{
			menu:
			system("cls");
			cout<<"\t\t--------------------------------------"<<endl;
			cout<<"\t\t||Anda Masuk ke Dalam Operator THREE||"<<endl;
			cout<<"\t\t--------------------------------------"<<endl;
			
			
			cout<<"\t\t--------------------------------------"<<endl;
			cout<<"\t\t||     Anda Akan Membeli Pulsa      ||"<<endl;
			cout<<"\t\t--------------------------------------"<<endl;
			
			cout<<"--------------------------------------"<<endl;
			cout<<"||Pililah Salah Satu Dibawah Ini :  ||"<<endl;
			cout<<"||1. 10000			    ||"<<endl;
			cout<<"||2. 20000			    ||"<<endl;
			cout<<"--------------------------------------"<<endl;
			
			cout<<"Masukan Pilihan Anda = ";
			cin>>barang;
			cout<<endl;
			
			if(barang == 1 && uang>=10000 ){
				uang = uang - 10000;
				system("cls");
				cout<<"------------------------------"<<endl;
				cout<<"||Selamat Anda Telah Membeli||"<<endl;
				cout<<"------------------------------"<<endl;
				cout<<"Sisa Uang Anda"<<"["<<uang<<"]";
				cout<<endl;	
			}else if(barang  == 2 && uang>=20000){
				uang = uang - 20000;
				system("cls");
				cout<<"------------------------------"<<endl;
				cout<<"||Selamat Anda Telah Membeli||"<<endl;
				cout<<"------------------------------"<<endl;
				cout<<"Sisa Uang Anda"<<"["<<uang<<"]";
				cout<<endl;
			}else if(barang != 1 && barang != 2){
				system("cls");
				cout<<"Kode Barang Tidak Tersedia";
				getch();
				goto menu;
			}else{
				system("cls");
				cout<<"------------------------------"<<endl;
				cout<<"||Maaf Uang Anda Tidak Cukup||"<<endl;
				cout<<"------------------------------"<<endl;
				cout<<"Uang Anda "<<"["<<uang<<"]";
				cout<<endl;
			}
			cout<<"Apakah Anda Ingin Membeli Lagi(Y/N)?";
			cin>>yakin2;
		}while (yakin2 == "y" || yakin2 == "Y");
		
	}else if(yakin== "n" || yakin =="N"){
		system("cls");
		goto awal;
	}else {
		system("cls");
		cout<<"error 404 not found";
	}
}
