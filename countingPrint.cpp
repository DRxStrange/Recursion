#include <iostream>

using namespace std;

void CountingPrint(int n){
    if(n < 1){
        return;
    }
    CountingPrint(n-1);
    cout<<n;
    cout<<endl;
    // recursive call;
    
}
int main()
{
    
   int num;
   cin>>num;
   CountingPrint(num);
  
    return 0;
}
