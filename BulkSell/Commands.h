#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>
#include "PressKey.h"

int presser = 0;

void npcsell() {
	Sleep(100);
	PressKey('T');
	PressSlash();
	PressKey('T');
	PressKey('R');
	PressKey('A');
	PressKey('D');
	PressKey('E');
	PressKey('S');
	PressKey(VK_RETURN);
	Sleep(500);

	//horbar
	MoveMouse(815, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(852, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(889, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(925, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(956, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(999, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1033, 713);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1069, 713);
	ShiftLeftClick();
	Sleep(500);

	//row 1
	MoveMouse(852, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(889, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(925, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(956, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(999, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1033, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1069, 599);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1105, 599);
	ShiftLeftClick();
	Sleep(500);

	//row 2
	MoveMouse(815, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(852, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(889, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(925, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(956, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(999, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1033, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1069, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1069, 635);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1105, 635);
	ShiftLeftClick();
	Sleep(500);

	//row 3
	MoveMouse(815, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(852, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(889, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(925, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(956, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(999, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1033, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1069, 671);
	ShiftLeftClick();
	Sleep(500);
	MoveMouse(1105, 671);
	ShiftLeftClick();
	Sleep(500);
}

// compact
void compactcoal() {
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
	MoveMouse(890, 400);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 470);
	ShiftLeftClick();
	Sleep(500);
	LeftClick();
	PressKey(VK_ESCAPE);
}

void compactdia() {
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
	PressKey('D');
	PressKey('I');
	PressKey('A');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(850, 400);
	LeftClick();
	Sleep(500);
	MoveMouse(890, 430);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 470);
	ShiftLeftClick();
	Sleep(500);
	LeftClick();
	Sleep(500);
	MoveMouse(925, 537);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 470);
	ShiftLeftClick();
	Sleep(500);
	LeftClick();
	PressKey(VK_ESCAPE);
}

// diamonds

void saxdia() {
	Sleep(100);
	PressKey('E');
	MoveMouse(817, 547);
	RightClick();
	Sleep(500);
	MoveMouse(996, 355);
	LeftClick();
	Sleep(100);
	PressKey(VK_ESCAPE);
	Sleep(500);
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
	PressKey('C');
	PressKey('O');
	PressKey('A');
	PressKey('L');
	PressKey(VK_RETURN);
	Sleep(500);
	MoveMouse(999, 393);
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
void recipefinesap() {
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
	PressKey('F');
	PressKey('I');
	PressKey('N');
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
	PressKey('F');
	PressKey('L');
	PressKey('A');
	PressKey('W');
	PressKey('L');
	PressKey('E');
	PressKey('S');
	PressKey('S');
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
}

void compactsap() {
	Sleep(500);
	MoveMouse(852, 392);
	LeftClick();
	Sleep(500);
	MoveMouse(890, 430);
	LeftClick();
	Sleep(500);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 465);
	Sleep(500);
	ShiftLeftClick();
	Sleep(500);
	LeftClick();
	Sleep(500);
	MoveMouse(921, 536);
	LeftClick();
	Sleep(500);
	MoveMouse(1000, 465);
	Sleep(500);
	ShiftLeftClick();
	Sleep(500);
	LeftClick();
	Sleep(500);
	MoveMouse(921, 536);
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
	Sleep(500);
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