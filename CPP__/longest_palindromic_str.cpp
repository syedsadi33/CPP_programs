#include <bits/stdc++.h>
using namespace std;


void printSubStr(
	string str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		cout << str[i];
}

int longestPalSubstr(string str)
{
	int n = str.size();

	bool table[n][n];

	memset(table, 0, sizeof(table));
    

	int maxLength = 1;

	for (int i = 0; i < n; ++i)
		table[i][i] = true;


	int start = 0;
	for (int i = 0; i < n - 1; ++i) {
		if (str[i] == str[i + 1]) {
			table[i][i + 1] = true;
			start = i;
			maxLength = 2;
		}
	}
	for (int k = 3; k <= n; ++k) {
		// Fix the starting index
		for (int i = 0; i < n - k + 1; ++i) {
			// Get the ending index of substring from
			// starting index i and length k
			int j = i + k - 1;

			// checking for sub-string from ith index to
			// jth index iff str[i+1] to str[j-1] is a
			// palindrome
			if (table[i + 1][j - 1] && str[i] == str[j]) {
				table[i][j] = true;

				if (k > maxLength) {
					start = i;
					maxLength = k;
				}
			}
		}
	}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

	cout << "Longest palindrome substring is: ";
	printSubStr(str, start, start + maxLength - 1);

	// return length of LPS
	return maxLength;
}

// Driver Code
int main()
{
	string str = "forgeeksskeegfor";
	cout << "\nLength is: "
		<< longestPalSubstr(str);
	return 0;
}
