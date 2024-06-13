#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Solicitamos las dimensiones de 2 matrices, y las guardamos.
    int fila1, fila2, columna1, columna2;

    cout<< "Ingrese las filas de la matriz 1: ";
    cin >> fila1;
    cout<< "Ingrese las columnas de la matriz 1: ";
    cin >> columna1;

    cout<< "Ingrese las filas de la matriz 2: ";
    cin >> fila2;
    cout<< "Ingrese las columnas de la matriz 2: ";
    cin >> columna2;

    // Crear las matrices
    int matriz1[fila1][columna1];
    int matriz2[fila2][columna2];


    // Preguntar si las dos matrices son del mismo orden.
    if(fila1 == fila2 && columna1 == columna2){

        // Llenar ambas matrices con los datos del usuario.
        for(int i = 0; i < fila1; i++){
            for(int j = 0; j < columna1; j++){
                cout << "Ingresa el dato para matriz1[" << i << "][" << j << "]";
                cin >> matriz1[i][j];
            }
        }
        for(int i = 0; i < fila2; i++){
            for(int j = 0; j < columna2; j++){
                cout << "Ingresa el dato para matriz2[" << i << "][" << j << "]";
                cin >> matriz2[i][j];
            }
        }

        // Crear y llenar la matriz suma con la suma de cada elemento de las otras matrices.
        int suma[fila1][columna1];
        for(int i = 0; i < fila1; i++){
            for(int j = 0; j < columna1; j++){
                suma[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }


        cout << endl << "La suma de las matrices es: " << endl;
        // imprimir la matriz resultante.
        for(int i = 0; i < fila1; i++){
            for(int j = 0; j < columna1; j++){
                cout << suma[i][j] << " ";
            }
            cout << endl;
        }


    } else {
        cout << "Las matrices no tienen el mismo orden, no se pueden sumar.";
    }

    return 0;
}
