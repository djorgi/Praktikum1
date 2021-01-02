#include <iostream>

using namespace std;
int main()
{  
 int i ,n ,j;
 
 cout<<"\t\t=============="<<endl;
 cout<<"\t\t||PERULANGAN||"<<endl;
 cout<<"\t\t=============="<<endl;
 cout<<"Masukan batas tinggi: ";
 cin>> n;
 //kebawah
 for(i=1; i<=n; i++)
 {	//kesamping
 	for(j=1; j<=2*n-1 ; j++){
 		if(j>= n-(i-1)&& j<= n+(i-1))
 		{
 			cout<< n-(i-1);
 			
		 }else{
		 	cout<<" ";
		 }
	}
	 cout<<endl;
 }
 for(i=1; i<=n-1; i++)
 {	//kesamping
 	
	 for(j=1; j<= 2*n-1; j++){
 		if(j>= n-(n-(i+1)) && j<= n+(n-(i+1)))
 		{
 			cout<< (n- (n-(i+1)));
		 }else{
		 	cout<<" ";
		 }
	}
	 cout<<endl;
 }
 
 
	
}
