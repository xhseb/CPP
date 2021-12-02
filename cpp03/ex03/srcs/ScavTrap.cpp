#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
    name = "noname";
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap <" << name << "> is called !"<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap <" << name << "> is called !"<< std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap <" << name << "> is uncalled !"<< std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src)
{
	*this = src;
    std::cout << "ScavTrap <" << name << "> is copy called !"<< std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap <" << name << "> is in guardGate mode !"<< std::endl;
}

void ScavTrap::attack(std::string const & target)
{
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap <" << name \
        << "> has no Energy point !" <<std::endl;
    }
    else
    {
        energyPoints--;
        std::cout << "ScavTrap <" << name \
        << "> attacks <" << target << ">" << std::endl;
    }
}