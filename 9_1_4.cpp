/*Вводится строка, которая состоит из слов, разделенных одним или несколькими пробелами. Найти и распечатать самое длинное слово; */

#include <iostream>
#include <Windows.h>
using namespace std;

void longestWord(char* ptr) {
	int k = 0; //счетчик числа слов
	int counter=0;
	int tmp=0;
	char *tmpPtr;
	while (*ptr != '\0')
	{
		while (*ptr == ' ') ptr++; //пропустить пробелы перед словом
		if (*ptr != '\0') //есть начало слова
			counter = 0;
		while (*ptr != ' '&&*ptr != '\0')//пока не конец слова
		{
			counter++;
			ptr++;
		}
		if (counter > tmp) {
			tmp = counter;
			tmpPtr = ptr - tmp-1;
		}
	}
	cout << "самое большое слово= ";
	cout << tmpPtr;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int N = 128;
	char str[N];
	cout << " Введите строку : ";
	gets_s(str, N);
	cout << str << endl;
	longestWord(str);
	//cout << " Изменнённая строка : " << str << endl;
	system("pause");
	return 0;
}
