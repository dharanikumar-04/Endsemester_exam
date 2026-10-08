#include <iostream>
#include <queue>
using namespace std;
int main() {
queue<int> q;
int choice;
q.push(101);
q.push(102);
q.push(103);
do {
cout << "\n1. Next Patient";
cout << "\n2. Exit";
cout << "\nEnter choice: ";
cin >> choice;
if (choice == 1) {
if (q.empty()) {
cout << "Queue is empty!\n";
} else {
cout << "Calling patient: "
<< q.front() << endl;
q.pop();
if (q.empty()) {
cout << "Queue is empty!\n";
}
}
}
} while (choice != 2);
return 0;
}
