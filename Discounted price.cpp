//Discounted price
#include<iostream>
using namespace std;
int main()
{

	float percentage,original,discountedPrice;
	

	cout<<"Enter the original price: " << "\n";
	cin>>original;
	discountedPrice = original * 10/100;
	cout<< "The discouted price is: " << discountedPrice;
	
	return 0;
}
