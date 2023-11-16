#include<iostream>
using namespace std;
string decideActivity(string, string);
main(){
    string t, h;
    cout<<"Enter temperature (warm or cold): ";
    cin>>t;
    cout<<"Enter humidity (dry or humid): ";
    cin>>h;
    string result=decideActivity(t, h);
    cout<<"Recommended activity: "<<result;
}
string decideActivity(string t, string h){
    if(t=="warm" && h=="dry"){
        return "Play tennis";
    }
    if (t=="warm" && h=="humid"){
        return "swim";
    }
    if(t=="cold" && h=="dry"){
        return "Play basketball";
    }
    return "Watch tv";
}