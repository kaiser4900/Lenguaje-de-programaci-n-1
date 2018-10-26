#include<iostream>
using  namespace  std ;
int  main () {
    char letter = 97;
    int num = letter;

    for(int i=0; i < 26;i++) {
        cout << letter << " su valor numerico es: " << num << "\n" ;
        letter ++;
        num ++;
    }
    cout<<"\n";
    cout<<"\n";
    letter= 65;
    num= letter;
    for(int i=0;i<26;i++){
    	
    	cout<<letter<<" su valor numerico es: "<< num <<"\n";
    	letter++;
    	num++;
    }
    cout<<"\n";
    cout<<"\n";
    letter= 0;
    num= letter;
    for(int i=0;i<10;i++){
    	
    	cout<<letter<<" su valor numerico es: "<< num <<"\n";
    	letter++;
    	num++;
    }
    
}
