#include <iostream>
using namespace std;

double mile;
double kilometer;

int main()
{
	cout<<"Bitte geben sie die Distanz in Meilen ein:"<<endl;
	cin>>mile;
	cout<<"Vielen Dank! Ihre Eingabe wird verarbeitet..."<<endl;
	kilometer = mile*1.60934;
	cout<<mile<<" Meilen sind umgerechnet "<<kilometer<<" Kilometer."<<endl;
	return 0;
}
