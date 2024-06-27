#include <iostream>
#include <Windows.h>
using namespace std;

void UserInput(char* str, int size) {
    cout << "¬вед≥ть вираз: ";
    cin.getline(str, size);
}

bool Correct(const char* str) {
    int ident = 0;

    for (int i = 0;str[i] != '\0';i++) {
        if (str[i] == '(') {
            ident++;
        }
        else if (str[i] == ')') {
            ident--;
            if (ident < 0) {
                return false;
            }
        }
    }
    return ident == 0;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int Size = 100;
    char user[Size];
    UserInput(user, Size);

    if (Correct(user)) {
        cout << "ƒужки розм≥щен≥ коректно" << endl;
    }
    else {
        cout << "ƒужки розм≥щен≥ не коректно" << endl;
    }
}