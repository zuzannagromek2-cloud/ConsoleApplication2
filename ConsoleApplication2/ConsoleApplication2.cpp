// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main() {
    //zad1.1
    /*for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }
   cout << "Koniec programu" << endl;*/ //wyświetlają się wartości od 0 do 10
   //zad1.2
   /*cout << "Zakres [5,7]" << endl;
   for (int i = 5; i <= 7; i++) {
       cout << i << endl;
   }
   cout << "Zakres [5,7)" << endl;
   for (int i = 5; i < 7; i++) {
      cout << i << endl;
   }
      cout << "Koniec programu" << endl;
  } */
  //zad 1.3
  /*for (int i = 0; i < 10; i += 2) {

      cout << i << endl;
  }
  return 0;
} */

//zad 1.4
/*for (int i = 10; i >= 0; i--) {
cout << i << endl;
}
cout << "Koniec programu" << endl;
}*/

//zad.2

   /* int fahr, celsius; //zmienne typu int
    int start, limit, krok; //zmienne typu int

    start = 0; //przypisz 0 do start
    limit = 200; //przypisz 200 do limit
    krok = 20; //przypisz 20 do krok

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    } //program wyswietla po lewej stronie temperature w stopniach fafrenheita a po prawej stronie w stopniach celsjusza
// temperatura wyswietlana jest w liczbach calkowitych
    }*/
    //zad.3

         /*int fahr, celsius; //zmienne typu int
         int start, limit, krok; //zmienne typu int

         start = 0; //przypisz 0 do start
         limit = 200; //przypisz 200 do limit
         krok = 20; //przypisz 20 do krok

         fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0
         for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
         {
             float celsius = (5.0 / 9.0) * (fahr - 32.0);
             printf("%3.0d \t %6.1f \n", fahr, celsius);
         } //program po lewej wyswietla temperature w stopniach fahrenheita a po prawej w stopniach celsjusza
         //rożnica między programem z zadania 2 jest taka, ze teraz temp. w stopniach celsjusza wyswietla sie z liczba
         //po przecinku czego przyczyna jest uzycie float
     } */
     //zad.5
   /*int fahr, celsius; //zmienne typu int
     int start, limit, krok; //zmienne typu int

     start = 0; //przypisz 0 do start
     limit = 200; //przypisz 200 do limit
     krok = 20; //przypisz 20 do krok

     fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14

     for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
     {
         float celsius = (5 / 9) * (fahr - 32.0);
         printf("%3.0d \t %6.1f \n", fahr, celsius);
       } return 0;
     }*/ //w tym przypadku po zmianie (5.0/9.0) na (5/9) program dla stopni celsjusza przyjmuje tylko wartosci rowne 0

     //zad.6
     /*int fahr, celsius; //zmienne typu int
     int start, limit, krok; //zmienne typu int
     start = 0; //przypisz 0 do start
     limit; //przypisz 200 do limit
     krok; //przypisz 20 do krok
     cin >> limit >> krok;
     for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
     {
         float celsius = (5.0 / 9.0) * (fahr - 32.0);
         cout << fahr << "\t" << celsius << endl;
         printf("%3.0d \t %6.1f \n", fahr, celsius);
     } return 0; // program wyswietla dwa razy wynik dla stopni celsjusza jeden z dokladnoscia do 4 miejsc po przecinku
     // a drugi z dokladnoscia do jednego miejsca
     }*/
     //zad.7
    /*double a;
        cout << "Podaj liczbe a: " << endl;
        cin >> a;

        if (a > 0) {
            cout << a << endl;
    } return 0; //program prosi raz o liczbe musze pomyslec jak ma prosic 10-krotnie
}*/
//zad.8
/*int x;
for (x = 0; x <= 100; x += 2) {
    cout << x << endl;
} return 0;

}*/
//zad.9
  /*  int n;
    int x;
    cout << "Podaj liczbe n: " << endl;
    cin >> n;
    cout << "Liczby podzielne przez n ktorych reszta z dzielenia wynosi 0: " << endl;
    for (x = 0; x <= 100; x++) {
        if (x % n == 0) {
            cout << x << endl;
        }
    } return 0;
}*/
//zad.10
    /*int x;
    int n;
    int licznik = 0;
    cout << "Podaj liczbe:" << endl;
    cin >> n;
    if (n != 0) {
        for (x = 0; x <= 100; x++) {

            if (x % n == 0) {
                licznik++;
            }
        }
        cout << "Ilosc liczb podzielnych przez n z zakresu [0,100] wynosi: " << licznik << endl;
    }
}*/
//zad.11     
/*int a;
int b;
cout << "Podaj dwie liczby calkowite: " << endl;
cin >> a >> b;
*/
//zad.12
    /*int n;
    double suma = 0;
    double srednia;
    double liczba;
    cout << "Ile liczb chcesz podac? " << endl;
    cin >> n;
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cout << "Podaj liczby:" << endl;
            cin >> liczba;
            suma = suma + liczba;
        } 
        srednia = suma / n;
                    cout << "Srednia arytmetyczna wynosi: " << srednia << endl;
                    return 0;
                }
            }
      */ //dokonczyc zad 12 i reszte w weekend


      



    



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
