/*
Realizza una classe 'contatore' che contiene una variabile intera 'valore' come attributo e due metodi, il primo è un costruttore senza parametri che
inizializza 'valore' a 0 il secondo incrementa semplicemente 'valore ' di 1 tutte le volte che viene invocato.
Esegui il test del programma con un ciclo for .
*/

#include <iostream>
#include "contatore.h"

using namespace std;

int main(){

    Contatore c;

    for(int i = 0; i < 5; i++){
        cout << c.getValore() << endl;
        c.plus();
    }


}