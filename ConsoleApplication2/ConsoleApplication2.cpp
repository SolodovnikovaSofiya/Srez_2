#include <iostream>
#include <string>


class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& name) : name(name) {}

    virtual void Voice() const {
        std::cout << "Животное издает звук" << std::endl;
    }
};

class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {}

    void Voice() const override {
        std::cout << name << " лает: Гав-гав!" << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {}

    void Voice() const override {
        std::cout << name << " мяукает: Мяу-мяу!" << std::endl;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Animal* animal1 = new Dog("Шарик");
    Animal* animal2 = new Cat("Мурка");

    animal1->Voice();
    animal2->Voice();

    delete animal1;
    delete animal2;

    return 0;
}
