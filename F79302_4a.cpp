#include <stdlib.h> 
#include <iostream>
#include <ctime>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
while(cin >> s)
{	
	int arr[10];
	for(int n = 0; n < 10; n++)
		{
			 arr[n] = 0;
		}
	int size = s.length();
	for(int i = 0; i < size; i++)
	{
		switch (s.at(s.length () - 1)) {
        case '1': arr[1] += 1;
        		break;
        case '2': arr[2] += 1;
        		break;
        case '3': arr[3] += 1;
        		break;
        case '4': arr[4] += 1;
        		break;
        case '5': arr[5] += 1;
        		break;
        case '6': arr[6] += 1;
        		break;
        case '7': arr[7] += 1;
        		break;
        case '8': arr[8] += 1;
        		break;
        case '9': arr[9] += 1;
        		break;
        case '0': arr[0] += 1;
		}
		s.erase(s.length () - 1);
	}

	for(int k = 9; k >= 0; k--)
	{
		for(int n = 0; n < arr[k]; n++)
		{
			cout << k;
		}
	}
	cout << endl;
}
  return 0;
}

