#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "iostream"
#include "weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;
    public:
		HumanA(std::string name, Weapon &Weapon);
        void attack();
};

#endif