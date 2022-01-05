#include <windows.h>

void __forceinline PolyMorphic() {
	std::srand(GetTickCount64());
	int x = rand() % 8;
	for (int i = 0; i < x; i++) {

		switch (x) {
		case 0:
			 _asm {
				add eax, x
				sub eax, x
			}
		case 1:
			 _asm {
				add ecx, x
				sub ecx, x
			}
		case 2:
			 _asm {
				inc ecx
				dec ecx
			}
		case 3:
			 _asm {
				mov eax, eax
				sub eax, x
				add eax, x
			}

		case 4:
			 _asm {
				mov ecx, ecx
				sub ecx, x
				add ecx, x
			}
		case 5:
			 _asm {
				sub eax, 1
				inc eax
			}
		case 6:
			 _asm {
				xor eax, eax
				mov eax, eax
			}
		case 7:
			 _asm {
				pop ecx
				push ecx
			}
		case 8:
			 _asm {
				dec eax
				add eax, 1
			}
		}
	}
}
