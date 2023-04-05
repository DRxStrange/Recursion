#include <iostream>
using namespace std;

int  sumOfArray(int *arr, int n){
    // size  1 or 0 return true one element already sorted.
    if(n ==1 || n == 0){
        return arr[0];
    }
    
    
    //recursion calls
    return arr[0]+sumOfArray(arr+1, n-1);
    
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    int ans = sumOfArray(arr, n);
    cout<<ans;

    return 0;
}
