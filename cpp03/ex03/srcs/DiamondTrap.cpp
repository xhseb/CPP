#include "../includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
    name = "noname";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    std::cout << "DiamondTrap <" << name << "> is called !"<< std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	if (this != &src)
	{
		name = src.name;
        hitPoints = src.hitPoints;
        energyPoints = src.energyPoints;
        attackDamage = src.attackDamage;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap <" << name << "> is uncalled !"<< std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ScavTrap(src), FragTrap(src)
{
	*this = src;
    std::cout << "DiamondTrap <" << name << "> is copy called !"<< std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is <" << name << ">"<< std::endl;
    std::cout << "ClapTrap name is <" << ClapTrap::name << ">"<< std::endl;
}

void DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}
