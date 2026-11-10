#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	char rating;
	cout << "Введите оценку (A-F): ";
	cin >> rating;
	switch (rating) {
	case 'A':
		cout << "Отлично" << endl;
		break;
	case 'B':
		cout << "Хорошо" << endl;
		break;
	case 'C':
		cout << "Удовлетворительно" << endl;
		break;
	case 'D':
		cout << "Неудовлетворительно" << endl;
		break;
	case 'F':
		cout << "Провал" << endl;
		break;
	default:
		cout << "Ошибка введите букву от A до F!" << endl;
		break;
	}
	return 0;
}
