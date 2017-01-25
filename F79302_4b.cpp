#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main() {
        int n;
        cin >> n;

        while(n > 0) {

            unsigned long long sze;
            cin >> sze;

            vector<unsigned long long>v;

            for(unsigned long long i = 0; i < sze; i++) {
                unsigned long long tmp;
                cin >> tmp;

                v.push_back(tmp);
            }


            sort(v.begin(), v.end());



            double median = 0;

            if((v.size() % 2) == 0) {
                median = (v[(v.size() / 2) - 1] + v[(v.size() / 2)]) / 2;
            }
            else {
                median = v[v.size() / 2];
            }

            if(v[(v.size() - 1) / 2] < v[v.size() / 2]) {
                cout << v[((v.size() - 1) / 2)] << endl;
            }
            else {
                cout << v[(v.size() / 2)] << endl;
            }

            n--;
        }


    return 0;
}
