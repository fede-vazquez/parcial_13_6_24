#include <iostream>

using namespace std;

// Funci�n miniCompilador() que tome como parametro un string.
// Devuelve una cadena con el resultado de las operacionesa

/*
    Las operaciones del lenguaje son las siguientes:
    "#" Incrementa el valor num�rico en 1.

    "@" Decrementa el valor num�rico en 1.

    "*" Multiplica el valor num�rico por s� mismo.

    "&" Imprime el valor num�rico actual.

    El valor num�rico inicial es 0 y las operaciones
    deben aplicarse en elorden en que aparecen en la cadena de s�mbolos.
*/

// Crea funcion miniCompilador()
// toma como parametro un string, y devuelve un string
string miniCompilador(const string& secretMessage){

    // Creamos variable con el valor num�rico, y una con la cadena resultante.
    int valorNumerico = 0;
    string resultado = "";

    // Iteramos el string
    for(char values : secretMessage){
        // Preguntamos si cual de los signos es.
        // Hacemos la operacion necesaria.
        switch(values){
            case '#':
                valorNumerico++;
                break;
            case '@':
                valorNumerico--;
                break;
            case '*':
                valorNumerico = valorNumerico * valorNumerico;
                break;
            case '&':
                resultado = resultado + to_string(valorNumerico);
                break;
        }
    }

    // Retornamos la cadena.
    return resultado;

}

int main(){

    // Creamos variable con el mensaje que vamos a compilar.
    string cadena = "&###@&*&###@@##@##&######@@#####@#@#@#@##@@@@@@@@@@@@@@@*&&@@@@@@@@@####@@@@@@@@@#########&#&##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@##@@&";

    // Ejecutamos la funci�n miniCompilador() con ese mensaje como par�metro
    // Guardando lo que devuelve la misma en una variable.
    string cadenaResultado = miniCompilador(cadena);

    // Mostramos el resultado.
    cout << cadenaResultado;

    return 0;
}
