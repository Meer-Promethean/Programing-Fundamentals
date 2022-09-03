#include<iostream>
#include<conio.h>
using namespace std;

int  main()
{
 float celsius;
 float fahrenheit;
  cout<<"tell me  tempreture  in degrees Fahrenheit: "<<endl;
  cin>>fahrenheit;
  celsius = (fahrenheit - 32) * 5/9;
  cout<<"Tempreture in Celsius = : "<<celsius<<endl;;
  return 0;
}
