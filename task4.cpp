#include<iostream>
using namespace std;
int main(){
    char service, t;
    float min;
    int total;
    cout<<"Enter the service of code (R/r for regular, P/p for premium): ";
    cin>>service;
    
    cin>>t;
    if(service=='P' || service=='p'){


if(t=='d' || t=='D'){
  if(min>75)
  {
  total=25+min*0.10;
  }
  if(min<=75){
    total=25;
  }
}if(t=='n' || t=='N'){
  if(min>100)
  {
    total=25+min*0.05;
  }
  if(min<=100){total=25;}
cout<<"Enter time of the call: "<<total;
}}
if(service=='R' || service=='r'){
  if(min<=50){
    total=10;
  }
  if(min>50){
    total=10+min*0.20;
  }
}
if(service!='R' || service!='r' || service!= 'P' || service!='p' || t!='n' || t!='N' || t!='d' || t!='D'){
  cout<<"error";
}
  cout<<"Enter the number of minutes used: ";
    cin>>min;
  cout<<"Service Type: "<<service;
  cout<<"Total Minutes Used: "<<min<<" minutes";
 cout<<" Amount Due: $"<<total;
    }
