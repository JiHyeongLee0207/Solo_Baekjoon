#include<iostream>
using namespace std;

int main() {
	int input;
	cin >> input;
	while (input--) {
		for (int i = input; i >= 0; i--)
			cout << "*";
		cout << endl;
	}
}