#include <iostream>
#include <windows.h>

void SetColor(int color)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

int main()
{
   
    SetColor(3);

  
    std::cout << R"(
___    _  _______  ______   ___    __
|  |  | ||       ||    _ | |   |  |  |                      
|   |_| ||    ___||   |_|| |   |  |  |  _____________________
|       ||   |___ |      | |   |  |  |  |   __ winscan __    |              
|  _    ||    ___||    __| |   |_ |  |  |____________________|                    
| | |   ||   |___ |   |    |        |
|_|  |__||_______||___|     |______|  
                                                          
)" << std::endl;

    
    std::cout << "版权内容：nepu_scia" << std::endl;

    return 0;
}


