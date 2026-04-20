#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. Función para calcular el promedio
float calcularPromedio(const vector<float>& notas) {
    float suma = 0;
    for (float nota : notas) {
        suma += nota;
    }
    return suma / notas.size();
}

// 2. Función para determinar el estado
string determinarEstado(float promedio) {
    if (promedio >= 61)
        return "Aprobado";
    else
        return "Reprobado";
}

// Función extra: categoría del estudiante
string determinarCategoria(float promedio) {
    if (promedio >= 85 && promedio <= 100)
        return "Excelente";
    else if (promedio >= 70)
        return "Bueno";
    else if (promedio >= 61)
        return "Regular";
    else
        return "Deficiente";
}

// 3. Función para mostrar resultados
void mostrarResultado(string nombre, string curso, float promedio, string estado, string categoria) {
    cout << "\n----- RESULTADO FINAL -----" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Curso: " << curso << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Estado: " << estado << endl;
    cout << "Categoria: " << categoria << endl;
}

int main() {
    string nombre, curso;
    int cantidad;

    cout << "Ingrese el nombre del estudiante: ";
    getline(cin, nombre);

    cout << "Ingrese el curso: ";
    getline(cin, curso);

    cout << "Ingrese la cantidad de notas: ";
    cin >> cantidad;

    vector<float> notas(cantidad);

    for (int i = 0; i < cantidad; i++) {
        cout << "Ingrese la nota " << i + 1 << ": ";
        cin >> notas[i];
    }

    float promedio = calcularPromedio(notas);
    string estado = determinarEstado(promedio);
    string categoria = determinarCategoria(promedio);

    mostrarResultado(nombre, curso, promedio, estado, categoria);
    cout << "Rodrigo Adrian Barrios Moneterso";

    return 0;
}