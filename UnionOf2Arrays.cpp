class Solution{
    public:
    //Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //code here
        
        // 1 2 3 4 5
        // 1 2 3 
        
        int temp[n+m];
        int i, j, k;
        
        sort(a, a+n);
        sort(b, b+m);
        
        i = j = k = 0;
        
        while(1){
            if(i == n || j==m){
                break;
            } 
            if(a[i] < b[j]){
                temp[k] = a[i];
                k++, i++;
            }
            else if(a[i] > b[j]){
                temp[k] = b[j];
                j++, k++;
            }
            else if(a[i] == b[j]){
                // temp[k++] = a[i];
                i++;
            }
            
        }
        
        while(i<n){
            temp[k] = a[i];
            k++;
            i++;
        }
        
        while(j<m){
            temp[k] = b[j];
            k++, j++;
        }
        
        return k;
    }

    