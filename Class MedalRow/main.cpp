#include <iostream>
#include <cassert>
#include "MedalRow.h"
#include "MedalsTable.h"

using namespace std;


int main()
{
	setlocale(LC_ALL, "RU");


	MedalsTable mt1;
	std::cout << "Medals table #1:\n";
	mt1["UKR"][MedalRow::GOLD] = 14;
	mt1["UKR"][MedalRow::SILVER] = 5;
	mt1["HUN"][MedalRow::BRONZE] = 9;
	mt1["HUN"][MedalRow::GOLD] = 7;
	mt1["POL"][MedalRow::GOLD] = 4;
	mt1["POL"][MedalRow::SILVER] = 2;
	mt1.print();

	std::cout << "\nMedals table #2:\n";

	const MedalsTable mt2{ mt1 };
	mt2.print();

	return 0;
}