#include <iostream>
using namespace std;

bool linearSearch(int *arr, int n, int key){
    
    if(n==0){
        return false;
    }
    
    if(arr[0] == key){
        return true;
    }
    
    
    //recursion calls
    return linearSearch(arr+1, n-1, key);
    
}
int main()
{
    //size of array
    int n;
    cin>>n;
    
    int *arr = new int[n];
    
    for(int i =0;i<n;i++){
        cin>>arr[i];
        
    }
    //enter key
    int key;
    cin>>key;
    
    bool ans = linearSearch(arr, n, key);
    cout<<ans;

    return 0;
}
