#include <iostream>
#include<vector>
using namespace std;

//NO LO ENTIENDO :,V


//define X como una estructura
    struct X{
        //define f() como una función dentro de la estructura x
        void f(int x){
            // crea la estructura y dentro de la funcion f() y dentro de la estructura x
            struct Y {
                /*la estructura Y llama a la función f() para que retorne 1
                si no ingresa ningun valor como parametro*/

                int f(){
                    return 1;
                }
                //define m
                int m;
            };
            //define m fuera de la estructura y
            int m;
            /*le asigna el valor que se ingresa en el parametro de la funcion
            a la variable m y a la variable m2*/
            m=x; Y m2;

            return f(m2, f());
        }
        int m;
        void g(int m){
            if(m)
                f(m+2);
            else{
                g(m+2); }
        }
        //estoy poniendo struct aqui
        struct X(){}
        void m3(){}
        void main(){
            X a; a.f(2);
        }
    };
    int main(){
        g(0);
        f();
        f1(0,1);
         X x;
        x.main();
         x.m3();
    }

