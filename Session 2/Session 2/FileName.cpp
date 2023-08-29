#include <iostream>
#include <stack>

using namespace std;
//int main() {
//    stack<int> stack;
//
//    stack.push(21);
//    stack.push(22);
//    stack.push(24);
//    stack.push(25);
//    int num = 0;
//    stack.push(num);
//    stack.pop();
//    stack.pop();
//    stack.pop();
//
//    while (!stack.empty()) {
//        cout << stack.top() << " ";
//        stack.pop();
//    }
//}

int main() {
    stack<int> stack;

    stack.push(5);
    stack.push(10);
    stack.top();
    stack.push(3);
    stack.pop();
    stack.pop();
    stack.push(3);
    stack.push(8);
    stack.push(9);
    stack.top();

 while (!stack.empty()) {
      cout << stack.top() << " ";
      stack.pop();
}