#include <iostream>
#include <Windows.h>
#include <string>
#include <stdio.h>

void PressKey(WORD key) {
	INPUT input = { 0 };

	input.type = INPUT_KEYBOARD;
	input.ki.wVk = key;
	Sleep(100);
	SendInput(1, &input, sizeof(INPUT)); // down
	Sleep(50);                           // small delay
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT)); // up
}

void PressSlash() {
	INPUT inputs[4] = { 0 };
	Sleep(50);
	// Shift down
	inputs[0].type = INPUT_KEYBOARD;
	inputs[0].ki.wVk = VK_SHIFT;
	Sleep(50);
	// 7 down
	inputs[1].type = INPUT_KEYBOARD;
	inputs[1].ki.wVk = '7';
	Sleep(50);
	// 7 up
	inputs[2].type = INPUT_KEYBOARD;
	inputs[2].ki.wVk = '7';
	inputs[2].ki.dwFlags = KEYEVENTF_KEYUP;
	Sleep(50);
	// Shift up
	inputs[3].type = INPUT_KEYBOARD;
	inputs[3].ki.wVk = VK_SHIFT;
	inputs[3].ki.dwFlags = KEYEVENTF_KEYUP;

	SendInput(4, inputs, sizeof(INPUT));
}

void MoveMouse(int x, int y) {
	INPUT input = { 0 };
	input.type = INPUT_MOUSE;

	int screenWidth = GetSystemMetrics(SM_CXSCREEN);
	int screenHeight = GetSystemMetrics(SM_CYSCREEN);

	input.mi.dx = (x * 65535) / screenWidth;
	input.mi.dy = (y * 65535) / screenHeight;

	input.mi.dwFlags = MOUSEEVENTF_MOVE | MOUSEEVENTF_ABSOLUTE;

	SendInput(1, &input, sizeof(INPUT));
}

void LeftClick() {
	INPUT inputs[2] = { 0 };
	Sleep(50);
	inputs[0].type = INPUT_MOUSE;
	inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

	inputs[1].type = INPUT_MOUSE;
	inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;

	SendInput(2, inputs, sizeof(INPUT));
}

void RightClick() {
	INPUT inputs[2] = { 0 };
	Sleep(50);
	inputs[0].type = INPUT_MOUSE;
	inputs[0].mi.dwFlags = MOUSEEVENTF_RIGHTDOWN;

	inputs[1].type = INPUT_MOUSE;
	inputs[1].mi.dwFlags = MOUSEEVENTF_RIGHTUP;

	SendInput(2, inputs, sizeof(INPUT));
}