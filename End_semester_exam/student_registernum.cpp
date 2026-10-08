#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name;
    int regno;
    Student(string n, int r) {
        name = n;
        regno = r;
    }
    void display() {
        cout << name << " " << regno << endl;
    }
};
int main() {
    Student s1("gopi", 114);
    Student s2("Dharsan", 162);
    s1.display();
    s2.display();
    return 0;
}
