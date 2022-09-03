#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int sub;
	int i;
	float marks[5];
	float per=0;
	float total=0;
	
	cout<<"Enter your semester  subject : "<<endl;;
	cin>>sub;
	cout<<"Enter your subjects marks  "<<sub<<endl;
	for(i=0; i<sub; i++)
	{
	cin>>marks[i];
	}
	for(i=0; i<sub; i++)
	{
	total=total+marks[i];
	}
	per=total/sub;
	cout<<"Percentage: "<<per<<" % " <<endl;
	if(per>= 80 and per<= 100) {
	cout<<"your grade is A of this subject ";
	}
	
	else if(per >= 60 and per <= 79) 
	{
	cout<<"your grade is B of this subject  ";
	}
	else if(per>= 50 and per<=60)
	{
	cout<<"your grade is C of this subject  ";
	}
	else if(per>=40 and per<=49) 
	{
	cout<<"your grade is D of this subject ";
	}
	else if(per >= 0 and per<= 39){
		cout<<"your grade is F of this subject  ";
	}
	
	else 
	{
	cout<<" your persentage is out of range";
	}
	return 0;
}
