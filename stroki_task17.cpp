/*
    Дан массив строк. Упорядочить массив по длине строк
*/

#include <array>
#include <string>
#include <iostream>

int main(){
    std::array <std::string, 5> str;
    std::array <std::string, 5> zam;

    int minstr=-1, maxstr = 0, p = 0;

    for(int i = 0; i < 5; i++){
        std::getline(std::cin, str[i]);
        if(str[i].length() > maxstr)
            maxstr = str[i].length();
        if(minstr == -1)
            minstr = str[i].length();
        else if(str[i].length() < minstr)
            minstr = str[i].length();
    }

    for(int o = minstr; o <= maxstr; o++)
        for(int i = 0; i < 5; i++)
            if(str[i].length() == o){
                zam[p] = str[i];
                p++;
            }
    
    for(int i = 0; i < 5; i++)
        str[i] = zam[i];
    
    std::cout << "\n";
    for(int j = 0; j < 5; j++){
        std::cout << zam[j] << std::endl;
    }
    return 0;
}