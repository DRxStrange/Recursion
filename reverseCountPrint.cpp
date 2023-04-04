#include <iostream>

using namespace std;

void reverseCountPrint(int n){
    if(n < 1){
        return;
    }
    cout<<n;
    cout<<endl;
    // recursive call;
    reverseCountPrint(n-1);
}
int main()
{
    
   int num;
   cin>>num;
   reverseCountPrint(num);
  
    return 0;
}
