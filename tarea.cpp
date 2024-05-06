#include <iostream>
#include <string>

using namespace std;

// Función para convertir la letra ingresada a su respectivo color
string obtenerColor(char letra) {
    switch (letra) {
        case 'R':
            return "Rojo";
        case 'Y':
            return "Amarillo";
        case 'B':
            return "Azul";
        case 'W':
            return "Blanco";
        case 'K':
            return "Negro";
        case 'C':
            return "Cian";
        case 'G':
            return "Verde";
        default:
            return "Color desconocido";
    }
}

int main() {
    char letra;

    // Pedir al usuario que ingrese una letra
    cout << "Ingrese una letra para obtener su color: ";
    cin >> letra;

    // Convertir la letra ingresada a mayúscula para asegurar la comparación
    letra = toupper(letra);

    // Obtener y mostrar el color correspondiente
    string color = obtenerColor(letra);
    cout << "El color correspondiente a la letra " << letra << " es: " << color << endl;

    return 0;
}
    