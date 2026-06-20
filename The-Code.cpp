#include<iostream>
using namespace std;
int main()
{
string type;
int num1;
float num2;
double num3;
string text;
char letter;
bool quest;
int yn;
cout<<"************************************************************************************"<<endl;
cout<<"************************************SMALL PROJECT***********************************"<<endl;
cout<<"************************************************************************************"<<endl;
cout<<"Hi User !"<<endl;
cout<<"This is my small project can tell you how much data consumes from the RAM ."<<endl;
do
{
 cout<<"Choose data type from these [ int , float , double , string , char , bool ] :"<<endl;
 cin>>type;
 while(!( type=="int" || type=="float" || type=="double" || type=="string" || type=="char" || type=="bool" ))
 {
  cout<<"Sorry , I didn't understand .\nPlease try again :"<<endl;
  cin>>type;
 }
 if(type=="int")
 {
  cout<<"Enter the value of this number :"<<endl;
  cin>>num1;
  cout<<"It consumes "<<sizeof(num1)<<" bytes from the RAM ."<<endl;
 }
 else if(type=="float")
 {
  cout<<"Enter the value of this number :"<<endl;
  cin>>num2;
  cout<<"It consumes "<<sizeof(num2)<<" bytes from the RAM ."<<endl;
 }
 else if(type=="double")
 {
  cout<<"Enter the value of this number :"<<endl;
  cin>>num3;
  cout<<"It consumes "<<sizeof(num3)<<" bytes from the RAM ."<<endl;
 }
 else if(type=="string")
 {
  cout<<"Enter the text :"<<endl;
  cin>>text;
  cout<<"It consumes "<<sizeof(text)<<" bytes from the RAM ."<<endl;
 }
 else if(type=="char")
 {
  cout<<"Enter the letter :"<<endl;
  cin>>letter;
  cout<<"It consumes "<<sizeof(letter)<<" bytes from the RAM ."<<endl;
 }
 else if(type=="bool")
 {
  cout<<"Enter the value [ 0 / 1 ] :"<<endl;
  cin>>quest;
  cout<<"It consumes "<<sizeof(quest)<<" bytes from the RAM ."<<endl;
 }
 cout<<"To do another process [ 0 = No , 1 = Yes ] :"<<endl;
 cin>>yn;
 while(!(yn==0||yn==1))
 {
 cout<<"Sorry , I didn't understand This\nYou must enter just 0 or 1 ."<<endl;
 cout<<"Please try again [ with just 0 or 1 ] :"<<endl;
 cin>>yn;
 }
 }while(yn==1);
 if(yn==0)
 {
 cout<<"OK , As you like ."<<endl;
 cout<<"Thanks for trying my project ."<<endl;
 }
cout<<"************************************************************************************"<<endl;
cout<<"*************************************PROJECT END************************************"<<endl;
cout<<"************************************************************************************"<<endl;
return 0;
}