#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <limits>
#include "Sell.h"

std::string compactor;
std::string rank;

int main() {
	SetProcessDPIAware();
	std::cout << "Do you have a booter cookie?" << std::endl;
	std::string cookie;
	std::getline(std::cin, cookie);
	system("cls");
	if (cookie == "Yes" || cookie == "yes") {
		std::cout << "Coal, Flawless Sapphire" << std::endl;
		std::string choose;
		std::getline(std::cin, choose);
		system("cls");
		if (choose == "Coal" || choose == "coal") {
			system("cls");
			selloffercoal();
		}

		if (choose == "Flawless Sapphire" || choose == "flawless sapphire") {
			std::cout << "Do your account have vip or higher" << std::endl;
			std::getline(std::cin, rank);
			system("cls");
			if (rank == "Yes" || rank == "yes") {
				sellofferfs();
			}

			else {
				std::cout << "Do you have Flawless Sapphire in your compactor" << std::endl;
				std::getline(std::cin, compactor);
				system("cls");
				if (compactor == "Yes" || compactor == "yes") {
					compactsellofferfs();
				}

				else {
					std::cout << "Put a Flawless Sapphire into your compactor" << std::endl;
					std::cout << "This window will close in 5 seconds" << std::endl;
					Sleep(5000);
					return 0;
				}
			}
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