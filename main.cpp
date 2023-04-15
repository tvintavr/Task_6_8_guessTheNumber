#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);

    std::cout<<"Загадайте число\n";

    int min = 0;
    int max = 63;
    int mid = (max+min) / 2;

    std::string result;

    while ((max-min)>0) {
        std::cout << "Ваше число больше " << mid << "?\n";
        std::cout << "Введите только + или -\n";
        std::cin >> result;
        if (result=="+") {
            min=mid+1;
        } else {
            max=mid;
        }
        mid=(max+min)/2;
    }

    std::cout<<"Ваше число: "<<min;

}
