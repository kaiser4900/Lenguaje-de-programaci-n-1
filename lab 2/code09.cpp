#include<iostream>
using  namespace  std ;
int  main () {
    char letter;
    letter = 97 ;
    int num = letter;

    while (letter < 123 ) {
        cout << letter << " su valor numerico es: " << num << "\n" ;
        letter ++;
        num ++;
    }
}
