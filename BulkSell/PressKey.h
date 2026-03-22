#include <iostream>
#include <Windows.h>
#include <string>
#include <random>
#include <stdio.h>

int RandomDelay(int min, int max) {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	std::uniform_int_distribution<> dist(min, max);
	return dist(gen);
}

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

void ShiftLeftClick() {
	INPUT input = { 0 };

	// Shift down
	input.type = INPUT_KEYBOARD;
	input.ki.wVk = VK_SHIFT;
	SendInput(1, &input, sizeof(INPUT));

	Sleep(50);

	// Mouse down
	input.type = INPUT_MOUSE;
	input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &input, sizeof(INPUT));

	Sleep(50);

	// Mouse up
	input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &input, sizeof(INPUT));

	Sleep(50);

	// Shift up
	input.type = INPUT_KEYBOARD;
	input.ki.wVk = VK_SHIFT;
	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT));
}

void RandomLeftClick() {
	INPUT inputs[2] = { 0 };

	Sleep(RandomDelay(50, 80)); // random delay between 30–80 ms

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