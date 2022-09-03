#include<iostream>
#include<math.h>
using namespace std;
void sum(int num1,int num2)
   {
   	
     int res;
    res = num1 + num2;
    cout<<"sum of given number = "<<res<<endl;
    
    }
void subtraction(int num1,int num2)
    {
     int res;
     res = num1-num2;
     cout<<"subtraction of given number = "<<res<<endl;
     
     }
     
void product(int num1,int num2)
    
    {
    	int res;
    	res = num1 * num2;
    	cout<<"product of the given numbers = "<<res<<endl;
     }
       
 void division(int num1,int num2)
     {
      	float res;
    	res = num1 / num2;
    	cout<<"division of  the given numbers = "<<res<<endl;
      }  
       
void square(int num)
     {
     float res;
     res=sqrt(num);
     cout<<" the square_root of given number =  "<<res<<endl;
     }
void remmainder(int num1,int num2){
	
    float res;
	
    res = remainder(num1, num2);
    cout << "Remainder of given number = " << res << endl;

}
int main()
{   
	
    square(2);
    division(5,9);
    subtraction(88,7);
    product(5,8);
    sum(9,9);
    
    
	return 0;    
}
