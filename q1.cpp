#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input1.txt", "r", stdin);
	//for writing output to output.txt file
	freopen("output1.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	while (n > 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cout << " " << n;

	}

}