#pragma once
#include <iostream>

// Base Die
class Die
{
public:

	inline unsigned int GetLandedSide() { return (rand() % NumberOfSides) + 1; }

	inline unsigned int Min() { return 1; }
	inline unsigned int Max() { return NumberOfSides; }

protected:
	Die(unsigned int numberOfSides)
		: NumberOfSides(numberOfSides) 
	{
		srand((unsigned int)time(NULL));
	}

	unsigned int NumberOfSides;
};

class Icosahedron : public Die
{
public:
	Icosahedron()
		: Die(20) {}
};

class Dodecahedron : public Die
{
public:
	Dodecahedron()
		: Die(12) {}
};

class Octohedron : public Die
{
public:
	Octohedron()
		: Die(8) {}
};

class Hexahedron : public Die
{
public:
	Hexahedron()
		: Die(6) {}
};

class Tetrahedron : public Die
{
public:
	Tetrahedron()
		: Die(4) {}
};

class CustomDie : public Die
{
public:
	CustomDie(unsigned int numberOfSides)
		: Die(numberOfSides) {}
};

