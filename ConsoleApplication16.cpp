#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "");

	std::cout << "[+]  Календарь" << endl;
	std::cout << "[1]  Январь" << endl;
	std::cout << "[2]  Февраль" << endl;
	std::cout << "[3]  Март" << endl;
	std::cout << "[4]  Апрель" << endl;
	std::cout << "[5]  Май" << endl;
	std::cout << "[6]  Июнь" << endl;
	std::cout << "[7]  Июль" << endl;
	std::cout << "[8]  Август" << endl;
	std::cout << "[9]  Сентябрь" << endl;
	std::cout << "[10] Октябрь" << endl;
	std::cout << "[11] Ноябрь" << endl;
	std::cout << "[12] Декабрь" << endl;

	int month, day;
	cout << "Выберите месяц: ";
	cin >> month;
	cout << endl;


	switch (month) {


	case 1:
		cout << "Выбран месяц Январь\n";
		break;
	case 2:
		cout << "Выбран месяц Февраль\n";
		break;
	case 3:
		cout << "Выбран месяц Март\n";
		break;
	case 4:
		cout << "Выбран месяц Апрель\n";
		break;
	case 5:
		cout << "Выбран месяц Май\n";
		break;
	case 6:
		cout << "Выбран месяц Июнь\n";
		break;
	case 7:
		cout << "Выбран месяц Июль\n";
		break;
	case 8:
		cout << "Выбран месяц Август\n";
		break;
	case 9:
		cout << "Выбран месяц Сентябрь\n";
		break;
	case 10:
		cout << "Выбран месяц Октябрь\n";
		break;
	case 11:
		cout << "Выбран месяц Ноябрь\n";
		break;
	case 12:
		cout << "Выбран месяц Декабрь\n";
		break;
	default:
		cout << "Неправильно введен номер месяца!\n";
		return 0;
	}
    string month1;
	month1 = "Декабря";
	std::cout << "Выберите день: ";
	cin >> day;

	switch (day) {
	case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10:
	case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20:
	case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30:
	case 31: break;
	default: cout << "Неправильно введен день!\n";
		return 0;
	}
	std::cout << "[+] " << "Календарь" << ": " << day << " " << month1;



}