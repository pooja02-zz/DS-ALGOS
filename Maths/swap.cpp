/// SWAPPING

#include<iostream>

using namespace std;

/***
 Using the third variable
 Problem: It uses an extra variable
***/
void swapUsingThirdVariable() {
    cout << endl << "swapUsingThirdVariable" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    int t = A;
    A = B;
    B = t;
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

/***
 Using + and - operator in a single line
 Problem: In case of large integer, addition operation may overflow
***/
void swappingWithOutThirdVaribale1() {
    cout << endl << "swappingWithOutThirdVariable1" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    B = A + B - (A = B);
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

/***
 Using + and - operator
 Problem: In case of large integer, addition operation may overflow
***/
void swappingWithOutThirdVaribale2() {
    cout << endl << "swappingWithOutThirdVariable2" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    A = A + B;
    B = A - B;
    A = A - B;
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

/***
 Using * and / operator
 Problem: In case of large integer, multiplication operation may overflow
          Both numbers can never be 0 as division by 0 is not defined
***/
void swappingWithOutThirdVaribale3() {
    cout << endl << "swappingWithOutThirdVariable3" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    A = A * B;
    B = A / B;
    A = A / B;
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

/***
 Using the XOR operator
 Probably the best solution
***/
void swappingWithOutThirdVaribale4() {
    cout << endl << "swappingWithOutThirdVariable4" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    A = A ^ B;
    B = A ^ B;
    A = A ^ B;

    /// One line representation
    /// A ^= B ^= A ^= B;
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

/***
 Using the inbuilt swap method,
 not recommended for interviews.
***/
void swappingWithOutThirdVaribale5() {
    cout << endl << "swappingWithOutThirdVariable5" << endl;
    int A = 5, B = 9;
    cout << "Before swapping: A=" << A << " B=" << B << endl;
    swap(A, B);
    cout << "After swapping: A=" << A << " B=" << B << endl;
}

int main() {
    swapUsingThirdVariable();
    swappingWithOutThirdVaribale1();
    swappingWithOutThirdVaribale2();
    swappingWithOutThirdVaribale3();
    swappingWithOutThirdVaribale4();
    swappingWithOutThirdVaribale5();
    return 0;
}

/***
    OUTPUT
    swapUsingThirdVariable
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

    swappingWithOutThirdVariable1
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

    swappingWithOutThirdVariable2
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

    swappingWithOutThirdVariable3
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

    swappingWithOutThirdVariable4
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

    swappingWithOutThirdVariable5
    Before swapping: A=5 B=9
    After swapping: A=9 B=5

***/
