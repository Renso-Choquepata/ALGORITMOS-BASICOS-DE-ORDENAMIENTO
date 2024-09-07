#include <iostream>
using namespace std;

void ordenarInsercion(int arr[], int n, int &iteraciones) {
    for (int i = 1; i < n; i++) {
        int clave = arr[i];
        int j = i - 1;

        // Mover los elementos del arreglo que son mayores que la clave
        // una posición adelante de su posición actual
        while (j >= 0 && arr[j] > clave) {
            arr[j + 1] = arr[j];
            j--;
            iteraciones++; // Contador de iteraciones
        }
        arr[j + 1] = clave;
        iteraciones++; // Se cuenta también la última iteración
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

    ordenarInsercion(arr, n, iteraciones);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Numero total de iteraciones: " << iteraciones << endl;

    return 0;
}
