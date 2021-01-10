#include <iostream>
#include <cstdlib>
#include <climits>
#include <math.h>    

using namespace std;

int modulo(int a, int b)
{
    return a % b;
}

int main()
{
    int wybor{};
     while (wybor!=9)
    {  
         double liczba1{};
         double liczba2{};
         double pierw_sz{};
         double pierwiastek{};
         int dzielna{};
         int dzielnik{};
         int liczba{};
         int potega{};
         float dzialanie{};

             cout << "\nWybierz dzialanie:" << endl;
             cout << "1. Suma. " << endl;
             cout << "2. Roznica." << endl;
             cout << "3. Iloczyn. " << endl;
             cout << "4. Iloraz. " << endl;
             cout << "5. Pierwiastek kwadratowy." << endl;
             cout << "6. Pierwiastek szescienny." << endl;
             cout << "7. Reszta z dzielenia" << endl;
             cout << "8. Potegowanie" << endl;
             cout << "9. Zakoncz program." << endl;
             cout << endl;
             cin >> wybor;

             while (cin.fail()) {
                 cin.clear();
                 cin.ignore(INT_MAX, '\n');
                 cout << "Nalezy podawac tylko cyfry! Podaj wlasciwa opcje." << endl;

                 cin >> liczba1,liczba, liczba2, wybor, pierwiastek, pierw_sz, dzielna, dzielnik, potega;
             }
                 switch (wybor)
                 {
                 case 1:
                     cout << "Podaj pierwsza liczbe: ";
                     cin >> liczba1;
                     cout << "Podaj druga liczbe: ";
                     cin >> liczba2;
                     dzialanie = liczba1 + liczba2;
                     cout << "Suma: " << dzialanie << endl;
                     break;
                 case 2:
                     cout << "Podaj pierwsza liczbe: ";
                     cin >> liczba1;
                     cout << "Podaj druga liczbe: ";
                     cin >> liczba2;
                     dzialanie = liczba1 - liczba2;
                     cout << "Roznica: " << dzialanie << endl;
                     break;
                 case 3:
                 {
                     cout << "Podaj pierwsza liczbe: ";
                     cin >> liczba1;
                     cout << "Podaj druga liczbe: ";
                     cin >> liczba2;
                     dzialanie = liczba1 * liczba2;
                     cout << "Iloczyn: " << dzialanie << endl;
                     break;
                 }
                 case 4:
                 {
                     cout << "Podaj pierwsza liczbe: ";
                     cin >> liczba1;
                     cout << "Podaj druga liczbe: ";
                     cin >> liczba2;
                     if (liczba2 == 0) cout << "Nie dzielimy przez 0!";
                     else
                         cout << "Iloraz: " << liczba1 / liczba2 << endl;
                     break;
                 }
                 case 5:
                 {
                     cout << "Podaj liczbe: ";
                     cin >> pierwiastek;
                     cout << "Pierwiastek kwadratowy z liczby " << pierwiastek << " wynosi " << sqrt(pierwiastek) << endl;
                     break;
                 }
                 case 6:
                 {
                     cout << "Podaj liczbe: ";
                     cin >> pierw_sz;
                     cout << "Pierwiastek szescienny z " << pierw_sz << " wynosi " << cbrt(pierw_sz) << endl;
                     break;
                 }
                 case 7:
                 {
                     cout << "Podaj pierwsza liczbe: ";
                     cin >> dzielna;
                     cout << "Podaj druga liczbe: ";
                     cin >> dzielnik;
                     cout << "Reszta z dzielenia liczb " << dzielna << " i " << dzielnik << " to " << modulo(dzielna, dzielnik);
                     break;
                 }
                 case 8:
                 {
                     cout << "Podaj liczbe: ";
                     cin >> liczba;
                     cout << "Podaj potege: ";
                     cin >> potega;
                     cout << "Liczba " << liczba << " podniesiona do potegi " << potega << " wynosi " << pow(liczba,potega) << endl;
                     break;
                 }
                 case 9:
                 {
                     cout << "Dziekuje za skorzystanie z programu. Do widzenia.";
                     exit(0);
                     break;
                 }
                 default: cout << "\nNiewlasciwy wybor. Podaj odpowiednia opcje.";
                 }
             
    }
    return 0;
}