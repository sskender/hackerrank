// g++ -std=c++11
#include <iostream>
#include <string>

void am_convert(std::string time)
{
	std::string beginning = time.substr(0, 2);
	if (beginning == "12")
		std::cout << "00" << time.substr(2, (time.length() - 4));
	else
		std::cout << time.substr(0, (time.length() - 2));
}

void pm_convert(std::string time)
{
	int hour = std::stoi(time.substr(0, 2));
	if (hour + 12 > 23)
		std::cout << "12" << time.substr(2, (time.length() - 4));
	else
		std::cout << hour + 12 << time.substr(2, (time.length() - 4));
}

int main()
{
	std::string stupid;
	std::cin >> stupid;     // hh:mm:ssAM

	if (stupid[stupid.length() - 2] == 'A')
		am_convert(stupid);
	else if (stupid[stupid.length() - 2] == 'P')
		pm_convert(stupid);
		
	return 0;
}