#include <iostream>

using namespace std;

void  saysDigit(int n, string arr[]){
    if(n == 0){
        return;
    }
    int digit = n%10;
    saysDigit(n/10, arr);
    cout<<arr[digit]<<" ";
}
int main()
{
    
  int num;
  cin>>num;
  string arr[]={
      "zero", "one", "two", "three", "four", "five",
      "six","seven", "eight", "nine"
  };
      saysDigit(num, arr);
  
    return 0;
}
