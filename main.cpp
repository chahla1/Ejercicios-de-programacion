#include <iostream>
#include "Persona.h"
#include "Estudiante.h"
#include "matematica.h"
#include "funciones.h"
#include <fmt/core.h>

int main() {
    std::cout << "Hola Mundo" << std::endl;
    std::cout << "La suma es: " << suma(5, 3) << std::endl;
    int g = 20;
    std::cout << "Valor de g antes de la funcion suma: " << g << std::endl;
    std::cout << "La suma es: " << suma(5, g) << std::endl;
    std::cout << "Valor de g despues de la funcion suma: " << g << std::endl;

    Persona persona;
    persona.setNombre("Chahla");
    persona.setEdad(19);
    persona.setGenero("Mujer");

    std::cout << "Detalles de la Persona:" << std::endl;
    std::cout << "Nombre: " << persona.getNombre() << std::endl;
    std::cout << "Edad: " << persona.getEdad() << std::endl;
    std::cout << "Genero: " << persona.getGenero() << std::endl;

    Estudiante estudiante;
    estudiante.setNombre("Lisa");
    estudiante.setEdad(19);
    estudiante.setGenero("Femenino");
    estudiante.setGrado("2 de bussines");

    std::cout << "\nDetalles del Estudiante:" << std::endl;
    estudiante.mostrarDetalles();

    int num1 = 10;
    int num2 = 5;

    int resultado_suma = suma(num1, num2);
    int resultado_resta = resta(num1, num2);

    std::cout << "Suma: " << resultado_suma << std::endl;
    std::cout << "Resta: " << resultado_resta << std::endl;
    fmt::print("Resultado de la suma: {}\n", resultado_suma);
    fmt::print("Resultado de la resta: {}\n", resultado_resta);

    double radio = 5.0;
    double area = AREA_CIRCULO(radio);
    std::cout << "Area del círculo: " << area << std::endl;

    return 0;




}