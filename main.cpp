#include "./include/include_utilitaire.h"


int main()
{
    cout << "Utilitaire :" << endl;


    complexe d;
    d.setcomplexe(10,12.2);
    cout <<"d="<<d<<endl;

    complexe a(1.3,1.45);
    cout <<"a="<<a<<endl;

    complexe b(1,20);
    cout <<"b="<<b<<endl;

    complexe c(a);
    cout <<"c="<<c<<endl;


    if(a<d){cout <<"a<d"<<endl;}
    if(a>d){cout <<"a>d"<<endl;}
    if(a>=d){cout <<"a>=d"<<endl;}
    if(a<=d){cout <<"a<=d"<<endl;}
    if(a==d){cout <<"a==d"<<endl;}
    if(a!=d){cout <<"a!=d"<<endl;}

    cout<<"a="<<a<<" b= "<<b<<" a+b="<<a+b<<endl;
    cout<<"a="<<a<<" b= "<<b<<" a-b="<<a-b<<endl;
    cout<<"a="<<a<<" b= "<<b<<" a*b="<<a*b<<endl;
    cout<<"a="<<a<<" b= "<<b<<" a/b="<<a/b<<endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
