//funzione swap

#include <iostream>

using namespace std;

int funzione (int* a, int* b) {

int swap=100;

swap=*a;
*a=*b;
*b=swap;

cout<<a<<"   "<<b<<endl;
return 0;
}


int main (){

int a=67;
int b=87;


funzione (&a ,&b);
cout<<a<<"   "<<b<<endl;


return 0;
}



