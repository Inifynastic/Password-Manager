#include <iostream>
#include <string>

char* Pw_DataBase{new(std::nothrow) char[10]};

char newpassword(){
    std::string password;
    char strpw{0};

    std::cout<<"Password: ";
    std::cin>>password;

    
    
}