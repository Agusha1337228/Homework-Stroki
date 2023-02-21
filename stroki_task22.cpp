/*
    Исключить из строки группы символов, расположенные между символами «/*» и «*/   /* включая границы. Предполагается, что нет вложенных скобок.
*/

#include <iostream>
#include <string>


int main(){
    std::string text;
    std::getline(std::cin, text);
    
    while((text.find("/*")!=-1) && (text.find("*/")!=-1))
        text.erase(text.find("/*"), text.find("*/") - text.find("/*") + 2);

    std::cout << text;
}