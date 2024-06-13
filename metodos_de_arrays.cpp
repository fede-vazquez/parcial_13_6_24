#include <iostream>
#include <vector>

using namespace std;

int main(){

    // Crear un array con 5 elementos y mostrar
    vector<int> numeros = {1, 2, 3, 4, 5};
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Agregar 2 elementos al final y mostrar
    numeros.push_back(6);
    numeros.push_back(7);
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }
    cout << endl;

    // Eliminar el tercero y mostrar
    numeros.pop_back();

    vector<int> auxiliar;

    for(int i = 0; i < numeros.size(); i++){
        if(i!=2){
            auxiliar.push_back(numeros[i]);
        }
    }
    numeros = auxiliar;

    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << " ";
    }

    return 0;
}
