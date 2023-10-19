#include <iostream>
#include "Persona.h"
#include "Estudiante.h"

int g = 20;

int suma(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    std::cout << "Valor de g antes de la función suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g después de la función suma: " << g << std::endl;

    Persona Persona1;
    Persona1.setNombre("Pablo");
    Persona1.setGenero("Masculino");
    Persona1.setEdad(18);

    std::cout << "Detalles de la persona 1: " << std::endl;
    std::cout << "Nombre: " << Persona1.getNombre() << std::endl;
    std::cout << "Genero: " << Persona1.getGenero() << std::endl;
    std::cout << "Edad: " << Persona1.getEdad() << std::endl;

    Estudiante Estudiante1;
    Estudiante1.setNombre("Informatica"); // Corregido el nombre de la carrera
    Estudiante1.setGrado("Informatica"); // Corregido el nombre de la carrera
    Estudiante1.setEdad(18);
    Estudiante1.setGenero("Masculino");
    Estudiante1.mostrarDetalles();

    return 0;
}