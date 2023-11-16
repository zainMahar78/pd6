#include<iostream>
using namespace std;
float price(string f, string d, float q);
main(){
    string f,d;
    float quantity;
    cout<<"Enter the fruit name: ";
    cin>>f;
    cout<<"Enter the day: ";
    cin>>d;
    cout<<"Enter quantity: ";
    cin>>quantity;
    float result=price(f, d, quantity);
    cout<<"Quantity: "<<result;    
}
float price(string f, string d, float q){
    float totalMoney;
    if(d=="Sunday" && f=="Banana" ){
    totalMoney=2.70*q;          
        }
   else if(d=="Sunday" && f=="apple" ){
    totalMoney=1.25*q;          
        }
    else if(d=="Sunday" && f=="orange" ){
    totalMoney=0.90*q;          
        }
    else if(d=="Sunday" && f=="grapefruit" ){
    totalMoney=1.60*q;          
        }
    else if(d=="Sunday" && f=="kiwi" ){
    totalMoney=3.00*q;          
        }
  else  if(d=="Sunday" && f=="pineapple" ){
    totalMoney=5.60*q;          
        }
    else if(d=="Sunday" && f=="grapes" ){
    totalMoney=4.20*q;          
        }
 else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday")  && f=="Banana" ){
    totalMoney=2.50*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday")  && f=="apple" ){
    totalMoney=1.20*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday")  && f=="orange" ){
    totalMoney=0.85*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday")  && f=="grapefruit" ){
    totalMoney=1.45*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday")  && f=="kiwi" ){
    totalMoney=2.700*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday") && f=="pineapple" ){
    totalMoney=5.50*q;          
        }
    else if((d=="Monday" || d=="Tuesday" || d=="Wednesday" || d=="Thursday" || d=="Friday" || d=="Saturday") && f=="grapes" ){
    totalMoney=3.85*q;          
        }
        else {
            cout<<"error";
        }
        return totalMoney;
        
}