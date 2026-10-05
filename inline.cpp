#include<iostream>
using namespace std;
inline int square(int x)      {return x*x;}
double area(double r)         {return 3.14159*r*r; }
int area(int l,int b)         {return l*b;}
double area(double b,double h)  {return 0.5*b*h;}
int main(){

cout <<"Square(3.2123)  =   "<<square(3.2123)<<endl;
cout <<"Circle r=2   =   "<<area(2.0)<<endl;
cout <<"Rectangle l=3.25 and b=4.25    =   "<<area(3.25,4.25)<<endl;
cout<<"Triangle b=5 and h=7   =       "<<area(5,7)<<endl;
return 0;
}