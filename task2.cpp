#include<iostream>
using namespace std;
float per(int e ,int m, int c ,int s ,int b);
string grade(float percentage);
main(){
    string n;
    int e, m, c, s,b;
    cout<<"Enter student name: ";
    cin>>n;
    cout<<"Enter marks for English: ";
    cin>>e;
    cout<<"Enter marks for Maths: ";
    cin>>m;
    cout<<"Enter marks for Chemistry: ";
    cin>>c;
    cout<<"Enter marks for Social Science: ";
    cin>>s;
    cout<<"Enter marks for Biology: ";
    cin>>b;
    float result=per(e,m,c,s,b);
    string result1=grade(result);
    cout<<"Student name: "<<n<<endl;
    cout<<"Percentage: "<<result<<"%"<<endl;
    cout<<"Grade: "<<result1<<endl;
}
float per(int e ,int m, int c ,int s ,int b){
    float percentage=(e+m+c+s+b)*100/500;
    return percentage;
}
string grade(float percentage){
    if(percentage>=90 && percentage<100){
        return "A+";
    }
    if (percentage>=80 && percentage<90){
    return "A";
}
    if (percentage>=70 && percentage<80){
        return "B+";
    }
    if (percentage>=60 && percentage<70){
        return "B";
    }
    if(percentage>=50 && percentage <60){
        return "C";
    }
    if(percentage>=40 && percentage<50){
        return "D";
    }
    return "F";
    }