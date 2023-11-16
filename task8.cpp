#include<iostream>
using namespace std;
int vladimirputin(string ,int, int);
main(){
   string type;
   cout<<"Enter year type: "; 
    cin>>type;
    int holidays , week;
    cout<<"Enter number holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>week;
    int result=vladimirputin(type,holidays,week);
    cout<<result;
}
int vladimirputin(string type, int holidays , int week){
    int playholiday=(2.0*holidays)/3;
    const int week1=48;
    int playweekends=(3.0*week1)/4;
    int leaap=15*playholiday/100+(15*playweekends/100);
    int ans;
    if(type=="normal"){ans=playholiday+playweekends;}
    if(type=="leap"){ans=leaap+playweekends+playholiday;}
    return ans;
}