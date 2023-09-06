#include <stdio.h>
#include <stdlib.h>

#define DIAS 150

typedef struct
{
    char condicion[3];
    float temperatura;
    int hora;
} Dia;

// Prototipos de función
void leerDatos(Dia dias[]);
float menorTemperaturaPostMediodia(Dia dias[], int *diaMenor);
void calcularPromedios(Dia dias[], float promedios[]);
int validarHora(int hora);
float porcentajeTemperaturaHora(Dia dias[], int hora);

int main()
{
    Dia dias[DIAS];
    float promedios[5] = {0}; // s, n, ll, v, t
    int hora, diaMenor;
    float minTemp;

    leerDatos(dias);

    // a. Menor temperatura después del mediodía
    minTemp = menorTemperaturaPostMediodia(dias, &diaMenor);
    printf("La menor temperatura después del mediodía fue %.2f°C en el día %d\n", minTemp, diaMenor + 1);

    // b. Promedio de temperaturas para cada condición
    calcularPromedios(dias, promedios);
    printf("Promedio soleado: %.2f°C\n", promedios[0]);
    printf("Promedio nublado: %.2f°C\n", promedios[1]);
    printf("Promedio lluvioso: %.2f°C\n", promedios[2]);
    printf("Promedio ventoso: %.2f°C\n", promedios[3]);
    printf("Promedio tormentoso: %.2f°C\n", promedios[4]);

    // c. Porcentaje de días con temperatura a una hora determinada
    printf("Ingrese una hora (0-23): ");
    scanf("%d", &hora);
    while (!validarHora(hora))
    {
        printf("Hora no válida. Ingrese nuevamente (0-23): ");
        scanf("%d", &hora);
    }
    printf("El porcentaje de días que registraron la temperatura a las %dhs es: %.2f%%\n", hora, porcentajeTemperaturaHora(dias, hora));

    return 0;
}

void leerDatos(Dia dias[])
{
    for (int i = 0; i < DIAS; i++)
    {
        printf("Día %d\n", i + 1);
        printf("Ingrese la condición del día (s, n, ll, v, t): ");
        scanf("%s", dias[i].condicion);
        printf("Ingrese la temperatura representativa: ");
        scanf("%f", &dias[i].temperatura);
        printf("Ingrese la hora (0-23) en la que se produjo dicha temperatura: ");
        scanf("%d", &dias[i].hora);
    }
}

float menorTemperaturaPostMediodia(Dia dias[], int *diaMenor)
{
    float minTemp = 100; // Un valor inicial alto
    for (int i = 0; i < DIAS; i++)
    {
        if (dias[i].hora > 12 && dias[i].temperatura < minTemp)
        {
            minTemp = dias[i].temperatura;
            *diaMenor = i;
        }
    }
    return minTemp;
}

void calcularPromedios(Dia dias[], float promedios[])
{
    int contador[5] = {0}; // Contadores para s, n, ll, v, t

    for (int i = 0; i < DIAS; i++)
    {
        if (strcmp(dias[i].condicion, "s") == 0)
        {
            promedios[0] += dias[i].temperatura;
            contador[0]++;
        }
        else if (strcmp(dias[i].condicion, "n") == 0)
        {
            promedios[1] += dias[i].temperatura;
            contador[1]++;
        }
        else if (strcmp(dias[i].condicion, "ll") == 0)
        {
            promedios[2] += dias[i].temperatura;
            contador[2]++;
        }
        else if (strcmp(dias[i].condicion, "v") == 0)
        {
            promedios[3] += dias[i].temperatura;
            contador[3]++;
        }
        else if (strcmp(dias[i].condicion, "t") == 0)
        {
            promedios[4] += dias[i].temperatura;
            contador[4]++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        if (contador[i] != 0)
        {
            promedios[i] /= contador[i];
        }
    }
}

int validarHora(int hora)
{
    return hora >= 0 && hora <= 23;
}

float porcentajeTemperaturaHora(Dia dias[], int hora)
{
    int contador = 0;
    for (int i = 0; i < DIAS; i++)
    {
        if (dias[i].hora == hora)
        {
            contador++;
        }
    }
    return ((float)contador / DIAS) * 100;
}
