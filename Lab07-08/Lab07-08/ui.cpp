#include "stdafx.h"
#include "ui.h"


void Ui::options()
{
	int option = 1;
	while (option)
	{
		cout << endl << "----------------------";
		cout << endl;
		cout << endl;
		cout << "<<<<User>>>>" << endl<<endl;
		cout << "1. Adauga produs " << endl;
		cout << "2. Numar bacnote " << endl<<endl;
		cout << "<<<<Client>>>>" <<endl<< endl;
		cout << "3. Lista produse " << endl;
		cout << "4. Buy " << endl;
		cout << "0. Exit" << endl << endl;

		cout << "Citeste o optiune: ";
		cin >> option;
		cout << endl << endl;;
		switch (option)
		{
		case 0:{option = 0;	exit(1); }
		case 1:addElem(); break;
		case 2:getBani(); break;
		case 3:showAll(); break;
		case 4:buy(); break;
		}
		

		
	}
}

void Ui::addElem()
{
	int cod;
	int pret;
	char* nume = new char[15];
	cout << "Citeste cod: ";
	cin >> cod;
	cout << "Citeste nume: ";
	cin >> nume;
	cout << "Citeste pret: ";
	cin >> pret;
	this->ctrl.addElem(cod, nume, pret);
	
}

void Ui::showAll()
{
	this->ctrl.showAll();
}

void Ui::buy()
{
	int cod;
	int bani;
	cout << "Introduceti codul produsului pe care vreti sa il cumparati: ";
	cin >> cod;
	cout << "Introduceti suma de bani: ";
	cin >> bani;
	
	this->ctrl.buy(cod, bani);

}

void Ui::getBani()
{
	cout << "Bacnote 1 leu: ";
	cout << this->ctrl.getBani1Leu()<<endl;
	cout << "Bacnote 5 lei: ";
	cout << this->ctrl.getBani5Lei()<<endl;
	cout << "Bacnote 10 lei: ";
	cout << this->ctrl.getBani10Lei()<<endl;
}



