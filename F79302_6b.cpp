#include <iostream>
#include <vector>
#include <stack>

using namespace std;
void ddt(vector<string>& v)
{
    int cnt = 0;
    stack<string> stk;
    int size = v.size();

    for(int i = 0; i < size; i++)
    {
        if(stk.empty())
        {
            stk.push(v[i]);
        }

        else
        {
            if(stk.top() == v[i])
            {
                stk.push(v[i]);
            }
            else
            {
                stk.pop();
            }
        }
    }

    if(stk.empty())
        cout << endl;
    else
    {
        for(int i = 0; i < size; i++)
        {
            if(stk.top()== v[i])
                cnt++;
        }

        if(cnt > size/2)
            cout << stk.top()<< endl;

     }
}

int main()
{
    string word;
    int n;

    while(cin >> n)
    {
        vector<string> v;
        for(int i = 0; i < n; i++)
        {
            cin >> word;
            v.push_back(word);
        }
        ddt(v);
    }

    return 0;
}
