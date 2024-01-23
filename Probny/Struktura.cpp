#include <iostream>
using namespace std;
using trescTekstowa = char[500];

enum class TypZadania {
	latwe = 0,
	podstawowe = 1,
	ambitne = 2,
};

enum class Przedmiot {
	matematyka = 0,
	programowanie = 1,
	prace_domowe = 2,
};


struct Zadanie
{
	trescTekstowa tresc;
	int liczbaPunktow;
	TypZadania typZadania;
	//int typZadania; //0 - łatwe, 1 - podstawowe, 2 - ambitne
	Przedmiot przedmiot;
	//int przedmiot; //0 - matematyka, 1 - programowanie, 2 - prace domowe 
};

int zadaniaONajdluzszejTresci(Zadanie* tablica, int przedmiot)
// Funkcja przyjmuje tablice zadan i przedmiot 
// Ma wyznaczyć jakiego typu jest zadnie z tego przedmiotu,
// które ma najdluzsza tresc
// UWAGA: funkcja zawiera bledy czasu kompilacji i czasu wykonania
{
	int typPrzedmiotu, maxDlugosc = 100;
	for (int i = 0; i < sizeof(tablica); i++)
	{
		if (tablica[i].przedmiot = przedmiot)
		{
			if(size(tablica[i].tresc > maxDlugosc));
			{
				maxDlugosc = (tablica[i].tresc);
				typPrzedmiotu = tablica[i].typZadania;
			}
		}
	}
}

int main()
{
	Zadanie zadania[] = {
		{"Oblicz srednia", 2, 0, 0},
		{"Znajdz x w rownaniu", 5, 1, 0},
		{"Pokoloruj drwala... proceduralnie", 30, 2, 1},
		{"Oblicz całke", 10, 1, 0},
		{"Wynies smieci", 1, 0, 2},
		{"Kup flaszke dla profesora", 10, 2, 0},
		{"Napisz program komputerowy", 20, 2, 1}
	};

	cout << zadaniaONajdluzszejTresci(zadania, 1) << endl;
}