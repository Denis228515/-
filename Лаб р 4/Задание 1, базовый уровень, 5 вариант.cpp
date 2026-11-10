#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);
	int rating;
	cout << "Введите оценку (1-5): ";
	cin >> rating;
	switch (rating) {
	case 1:
		cout << "Плохо" << endl;
		break;
	case 2:
		cout << "Неудовлетворительно" << endl;
		break;
	case 3:
		cout << "Удовлетворительно" << endl;
		break;
	case 4:
		cout << "Хорошо" << endl;
		break;
	case 5:
		cout << "Отлично" << endl;
		break;
	default:
		cout << "Ошибка введите число от 1 до 5!" << endl;
		break;
	}
	return 0;
}
