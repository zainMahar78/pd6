#include<iostream>
using namespace std;
string exam(int eh, int em ,int sh, int sm);
main(){
    int eh, em, sh, sm;
  cout<<"Enter Exam Starting Time (hour): "; 
  cin>>eh;
  cout<<"Enter Exam Starting Time (minutes): ";
  cin>>em;
  cout<<"Enter Student hour of arrival: ";
  cin>>sh;
  cout<<"Enter Student minutes of arrival: ";
  cin>>sm;
  string result=exam(eh, em, sh, sm);
  cout<<result; 
}
 string exam(int eh, int em ,int sh, int sm){
  int examarrival;
  examarrival=eh*60+em;
  int studentarrival=sh*60+sm;
  int examarrival1=examarrival-studentarrival;
  int hour=examarrival1/60;
  if(examarrival==studentarrival){
    return "On time";
  }
  if (examarrival>studentarrival){
    return "Early \nTest: "+ to_string(examarrival1) +"\n" + to_string(hour) + " minutes before the start";
  }
  if(examarrival<studentarrival){
    return "Late \nTest: "+ to_string(examarrival1) + "\n" + to_string(hour) + "after the start of exam";
  }

 }