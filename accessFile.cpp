#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Membuat Array dan Menulis di file
  ofstream MyFile("hasil.txt");
  int x, n;
  cout << "Masukan array: ";
  cin >>n;
  int *arr = new int(n);
  for (x = 0; x < n; x++) {
  	cout<<"masukan array ke "<<x+1<<" ";
  	cin >> arr[x];
  	MyFile <<arr[x]<<" ";
    }
  MyFile.close();
  string myText;
  
  //Menghitung rata-rata
  int n2; 
	ifstream Input;  
	ofstream Output; 
	Input.open("hasil.txt");  
	if(Input.fail( ))
	{ 
		cout << "error! tidak bisa membuka input file"<<endl; 
		return 1;
	}
	
	Output.open("rerata.txt"); 
	
	if(Output.fail( )) 
	{	
		cout << "error! tidak bisa membuka output file"<<endl; 
		return 0; 
	} 
  
  int total=0;  //Total
	int count=n2-1; //banyak bilangan
	while(!Input.eof())
	{
		count++;
		total+=n2;
	  Input>>n2;
	}
	float average=0;

	average=float(total)/float(count); 
	cout<<"jumlah: "<<total<<endl<<"banyak bilangan: "<<count<<endl<<"rata-rata: "<<average;
	Output<<average;
	
	Input.close();	 
	Output.close(); 
	
	return 0;
}

