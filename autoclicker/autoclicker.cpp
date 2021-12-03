#include<Windows.h>
#include<stdlib.h>
#include<iostream>

// colors not my code 
void setcolor(unsigned short color)
{
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hcon, color);
}


int main()
{
	// Choosing the cps

	int left_cps;
	std::cout << "Cps ?" << std::endl;

	std::cin >> left_cps;


	if (left_cps > 20) {
		std::cout << "cps can not be higher then 20." << std::endl;
		main();
	}

	if (left_cps < 1) {
		std::cout << "cps can not be lower then 1." << std::endl;
		main();
	}
	system("cls");


	bool left_clicker;

	setcolor(4);
	std::cout << "F7 -> ";
	setcolor(14);
	std::cout << "toggle for trolling";

	bool troll_mode = true;


	while (true) {
		// randomizer attempt 
		int left_delay = (2220/ left_cps) / 1;

	
			if (troll_mode == true) {
				if (GetAsyncKeyState(VK_LBUTTON)) {
					HWND Window = GetForegroundWindow(); // Get Window
					if (FindWindowA(("LWJGL"), nullptr) == GetForegroundWindow()) {
						SendMessageW(GetForegroundWindow(), WM_LBUTTONDOWN, MK_LBUTTON, MAKELPARAM(0, 0));
						SendMessageW(GetForegroundWindow(), WM_LBUTTONUP, MK_LBUTTON, MAKELPARAM(0, 0));
						Sleep(rand() % left_delay); // Sleep Delay Time
					}
				}
			}
		
	}
}