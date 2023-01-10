#include <iostream>
#include <string>
#include "c.h"

/*
Implementare un algoritmo di crittografia basato su una classe C che codifica una stringa di caratteri in ingresso in
una stringa crittata illegibile.

Il sistema deve funzionare attraverso una chiave numerica che prende tutte le occorrenze di ogni lettera della stringa 
e le sostituisce con la lettera che sta in k (chiave numerica) posizioni più a destra nell'ordine alfabetico.
codice di cesare

Se k è negativa lo spostamento deve avvenire verso sinistra.
*/


using namespace std;

int main() {
    C c1("Il cavallo bianco di napoleone", -3);
    C c2("Il cavallo bianco di napoleone");
    cout << c1.getFrase() << endl;
    c1.decrypt();
    cout << c1.getFrase() << endl;

    cout << c2.getFrase() << endl;
    c2.decrypt();
    cout << c2.getFrase() << endl;
}