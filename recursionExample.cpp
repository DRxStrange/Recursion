#include <iostream>

using namespace std;

void reachHome(int dest, int src){
    cout<<"source"<<src<<" "<<"destination"<<dest<<endl;
    if(src==dest){
        cout<<"Reached Home";
        return;
    }
    //recursive Call
    reachHome(dest,src+1);
    
}
int main()
{
    
   int dest = 10;
   int src =1;
   
      reachHome(dest, src);
  
    return 0;
}
