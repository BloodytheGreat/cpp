#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int counter = 0;


string ddt(string word,int num)
{
    int b = word.length();
    num %= b;
    rotate(word.begin(), word.begin()+ num, word.end());

    return word;
}



int main()
{

	vector<int> nums;
	while(true)
	{
		string line,word;
		getline(cin,line);
		stringstream a(line);
		a >> word;

		int x;
		getline(cin,line);
		stringstream a1(line);

		while(a1 >> x)
		{
			nums.push_back(x);
		}

		int size = nums.size();

		for(int i = 0; i < size ;i++)
		{
			cout << ddt(word,nums[i])<<endl;
		}

        counter++;
        nums.clear();
        if(counter > 100)
            break;
	}


	return 0;
}
