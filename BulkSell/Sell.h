#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include <limits>
#include "Commands.h"

int count = 0;
int repeat;

void selloffercoal() {
	std::cout << "Enter the amout off orders it will make" << std::endl;
	std::cout << "The maxium number off orders is 21" << std::endl;
	std::cin >> repeat;
	std::cout << "It will repeat " << repeat << " times before it stops" << std::endl;
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	while (count < repeat) {
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
	std::cout << "Enter the amout off orders it will make" << std::endl;
	std::cout << "The maxium number off orders is 21" << std::endl;
	std::cin >> repeat;
	system("cls");
	std::cout << "It will repeat " << repeat << " times before it stops" << std::endl;
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	while (count < repeat) {
		std::cout << count << std::endl;
		std::cout << std::endl;
		std::cout << "compacting sapphire" << std::endl;
		recipefs();
		compactsap();
		std::cout << "opening bazaar" << std::endl;
		offerfs();
		std::cout << "closing bazaar" << std::endl;
		Sleep(500);
		system("cls");
		count++;
	}
	system("cls");
	std::cout << "done closing in 5 seconds" << std::endl;
	Sleep(5000);
}

void selldiacoal() {
	std::cout << "Enter the amout off orders it will make" << std::endl;
	std::cout << "The maxium number off orders is 21" << std::endl;
	std::cin >> repeat;
	std::cout << "It will repeat " << repeat << " times before it stops" << std::endl;
	std::cout << "You have 5 seconds to tab in to the game" << std::endl;
	Sleep(5000);
	system("cls");
	std::cout << "Compacting coal" << std::endl;
	compactcoal();
	std::cout << "Compacting diamonds" << std::endl;
	compactdia();
	std::cout << "Getting diamonds  from sacks" << std::endl;
	saxdia();
	std::cout << "Selling diamonds" << std::endl;
	npcsell();
	system("cls");
	while (count < repeat) {
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
	std::cout << "done closing in 5 seconds" << std::endl;
	Sleep(5000);
}