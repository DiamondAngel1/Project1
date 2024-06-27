#include <iostream>
#include <Windows.h>
using namespace std;

void UserInput(char* str, int size) {
    cout << "¬вед≥ть вираз: ";
    cin.getline(str, size);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int Size = 100;
    char user[Size];
    UserInput(user, Size);

}