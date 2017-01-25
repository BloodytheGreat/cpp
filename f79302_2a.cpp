#include <iostream>




using namespace std;


int a = 0;
int b = 0;
long long cnt = 0;
long long arr[10000];
long long arr1[10000];
long long fib[10000];

int main() {

    while(cin >> a >> b >> cnt){
        for(int i = 0; i < cnt; i++)
            cin >> arr[i];


        fib[0] = fib[1] = 1;

        for(int i = 2; i < 10000; i++)
            fib[i] = (a * fib[i - 1]) + (b * fib[i - 2]);


        for(int i = 0; i < cnt; i++) {
            arr1[i] = 0;

            for(int j = 1; j < 10000; j++) {
                if(arr[i] == fib[j]) {
                    arr1[i] = ++j;
                }
            }
        }
        for(int i = 0; i < cnt; i++) {
            cout << arr1[i] << endl;
        }
    }

    return 0;
}
