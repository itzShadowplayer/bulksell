#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <limits>
#include <fstream>
#include "Sell.h"

int main() {
	SetProcessDPIAware();
	std::cout << "Have you read the ReadMe?" << std::endl;
	std::string readme;
	std::getline(std::cin, readme);
	if (readme == "Yes" || readme == "yes") {
		std::cout << "Do you have a booter cookie?" << std::endl;
		std::string cookie;
		std::getline(std::cin, cookie);
		system("cls");
		if (cookie == "Yes" || cookie == "yes") {
			std::cout << "Coal, DiaCoal, Flawless Sapphire" << std::endl;
			std::string choose;
			std::getline(std::cin, choose);
			system("cls");
			if (choose == "Coal" || choose == "coal") {
				system("cls");
				selloffercoal();
				return 0;
			}
			if (choose == "DiaCoal" || choose == "diacoal") {
				std::cout << "Do you have VIP rank?" << std::endl;
				std::string rank;
				std::getline(std::cin, rank);
				system("cls");
				if (rank == "Yes" || rank == "yes") {
					selldiacoal();
					return 0;
				}
				else {
					std::cout << "This script requires VIP rank" << std::endl;
					std::cout << "This window will close in 5 seconds" << std::endl;
					Sleep(5000);
					return 0;
				}
			}

			if (choose == "Flawless Sapphire" || choose == "flawless sapphire") {
				std::cout << "Do you have VIP rank?" << std::endl;
				std::string rank;
				std::getline(std::cin, rank);
				system("cls");
				if (rank == "Yes" || rank == "yes") {
					sellofferfs();
					return 0;
				}

				else {
					std::cout << "This script requires VIP rank" << std::endl;
					std::cout << "This window will close in 5 seconds" << std::endl;
					Sleep(5000);
					return 0;
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
	}

	else {
		system("cls");
		std::cout << "Do you want to open the ReadMe on github" << std::endl;
		std::string opengh;
		std::getline(std::cin, opengh);
		if (opengh == "Yes" || opengh == "yes") {
			std::cout << "Opening github" << std::endl;
			ShellExecute(0, 0, L"https://github.com/itzShadowplayer/bulksell/blob/main/README.md", 0, 0, SW_SHOW);
			std::cout << "This window will close in 5 seconds" << std::endl;
			Sleep(5000);
			return 0;
		}
		
		else {
			std::cout << "This window will close in 5 seconds" << std::endl;
			Sleep(5000);
			return 0;
		}
	}
	Sleep(10000);
	return 0;
}