#include <iostream>
using namespace std;

class Paralelipiped
{
private:
	int lungime;
	int latime;
	int inaltime;

public:
	Paralelipiped()
	{
		this->lungime = 0;
		this->latime = 0;
		this->inaltime = 0;

	}

	Paralelipiped(int lungime, int latime, int inaltime)
	{
		this->lungime = lungime;
			this->latime = latime;
		this->inaltime = inaltime;
	}
	//supraincaracare
	friend istream& operator >>(istream& in, Paralelipiped& p)
	{
		cout << "introdu lungimea:";
			in >> p.lungime;
		cout << "Introdu latimea: ";
		in >> p.latime;

		cout << "Introdu inaltimea: ";
		in >> p.inaltime;
		return in;
	}

	friend ostream& operator<< (ostream & out, const Paralelipiped & p) 
	{
		out << "Lungime: " << p.lungime << ", ";
		out << "Latime: " << p.latime << ", ";
		out << "Inaltime: " << p.inaltime;

		return out;

	}
	int CalculVolum()
	{
		int volum = this->lungime * this->latime * this->inaltime;
		return volum;
	}

	int operator+(Paralelipiped& alt)
	{
		int volum1 = this->lungime * this->latime * this->inaltime;
		int volum2 = alt.lungime * alt.latime * alt.inaltime;
		return volum1 + volum2;
	}
	int operator-(Paralelipiped& alt)
	{
		int volum1 = this->lungime * this->latime * this->inaltime;
		int volum2 = alt.lungime * alt.latime * alt.inaltime;
		return volum1 - volum2;
	}
	Paralelipiped operator*(Paralelipiped& alt)
	{
		
			int volumAlt = alt.lungime * alt.latime * alt.inaltime;

			Paralelipiped nou;
			nou.lungime = this->lungime * volumAlt;
			nou.latime = this->latime * volumAlt;
			nou.inaltime = this->inaltime * volumAlt;

			return nou;
		
	}

	bool operator/(Paralelipiped& alt)
	{
		bool conditieL = this->lungime == 2 * alt.lungime;
		bool conditieW = this->latime == 2 * alt.latime;
		bool conditieH = this->inaltime == 2 * alt.inaltime;
		if (conditieL && conditieW && conditieH)
			return true;
		else
			return false;
	}
	Paralelipiped operator++(int)
	{
		Paralelipiped copie = *this; 
		this->lungime++;
		this->latime++;
		this->inaltime++;
		return copie; 
	}
	Paralelipiped operator--(int)
	{
		Paralelipiped copie = *this;

		if (this->lungime > 0 && this->latime > 0 && this->inaltime > 0)
		{
			this->lungime--;
			this->latime--;
			this->inaltime--;
		}
		return copie;
	}
};
int main()
{


	Paralelipiped p1, p2;
	cout << "[Citire p1]\n";
	cin >> p1;
	cout << "[Citire p2]\n";
	cin >> p2;

	cout << "\n[Afisare p1] " << p1 << endl;
	cout << "[Afisare p2] " << p2 << endl;

	cout << "\nVolum p1 = " << p1.CalculVolum() << endl;
	cout << "Volum p2 = " << p2.CalculVolum() << endl;

	int sumaVol = p1 + p2;
	cout << "\nSuma volumelor (p1 + p2) = " << sumaVol << endl;

	int difVol = p1 - p2;
	cout << "Diferenta absoluta a volumelor (p1 - p2) = " << difVol << endl;

	Paralelipiped p3 = p1 * p2;
	cout << "\nRezultatul p3 = p1 * p2 -> " << p3 << endl;

	bool dublu = (p1 / p2);
	cout << "\np1 are laturile duble fata de p2? " << (dublu ? "DA" : "NU") << endl;



	cout << "p1++ (postfix) -> intoarce vechiul p1: ";
	Paralelipiped vechiP1 = p1++;
	cout << vechiP1 << " | iar p1 acum: " << p1 << endl;



	cout << "p2-- (postfix) -> intoarce vechiul p2: ";
	Paralelipiped vechiP2 = p2--;
	cout << vechiP2 << " | iar p2 acum: " << p2 << endl;

	
	return 0;
}
