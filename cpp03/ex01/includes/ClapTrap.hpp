#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &src);
        virtual ~ClapTrap();

        ClapTrap & operator=(const ClapTrap &src);
        
        virtual void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif
