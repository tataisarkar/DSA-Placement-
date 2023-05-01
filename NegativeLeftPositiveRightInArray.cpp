// move negative numbers to left and positive numbers to right

#include <iostream>
using namespace std;

void orientation(int a[], int n){
    int i=0;
    int j = n - 1;
    int k;
    
    while(i<j){
        if(a[i] > 0 && a[j]>0){
            j--;
        }
        else if(a[i]>0 && a[j]<0){
            k = a[i];
            a[i] = a[j];
            a[j] = k;
            i++;
            // j--;
        }
        else if(a[i]<0 && a[j]>0){
            i++;
            // j--;
        }
        else{
            i++;
        }
        // cout<<i<< " "<<j<< " ";
	    // for(k=0;k<n;k++)
	    //     cout<<a[k]<< " ";
        // cout<<endl;
    }
}

int main() {
	int arr[100];
	int n, i;
	
	cin>>n;
	for(i=0;i<n;i++)
	    cin>>arr[i];
	    
	orientation(arr, n);
	
	for(i=0;i<n;i++)
	    cout<<arr[i]<< " ";
	
	return 0;
}