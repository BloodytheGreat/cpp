#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <vector>
#include <bitset>
using namespace std;

int FromBin(long n)
{
	int result = 0, count, base = 1;
	while(n>0)
	{
		count = n % 10;
        result = result + count * base;
        base = base * 2;
        n = n / 10;
	}
	return result;
}
int FromHexa(string n)
{
	long x;
    stringstream ss;
    ss << hex << n;
    ss >> x;
	return x;

}
int FromOctal(long n)
{


    long dec = 0, i = 0, rem;
    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        long result = 1;
    	for(int j = 0; j < i; j++)
    	{
    		result *= 8;
    	}
        dec += rem * result;

        i++;
    }
    return dec;
}

int main()
{
	int a;

	while(cin >> a)
	{
		if(a == 2 )
		{
			long n;
			cin >>n;
			cout << FromBin(n) << endl;
		}
		if(a == 16 )
		{
			string n;
			cin >>n;
			cout << FromHexa(n)<< endl;
		}
		if(a == 8 )
		{
			long n;
			cin >>n;
			cout << FromOctal(n)<< endl;
		}
	}
	return 0;
}
