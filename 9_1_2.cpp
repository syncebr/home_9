//Введите строку. Замените каждую пару символов “.,” на символ ‘;’. 
#include <iostream>
#include <Windows.h>
using namespace std;

void zamena(char* str) {
	while (*str) {
		if (*str == '.' && *(str+1)==',') {
			*str = ';';
			char *tmp = str + 1;
			while (*tmp) {
				*tmp = *(tmp + 1);
				tmp++;
			}
		}
		str++;
	}
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 128;
	char str[N];
	cout << " Введите строку : ";
	gets_s(str, N);
	cout << str << endl;
	zamena(str);
	cout << " Изменнённая строка : " << str << endl;
	system("pause");
	return 0;
}
