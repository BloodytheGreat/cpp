#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
int nok(int a, int b)
{
	if(a%b == 0)
	{
		return a;
	}
	if(b%a == 0)
	{
		return b;
	}
	return a*b;

}
int reduce(int a, int b) {
    while(a != b) {
        if(a > b) {
            a = a - b;
        }
        else {
            b = b - a;
        }
    }
    return a;
}

vector<int> makeint(string num)
{
	int x;
	vector<int> vec;
	stringstream ss(num);
	string lft;

	ss >> x >> lft;
	vec.push_back(x);

	lft.erase(0,1);
	stringstream ss1(lft);
	ss1 >> x;
	vec.push_back(x);

	return vec;
}
int main()
{
	string num,chr,num1;
	while(cin >> num >> chr >> num1)
	{


	vector<int> dr = makeint(num);
	vector<int> dr1 = makeint(num1);
	vector<int> res;

	int n = nok(dr[1],dr1[1]);



	dr[0] = (n / dr[1]) * dr[0];

	dr1[0] = (n / dr1[1]) * dr1[0];
	int sum = dr[0]+ dr1[0];
	if(sum % n == 0)
	{
		cout << sum / n << endl;
	}
	else
        cout << sum / reduce(sum,n) << "/" << n / reduce(n,sum) << endl;
	}

	return 0;
}


