#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP

#include "iostream"
#include "weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *weapon;
    public:
		HumanB(std::string name);
		void setWeapon(Weapon &weapon);
        void attack();
};
#endif