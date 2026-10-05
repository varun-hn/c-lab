#include<iostream>
using namespace std;
inline int square(int x)      {return x*x;}
double area(double r)         {return 3.14159*r*r; }
int area(int l,int b)         {return l*b;}
double area(double b,double h)  {return 0.5*b*h;}
int main(){

cout <<"Square(3.3213)  =   "<<square(3.3213)<<endl;
cout <<"Circle r=2   =   "<<area(2.0)<<endl;
cout <<"Rectangle l=10 and b=20    =   "<<area(10,20)<<endl;
cout<<"Triangle b=3.5 and h=8.6   =       "<<area(3.5,8.6)<<endl;
return 0;
}