#include<string>

class User{
public:
    User(std::string name_):name(name_){}
    std::string get_name();
private:
    int age;
    std::string name;
};