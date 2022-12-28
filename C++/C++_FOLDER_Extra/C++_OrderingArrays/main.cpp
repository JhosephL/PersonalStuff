
// Preprocessor directives
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;



// Global statements
const int T = 8;


// Prototypes
void fCreacionDeVectores(int vUno[], int vDos[], int vTres[], int vCuatro[], int vX[]);
void fSeleccion(int v[]);
void fBurbuja(int v[]);
void fInsercion(int v[]);
void fQuickSort(int v[]);
void fX(int v[]);


int main() {

    cout << "\n\n\n" << endl ;


    int vect[T], vect2[T], vect3[T], vect4[T], vectX[T];


    fCreacionDeVectores(vect, vect2, vect3, vect4, vectX);


    cout << endl << "-- Ordenamiento de Cadenas: --" << endl << endl;


    fSeleccion(vect);

    cout << "De menor a mayor. Cadena 1" << endl;

    for (int i = 0; i < T; i++) {
        if (i != T - 1)
            cout << vect[i] << " | ";
        else
            cout << vect[i] << endl;
    }

    cout << endl;



    fBurbuja(vect2);

    cout << "De mayor a menor. Cadena 2" << endl;

    for (int i = 0; i < T; i++) {
        if (i != T - 1)
            cout << vect2[i] << " | ";
        else
            cout << vect2[i] << endl;
    }

    cout << endl;



    fInsercion(vect3);

    cout << "De menor a mayor. Cadena 3" << endl;

    for (int i = 0; i < T; i++) {
        if (i != T - 1)
            cout << vect3[i] << " | ";
        else
            cout << vect3[i] << endl;
    }

    cout << endl;



    fQuickSort(vect4);

    cout << "De mayor a menor. Cadena 4" << endl;

    for (int i = 0; i < T; i++) {
        if (i != T - 1) {
            cout << vect4[i] << " | ";
        }
        else {
            cout << vect4[i] << endl;
        }
    }

    cout << endl;



    fX(vectX);

    cout << "De menor a mayor. Cadena X" << endl;

    for (int i = 0; i < T; i++) {
        if (i != T - 1)
            cout << vectX[i] << " | ";
        else
            cout << vectX[i] << endl;
    }


    cout << "\n\n\n\tALL RIGHT!\n\n\n\n" << endl ;

return 0;
}


void fCreacionDeVectores(int vUno[], int vDos[], int vTres[], int vCuatro[], int vX[]) {

    srand(time(NULL));



    cout << "Cadena 1" << endl;

    for (int i = 0; i < T; i++) {
        vUno[i] = rand() % 10;
    }

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (vUno[i] == vUno[ii]) {
                vUno[ii] += 10;
            }
        }

        if (i != T - 1) {
            cout << vUno[i] << " | ";
        }
        else {
            cout << vUno[i] << endl;
        }
    }

    cout << endl;



    cout << "Cadena 2" << endl;

    for (int i = 0; i < T; i++) {
        vDos[i] = rand() % 10;
    }

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (vDos[i] == vDos[ii])
                vDos[ii] += 10;
        }

        if (i != T - 1)
            cout << vDos[i] << " | ";
        else
            cout << vDos[i] << endl;
    }

    cout << endl;



    cout << "Cadena 3" << endl;

    for (int i = 0; i < T; i++) {
        vTres[i] = rand() % 10;
    }

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (vTres[i] == vTres[ii])
                vTres[ii] += 10;
        }

        if (i != T - 1)
            cout << vTres[i] << " | ";
        else
            cout << vTres[i] << endl;
    }

    cout << endl;




    cout << "Cadena 4" << endl;

    for (int i = 0; i < T; i++) {
        vCuatro[i] = rand() % 10;
    }

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (vCuatro[i] == vCuatro[ii])
                vCuatro[ii] += 10;
        }

        if (i != T - 1)
            cout << vCuatro[i] << " | ";
        else
            cout << vCuatro[i] << endl;
    }

    cout << endl;



    cout << "Cadena X" << endl;

    for (int i = 0; i < T; i++) {
        vX[i] = rand() % 10;
    }

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (vX[i] == vX[ii]) {
                vX[ii] += 10;
            }
        }

        if (i != T - 1) {
            cout << vX[i] << " | ";
        }
        else {
            cout << vX[i] << endl;
        }
    }

    cout << endl;

}


void fSeleccion(int v[]) {

    int aux = 0, cont = 0;

    for (int i = 0; i < T; i++) {

        aux = v[i];
        cont = i;

        for (int ii = i + 1; ii < T; ii++) {

            if (v[ii] < aux) {
                aux = v[ii];
                cont = ii;
            }

        }

        v[cont] = v[i];
        v[i] = aux;

    }

}


void fBurbuja(int v[]) {

    int aux = 0;

    for (int i = 0; i < T; i++) {
        for (int ii = i + 1; ii < T; ii++) {
            if (v[i] < v[ii]) {
                aux = v[i];
                v[i] = v[ii];
                v[ii] = aux;
            }
        }
    }

}


void fInsercion(int v[]) {

    int num = 0, pos = 0, temp = 0;

    for (int i = 1; i < T; i++) {

        num = v[i];
        pos = i;

        while (v[pos - 1] > num && pos - 1 >= 0) {

            temp = num;
            v[pos] = v[pos - 1];
            v[pos - 1] = temp;
            pos--;

        }

    }

}


void fQuickSort(int v[]) {

    int mayor = v[0], menor = v[T - 1], auxMayor = 0, auxMenor = 0;

    for (int i = 0; i < T; i++) { // Encuentra el mayor y lo colocar al principio del vector.
        if (v[i] > mayor) {
            mayor = v[i];
            auxMayor = v[0];
            v[0] = mayor;
            v[i] = auxMayor;
        }
    }

    for (int i = 0; i < T; i++) { // Encuentra el menor y lo coloca al final del vector.
        if (v[i] < menor) {
            menor = v[i];
            auxMenor = v[T - 1];
            v[T - 1] = menor;
            v[i] = auxMenor;
        }
    }


    int pos = 0;
    srand(time(NULL));
    pos = 1 + rand() % (T - 1);
    int pibote = v[pos];

    int auxCont = 0, cont = 1;

    for (int i = 0; i < T - 1; i++) {
        if (pibote < v[i + 1]) {
            auxCont = v[cont];
            v[cont] = pibote;
            v[pos] = auxCont;
            cont++;
        }
    }


}


void fX(int v[]) { // No sé que hice pero funciona.

    int aux = 0;

    for (int i = 0; i < T; i++) {
        if (v[i - 1] > v[i]) {
            aux = v[i];
            v[i] = v[i - 1];
            v[i - 1] = aux;
            i -= 2;
        }
    }

}



// To rest -->      