/*
#include<iostream> // header file for input and output
#include<string> // header file for including strings
#include<cmath> // header file for math functions
*/

#include<bits/stdc++.h> // the universal header file
using namespace std; // think of this as a general convention to avoid using std::

int main(){
    // the c++ programme starts running here
    
    /* Output Functions */
    cout << "Hello World";
    // cout : the print keyword
    // Note - we use ';' after each statement here
    
    cout << endl;
    // endl : keyword to end line (takes us to next line)
    cout << "I am on the next line";
    
    // an alternative to endl is "\n"
    cout << "\n";
    cout << "I am also on the next line";
    cout << endl; // its a good programming practise to leave spaces or end the given line with a line breaker
    
    /* Variables */
    int x; // declaring the variable x as an integer (the c++ data-type to store integers is int)
    x = 10; // assigning the value 10 to x
    int y = 5; // declaring and assigning the value of 5 to integer variable y
    y = x; // copying the value of x into y : now y stores 10
    
    cout << x; // prints the value 10
    cout << endl; 
    cout << y;
    cout << endl; // prints the value 10 again as y became 10
    
    y = 2; // assigning 2 to y
    cout << y << endl; // prints the value of y which is 2. Note we can also combine cout statements like we did here
    
    char c; // the character variable
    c = '?'; // using the single inverted commas for char declaration 'c'
    // c = '??' this is wrong. We can only assign one character to char
    
    string s; // this is a bunch of characters
    s = "Hello World"; // We have assigned the sentence "Hello World" to the string variable s. Not we used " " to declare the sentence
    
    bool b; // boolean variable : can only take true or false values
    b = true;
    cout << b << endl; // this prints 1. True is 1 and False is 0
    b = false;
    
    float f = 1.1; // declaring a decimal datatype and initializing it to 1.1
    f = 3.2; // assigning the value of 3.2 to f
    cout << f << endl; // printing the value of f
    
    /* Input */
    
    int in;
    cin >> in;
    // The keyword to take input in c++ is cin
    // The user enters a number that is taken into the variable in
    
    float fin;
    cin >> fin; // taking input a float variable
    
    char chin;
    cin >> chin; // taking input a char variable
    
    string str;
    cin >> str; // taking input a string variable (this takes the char inputs till a spacebar)
    
    /* Operations */
    int sum = 2 + 3;
    int sub = 2 - 3;
    int mul = 2 * 3;
    int divI = 2 / 3; // this returns an integer approximation to the orignal number. Here the ans is 0.666 which is approximated to 0
    float sumF = 2.0 + 3.1;
    float subF = 2.0 - 3.1;
    float mulF = 2.0 * 3.1;
    float divF = 2.0 / 3.1; // this gives the decimal answer as the container can store decimal answers
    
    int mod = 4 % 3; // this gives the remainder on dividing 4 by 3 which is 1
    cout << mod << endl;
    
    int i = 1;
    i ++; // incrementing the value of i, now i become 1 + 1 = 2
    i ++; // i becomes 2 + 1 = 3
    i --; // decrementing the value of i, now i vecomes 3 - 1 = 2
    i --; // i becomes 2 - 1 = 1
    
    bool great = (2 > 3);
    bool greatEq = (2 >= 3);
    bool less = (2 < 3);
    bool lessEq = (2 <= 3);
    bool equal = (2 == 3);
    bool notEqual = (2 != 3);
    
    bool greatEq2 = great || equal; // OR operator. True when either of the conditions are true
    bool great2 = greatEq && notEqual; // AND operator. True when both the conditions are true
    bool notEqual2 = !(equal); // NOT operator. True when the given condition is false and vice versa
    
    int bitAnd = 1 & 2; // 1 is 01, 2 is 10. Their and is 00
    int bitOr = 1 | 2; // 1 is 01, 2 is 10. Their or is 11 = 3
    int bitXor = 1 ^ 2; // Their xor is also 11 
    int bitXor2 = 1 ^ 3; // 1 is 01, 3 is 11. Their xor is 10 = 2
    
    /* Mathematical operations */
    int ceilValue = ceil(1.2); // gives the ceil of 1.2 = 2
    int floorValue = floor(1.2); // gives the floor of 1.2 = 1
    int maxValue = max(1, 2); // gives the max value of the two numbers = 2
    int minValue = min(1, 2); // gives the min value of the two numbers = 1
    int absValue = abs(-10); // gives the absolute value of the number = 10
    float sqrtValF = sqrt(10); // gives the float value of the sqrt.
    int sqrtValI = sqrt(10); // returns the nearest integer approximation
    int pow2 = pow(2, 31) - 1; // this is the pow function. 2^31 - 1 is the max value of int
    
    int overFlow = pow2 * pow2; // this overflows and gives garbage answers
    cout << overFlow << endl;
    // Hence we use long long which can store higher values
    long long int noOverFlow = pow2 * pow2;
    cout << noOverFlow << endl;
    

    /* Few trick Questions to try out: Check their outputs*/
    int ff = -3.2; // it gets rounded to the absolute value of 3 and then we put the negative sign to get -3
    float ii = 3; // it stores the value 3.0
    bool bb = 1; // this represents true
    char cc = 67; // this stores the character with the ascii value 67 : More on ASCII Values https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
    int xx = 'a'; // stores the ASCII Value of the character a
    int aa = 4 / 2; // stores the value 2
    float dd = 4 / 2; // stores the value 2.0

}