//Question 1 (Loops): Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. 
#include<iostream>
using namespace std;
int main(){
	int apple, mango, banana;
	for (apple= 0; apple <= 100; apple++)
		{
			for (mango = 0; mango<= 100; mango++)
				{
					if (apple + 5*mango == 100)
					{cout << apple <<"apple"<<endl << mango <<"mango"<<endl << 100-(apple + mango) <<"banana"<<endl;
					cout<<"......................................................."<<endl;				
					}
				}
		}
	return 0;
}
	
