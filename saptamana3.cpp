#include <iostream>
using namespace std;

class Triunghi
{
private:
	int l1, l2, l3;
public:
	Triunghi()
	{
		this->l1 = 3;
		this->l2 = 4;
		this->l3 = 5; //constructori fara parametrii
	}

	Triunghi(int l1, int l2, int l3)
	{
		this->l1 = l1;
		this->l2 = l2;
		this->l3 = l3;
	}
	int getl1()
	{
		return this->l1;
	}


	void setl1(int l1)
	{
		this->l1 = l1;
	}

	int getl2()
	{
		return this->l2;
	}


	void setl2(int l2)
	{
		this->l2 = l2;
	}


	int calculeazaPerimetrul() //METODA TRB SA AIBA VERB ADICA CALCULEAZA CV
	{
		return this->l1 + this-> l2 + this-> l3;
	}







};

int main()
{
	Triunghi* t1 = new Triunghi(); //parantezele zic ce constructor apelez de ex triunghi(4,5,6)
	cout << "lat 1 pt t1: " << t1->getl1() << '\n';
	cout << "lat 2 pt t1: " << t1->getl2() << '\n';
	cout << "perim este " << t1->calculeazaPerimetrul() << endl;
	delete t1;

}






