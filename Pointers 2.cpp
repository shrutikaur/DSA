/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
#include <stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    int *p;
    p=(int *)malloc(5*sizeof(int));     /* p=new int[5] in c++ */
    p[0]=12; p[1]=32; p[2]=11; p[3]=88; p[4]=7;
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }

    return 0;
}
