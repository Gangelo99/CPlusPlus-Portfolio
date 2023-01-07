/*
Implementa la classe "Razionale" idonea alla manipolazione di numeri razionali. La classe deve poter sommare, sottrarre,
moltiplicare e dividere numeri razionali esternalizzando il risultato. La classe deve poter semplificare 
automaticamente una frazione riducendola ai minimi termini e deve contenere un metodo che permetta la 
visualizzazione della frazione nella notazione:
numeratore/denominatore.
*/

#include <iostream>
#include "razionale.h"

using namespace std;

int main(){
    Razionale r;
    Razionale r1(8,2);
    Razionale r2(2,4);
    Razionale r3(129, 9);
    Razionale r4(9, 129);

    cout << r;
    cout << r1;
    cout << r2;
    cout << r3;
    cout << r4;
}