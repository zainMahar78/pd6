#include<iostream>
using namespace std;
string sign(int , string);
main(){
    int d;
    string m;
    cout<<"Enter the day of birth: ";
    cin >>d;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>m;
    string result=sign(d,m);
    cout<<"Zodiac sign: "<<result;
}
string sign(int d ,string m){
    if((d>=21 && m=="March") || (d<=19 && m=="April")){
        return "Aries";
    }
    if((d>=20 && m=="April") || (d<=20 && m=="May")){
        return "Taurus";
    }
    if((d>=21 && m=="May") || (d<=20 && m=="June")){
        return "Gemini";
    }
    if((d>=21 && m=="June") || (d<=22 && m=="July")){
        return "Cancer";
    }
    if((d>=23 && m=="July") || (d<=22 && m=="August")){
        return "Leo";
    }
    if((d>=23 && m=="August") || (d<=22 && m=="September")){
        return "Virgo";
    }
    if((d>=23 && m=="September") || (d<=22 && m=="October")){
        return "Libra";
    }
    if((d>=23 && m=="October") || (d<=21 && m=="November")){
        return "Scorpio";
    }
    if((d>=22 && m=="November") || (d<=21 && m=="Decmber")){
        return "Sagittarius";
    }
    if((d>=22 && m=="December") || (d<=19 && m=="January")){
        return "Capricon";
    }
    if((d>=20 && m=="January") || (d<=18 && m=="February")){
        return "Aquarius";
    }
    if((d>=19 && m=="February") || (d<=20 && m=="March")){
        return "Pisces";
    }
}