#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

bool arr[100000051];
int n = 100000050;

int main(){


    memset(arr, true, sizeof(arr));

    for (int p = 2; p*p<=n; p++)
    {
        if (arr[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                arr[i] = false;
        }
    }

    arr[0] = false;
    arr[1] = false;



    char ch;
    while(cin >> ch){


        if(ch == 'A'|| ch == 'a') {
            int a,b;
            cin >> a >> b;
            if(a > b)
                swap(a,b);
            int cnt = 0;
            for(int i = a; i<=b;i++){
                if(arr[i])
                    cnt++;
            }
            cout << cnt << endl;
        }

        if(ch == 'B'|| ch == 'b'){
            int k;
            cin >> k;
            if(arr[k]){
                cout << k << endl;

            }
            else if(k == 0){
                cout << 0 <<endl;

            }
            else if(k == 1){
                cout << 1 <<endl;
            }
            else
            for(int i = 0; i < n;i++){
                    if(arr[i]){
                        if(k%i == 0){
                            cout << i << endl;
                            break;
                        }
                    }
            }

        }

        if(ch == 'C'|| ch == 'c') {
            int k;
            cin >> k;
            if(arr[k]){
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }

         if(ch == 'D'|| ch == 'd') {
            int k,last = 0,res = 0;
            cin >> k;

            while (k!= 0){

        last = k % 10;
        res = res * 10 + last;

        k = k / 10;
        }
        if(arr[res]){
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
        }

        if(ch == 'E'|| ch == 'e') {

        int k;
        cin >> k;
        if(arr[k]){
                cout << k << endl;
        }
        else
        for(int i = 0;i < n;i++){
            if(arr[k+i] && arr[k-i]){
                cout << k-i << " " << k+i << endl;
                break;
            }
            else if(arr[k+i]){
                cout << k+i << endl;
                break;
            }
            else if(arr[k-i]){
                cout << k-i << endl;
                break;
            }
        }
    }

        if(ch == 'F'|| ch == 'f'){
        int k,cnt = 0;
        cin >> k;
        for(int i = 2; i < k;i++){
            if(arr[i])
                cnt++;
        }
            cout << cnt << endl;
        }
        if(ch == 'q')
            return 0;
        }

    }

