/*Question 2 (Functions): You are a salesperson of Bata shoe company, where each shoe is Rs 225. Company gave you three options for the salary. 
1. Just a salary of Rs 600 per week;
2. A salary of Rs7.00 per hour plus a 10% commission on sales; (Assume you work 40 hours a week) 
3. No salary, but 20% commissions and Rs20 for each pair of shoes sold
Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user) */
#include<iostream>
using namespace std;

int func2(int a )
	{
		int b= (225)*0.1*a + 7*40;
		return b;
	}

int func3(int a )
	{
		int b= 20*a + 225*0.2*a;
		return b;
	}
int main ()
	{
		int a, b, c, d;
		cout<< "Enter the expected no. of shoe sales: ";
		cin >>a;
		c = func2( a );
		d = func3(a );
		cout << "from the 1st option you will get RS 600"<<endl;
		cout << "from the 2nd option you will get RS "<< c<<endl;	 
		cout << "from the 3rd option you will get RS " << d<<endl;
		return 0;
	}
