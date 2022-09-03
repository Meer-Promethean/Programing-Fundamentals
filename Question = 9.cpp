#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a Date to obtain how many days are in a month:" << endl;
	int year = 0;
	int month = 0;
	int days;
	cout << "Enter Year: ";
	cin >> year;
	cout << "Enter Month: ";
	cin >> month;

	
	if (month == 4 || month == 6 || month == 9 || month == 11)
	{
	
		days = 30;
		cout<<days<<endl;
    }
	else if (month == 02)
	{
		bool leapyear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

		if (leapyear == 0){
		
				days = 29;
				cout<<days<<endl;
		}s
		else 
				days = 29;
				cout<<days<<endl;
	}

	else 
	days = 31;
	cout<<days<<endl;

return 0;
}
