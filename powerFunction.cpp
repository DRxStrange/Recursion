#include <iostream>

using namespace std;

int power(int n, int p){
    if(p==0){
        return 1;
    }
    // recursive call;
    return n*power(n,p-1);
}
int main()
{
    
   int n;
   cin>>n;
   int p;
   cin>>p;
   int ans = power(n,p);
   cout<<ans;
    return 0;
}
