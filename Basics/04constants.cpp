#include<iostream>
#include<string>
using namespace std;

#define PI 3.14 
#define TAB '\t'


/*
75         // decimal
0113       // octal
0x4b       // hexadecimal
75         // int
75u        // unsigned int
75l        // long
75ul       // unsigned long 
75lu       // unsigned long
3.14159    // 3.14159
6.02e23    // 6.02 x 10^23
1.6e-19    // 1.6 x 10^-19
3.0        // 3.0  
3.14159L   // long double
6.02e23f   // float  
\n - newline 
\r - carriage return 
\t - tab
\v - vertical tab
\b - backspace
\f - form feed 
\a - alert
\' - single quote 
\" - double quote 
\? - question mark 
\\ - backslash
*/
int main(){
    const double pi = 3.1415926;
    const char tab = '\t';
    const int INF = 10000;
    cout << pi << tab << INF << endl;
    cout << PI << TAB << INF << endl; 
    return 0;
}