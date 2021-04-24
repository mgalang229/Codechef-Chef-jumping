#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n;
	cin >> n;
	// 'n' + 1, 'n' + 2, 'n' + 3 is equal to 'n' + 6
	// so check if 'n' is multiple of 6 or the remainder 
	// after dividing 'n' by 6 is equal to 1 or 3
	if (n % 6 == 0 || n % 6 == 1 || n % 6 == 3) {
		cout << "yes";
	} else {
		cout << "no";
	}
	cout << '\n';
	return 0;
}
