#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include<stdio.h>


using namespace std;


int max(int a, int b) { return (a > b)? a : b; }

int get_sums(int W, int wt[], int val[], int n)
{

   if (n == 0 || W == 0)
       return 0;


   if (wt[n-1] > W)
       return get_sums(W, wt, val, n-1);


   else return max( val[n-1] + get_sums(W-wt[n-1], wt, val, n-1),
                    get_sums(W, wt, val, n-1));
}

int main()
{
    string line;

    while(getline(cin,line))
	{
	    int nums[25] = {0};

        int sum = 0;
		int x;
		stringstream a1(line);
        int i = 0;
		while(a1 >> x)
		{
			nums[i] = x;
			sum += x;
			i++;
		}
    int  W = sum / 2;
    int n = i+1;
    int res = get_sums(W,nums, nums, n);
    if(res > sum/2)
    {
        cout << sum - res << " " << res << endl;
    }
        cout << res << " " << sum - res<< endl;

	}

    return 0;
}

