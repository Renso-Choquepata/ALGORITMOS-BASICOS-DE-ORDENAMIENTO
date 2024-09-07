#include <iostream>
using namespace std;

void ordenarBurbuja(int arr[], int n, int &iteraciones) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            iteraciones++; // Contador de iteraciones
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

    ordenarBurbuja(arr, n, iteraciones);

    cout << "Lista ordenada: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Numero total de iteraciones: " << iteraciones << endl;

    return 0;
}
