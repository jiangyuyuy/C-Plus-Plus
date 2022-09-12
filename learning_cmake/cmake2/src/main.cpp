#include "User.h"
#include<iostream>

int main(){
    auto *user = new User("Jiang");
    std::cout << user->get_name() << std::endl;
    return 0;
}