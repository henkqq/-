#include <iostream>
#include <string>
#include <limits>
using namespace std;
void clearScreen() {
#ifdef _WIN32
	system("cls");
#else
	system("clear");
#endif
}
void handleInvalidInput() {
	cout << "Invalid input. Please try again." << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
int main() {
	int figureChoice = 0;
	int typeChoice = 0;
	int size = 0;
	int width = 0;
	int height = 0;
	char texture = '#';
	char space = '.';

	while (true) {
		cout << "[+] Program - \"geometrical figures\"" << endl;
		cout << "[1] Line" << endl;
		cout << "[2] Square" << endl;
		cout << "[3] Box" << endl;
		cout << "[4] Cross" << endl;
		cout << "[5] Plus" << endl;
		cout << "[6] Triangle" << endl;
		cout << "[7] Grid" << endl;
		cout << "[8] Rhomb" << endl;
		cout << "[9] Snake" << endl;
		cout << "[10] Recursive Square" << endl;
		cout << "[+] Choose figure: ";

		if (!(cin >> figureChoice) || (figureChoice != 1 && figureChoice != 2 && figureChoice != 3 && figureChoice != 4 && figureChoice != 5 && figureChoice != 6 && figureChoice != 7 && figureChoice != 8 && figureChoice != 9 && figureChoice != 10)) {
			handleInvalidInput();
			continue;
		}
		break;
	}
	string figureName = (figureChoice == 1) ? "Line" : "Square";
	if (figureChoice == 10) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Recursive Square" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 9) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Snake" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 8) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Rhomb" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 7) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Grid" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 6) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Triangle" << "\"" << endl;
			cout << "[1] Filled" << endl;
			cout << "[2] Empty" << endl;
			cout << "[+] Choose type: ";
			if (!(cin >> typeChoice) || (typeChoice != 1 && typeChoice != 2)) {
				handleInvalidInput();
				continue;
			}
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 5) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Plus" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 4) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Cross" << "\"" << endl;
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 3) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Box" << "\"" << endl;
			cout << "[1] Filled" << endl;
			cout << "[2] Empty" << endl;
			cout << "[+] Choose type: ";
			if (!(cin >> typeChoice) || (typeChoice != 1 && typeChoice != 2)) {
				handleInvalidInput();
				continue;
			}
			break;
		}
		while (true) {
			cout << " [+] Width: ";
			if (!(cin >> width) || width <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
		while (true) {
			cout << " [+] Height: ";
			if (!(cin >> height) || height <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 2) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Square" << "\"" << endl;
			cout << "[1] Filled" << endl;
			cout << "[2] Empty" << endl;
			cout << "[+] Choose type: ";
			if (!(cin >> typeChoice) || (typeChoice != 1 && typeChoice != 2)) {
				handleInvalidInput();
				continue;
			}
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 1) {
		while (true) {
			clearScreen();
			cout << "[+] Figure: \"" << "Line" << "\"" << endl;
			cout << "[1] Horizontal" << endl;
			cout << "[2] Vertical" << endl;
			cout << "[+] Choose type: ";
			if (!(cin >> typeChoice) || (typeChoice != 1 && typeChoice != 2)) {
				handleInvalidInput();
				continue;
			}
			break;
		}
		while (true) {
			cout << " [+] Size: ";
			if (!(cin >> size) || size <= 0) {
				handleInvalidInput();
				continue;
			}
			break;
		}
	}
	if (figureChoice == 1) {
		if (typeChoice == 1) {
			for (int i = 0; i < size; i++) {
				cout << texture;
			}
			cout << endl;
		}
		else if (typeChoice == 2) {
			for (int i = 0; i < 1; i++) {
				for (int i = 0; i < size; i++) {
					cout << texture;
				}
				cout << endl;
			}
		}
	}
	else if (figureChoice == 2) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (typeChoice == 1 || i == 0 || i == size - 1 || j == 0 || j == size - 1) {
					cout << texture;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 3) {
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				if (typeChoice == 1 || i == 0 || i == height - 1 || j == 0 || j == width - 1) {
					cout << texture;
				}
				else {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 4) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if ((i == j) || ((size - 1 - i) == j)) {
					cout << texture;
				}
				else {
					cout << " ";
				}
			}
			cout << "\n";
		}
	}
	else if (figureChoice == 5) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == size / 2 || j == size / 2) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 6) {
		for (int i = 1; i <= size; i++) {
			for (int j = 1; j <= i; j++) {
				if (typeChoice == 1) {
					cout << texture;
				}
				else if (typeChoice == 2) {
					if (j == 1 || j == i || i == size) {
						cout << texture << " ";
					}
					else {
						cout << "  ";
					}
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 7) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i % 2 != 0 || j % 2 != 0) {
					cout << texture << " ";
				}
				else {
					cout << ". ";
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 8) {

		int mid = size / 2;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (abs(i - mid) + abs(j - mid) <= mid) {
					cout << texture << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 9) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i % 2 == 0) {
					cout << texture << " ";
				}
				else {
					if ((i / 2) % 2 == 0) {
						if (j == size - 1) cout << texture << " ";
						else cout << space << " ";
					}
					else {
						if (j == 0) cout << texture << " ";
						else cout << space << " ";
					}
				}
			}
			cout << endl;
		}
	}
	else if (figureChoice == 10) {
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				int dist = min({ i, j, size - 1 - i, size - 1 - j });

				if (dist % 2 == 0) {
					cout << texture << " ";
				}
				else {
					cout << space << " ";
				}
			}
			cout << endl;
		}
	}

	return 0;
}