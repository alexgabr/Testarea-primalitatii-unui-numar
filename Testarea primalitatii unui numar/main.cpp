#include <iostream>
using namespace std;

int main() {
	int n, d = 2;
	bool p = true;

	cin >> n;
	while (d < n / 2 && p) {
		if (n % 2 == 0) {
			p = false;
		}
		else {
			d += 1;
		}
	}
	if (p) {
		cout << "Numarul este prim.";
	}
	else {
		cout << "Numarul nu este prim.";
	}
}