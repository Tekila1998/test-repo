// Calkowanie_prostokat.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <stdio.h>

double f(double x)
{
    return(x * x + 2 * x);
}

int main()
{
    const int przedzial = 1000; 
    double x_pocz, x_kon, suma_prostokat, suma_trapez, dx_prostokat, dx_trapez;
    int i;

    printf("Program sluzacy do obliczania calki funkcji metoda prostokatow oraz trapezow.\n"
          "Podaj przedzial poczatkowy xp:\n"
            "xp = ");
    scanf_s("%lf", &x_pocz);

    printf("Podaj przedzial koncowy xk:\n"
           "xk = ");
    scanf_s("%lf", &x_kon);

    suma_prostokat = suma_trapez = 0;

    dx_prostokat = dx_trapez = (x_kon - x_pocz) / przedzial;
    
    for ( i = 1; i < przedzial; i++)
    {
        suma_prostokat = suma_trapez += f(x_pocz + i * dx_prostokat);
    }

    suma_prostokat *= dx_prostokat;
    suma_trapez = (suma_trapez + (f(x_pocz) + f(x_kon)) / 2) * dx_trapez;

    printf("Wartosc calki metoda prostokatow = %lf\n"
           "Wartosc calki metoda trapezow = %lf", suma_prostokat, suma_trapez);

    return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
