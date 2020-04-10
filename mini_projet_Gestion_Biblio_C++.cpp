#include <iostream>
#include <string>
using namespace std;


int main() {


   bool grade  = true ; // valeur booléenne pour la boucle while

   int a; // l'entier réel pour définir le choix de l'utilisateur

   while (grade) {


                 cout<<"choisir la valeur 1 pour créer une nouvelle fiche sur l'auteur du livre"<<endl;

                 cout<<"choisir la valeur 2 pour créer une nouvelle fiche sur l'éditeur du livre"<<endl;

                 cout<<"choisir la valeur 3 pour créer une nouvelle fiche sur le livre"<<endl;
 
                 cout<<"choisir de s'arrêter en tapant 4"<<endl;

                 cin>>a;

                  switch(a){


                  	         case 1:

                  	               cout<< "vous avez fait le choix 1"<<endl;

                  	               break;

                  	          case 2:

                  	               cout<< "vous avez fait le choix 2"<<endl;

                  	               break;    


                  	          case 3:

                  	               cout<< "vous avez fait le choix 3"<<endl;

                  	               break;
      

                             case 4:

                  	               cout<< "vous avez fait le choix 4"<<endl;

                  	               grade = false;

                  	               break;


                 }


   }


  return 0; 

}

