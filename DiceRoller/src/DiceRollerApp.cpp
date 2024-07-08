#include "DiceTypes.h"

#include <iostream>

int main(int argc, char** argv)
{
	CustomDie customDie(100);
	Icosahedron D20;
	Dodecahedron D12;
	Octohedron D8;
	Hexahedron D6;
	Tetrahedron D4;

	unsigned int land = customDie.GetLandedSide();

	while (land != customDie.Max())
	{
		std::cout << land << std::endl;
		land = customDie.GetLandedSide();
	}
	std::cout << land << std::endl;
	std::cin.get();
}