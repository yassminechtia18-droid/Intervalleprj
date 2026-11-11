#pragma once
#include "Tableau.h"

class TableauBorne :
    public Tableau
{
private:
    float BorneInf;
    float BorneSup;

public:
    TableauBorne(int n, float a, float b);
    double operator[](int i) const;
    bool modifier(int i, double valeur);
    void afficher()const;
    ~TableauBorne();
};