/*
Missing Number

You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.
5

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
2314
Print the missing number.
*/




#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

//#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	//freopen("input1.txt", "r", stdin);
	//for writing output to output.txt file
	//freopen("output1.txt", "w", stdout);
//#endif

	ll n, s = 0;
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		int a;
		cin >> a;
		s += a;
	}
	cout << n*(n + 1) / 2 - s;

}
