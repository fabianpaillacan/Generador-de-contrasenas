#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void contrasena() {
    int largo;
    const char diccionario[] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
        'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
        'w', 'x', 'y', 'z',
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
        'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
        'W', 'X', 'Y', 'Z',
        '!', '#', '@', '%', '&', '*', '-', '{', '}', '[', ']',
        '1', '2', '3', '4', '5', '6', '7', '8', '9'
    };
    const int tamanoDiccionario = sizeof(diccionario) / sizeof(diccionario[0]);

    cout << "De cuantos caracteres se quiere la contrasena? ";
    cin >> largo;

    srand(time(0));

    cout << "Contrasena generada: ";
    for (int i = 0; i < largo; i++) {
        int indiceAleatorio = rand() % tamanoDiccionario;
        cout << diccionario[indiceAleatorio];
    }
    cout << endl;
}

int main() {
    cout << "Generador de contrasenas" << endl;
    contrasena();
    return 0;
}