#include "../include/complexe.h"

     /*********************************************************************************/
     /****************       Constructeur Destructeur             *********************/
     /*********************************************************************************/
        complexe::complexe():_re(0.0),_im(0.0){}
        complexe::complexe(double RE,double IM):_re(RE),_im(IM){}



        complexe::~complexe(){}
     /*********************************************************************************/
     /*****************      Fonction                             *********************/
     /*********************************************************************************/

        double modC(complexe arg1)//=reel²+imaginaire² sert surtout pour comparer
        {return arg1.getRe()*arg1.getRe()+arg1.getIm()*arg1.getIm();}

        bool comparaison(double arg1,double arg2){if(arg1>arg2){return 1;}return 0;}

     /*********************************************************************************/
     /*****************      Get Set                              *********************/
     /*********************************************************************************/

    double complexe::getIm()const    {return _im;}
    double complexe::getRe()const     {return _re;}

    void  complexe::setIm(double Im)    {_im=Im;}
    void  complexe::setRe(double Re)    {_re=Re;}
    void complexe::setComplexe(double re,double im) { _re=re;_im=im;}

     /*********************************************************************************/
     /*****************      Operateur  arithmetique              *********************/
     /*********************************************************************************/

        complexe operator+  (complexe &Arg1,complexe &Arg2)
        { complexe a(Arg1._re +Arg2._re,Arg1._im + Arg2._im);return a;}

        complexe operator-  (complexe &Arg1,complexe &Arg2)
        {complexe a(Arg1._re -Arg2._re,Arg1._im - Arg2._im);return a;}

        complexe operator* (complexe &Arg1,complexe &Arg2)
        { complexe a((Arg1._re*Arg2._re)-(Arg1._im*Arg2._im),Arg2._re*Arg1._im +Arg1._re*Arg2._im);return a;}

        complexe operator/ (complexe &Arg1,complexe &Arg2)
        { complexe a;
        a.setRe(Arg1._re*Arg2._re+Arg1._im*Arg2._re/(Arg1._im*Arg1._im+Arg2._im*Arg2._im));
        a.setIm(Arg2._re*Arg1._im-Arg1._re*Arg2._im/(Arg1._im*Arg1._im+Arg2._im*Arg2._im));
        return a;}

     /*********************************************************************************/
     /*****************      Operateur   operateur  comparaison   *********************/
     /*********************************************************************************/


      bool operator==(const complexe& left, const complexe& right)
      {return (left._im == right._im)&& (left._re == right._re);}

      bool operator!=(const complexe& left, const complexe& right)
        {return !operator==(left,right);}

    // on compare les 2 modes
 bool operator< (const complexe& left, const complexe& right){return !comparaison(modC(left),modC(right));}
 bool operator> (const complexe& left, const complexe& right){return comparaison(modC(left),modC(right));}
 bool operator<= (const complexe& left, const complexe& right){return operator<(left,right)||operator==(left,right);}
 bool operator>=(const complexe& left, const complexe& right){return operator>(left,right)||operator==(left,right);}




     /*********************************************************************************/
     /*****************      Operateur   operateur  affichage     *********************/
     /*********************************************************************************/
        // operateur <<
        ostream& operator<<(ostream& os,const complexe& aComplexe){
        if(aComplexe.getRe()==0.0 && aComplexe.getIm()==0.0)        {os<<" 0 ";}
                else if (aComplexe.getIm()==0.0)                    {os<<" "<<aComplexe.getRe();}
                else if (aComplexe.getRe()==0.0)                    {os<<" "<<aComplexe.getIm()<<"i ";}
                else if (aComplexe.getIm()>0.0)                     {os<<" "<< aComplexe.getRe() <<"+"<< aComplexe.getIm()<<"i ";}
                else if (aComplexe.getIm()<0.0)                     {os<<" "<< aComplexe.getRe() << aComplexe.getIm()<<"i ";}
                else                                                {os <<" Blabla 1";}
          return os;}

     /**********************************************************************************/
     /*****************      Operateur  de conversion              *********************/
     /*********************************************************************************/

    //opérateur de conversion vers un double ;retourne la partie reel  =perte partiel d'information mais peu tj etre utile
            complexe::operator double()    {return (double)_re; }
            complexe::operator int()       {return (int)   _re; }
            complexe::operator float()     {return (float) _re; }
            complexe::operator long()      {return (long)  _re; }


     /*********************************************************************************/
     /*****************      Test                                 *********************/
     /*********************************************************************************/




