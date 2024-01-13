#include <iostream> 
using namespace std;

int main() { 
    
    int n, m, arr[10][10];

    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;

    cout << "Nhap mang:" << endl;
    for(int i = 0; i < n; i++)
    {
	    for (int j = 0; j < m; j++)
	    {
		    cin >> arr[i][j];
	    }
    }


    for(int i = 0; i < n; i++)
    {
	    int max = arr[i][0];
	    for(int j = 0 ; j < m ; j++){	 
		    if (arr[i][j] > max)
		    {
			    max = arr[i][j] ;
		    }	
	    }
	cout << max << " ";
}


return 0;
}