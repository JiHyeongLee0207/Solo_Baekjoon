#include<iostream>
#include<string>
using namespace std;

int main() {
	int n, sum = 0;
	string s;
	cin >> n; cin >> s;
	for (int i = 0; i < n; i++)
		sum += (int)s[i] - 48;

	cout << sum;
}