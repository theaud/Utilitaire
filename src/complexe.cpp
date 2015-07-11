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
    void complexe::setcomplexe(double re,double im) { _re=re;_im=im;}

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
        ostream& operator<<(ostream& os,const complexe& acomplexe){
        if(acomplexe.getRe()==0.0 && acomplexe.getIm()==0.0)        {os<<" 0 ";}
                else if (acomplexe.getIm()==0.0)                    {os<<" "<<acomplexe.getRe();}
                else if (acomplexe.getRe()==0.0)                    {os<<" "<<acomplexe.getIm()<<"i ";}
                else if (acomplexe.getIm()>0.0)                     {os<<" "<< acomplexe.getRe() <<"+"<< acomplexe.getIm()<<"i ";}
                else if (acomplexe.getIm()<0.0)                     {os<<" "<< acomplexe.getRe() << acomplexe.getIm()<<"i ";}
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





/***************************************************************************************************/
/***************************************************************************************************/
/************************                 fonction de test             *****************************/
/***************************************************************************************************/
/***************************************************************************************************/

//test operateur
void complexe::test_opetateur1()const
{
        int i;
       complexe a[9];

         a[0].setcomplexe(0.0,0.0);
         a[1].setcomplexe(0.0,1.0);a[2].setcomplexe(0.0,-1.0);
         a[3].setcomplexe(1.0,0.0);a[4].setcomplexe(-1.0,0.0);

         a[5].setcomplexe(1.0,1.0);a[6].setcomplexe(1.0,-1.0);
         a[7].setcomplexe(-1.0,1.0);a[8].setcomplexe(-1.0,-1.0);

   cout <<"------------------------------------------"<<endl;
   for(i=0;i<9;i++){cout<<a[i]<<endl;}
   cout <<"------------------------------------------"<<endl;

}

void complexe::test_opetateur2()const
{    complexe a[3];

         a[0].setcomplexe(0.0,0.0);
         a[1].setcomplexe(0.0,1.0);
         a[2].setcomplexe(1.0,0.0);
    cout <<"------------------------------------------"<<endl;
    cout <<" test 1 == "<<(bool) (a[0]==a[0])<<endl;
    cout <<" test 2 == "<<(bool) (a[0]==a[1])<<endl;
    cout <<" test 3 == "<<(bool) (a[1]==a[1])<<endl;
    cout <<" test 4 == "<<(bool) (a[2]==a[1])<<endl;
    cout <<" test 5 == "<<(bool) (a[1]==a[2])<<endl;
    cout <<"------------------------------------------"<<endl;
}

void complexe::test_opetateur3()const
{
    complexe a[3];

         a[0].setcomplexe(0.0,0.0);
         a[1].setcomplexe(0.0,1.0);
         a[2].setcomplexe(1.0,0.0);

    cout <<"------------------------------------------"<<endl;
    cout <<" test 1 == "<<(bool) (a[0]!=a[0])<<endl;
    cout <<" test 2 == "<<(bool) (a[0]!=a[1])<<endl;
    cout <<" test 3 == "<<(bool) (a[1]!=a[1])<<endl;
    cout <<" test 4 == "<<(bool) (a[2]!=a[1])<<endl;
    cout <<" test 5 == "<<(bool) (a[1]!=a[2])<<endl;
    cout <<"------------------------------------------"<<endl;

}
