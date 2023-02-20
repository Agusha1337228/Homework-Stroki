/*
    Составить алгоритм, исключающий из текста "лишние" пробелы. (В тексте должен быть один пробел для разделения слов)
*/

#include <iostream>
#include <string>

int main(){
    std::string text;
    std::string bword = "  ";
    std::getline(std::cin, text);

    int pos = 0;

    for(int i = 0; i < text.length(); i++){
        pos = text.find(bword);
        if(pos == std::string::npos)
            break;
        text.erase(pos,1);
    }

    std::cout << text;
    return 0;
}