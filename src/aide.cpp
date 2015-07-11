#include "../include/aide.h"

double racine_carre(double nombre)
{
int i;
double valeur=nombre;
    for(i=0;i<16;i++)
        {if(valeur!=0)
            {valeur=((valeur*valeur)+nombre)/(2*valeur);}
        else
            {valeur=0;}
        }
return valeur;
}


double cosinus(double x)
{double somme,xcarre,valeur;
  long i,compteur;

	 x=modulo(x, 2*PI);
	 somme = 1;
	 xcarre = x*x;
	 valeur = 1;
	 i = 1;
    compteur=0;
	do
	{
    valeur=-(valeur*xcarre)/(i*(i+1));
    somme=somme+valeur;
    i+=2;
    compteur++;
	}
	while(compteur<31);

	return somme;
}

double modulo(double x, double diviseur)
{   double sommeultat;
sommeultat=x-diviseur*((long)(x/diviseur));
	return sommeultat;
}

int lecture_entier(FILE * fichier)
{int retour;

 fscanf(fichier,"%d",&retour);
 fseek(fichier, 2, SEEK_CUR);

 if(retour>20000 && ftell(fichier)==0)
     {
        retour=0;
        printf("\n  votre fichier est vide , veuillez vérifier. ");
     }
    return retour;
}


char* saisie_dynamique_char()
{
    int i=0,t_util=0;
    char* texte=NULL,tab[TAILLE_MAX];

    for(i=0;i<TAILLE_MAX;i++){tab[i]=0;}

    fgets(tab, sizeof tab, stdin);

    do{t_util++;}while(tab[t_util]>0);
    t_util--;tab[t_util]=3;

    texte=(char*)malloc(sizeof(char)*(t_util+1));

    for(i=0;i<t_util;i++)//transforme les espace est apostrophe en _
        {
            if(tab[i]==32   || tab[i]=='\'')
            {
             tab[i]='_';
            }

         texte[i]=tab[i];
        }

return(texte);
}

int puissance_10(int j)
{int i;
int resultat=1;
    for(i=0;i<j;i++)
    {
        resultat=resultat*10;
    }
  return resultat;
}

int saisie_entier()
{int nombre=0;

    int i=0,j;
    char tab[TAILLE_MAX];
    char* texte=NULL;
    int t_util=0;

    for(i=0;i<TAILLE_MAX;i++){tab[i]=0;}

    fgets(tab, sizeof tab, stdin);

    do{t_util++;}while(tab[t_util]>0);
    t_util--;
    tab[t_util]=3;


    texte=(char*)malloc(sizeof(char)*(t_util+1));

    do{
     i++;
    }while(tab[i]>='0' && tab[i]<='9');




    for(j=0;j<i;j++)
    {
    nombre+=(tab[j]-'0')*puissance_10(i-j-1);
    }

return nombre;
}

char* lecture_dynamique_char(FILE * fichier)
{
    char tab[100];
    char *p=NULL;
    int i=-1,j;
    int test=1;

    if(ftell(fichier)==0)
        {i++;
            fscanf(fichier,"%c",&tab[i]);
            if('@'==tab[i]||('a'<=tab[i] && tab[i]<='z')||('A'<=tab[i] && tab[i]<='Z') ||('0'<=tab[i] && tab[i]<='9')||tab[i]=='_' )
            {}else{test=0;}
        }

if(test==1)
       {do{i++;
        fscanf(fichier,"%c",&tab[i]);
       }while(('@'==tab[i]||('a'<=tab[i] && tab[i]<='z')||('A'<=tab[i] && tab[i]<='Z') ||('0'<=tab[i] && tab[i]<='9')||tab[i]=='_' )&&i<20);}
   else
       {
        printf("\n Le premier caractere de votre fichier n'est pas adater à une lecture . ");
       }



    p=(char*)malloc((i+1)*sizeof(char));
    p[i]=0;//0 = le caractere de fin de chaine soit EOT

  for(j=0;j<i;j++)
    {
      p[j]=tab[j];
    }


    return(p);
}

void position_fichier(FILE *fichier)
{
printf("\n le pointeur est a la position %ld.\n",ftell( fichier));
}

void saut_ligne(int nb_saut)
{int i;
for(i=0;i<nb_saut;i++){printf("\n");}}


int longueur_entier(int i)
{int longueur=1;
    while(i>9)
    {longueur++;
     i=i/10;
    }
  return  longueur;
}

char* convertir_entier_chaine(int entrer)
{
    char* sortie;
    int longueur=0,i;

    longueur=longueur_entier(entrer);
    longueur++;
    sortie=(char*)malloc(longueur*sizeof(char));

    for(i=0;i<longueur;i++)
        {
         sortie[longueur-i]='0'+ entrer%10;
         entrer=entrer/10;
        }

    return sortie;
}

