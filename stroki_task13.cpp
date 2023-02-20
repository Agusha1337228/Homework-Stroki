/*
Составить алгоритм, исключающий все слова "плохо" из текста
*/

#include <iostream>
#include <string>

int main(){
    std::string text;
    std::string bword = "плохо";
    std::getline(std::cin, text);
    int pos = 0;

    for(int i = 0; i < text.length(); i++){
        pos == text.find(bword);
        if(pos == std::string::npos)
            break;
        text.erase(pos, 6);
    }

    std::cout << text;
    return 0;
}