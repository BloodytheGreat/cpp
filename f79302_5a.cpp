
#include <cfloat>
#include<iostream>
#include<cmath>
#include<math.h>
#include<iomanip>
#include<cmath>

#include <string>
using namespace std;
long double f(long double x, long double a);
long double F = 79302 % 100;
long double f(long double x, long double a)
{
	long double sum = x*x*x*x*x - a*x - F;
	return sum;
}
int main()
{
	//cout << "F= " << F << endl;
	cout.setf(ios::fixed);
	long double a, b, c, fa, fb, fc;
	long double e;
	long double aa;
	bool flag = true;
	while (cin >> aa)
	{
		cout.precision(19);
		flag = true;
		a = 0;
		b = 10;
		e = 0.0000000000000000001L;



		//cout << "e=" /*<< std::setprecision(20)*/ << e << endl;
		if (f(a, aa)*f(b, aa)>0)
		{
			//cout << "NO SOLUTION" << endl;
			flag = false;

		}
		else
		{

			for (size_t i = 0; i < 10000; i++)
	//	while (fabs((long double)a - (long double)b)-e > e)
			{

				//cout << "(fabs((double)a - (double)b)" << fabs((double)a - (double)b )<< endl;
				c = (a + b) / 2.0L;
				fa = f(a, aa);
				fb = f(b, aa);
				fc = f(c, aa);
				//	cout<< std::setprecision(19) << c << endl;
				if (fc == 0)
				{
					break;
				}

				if (fa*fc>0)
				{
					a = c;
				}
				else if (fa*fc<0)
				{
					b = c;
				}



				//cout << fabs((long double)a - (long double)b)<< endl;
			///cout << fabs((long double)a - (long double)b)-e<< endl;
			//	cout << e   << endl;
			//	cout << c << endl;

				//if(fabs((long double)a - (long double)b)<e){
			//		break;
				//}
			}
		}
		if (flag == true)
		{
		//	unsigned long long int k = c*10000000000000000000;
		///	cout << k<<endl;

			cout << std::setprecision(19) << c << endl;
		}
		else {
			cout << "NO SOLUTION" << endl;
		}

	}

	return 0;
}

