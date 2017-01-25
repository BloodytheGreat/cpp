#include <iostream>
#include <vector>

using namespace std;

int Bsearch(vector<int> &v, int left, int right, int key) {
    while (right-left > 1) {
    int mid = left + (right-left)/2;

    if (v[mid] >= key)
        right = mid;
    else
        left = mid;
    }

    return right;
}

int LIS(vector<int> &v) {
    if (v.size() == 0)
        return 0;

    vector<int> tail(v.size(), 0);
    int length = 1;

    tail[0] = v[0];
    int size = v.size();
    for (size_t i = 1; i < size; i++) {
        if (v[i] < tail[0])
            tail[0] = v[i];

        else if (v[i] >= tail[length-1])
            tail[length++] = v[i];

        else
            tail[Bsearch(tail, -1, length-1, v[i])] = v[i];
    }

    return length;
}

int main() {
    int n;
    while(cin >> n)
    {
        vector<int> v;
        int k;
        for(int i = 0; i < n ; i++)
        {
            cin >> k;
            v.push_back(k);
        }
        cout << LIS(v) << endl;
    }
   return 0;
}
