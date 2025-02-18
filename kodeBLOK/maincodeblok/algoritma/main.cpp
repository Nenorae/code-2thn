#include <iostream>

int main() {
    std::string str = "";

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= 1 - i; j++) {
            str += '-';
        }
        for (int j = 0; j <= i; j++) {
            str += '*';
        }
        str += '\n';
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j <= i; j++) {
            str += ' ';
        }
        for (int j = 0; j <= 1 - i; j++) {
            str += '*';
        }
        str += '\n';
    }

    std::cout << str;

return 0;
}
