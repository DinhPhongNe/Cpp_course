#include <iostream> 
using namespace std;

int main(){

	int n,m,arr[20][20];
	cout<<"n = ";
	cin>>n;
	cout<<"m = ";
	cin>>m;

	cout<<"Nhap mang: "<<"\n";
	for(int i =0; i<n; i++){
		for(int j=0; j<m ;j++){
		cin>>arr[i][j];
		}
	}	


	int tong = 0;

	for(int i =0; i<n; i++){
		for(int j=0; j<m ;j++){
		
			tong = tong + arr[i][j];
		
		}
	}

	int a = n -2;
	int b = m -2;

	int tongnho = 0;

	for(int i =0; i<a; i++){
		for(int j=0; j<b ;j++){
		
			arr[i][j]= arr[i+1][j+1];
		
			tongnho = tongnho + arr[i][j];
		
		}	
	}

	int tongcuoi = 0;

	tongcuoi= tong - tongnho;


	cout<<tongcuoi;

return 0;
}