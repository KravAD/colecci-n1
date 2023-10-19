#include <iostream>
#include <iostream>
#include "Estudiante.h"

int g = 20;
int suma(int a, int b) {
    return a + b;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;

    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;


    Persona persona;

    persona.setNombre("Pablo");
    persona.setEdad(21);
    persona.setGenero("Femenino");

    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    Estudiante estudiante;

    estudiante.setNombre("Pedro");
    estudiante.setEdad(21);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("Primero de Educación Secundaria Obligatoria");

    std::cout << "Características del estudiante:" << std::endl;
    std::cout << "Nombre: " << estudiante.getNombre() << std::endl;
    std::cout << "Edad: " << estudiante.getEdad() << std::endl;
    std::cout << "Genero: " << estudiante.getGenero() << std::endl;
    std::cout << "Grado: " << estudiante.getGrado() << std::endl;

    return 0;

}
