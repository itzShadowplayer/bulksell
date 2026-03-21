#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "PressKey.h"

void bestoffer() {
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

void sax() {
	Sleep(100);
	PressKey('T');
	PressSlash();
	PressKey('S');
	PressKey('A');
	PressKey('X');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(889, 393);
	RightClick();
	Sleep(500);
	MoveMouse(851, 353);
	LeftClick();
	Sleep(100);
	PressKey(VK_ESCAPE);
	Sleep(500);

}
void quicksax() {
	PressKey('T');
	PressKey(VK_UP);
	PressKey(VK_UP);
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(889, 393);
	RightClick();
	Sleep(500);
	MoveMouse(851, 353);
	LeftClick();
}
void quickbestoffer() {
	PressKey('T');
	PressKey(VK_UP);
	PressKey(VK_UP);
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