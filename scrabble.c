#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Puntos asignados a cada letra del alfabeto
int PUNTOS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int calcular_puntaje(string palabra);

int main(void)
{
    // Obtener palabras de entrada de ambos jugadores
    string palabra1 = get_string("Jugador 1: ");
    string palabra2 = get_string("Jugador 2: ");

    // Puntuar ambas palabras
    int puntaje1 = calcular_puntaje(palabra1);
    int puntaje2 = calcular_puntaje(palabra2);

    // Para hacer: Imprimir al ganador
}

int calcular_puntaje(string palabra)
{
    // Para Hacer: Calcula y devuelve el puntaje de la palabra dada
}