#include "auto.h"

bool active;

void AutoClicker::start()
{
	int initalDelay = 3000;
	int clickInterval = 100;
	POINT cursorPos;

	std::cout << "starting with delay " << initalDelay << " and interval " << clickInterval << "\n";

	Sleep(initalDelay);

	while (active)
	{
		if (GetCursorPos(&cursorPos))
		{
			SetCursorPos(cursorPos.x, cursorPos.y);

			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

			Sleep(clickInterval);
		}
	}
}

void AutoClicker::setActive(bool isActive)
{
	active = isActive;
}