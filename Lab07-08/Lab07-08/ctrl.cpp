#include "stdafx.h"
#include "ctrl.h"
#include "produs.h"

void Ctrl::addElem(int cod, char * nume, int pret)
{
	int i = 0,gasit=0;
	while (i < this->repo.getSize() && !gasit)
	{
		if (this->repo.getCod(i) == cod)
			gasit = 1;
		i++;
	}
	if (gasit)
		cout << "Exista deja un produs cu acest cod" << endl;
	else
		{
		Produs p = Produs(cod, nume, pret);
		this->repo.addElem(p);
		}
	
}

void Ctrl::showAll()
{
	cout << "["<<endl;
	for (unsigned i = 0; i < this->repo.getSize(); i++)
		cout << this->repo.getAll()[i].toString() << endl;
	cout << "]";
}

void Ctrl::buy(int cod,int bani)
{
	int i = 0;
	int baniNecesari ;
	while (i < this->repo.getSize())
	{
		if (this->repo.getCod(i) == cod)
		{
			baniNecesari = this->repo.getPret(i);
			i = this->repo.getSize();
		}
		i++;
	}
	if (i == this->repo.getSize() )
		cout << "Nu mai avem produsul acesta pe stoc" << endl;
	else
	{

		int diferenta = bani - baniNecesari;
		if (diferenta < 0)
			cout << "Suma introdusa este prea mica pentru acest produs";
		else
		{
			while (bani)
			{
				while (bani - 10 >= 0)
				{
					bani = bani - 10;
					this->tonomat.addBani10Lei(1);
				}
				while (bani - 5 >= 0)
				{
					bani = bani - 5;
					this->tonomat.addBani5Lei(1);
				}

				while (bani - 1 >= 0)
				{
					bani = bani - 1;
					this->tonomat.addBani1Leu(1);
				}


			}

			int res = diferenta;
			int ok = 1;
			while (diferenta >= 1 && ok)
			{


				ok = 0;
				while (diferenta - 10 >= 0 && this->tonomat.getBani10Lei()!=0)
				{
					diferenta = diferenta - 10;
					this->tonomat.addBani10Lei(-1);
					ok = 1;
				}

				while (diferenta - 5 >= 0 && this->tonomat.getBani5Lei()!=0)
				{
					diferenta = diferenta - 5;
					this->tonomat.addBani5Lei(-1);
					ok = 1;
				}

				while (diferenta - 1 >= 0 && this->tonomat.getBani1Leu()!=0)
				{
					diferenta = diferenta - 1;
					this->tonomat.addBani1Leu(-1);
					ok = 1;
				}


			}
			if (diferenta)
			{
				cout << "Aparatul nu a avut sa va dea toti banii rest,doar " << res - diferenta << " Lei." << endl;
				cout << " Va rugam sa sunati la numarul de telefon de pe aparat pentru a receupera restul de " << diferenta << " Lei" << endl;
			}
			else
				cout << "Poftim restul dumneavoastra: " << res << endl;


		}
	}
}

int Ctrl::getCod(int pos)
{
	return this->repo.getCod(pos);
}

int Ctrl::getPret(int pos)
{
	return this->repo.getPret(pos);
}

int Ctrl::getBani1Leu()
{
	return this->tonomat.getBani1Leu();
}

int Ctrl::getBani5Lei()
{
	return this->tonomat.getBani5Lei();
}

int Ctrl::getBani10Lei()
{
	return this->tonomat.getBani10Lei();
}
