#include <iostream>
#include <stdlib.h> 
#include <cmath>
using namespace std;

int main()
{
	int arr[1000];
	int s;
	int num_primes = 0;
	long long n;
	int count = 0;
	for(int i = 0; i < 1000; i++)
	{
		arr[i] = 0;
	}
    
	 for(int i=0; i < 1000 ; i++)
    {
       bool prim = true; 
       for(int j=2;j<= sqrt(i) || i == 0 || i == 1;j++)
        {
        	
            if(i % j  == 0|| i == 0 || i == 1)
            {
            	prim = false;
            	break;
            	
            }
     	}
     	if(prim == true)
     		{
     			 arr[i] = 1;
     		}
    }


	while(cin >> s >> n)
	{
	srand(s);
	num_primes = 0;
	for(int k = 0; k < n; k++)
    {
    	int num = rand()%1000;
    	if(arr[num] == 1)
    	{
    //		cout << num << endl;
    //		cout << arr[num];
    		num_primes++;
    	}
    }
       	 	cout << num_primes<< endl;
	}
	return 0;
}







