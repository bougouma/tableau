#include"etudiant.h"
#include<iostream>
#include <string>
#include<vector>
using namespace std;
int main()
{
vector<etudiant> epsi;
string tmp_name;
int tmp_note;

for(int i = 0; i<3 ;i++)
{
cout<<"Entrez le nom de l'etudiant"<<endl;
cin>>tmp_name;
cout<<"Entrez la note de l'étudiant"<<endl;
cin>>tmp_note;
epsi.push_back(etudiant());
epsi[i].nom = tmp_name;
epsi[i].note = tmp_note;
}

cout<<" la liste des etudiant"<<endl;
for(int i = 0; i<epsi.size(); i++){
cout <<epsi[i].nom<< "    "<<epsi[i].note<<endl;
}
return 0;

}
