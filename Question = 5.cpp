 #include<iostream>
using namespace std;
int main()
{
	float per;
	float temp;
	float previous_salary;
	float total;
	int Grade;
	int medical_allowance;
	int transpote_allowance;
	
	cout<<"tell me your grade"<<endl;
	cin>>Grade;
	cout<<"tell me  previous salary  "<<endl;
	cin>>previous_salary;

	if(Grade >= 1 and Grade <= 5)
	{
		per = (previous_salary/100) * 20.0;
		temp = per + previous_salary;
		medical_allowance = 500;
		total = temp - medical_allowance;
		cout<<"Grade = "<< Grade<<"   Rs = "<<total<<" /="<<endl;
		
				
	}
		if(Grade >= 6 and Grade <= 16)
	{
		per = (previous_salary/100) * 15.0;
		temp = per + previous_salary;
		
		medical_allowance = 1000;
		transpote_allowance = 700;
		total = temp + medical_allowance + transpote_allowance;
		cout<<"Grade = "<<Grade<<"   Rs = "<<total<<" /="<<endl;
		
				
	}
	if(Grade >= 17 and Grade <= 22)
	{
		per = (previous_salary/100)*10.0;
		temp = per + previous_salary;
		transpote_allowance = 5000;
		total = temp + medical_allowance + transpote_allowance;
		cout<<"Grade = "<<Grade<<"   Rs = "<<total<<" /="<<endl;
		
				
	}
	else
	{	
		cout<<" you are not our employee  "<<endl;	
	}

	

	
	return 0;
}
