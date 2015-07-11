#ifndef COMPLEXE_H
#define COMPLEXE_H

#include "include_utilitaire.h"

class complexe
{
    private:double _re;            double _im;
    public:
     /****************       Constructeur Destructeur             *********************/
        complexe();
        complexe(double _re,double _im);

        ~complexe();//inutile cree par defaut par compilateur
     /*****************      Fonction                             *********************/

     /*****************      Get Set                              *********************/
                    void setComplexe(double re,double im);
            double getIm()const;            void  setIm(double Im);
            double getRe()const;            void  setRe(double poids);
     /*****************      Operateur  arithmetique              *********************/
     /*****************      Operateur   operateur  comparaison   *********************/
     /*****************      Operateur   operateur  affichage     *********************/
    friend ostream& operator<<(ostream& os,const complexe& aComplexe);
     /*****************      Operateur  de conversion             *********************/
    operator double();       operator int();       operator float();       operator long();

     /*****************      Test                                 *********************/

    protected:







};

#endif // COMPLEXE_H
