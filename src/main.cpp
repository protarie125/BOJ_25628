#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int a, b;
	cin >> a >> b;

	const auto& k = a / 2;
	cout << ((k < b) ? k : b);

	return 0;
}