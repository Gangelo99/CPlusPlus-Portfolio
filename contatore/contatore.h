class Contatore{
    private:
        int valore;
    public:
        Contatore(){
            this->valore = 0;
        }

        void plus(){
            valore++;
        }

        int getValore(){
            return valore;
        }
};