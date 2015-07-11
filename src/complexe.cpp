#include "../include/complexe.h"

     /****************       Constructeur Destructeur             *********************/
        complexe::complexe():_re(0.0),_im(0.0){}
        complexe::complexe(double RE,double IM):_re(RE),_im(IM){}



        complexe::~complexe(){}
     /*****************      Fonction                             *********************/
     /*****************      Get Set                              *********************/

    double complexe::getIm()const    {return _im;}
    double complexe::getRe()const     {return _re;}

    void  complexe::setIm(double Im)    {_im=Im;}
    void  complexe::setRe(double Re)    {_re=Re;}
    void complexe::setComplexe(double re,double im) { _re=re;_im=im;}

     /*****************      Operateur  arithmetique              *********************/

     /*****************      Operateur   operateur  comparaison   *********************/



     /*****************      Operateur   operateur  affichage     *********************/
// operateur <<
ostream& operator<<(ostream& os,const complexe& aComplexe){
if(aComplexe.getRe()==0.0 && aComplexe.getIm()==0.0)        {os<<" 0 ";}
        else if (aComplexe.getIm()==0.0)                    {os<<" "<<aComplexe.getRe();}
        else if (aComplexe.getRe()==0.0)                    {os<<" "<<aComplexe.getIm()<<"i ";}
        else if (aComplexe.getIm()>0.0)                     {os<<" "<< aComplexe.getRe() <<"+"<< aComplexe.getIm()<<"i ";}
        else if (aComplexe.getIm()<0.0)                     {os<<" "<< aComplexe.getRe() << aComplexe.getIm()<<"i ";}
        else                                                {os <<" Blabla 1";}
  return os;}
     /*****************      Operateur  de conversion              *********************/



     /*****************      Test                                 *********************/
