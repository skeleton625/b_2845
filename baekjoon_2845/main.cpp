#include <iostream>
using namespace std;

int main() {
	int l, m, i1[5];
	cin >> l >> m;
	for (int i = 0; i < 5; i++) cin >> i1[i];
	for (int i = 0; i < 5; i++) cout << i1[i] - l * m << " ";
	return 0;
}