#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "noname";
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap <" << name << "> is called !"<< std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = 10;
    energyPoints = 10;
    attackDamage = 0;
    std::cout << "ClapTrap <" << this->name << "> is called !"<< std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	*this = src;
    std::cout << "ClapTrap <" << name << "> is copy called !"<< std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
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

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap <" << name << "> is uncalled !"<< std::endl;
}

void ClapTrap::attack(std::string const & target)
{
     if (energyPoints == 0)
    {
        std::cout << "ClapTrap <" << name \
        << "> has no Energy point !" <<std::endl;
    }
    else
    {
        energyPoints--;
        attackDamage += 10;
        std::cout << "ClapTrap <" << name \
        << "> attacks <" << target << ">" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap <" << name << "> takes <" << \
    amount << "> points of damage!" <<std::endl;
    if (amount < hitPoints)
        hitPoints -= amount;
    else
    {
        hitPoints = 0;
        std::cout << "ClapTrap <" << name << " > has no hitPoints..." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount + hitPoints > 10)
        hitPoints = 10;
    else
        hitPoints += amount;
    std::cout << "ClapTrap <" << name << "> is repaired <" << \
    amount << "> points of hitPoints" <<std::endl;
}