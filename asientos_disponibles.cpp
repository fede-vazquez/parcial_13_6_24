#include <iostream>
#include <vector>

using namespace std;

// Crear funcion asiendosDisponibles.
// Toma como parametro un vector de enteros y el numero que quiere la persona.
// Devuelve un mensaje si el asiento esta o no disponible

void asientosDisponibles(int asientos[], int asientoBuscado){

    // Iterar la lista de asientos
    int asiento = 0;
    while(asientos[asiento] != NULL){
        // Preguntar si el asiento existe o no. Y mostrar un mensaje para cada caso.
        if(asientoBuscado == asientos[asiento]){
            cout << "Felicitaciones, el asiento numero " << asientoBuscado << " esta disponible";
            return;
        }
        asiento++;
    }

    cout << "Lo sentimos, el asiento numero " << asientoBuscado << " esta ocupado, pero aun quedan " << asiento << " asientos disponibles";

}

int main(){

    // Creamos la lista de asientos disponibles.
    int asientos[] = {15, 28, 44, 45, 70};

    // Le pedimos al usuario el asiento que quiere.
    int asientoRequerido = 0;
    cout << "Ingrese el numero del asiento que desea ocupar: ";
    cin >> asientoRequerido;

    // Ejecutamos asientosDisponibles() pasando esos datos como parámetros.
    asientosDisponibles(asientos, asientoRequerido);

    return 0;
}
