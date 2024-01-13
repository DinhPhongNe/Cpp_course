#include <iostream>

using namespace std;

    int main() { int n ; int arr[10]; 
    
    cout << "n = "; 
    cin >> n; 
    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
    }

    for(int i = n - 1; i > 0; i--){
	    for(int j = 0; j <= i; j++)
	    {
		    if(arr[j] < arr[i])
		    {
			    int temp = arr[i];
			    arr[i] = arr[j];
			    arr[j] = temp ;
		    }
	    }
    }

    for(int i = 0; i < n; i++){
	    cout << arr[i] << " ";
    }
    
    return 0 ;
}