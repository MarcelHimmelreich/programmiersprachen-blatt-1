#include <iostream>
using namespace std;

double mile;
double kilometer;

double mileToKilometer(double mile)
{
	kilometer = mile*1.60934;
	return mile;	
}


int main()
{
	cout<<"Bitte geben sie die Distanz in Meilen ein:"<<endl;
	cin>>mile;
	mileToKilometer(mile);
	cout<<mile<<" Meilen sind umgerechnet "<<kilometer<<" Kilometer."<<endl;

}
