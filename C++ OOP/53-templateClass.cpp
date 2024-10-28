// default template class

// Template class with default arguments

#include <iostream>
#include <string>

using namespace std;

template <class T = int, class U = float>

class cricket
{
    T var1;
    U var2;

public:
    cricket(T v1, U v2)
    {
        var1 = v1;
        var2 = v2;
    }
    void display()
    {
        cout << var1 << endl;
        cout << var2 << endl;
    }
};

int main()
{
    cricket<int, float> objOne(26, 20.5);
    objOne.display();

    cricket<int, string> objTwo(56, "Babar");
    objTwo.display();

    cricket<> objThree(56, 56.5); // here we didnot set data types so it will take default datatypes
    objThree.display();
}