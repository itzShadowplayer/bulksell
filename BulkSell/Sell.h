#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "Commands.h"

int count = 2;

void selloffercoal() {
	std::cout << "SellOffer" << std::endl;
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);

	std::cout << "opening sacks" << std::endl;
	sax();
	std::cout << "closing sacks" << std::endl;
	std::cout << "opening bazaar" << std::endl;
	bestoffer();
	std::cout << "closing bazaar" << std::endl;
	Sleep(500);

	system("cls");
	while (count < 20) {
		std::cout << count << std::endl;
		std::cout << std::endl;
		std::cout << "opening sacks" << std::endl;
		quicksax();
		std::cout << "closing sacks" << std::endl;
		std::cout << "opening bazaar" << std::endl;
		quickbestoffer();
		std::cout << "closing bazaar" << std::endl;
		Sleep(500);

		system("cls");
		count++;
	}
	system("cls");
	std::cout << "done closing in 5 seconds" << std::endl;
	Sleep(5000);
}