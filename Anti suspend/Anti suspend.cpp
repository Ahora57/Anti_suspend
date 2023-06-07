#include "remote_protect.h"

int main()
{
	std::cout << "Is start success remote shell ->\t" << remote_protect::protect_process() << '\n';
	while (true)
	{
		if (GetAsyncKeyState(VK_SPACE))
		{
			std::cout << "Test!\n";
			Sleep(500);
		}

	}
}