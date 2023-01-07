/*
Implementa la classe "Razionale" idonea alla manipolazione di numeri razionali. La classe deve poter sommare, sottrarre,
moltiplicare e dividere numeri razionali esternalizzando il risultato. La classe deve poter semplificare 
automaticamente una frazione riducendola ai minimi termini e deve contenere un metodo che permetta la 
visualizzazione della frazione nella notazione:
numeratore/denominatore.
*/
#ifndef razionale_h
#define razionale_h

#include <iostream>
#include <ostream>

short int MCD(int n, int d);

class Razionale{
    private:
        short int numeratore;
        short int denominatore;
        short int mcd;
    public:
        Razionale(){
            this->numeratore = 1;
            this->denominatore = 1;
            std::cout << "e' stato chiamato il costruttore base, numeratore e denominatore settati a 1" << std::endl;
        }

        Razionale(int n, int d){
            this->numeratore = n;
            this->denominatore = d;
            this->mcd = MCD(numeratore, denominatore);
            semplificazione();
        }

        void semplificazione(){
            if(((numeratore % mcd == 0) && (denominatore % mcd == 0))){
                numeratore /= mcd;
                denominatore /= mcd;
            }
        }

    friend
        std::ostream& operator<<(std::ostream& os, const Razionale& r);

    friend
        short int MCD(int n, int d);
};

inline std::ostream& operator<<(std::ostream& os, const Razionale& r){
    if(r.denominatore == 1) return os << r.numeratore << std::endl;

    os << r.numeratore << " / " << r.denominatore << std::endl; return os;
}

inline short int MCD(int n, int d) {return d == 0 ? n : MCD(d, n%d);}

#endif // !1