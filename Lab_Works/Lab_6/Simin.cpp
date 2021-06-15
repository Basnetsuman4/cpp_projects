//Calculation of Simple interest using class //
#include <iostream>
using namespace std;

class simple_interest
{
    public:
        void get_data(double principle, double time, double rate = 15) //value of rate remain unchanged//
        {
            double result;
            result = (principle * time * rate) / 100;
            cout << "The interest is " << result << endl;
        }
};

int main()
{
    simple_interest s;
    double p, t, r;
    char ans[10];

    cout << "Principle: ";
    cin >> p;

    cout << "Time: ";
    cin >> t;

    cout<<"The rate is fixed at 15%"<<endl;
    s.get_data(p,t);
}   