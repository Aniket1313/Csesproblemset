/*
Weird Algorithm

Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.
*/




#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	//freopen("input1.txt", "r", stdin);
	//for writing output to output.txt file
	//freopen("output1.txt", "w", stdout);
#endif

	ll n;
	cin >> n;
	cout << n;
	while (n > 1) {
		if (n % 2 == 0)
			n /= 2;
		else
			n = n * 3 + 1;
		cout << " " << n;

	}

}