#include <iostream>
using namespace std;
string price(string m, int n);
main(){
    string m;
    int n;
    cout<<"Enter the month (May, June, July, August, September, October): ";
    cin>>m;
    cout<<"Enter the number of stay: ";
    cin>>n;
    cout<<price(m, n);
}
string price(string m, int n){
    const float studio=50; // in tthe month of may october
    const float studio2=75.20; // in june September
    const float studio3=76; // in July August
    const float apart1=65; // may october
    const float apart2=68.70; // june September
    const float apart3=77; // july August
    float totalp;
    float totalp1;
    float totalpa1;
    float totalpa2=0;
    if(m=="July" || m=="August"){
        totalp1=n*studio3;
    }
    if(m=="May" || m=="October"){
        if(n>7 && n<=14){
            totalp1=n*studio;
            totalp1=totalp1-(totalp1*5/100);
            }
            if(n>14){
                totalp1=n*studio;
                totalp1=totalp1;
                totalp1=totalp1-(totalp1*30/100);            
            }
            if(m=="June" || m=="September") {
             if( n>14){   totalp1=n*studio2;
                totalp1=totalp1-(totalp1*20/100);
            } 
            if(n<=14){ 
                 totalp1=n*studio2;
                 }
        }
    
    if(n<=14){
        if(m=="May" || m=="October"){
        totalpa2=n*apart1;}
        if(m=="June" || m=="September"){
        totalpa2=n*apart2;}
        if(m=="July" || m=="August"){
        totalpa2=n*apart3;}
    }
    if(n>14){
        if(m=="May" || m=="October"){
        totalpa2=(n*apart1);
        totalpa2=totalpa2-(totalpa2*0.1);}
        if(m=="June" || m=="September"){
        totalpa2=(n*apart2);
        totalpa2=totalpa2-(totalpa2*0.1);}
        if(m=="July" || m=="August"){
        totalpa2=(n*apart3);
        totalpa2=totalpa2-(totalpa2*0.1);}
    }
    return "Apartment: "+ to_string(totalpa2) +"$.\n" + "Studio: " + to_string(totalp1) + "$.";
    }}