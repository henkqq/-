
#include <iostream>
using namespace std;

int main() {
    setlocale(0, "");
    int choice, type, size, width, height, length;
    char texture;

    cout << "[ + ] Программа - \"Геометрические фигуры\"\n\n";
    cout << "[ 1 ] Линия\n";
    cout << "[ 2 ] Квадрат\n";
    cout << "[ 3 ] Прямоугольник\n";
    cout << "[ 4 ] Треугольник\n\n";
    cout << "[ + ] Выберите фигуру: ";
    cin >> choice;

    if (choice == 1) {
       
        cout << "\n\n[ + ] Фигура: \"Линия\"\n\n";
        cout << "[ 1 ] Горизонтальная\n";
        cout << "[ 2 ] Вертикальная\n\n";
        cout << "[ + ] Выберите тип: ";
        cin >> type;

        cout << "\n[ + ] Длина: ";
        cin >> length;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << "\n\n[ + ] Результат:\n\n";

        if (type == 1) {
         
            for (int i = 0; i < length; i++) {
                cout << texture << " ";
            }
            cout << "\n";
        }
        else if (type == 2) {
          
            for (int i = 0; i < length; i++) {
                cout << texture << "\n";
            }
        }
    }
    else if (choice == 2) {
     
        cout << "\n\n[ + ] Фигура: \"Квадрат\"\n\n";
        cout << "[ 1 ] Заполненный\n";
        cout << "[ 2 ] Пустой\n\n";
        cout << "[ + ] Выберите тип: ";
        cin >> type;

        cout << "\n[ + ] Размер: ";
        cin >> size;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << "\n\n[ + ] Результат:\n\n";

        if (type == 1) {
          
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << texture << " ";
                }
                cout << "\n";
            }
        }
        else if (type == 2) {
           
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << "\n";
            }
        }
    }
    else if (choice == 3) {
       
        cout << "\n\n[ + ] Фигура: \"Прямоугольник\"\n\n";
        cout << "[ 1 ] Заполненный\n";
        cout << "[ 2 ] Пустой\n\n";
        cout << "[ + ] Выберите тип: ";
        cin >> type;

        cout << "\n[ + ] Ширина: ";
        cin >> width;
        cout << "[ + ] Высота: ";
        cin >> height;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << "\n\n[ + ] Результат:\n\n";

        if (type == 1) {
           
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    cout << texture << " ";
                }
                cout << "\n";
            }
        }
        else if (type == 2) {
           
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                        cout << texture << " ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << "\n";
            }
        }
    }
    else if (choice == 4) {

        cout << "\n\n[ + ] Фигура: \"Треугольник\"\n\n";
        cout << "[ 1 ] Равнобедренный\n\n";
        cout << "[ + ] Выберите тип: ";
        cin >> type;

        cout << "\n[ + ] Высота: ";
        cin >> height;
        cout << "[ + ] Текстура: ";
        cin >> texture;

        cout << "\n\n[ + ] Результат:\n\n";

        if (type == 1) {
 
            for (int i = 1; i <= height; i++) {
                for (int j = 0; j < height - i; j++) {
                    cout << " ";
                }
                for (int j = 0; j < 2 * i - 1; j++) {
                    cout << texture;
                }
                cout << "\n";
            }
        }
    }

    return 0;
}