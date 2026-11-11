#pragma once
class Tableau
{
protected:
	double* Tab;
	int taille;
public:
	Tableau(int);
	Tableau(const Tableau& T);
	Tableau& operator= (const Tableau& T);
	double& operator[](int i);
	const double& operator[](int i) const;
	void afficher()const;
	~Tableau();

};

