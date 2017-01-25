#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int moves[2][8] = { { 1, 1, -1, -1, 2, -2, 2, -2 },
                    { 2, -2, 2, -2, 1, 1, -1, -1 } };


bool Move(int x, int y , int N, int ** board)
{
	if ((x >= 0 && x < N && y>=0 && y<N) && (board[x][y] == 0))
		return true;
	else
        return false;
}
bool Tour(int x, int y, int start, int n, int ** board)
{
	board[x][y] = start;
	if (start == n*n)
		return true;
	else
	{
		for (int i = 0; i < 8; i++)
			if ((Move(x + moves[0][i], y + moves[1][i],n,board)) == true)
                if ((Tour(x + moves[0][i], y + moves[1][i], start + 1,n, board)) == true)
                    return true;
		board[x][y] = 0;
	}
	return false;
}
int main()
{
	int n = 0, x = 0, y = 0;
	while (cin >> n >> x >> y) {
		x = n - x;
		y = y - 1;

		int  ** board = new int*[n];

		for (int i = 0; i < n; ++i)
			board[i] = new int[n];

		for (int i = 0; i < n; i++)
		{
			for (int k = 0; k < n; k++)
			{
				board[i][k] = 0;
			}
		}

		Tour(x, y, 1, n, board);
		for (int i =0 ; i<n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << board[i][j]<< " ";
			}
			cout <<  endl;
		}
	}



	return 0;
}
