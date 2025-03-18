#include <iostream>

class Animal {
    public:
    //virtual function for making sound
        virtual void sound() {
            std::cout << "Animal makes a sound\n";
        }
};

//derived class Dog
//inherits from the base class Animal
class Dog : public Animal {
    public:
    //overriding the sound function
        void sound() {
            std::cout << "Barks!\n";
        }
};

//derived class Cat
//inherits from the base class Animal
class Cat : public Animal {
    public:
    //overriding the sound function
        void sound() {
            std::cout << "Meows!\n";
        }
};

//derived class Cow
//inherits from the base class Animal
class Cow : public Animal {
    public:
    //overriding the sound function
        void sound() {
            std::cout << "Moos!\n";
        }
};

int main() {
    //creating objects of the derived classes
    Dog dog;
    Cat cat;
    Cow cow;

    //using polymorphism through a pointer to call the sound function
    //using the base class pointer
    Animal* animal1 = &dog;
    Animal* animal2 = &cat;
    Animal* animal3 = &cow;
    
    //calling the virtual function "sound" using the base class pointer
    //calls the sound function of the derived class
    animal1->sound();
    animal2->sound();
    animal3->sound();
    
    return 0;
}