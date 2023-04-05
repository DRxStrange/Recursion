#include <iostream>
using namespace std;
void swap(char &i, char &j){
    char temp = i;
    i = j;
    j = temp;
}
void reverseString(string &str, int i, int j){
    
    if(i > j){
        return;
    }
    swap(str[i], str[j]);
    reverseString(str, i+1, j-1);
   
}
int main()
{
    
    string str ="ashwani";
    
    int start =0;
    int end = str.length()-1;
    reverseString(str, start, end);
    cout<<str;

    return 0;
}
