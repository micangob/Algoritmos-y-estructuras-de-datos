/*Programar 2 funciones
1. revertir que recibe un arreglo enteros de cualquier dimensión y lo revierte, es decir, lo que está 
en el primer elemento lo intercambia con el último, el segundo con el ante último y así 
sucesivamente.
2. Transpuesta recibe una matriz cuadrada y la convierte en su transpuesta. Como en matrices no 
podemos hacerlo genérico, la haremos para el caso de dimensión 5x5.
A su vez en el main mostrarán los vectores (vec5 y vec10) seguidos de como quedan después de llamar
a la función revertir. Y luego mostrarán la matriz y continuación su transpuesta.
El código a realizar es corto, pero presten especial atención a no realizar intercambios innecesarios. */

#include <iostream>

using namespace std;

//funcion que Revierte
void invertir(int vec[], int dim){
    int aux;   
    for (int i=0; i<dim/2; i++){
        aux = vec[i];
        vec[i] = vec[dim-i-1];
        vec[dim-i-1] = aux;
        }
}

//funcion que transpone la matriz.
void transpuesta(int m[][5],int dfil){ 
    
     const int dcol = 5;

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[j][i] << '\t';//<--diferencia con la funcion mostrarmat
                cout << endl;
        }

}

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }

}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    cout<<"Vectores originales: "<<endl;
        mostrarvec(vec5, dim5);
        mostrarvec(vec10, dim10);

        invertir(vec5,dim5);
        invertir(vec10, dim10);
        
    cout<<"Vectores Invertidos:  "<<endl;
        mostrarvec(vec5, dim5);
        mostrarvec(vec10, dim10);
    
    cout<<"Matriz original: "<<endl;
        mostrarmat(matriz,dim5);
        
    cout<<"Matriz transpuesta: "<<endl;
        transpuesta(matriz, dim5);
    
    return 0;
}