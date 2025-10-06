#include <iostream>
using namespace std;

class MyComplex {
    int real, imag;

public:
    MyComplex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    MyComplex addComplex(MyComplex c1, MyComplex c2) {
        MyComplex temp;
        temp.real = c1.real + c2.real;
        temp.imag = c1.imag + c2.imag;
        return temp;
    }

    void display() {
        cout << real << "+" << imag << "i" << endl;
    }
};

int main() {
    MyComplex c1(3, 4), c2(2, 5), c3;
    c3 = c3.addComplex(c1, c2);
    cout << "Result of addition: ";
    c3.display();

    return 0;
}
