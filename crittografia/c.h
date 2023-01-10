#include <string>
class C{
    private:
        std::string frase;
        short int k;
    public:
        C(std::string _frase, short int _k = 5) : frase(_frase), k(_k) {for(int i = 0; i < frase.length(); i++) this->frase[i] = frase[i] + k;}

        std::string getFrase(){return frase;}

        void decrypt() {for(int i = 0; i < frase.length(); i++) this->frase[i] = frase[i] - k; }
};