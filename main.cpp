#include <iostream>
#include <string>

int main(){
    bool yeet;
    std::string answer;
    char* value[1]{nullptr};
    do{
        std::cout<<"Would you like to login or signup(L/S): ";
        std::cin>>answer;
        answer == "L" ||answer == "S" ? yeet = false : yeet = true; 
    
        if(yeet == true){
            std::cout<<"Invalid Input!"<<std::endl;
        }

    }while(yeet);

    if(answer == "L"){

        std::string username;
        std::string password;

        std::cout<<"Welcome back!"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Enter your following details."<<std::endl;
        std::cout<<"Username: ";
        std::cin>>username;
        std::cout<<"Password: ";
        std::cin>>password;
    }
    if(answer == "S"){

        std::string username;
        std::string password;

        std::cout<<"Welcome Back!"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"Enter your following details."<<std::endl;
        std::cout<<"Username: ";
        std::cin>>username;
        std::cout<<"Password: ";
        std::cin>>password;
    }
}
