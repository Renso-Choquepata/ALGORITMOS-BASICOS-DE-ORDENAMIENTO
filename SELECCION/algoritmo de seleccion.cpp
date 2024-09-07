#include <iostream>
using namespace std;

void ordenarSeleccion(int arr[], int n, int &iteraciones) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Suponemos que el primer elemento es el mínimo

        // Buscamos el menor elemento en el resto del arreglo
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            iteraciones++; // Contamos las comparaciones
        }

        // Intercambiamos el mínimo encontrado con el primer elemento no ordenado
        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de elementos: ";
    cin >> n;

    int arr[n];
    cout << "Ingrese los elementos: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int iteraciones = 0; // Inicializamos el contador de iteraciones

    cout << "Lista original: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    ordenarSeleccion(arr, n, iteraciones);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Numero total de iteraciones: " << iteraciones << endl;

    return 0;
}
