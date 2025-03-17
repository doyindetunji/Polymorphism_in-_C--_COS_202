#include <iostream>
#include <string>
using namespace std;

class Car {
  private:
    string name;
    int cost;
public:
    Car(string n, int c) : name(n), cost(c) {}
    
    bool operator==(const Car &c) const {
        return (name == c.name && cost == c.cost);
    }
};

int main() {
    Car c1("Toyota", 10000);
    Car c2("Toyota", 10000);
    Car c3("Benz", 20000);
    
    if(c1 == c2) {
        cout << "c1 and c2 are equal" << endl;
    } else {
        cout << "c1 and c2 are not equal" << endl;
    }
    
    if(c1 == c3) {
        cout << "c1 and c3 are equal" << endl;
    } else {
        cout << "c1 and c3 are not equal" << endl;
    }
    
    return 0;
}