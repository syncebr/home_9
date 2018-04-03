/*Вводится строка, которая состоит из слов, разделенных одним или несколькими пробелами.
Пробелы могут быть также перед первым и после последнего слова. 
Отредактировать строку: удалить все пробелы перед первым словом и после последнего слова.
Между словами оставить ровно один пробел.*/

#include <iostream>
#include <Windows.h>
using namespace std;


void delElem(char* str) {
	while (*str) {
		*str = *(str + 1);
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
	//удаляем все пробелы сначала
	char* ptr = str;
	while (*ptr == ' ') 
		delElem(ptr);
	
	//удаляем все пробелы в конце
	ptr = str + strlen(str)-1;
	while (*ptr == ' ') {
		delElem(ptr);
		ptr--;
	}
	
	bool flag = true;
	while (flag) {
		char *p = strstr(str, "  ");
		if (p != NULL) {
			delElem(p);
		}
		else flag = false;
	}
	cout << " Изменнённая строка : " << str;
	system("pause");
	return 0;
}
