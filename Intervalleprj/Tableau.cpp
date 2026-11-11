#include "Tableau.h"
#include <iostream>
using namespace std;

Tableau::Tableau(int n)
{
	this->taille = n;
	Tab = new double[taille];
	for (int i = 0;i < taille;i++) {
		this->Tab[i] = 0;
	}

}

Tableau::Tableau(const Tableau& T)
{
	this->taille = T.taille;
	Tab = new double[taille];
	for (int i = 0;i < T.taille;i++) {
		this->Tab[i] = T.Tab[i];
	}

}

Tableau& Tableau::operator=(const Tableau& T)
{
	if (this != &T) {
		delete[] this->Tab;
		this->Tab = nullptr;
		this->taille = T.taille;
		Tab = new double[taille];
		for (int i = 0;i < T.taille;i++) {
			this->Tab[i] = T.Tab[i];
		}

	}return *this;
}

double& Tableau::operator[](int i)
{
	if (i >= 0 && i < this->taille) {
		return this->Tab[i];
	}
	else {
		exit(-1);
	}
}

const double& Tableau::operator[](int i) const
{
	if (i >= 0 && i < this->taille) {
		return this->Tab[i];
	}
	else {
		exit(-1);
	}
}


void Tableau::afficher() const
{
	cout << "taille=" << this->taille << endl;
	for (int i = 0; i < taille; i++) {
		cout << this->Tab[i] << " ";
	}
	cout << endl;
}
Tableau::~Tableau() {

	delete[] this->Tab;
	this->Tab = nullptr;
}
