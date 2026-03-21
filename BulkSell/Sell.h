#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "Commands.h"

int count = 1;

void selloffercoal() {
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	while (count < 22) {
		std::cout << count << std::endl;
		std::cout << std::endl;
		std::cout << "opening sack" << std::endl;
		saxcoal();
		std::cout << "closing sack" << std::endl;
		std::cout << "opening bazaar" << std::endl;
		offercoal();
		std::cout << "closing bazaar" << std::endl;
		Sleep(500);

		system("cls");
		count++;
	}
	system("cls");
	std::cout << "done closing in 5 seconds" << std::endl;
	Sleep(5000);
}

void sellofferfs() {
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	while (count < 22) {
		std::cout << count << std::endl;
		std::cout << std::endl;
		std::cout << "compacting sapphire" << std::endl;
		recipefs();
		std::cout << "opening bazaar" << std::endl;
		offerfs();
		std::cout << "closing bazaar" << std::endl;
		Sleep(500);
		system("cls");
		count++;
	}
}

void compactsellofferfs() {
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	while (count < 22) {
		std::cout << count << std::endl;
		std::cout << std::endl;
		std::cout << "opening sack" << std::endl;
		saxfs();
		std::cout << "compacting gemstones" << std::endl;
		compactgemstone();
		std::cout << "closing sack" << std::endl;
		std::cout << "opening bazaar" << std::endl;
		offerfs();
		std::cout << "closing bazaar" << std::endl;
		Sleep(500);

		system("cls");
		count++;
	}
}