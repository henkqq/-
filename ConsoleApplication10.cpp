#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(0, "");
	string password;
	cout << "Введите пароль: ";
	cin >> password;
	while (password != "12345") {
		cout << "Неверный пароль!" << endl;
		cout << "Введите пароль: ";
		cin >> password;
	}
	cout << "Добро пожаловать!" << endl;
	return 0;
}