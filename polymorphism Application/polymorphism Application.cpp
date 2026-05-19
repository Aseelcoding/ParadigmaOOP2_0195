

#include <iostream>
using namespace std;
class Person {
public:
    virtual void message() {
        cout << "Message from person" << endl;
    }
};

int main()
{
    std::cout << "Hello World!\n";
}

