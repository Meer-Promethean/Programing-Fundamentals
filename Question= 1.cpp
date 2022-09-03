#include <iostream>
using namespace std;

int main()
{

 for(int i = 97;i<123;i++){
 	if(char(i) == 'd'){
 		continue;
	 }
	 cout<<"the caracter of  ASCII    "<<i <<" is  "<<char(i)<<endl;
 }
 
 return 0;
}
