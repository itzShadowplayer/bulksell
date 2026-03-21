#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "PressKey.h"

int presser = 0;

void compactgemstone() {
	while (presser < 5) {
		RandomLeftClick();
		presser++;
	}
	PressKey(VK_ESCAPE);
}

// coal
void saxcoal() {
	Sleep(100);
	PressKey('E');
	MoveMouse(817, 547);
	RightClick();
	Sleep(500);
	MoveMouse(851, 353);
	LeftClick();
	Sleep(100);
	PressKey(VK_ESCAPE);
	Sleep(500);
}

void offercoal() {
	Sleep(100);
	PressKey('T');
	PressSlash();
	PressKey('B');
	PressKey('Z');
	PressKey(' ');
	PressKey('E');
	PressKey('N');
	PressKey('C');
	PressKey('H');
	PressKey('A');
	PressKey('N');
	PressKey('T');
	PressKey('E');
	PressKey('D');
	PressKey(' ');
	PressKey('C');
	PressKey('O');
	PressKey('A');
	PressKey('L');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(889, 393);
	LeftClick();
	Sleep(500);
	MoveMouse(1070, 427);
	LeftClick();
	Sleep(500);
	MoveMouse(855, 427);
	LeftClick();
	Sleep(500);
	MoveMouse(961, 427);
	LeftClick();
}

// sapphire
void saxfs() {
	Sleep(100);
	PressKey('E');
	MoveMouse(817, 547);
	RightClick();
	Sleep(500);
	MoveMouse(1000, 520);
	RightClick();
	Sleep(500);
	MoveMouse(960, 410);
}

void recipefs() {
	Sleep(100);
	PressKey('T');
	PressSlash(); 
	PressKey('R');
	PressKey('E');
	PressKey('C');
	PressKey('I');
	PressKey('P');
	PressKey('E');
	PressKey(' ');
	PressKey('S');
	PressKey('A');
	PressKey('P');
	PressKey('P');
	PressKey('H');
	PressKey('I');
	PressKey('R');
	PressKey('E');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(888, 392);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 465);
	while (presser < 25) {
		RandomLeftClick();
		presser++;
	}
	PressKey(VK_ESCAPE);
}
void offerfs() {
	Sleep(100);
	PressKey('T');
	PressSlash();
	PressKey('B');
	PressKey('Z');
	PressKey(' ');
	PressKey('S');
	PressKey('A');
	PressKey('P');
	PressKey('P');
	PressKey('H');
	PressKey('I');
	PressKey('R');
	PressKey('E');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(960, 400);
	LeftClick();
	Sleep(500);
	MoveMouse(1070, 427);
	LeftClick();
	Sleep(500);
	MoveMouse(855, 427);
	LeftClick();
	Sleep(500);
	MoveMouse(961, 427);
	LeftClick();
}