#include <string>
#include <iostream>
class person;
class food;

class person{
public:
    person (std::string n, int h): hunger(h), name(n) {}
    person (std::string n) : name(n), hunger(0) {}
    person () = default;
    int eat (const class food&);
    int eat (const class food&,const  size_t);
    inline int getHunger() const {
        return this->hunger;       
    }
    inline std::string getName() const {
        return this->name;
    }
private:
    int hunger = 100;
    std::string name;
};

class food{
public:
    food (std::string n, int h): name(n), hungerRestore(h) {}
    food (std::string n): name(n) {}
    food () = default;
    inline int getRestoreValue() const {
        return this->hungerRestore;
    }
    inline std::string getName() const {
        return this->name;
    }
private:
    int hungerRestore;
    std::string name;
};

int person::eat (const class food& f){
    this->hunger += f.getRestoreValue();
    std::cout << f.getName() << "eaten\n";
    return this->hunger;
}

int person::eat (const class food& f, const size_t n){
    this->hunger += (f.getRestoreValue() * n);
    std::cout << f.getName() << "eaten" << n << "times\n";
    return this->hunger;
}