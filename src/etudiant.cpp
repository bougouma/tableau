#include"etudiant.h"
#include<iostream>
#include <string>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
vector<etudiant> epsi;
string tmp_name;
int tmp_note;

//Saisie du nom et de la note de l'etudiant
ofstream f_notes;
f_notes.open("notes.txt");
for(int i = 0; i<3 ;i++)
{
cout<<"Entrez le nom de l'etudiant"<<endl;
cin>>tmp_name;
cout<<"Entrez la note de l'étudiant"<<endl;
cin>>tmp_note;
epsi.push_back(etudiant());
epsi[i].nom = tmp_name;
epsi[i].note = tmp_note;
//Gerer la persistance

f_notes<<epsi[i].nom<<"       "<<epsi[i].note<<endl;
}

f_notes.close();

//afficher la liste des etudiants
cout<<" la liste des etudiant"<<endl;
for(int i = 0; i<epsi.size(); i++){
cout <<epsi[i].nom<< "    "<<epsi[i].note<<endl;
}


//Recherche d'un etudiant dans la liste
cout<<"Tapez le nom de l'étudiant que vous chercchez"<<endl;
cin>>tmp_name;
for (int i=0; i<epsi.size(); i++)
{
if (tmp_name == epsi[i].nom)
cout<<"la note de l'étudiant: "<<epsi[i].note<<endl;
break;
}
//Gerer la persistance des notes
ofstream fichier_notes;
fichier_notes.open("file.txt");
fichier_notes<<"EPSI";
fichier_notes.close();

return 0;

}
