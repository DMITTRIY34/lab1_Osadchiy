#include <iostream>
#include <limits>


using namespace std;


struct Pipe
{
    string name; // название
    float length; // длина
    int diameter; // диаметр
    bool inRepair; // в ремонте
};

struct Ks
{
    string name; // название
    int countWorkshop; // количество цехов
    int countWorkshopInWork; // количество цехов в работе
    string other; // класс станции
};

int InputInt() {
    int num;
    while (true) {
        cin >> num;
        if (cin.fail() or num <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Ошибка: Введено некорректное значение. Попробуйте снова" << endl;
            cout << "Ввод: ";
        }
        else {
            return num;
        }
    }
}

float InputFloat() {
    float num;
    while (true) {
        cin >> num;
        if (cin.fail() or num <= 0) {
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
            cout << "Ошибка: Введено некорректное значение. Попробуйте снова" << endl;
            cout << "Ввод: ";
        }
        else {
            return num;
        }
    }
}

void menu() {
    setlocale(LC_ALL, "Russian");
    while (true)
    {
        int number;

        cout << "1. Добавить трубу" << endl;
        cout << "2. Добавить КС" << endl;
        cout << "3. Просмотр всех объектов" << endl;
        cout << "4. Редактировать трубу" << endl;
        cout << "5. Редактировать КС" << endl;
        cout << "6. Сохранить" << endl;
        cout << "7. Загрузить" << endl;
        cout << "8. Выход" << endl;
        cout << "Выберите действие: ";

        number = InputInt();

        switch (number) {
        case 1:
        {

            break;
        }
        case 2:
        {

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {

            break;
        }
        case 5:
        {

            break;
        }
        case 6:
        {

            break;
        }
        case 7:
        {

            break;
        }
        case 0:
        {
            cout << "Выход из программы!";
        }
        default:
            cout << "Попробуйте ввести ещё раз, такого числа нет!\n" << endl;
            break;
        };
    };
};

int main()
{
    Pipe pipe;
    Ks ks;
    menu();
    return 0;
}

