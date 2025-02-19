#include "Zombie.hpp"

int main()
{
	int n = 7;
	Zombie *zombieolci = zombihorde(n, "");
	for(int i = 0; i < n; i++)
		zombieolci[i].announce();
	delete[] zombieolci;
}