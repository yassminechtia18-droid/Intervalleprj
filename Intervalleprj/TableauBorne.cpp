#include "TableauBorne.h"
#include <iostream>
using namespace std;
TableauBorne::TableauBorne(int n, float a, float b) : Tableau(n)
{
    this->BorneInf = a;
    this->BorneSup = b;
}
double TableauBorne::operator[](int i) const
{
    if (i >= 0 && i < this->taille)
    {
        return Tab[i];
    }
    else {
        exit(-1);
    }
}
bool TableauBorne::modifier(int i, double valeur)
{
    if (i < 0 || i >= this->taille) {
        return false;
    }
    if (valeur < this->BorneInf || valeur >this->BorneSup) {
        return false;
    }
    this->Tab[i] = valeur;
    return true;
}


void TableauBorne::afficher() const
{
    cout << "[" << this->BorneInf << "," << this->BorneSup << "]-element:";
    for (int i = 0;i < this->taille;i++) {
        cout << this->Tab[i] << " ";
    }
    cout << endl;
}

TableauBorne::~TableauBorne()
{
}
#include "TableauBorne.h"
