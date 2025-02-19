#include "Zombie.hpp"
int main()
{
	Zombie *zombie2;
	
	zombie2 = newZombie("olci");
	zombie2->announce();
	randomChump("funacc");

	delete zombie2;

}