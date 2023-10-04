// 17 Вариант, 4 задание
//
// Дан номер дня недели. Необходимо вывести название дня недели, 1 — «понедельник», 2 — «вторник» и т. д.
//

#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    
    // Запрос ввода номера дня недели
    cout << "Введите номер дня недели (1-7): ";
    cin >> dayNumber;

    // Проверка номера дня и вывод соответствующего названия
    switch (dayNumber) {
        case 1:
            cout << "Понедельник" << endl;
            break;
        case 2:
            cout << "Вторник" << endl;
            break;
        case 3:
            cout << "Среда" << endl;
            break;
        case 4:
            cout << "Четверг" << endl;
            break;
        case 5:
            cout << "Пятница" << endl;
            break;
        case 6:
            cout << "Суббота" << endl;
            break;
        case 7:
            cout << "Воскресенье" << endl;
            break;
        default:
            cout << "Неправильный номер дня недели!" << endl;
            break;
    }

    return 0;
}


