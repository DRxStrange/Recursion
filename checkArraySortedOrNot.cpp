
#include <iostream>
using namespace std;

bool isSorted(int *arr, int n){
    // size  1 or 0 return true one element already sorted.
    if(n ==1 || n == 0){
        return true;
    }
    // previous elment is greater than next element than return false.
    if(arr[0] > arr[1]){
        return false;
    }
    //recursion calls
    return isSorted(arr+1, n-1);
    
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    bool ans = isSorted(arr, n);
    cout<<ans;

    return 0;
}
