https://www.onlinegdb.com/edit/AF40iq2EU#editor_1/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
    char x;
};
int main()
{
    struct Rectangle r={10,5};
    
    cout<<r.length<<endl;
    cout<<r.breadth<<endl;
    
    r.length=15;
    r.breadth=10;
    
    printf("%lu",sizeof(r));
    

    return 0;
}

