#include<iostream>
#include<string>
using namespace std;
void logmsg(const string &msg , int level = 1){
    const string tag[] = {"","INFO","WARN","ERROR"};
    cout<<"["<<tag[level]<<"]"<<msg<<endl;
}
    double intrest( double principle,double years,double rate=7.5){
    return principle*rate*years/100;
    }
int main(){
    double principle,years;
    cout<<"Enter the principle"<<endl;
    cin>>principle;
    cout<<"Enter the no of years "<<endl;
    cin>>years;

    logmsg("System Started");
logmsg("Low memory",2);
cout<<"Intrest ="<<intrest(principle,years)<<endl;
cout<<"Intrest ="<<intrest(principle,years,7.5)<<endl;
return 0;
}