#include "./include/include_utilitaire.h"


int main()
{
    cout << "Utilitaire :" << endl;


    complexe d;
    d.setComplexe(1.1,1.2);
    cout <<"d="<<d<<endl;

complexe a(1.3,1.45);
cout <<"a="<<a<<endl;

complexe b(1,'a');
cout <<"b="<<b<<endl;

complexe c(a);
cout <<"c="<<c<<endl;


    system("PAUSE");
    return EXIT_SUCCESS;
}
