#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a;
    int i,j;
    cout<<"Enter a word to check palindrome"<<endl;
    cin>>a;
    bool pal = true;
    for (size_t i=0; j=a.size()-1;i<j,++i,--j)
    {
        if(a[i] !=a[j])
        {
            pal = false;
            break;
        }
    }
    cout<<"The word is not palindrome"<<endl;


   
  

}