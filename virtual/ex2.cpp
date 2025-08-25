#include <iostream>
using namespace std;

class Pet {
protected:
    string name;
public:
    Pet(string n) : name(n) {}

    virtual void Sound() = 0; 
    virtual void Show() = 0; 
    virtual void Type() = 0;
};

class Dog : public Pet {
public:
    Dog(string n) : Pet(n) {}
    void Sound() override { cout << "Гав-гав!" << endl; }
    void Show() override { cout << "Ім'я: " << name << endl; }
    void Type() override { cout << "Це собака" << endl; }
};

class Cat : public Pet {
public:
    Cat(string n) : Pet(n) {}
    void Sound() override { cout << "Мяу!" << endl; }
    void Show() override { cout << "Ім'я: " << name << endl; }
    void Type() override { cout << "Це кішка" << endl; }
};

class Parrot : public Pet {
public:
    Parrot(string n) : Pet(n) {}
    void Sound() override { cout << "Карр!" << endl; }
    void Show() override { cout << "Ім'я: " << name << endl; }
    void Type() override { cout << "Це папуга" << endl; }
};

class Hamster : public Pet {
public:
    Hamster(string n) : Pet(n) {}
    void Sound() override { cout << "Пі-пі!" << endl; }
    void Show() override { cout << "Ім'я: " << name << endl; }
    void Type() override { cout << "Це хом'як" << endl; }
};

int main() {
    Dog d("Бакс");
    Cat c("Перс");
    Parrot p("Батон");
    Hamster h("хомік");

    d.Show(); d.Type(); d.Sound();
    cout << endl;

    c.Show(); c.Type(); c.Sound();
    cout << endl;

    p.Show(); p.Type(); p.Sound();
    cout << endl;

    h.Show(); h.Type(); h.Sound();

    return 0;
}
