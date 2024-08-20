#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const double PAY_RATE = 50.0;//Payrate 50 dollars
    const int MIN_HOURS = 7;//minimum hours 5
	double hours,
		charges;
    cout << "How many hours were worked?" << endl;
    cin >> hours;//20 hours work
	//hours = (hours < MIN_HOURS) ? MIN_HOURS : hours;
	if (hours < MIN_HOURS)
	{
		hours = MIN_HOURS;//Minimum hours will be stored
	}
	else
	{
		hours = hours;
	}
	charges = PAY_RATE * hours;
	cout << fixed << showpoint << setprecision(5);
    cout<< "The charges are $" << charges << endl;
	return 0;
}