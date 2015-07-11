#ifndef complexe_H
#define complexe_H

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

        double modC(complexe arg1);//=reel²+imaginaire² sert surtout pour comparer
        bool comparaison(double,double);// a faire un template
     /*****************      Get Set                              *********************/
                    void setcomplexe(double re,double im);
            double getIm()const;            void  setIm(double Im);
            double getRe()const;            void  setRe(double poids);
     /*****************      Operateur  arithmetique              *********************/

            friend complexe operator+  (complexe &Arg1,complexe &Arg2);
            friend complexe operator-  (complexe &Arg1,complexe &Arg2);
            friend complexe operator*  (complexe &Arg1,complexe &Arg2);
            friend complexe operator/  (complexe &Arg1,complexe &Arg2);


     /*****************      Operateur   operateur  comparaison   *********************/
        // on compare les 2 modes

        friend  bool operator< (const complexe& left, const complexe& right);
        friend bool operator> (const complexe& left, const complexe& right);
        friend bool operator<=(const complexe& left, const complexe& right);
        friend  bool operator>=(const complexe& left, const complexe& right);

        friend bool operator== (const complexe& left, const complexe& right);
        friend bool operator!= (const complexe& left, const complexe& right);

     /*****************      Operateur   operateur  affichage     *********************/

        friend ostream& operator<<(ostream& os,const complexe& acomplexe);

     /*****************      Operateur  de conversion             *********************/

    operator double();       operator int();       operator float();       operator long();

     /*****************      Test                                 *********************/
            void test_opetateur1()const;//test opetateur <<
            void test_opetateur2()const;//test opetateur ==
            void test_opetateur3()const;//test opetateur !=

           // test opetateur < > <= >= a faire
           //autre test a faire


                    // a faire XD


};

#endif // complexe_H
