#include <iostream>
using namespace std;

//lass Cafea -- masina de cafea cu ingrediente lapte apa si cafea, dupa fiecare cafea facuta se scad ingriedeeinte fiecare tip de cafea are procemtajul ei, 
class CoffeMachine
{
private:
	unsigned int lapte;
	unsigned int apa;
	unsigned int cafea;

public:
	CoffeMachine() //creatorul
	{
		this->lapte = 1000; //ml
		this->apa = 1000; //ml
		this->cafea = 1000; //mg
	}

	void setEspresso()
	{
		this->cafea -= 50;
		this->apa -= 100;
	}

	void setAmericano()
	{
		this->cafea -= 75;
		this->apa -= 130;
	}

	void setCapuccino()
	{

		this->cafea -= 150;
		this->apa -= 200;
		this->lapte -= 100;

	}
	
	int getcafea()
	{
	
		return this->cafea;
	}
	
	int getapa()
	{

		return this->apa;
	}

	int getlapte()
	{
		return this->lapte;
	}


};

int main()
{
	CoffeMachine masina; //clasa trb sa aibe 



	unsigned int choice;
	
	do
	{
		cout << "MENIU: \n" << "1) Espresso \n" << "2) Americano \n" << "3) Capuccino \n" << "4) Afisare Ingrediente Disponibile \n" << "5) Exit \n";
		cin >> choice;
		
	

	switch(choice)
	{
	case 1:
		if (masina.getcafea() >= 50 && masina.getapa() >= 100)
			masina.setEspresso();
		else
			cout << "nu merge espresso\n";
		break;

	case 2:
		if (masina.getcafea() >= 75 && masina.getapa() >= 130)
			masina.setAmericano();
		else
			cout << "nu merge Americano\n";
		break;

	case 3:
		if (masina.getcafea() >= 150 && masina.getapa() >= 200 && masina.getlapte() >= 100)
			masina.setCapuccino();
			
		else
			cout << "nu merge capcuccino\n";
		break;

	case 4:
		
		cout <<"cafea ramasa:"<< masina.getcafea()<<" apa ramasa: " << masina.getapa() <<" lapte ramas: "<< masina.getlapte();
		break;
	case 5:
		choice = 0;

		break;


	default:
		cout << "optiune invalida!\n";
		choice = 1;
		break;


	}
	} while (choice);



	return 0;
}