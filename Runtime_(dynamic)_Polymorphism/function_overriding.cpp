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
    
    //calling the virtual function sound for each object
    //the function called is based on the object type
    dog.sound();
    cat.sound();
    cow.sound();
    
    return 0;
}