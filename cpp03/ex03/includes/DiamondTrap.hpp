#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap & src);
        ~DiamondTrap();

        DiamondTrap & operator=(const DiamondTrap &src);

        void whoAmI();
        virtual void attack(std::string const & target);
};


#endif