
#include <bits/stdc++.h>

using namespace std;

#define R 6
#define C 5

void printMaxSubSquare(bool M[R][C])
{
	int S[R][C], Max = 0;
		memset(S, 0, sizeof(S));

	for (int i = 0; i < R;i++)
		for (int j = 0; j < C;j++){
			int Entrie = M[i][j];
			if(Entrie)
				if(j)
					Entrie = 1 + min(S[1][j - 1], min(S[0][j - 1], S[1][j]));

			// Save the last entrie and add the new one
			S[0][j] = S[1][j];
			S[1][j] = Entrie;

			// Keep track of the max square length
			Max = max(Max, Entrie);
		}
	
	// Print the square
	cout << "Maximum size sub-matrix is: \n";
	for (int i = 0; i < Max; i++, cout << '\n')
		for (int j = 0; j < Max;j++)
			cout << "1 ";
}

// Driver code
int main ()
{
	bool M[R][C] = {{0, 1, 1, 0, 1},
					{1, 1, 0, 1, 0},
					{0, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{1, 1, 1, 1, 1},
					{0, 1, 1, 1, 1}};
					
	printMaxSubSquare(M);

	return 0;

	// This code is contributed
	// by Gatea David
}
