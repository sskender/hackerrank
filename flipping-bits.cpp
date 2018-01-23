#include <iostream>
int main()
{
	int T; std::cin >> T;
	while (T--) {
		unsigned x; std::cin >> x;
		std::cout << ~x << std::endl;
	}
	return 0;
}