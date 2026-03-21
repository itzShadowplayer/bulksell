#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <limits>
#include "Sell.h"


int main() {
	SetProcessDPIAware();
	std::cout << "Do you have a booter cookie?" << std::endl;
	std::string cookie;
	std::getline(std::cin, cookie);
	system("cls");
	if (cookie == "yes") {
		std::cout << "Coal, Flawless Sapphire" << std::endl;
		std::string choose;
		std::getline(std::cin, choose);
		system("cls");
		if (choose == "Coal") {
			selloffercoal();
		}

		if (choose == "Flawless Sapphire") {
			std::cout << "Flawless Sapphire in development" << std::endl;
			std::cout << "This window will close in 5 seconds" << std::endl;
			Sleep(5000);
			return 0;

		}

		else {
			system("cls");
			std::cout << choose << std::endl;
			std::cout << "Not a choose" << std::endl;
			std::cout << "This window will close in 5 seconds" << std::endl;
			Sleep(5000);
			return 0;
		}
	}
	else {
		std::cout << "This will only work with a bootster cookie" << std::endl;
		std::cout << "This window will close in 5 seconds" << std::endl;
		Sleep(5000);
		return 0;
	}
	Sleep(10000);
	return 0;
}