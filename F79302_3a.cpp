#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;



bool chk_sum(int pos, int cnt,int res, int nums[])
{

	if (pos == cnt - 1) {

		int sum = 0;
		for (int i = 0; i<cnt - 1; i++) {
			sum += nums[i];
		}
		if (sum == res)
			return true;
		else
			return false;
	}
	nums[pos] *= -1;
	if (chk_sum(pos+1,cnt,res, nums) == true)
		return true;

	nums[pos] *= -1;
	if (chk_sum(pos+1,cnt,res, nums))
		return true;

	return false;
}

int main()
{
    int res;
	string row;

	while (getline(cin, row)) {

		int num,nums [30];
		int cnt = 0;

		stringstream ss(row);

		while (ss >> num) {
			nums[cnt] = num;
			cnt++;
		}

		//cout << sze << endl;
		res = nums[cnt - 1];


		if (chk_sum(1,cnt,res,nums)==false) {
			cout << endl;
		}
		else {
			cout << nums[0];
			for (int i = 1; i<cnt - 1; i++) {
				if (nums[i]>0) {
					cout << "+";
				}
				cout << nums[i];
			}
			cout << "=" << res << endl;;
		}

	}

	return 0;
}
