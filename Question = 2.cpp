#include<iostream>
using namespace std;
 
int main()
{
    int n;
    int even;
 
    cout << " tell me number : ";
    cin >> n;
    
    if (n%2 == 0){
	
        cout << n << " given number  is an even  number " << endl;
	}
    else{
    	cout<<"the given number is a odd number  =  "<<endl;
        even =  n + 1;
        
        cout<<" and its even is = "<<even<<endl;
        
	}
    return 0;
}
