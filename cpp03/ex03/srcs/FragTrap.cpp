#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
   name = "noname";
   hitPoints = 100;
   energyPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << name << "> is called !"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   hitPoints = 100;
   energyPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << name << "> is called !"<< std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
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

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
   std::cout << "FragTrap <" << name << "> is copy called !"<< std::endl;
}

FragTrap::~FragTrap()
{
   std::cout << "FragTrap <" << name  << "> is uncalled !"<< std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap <" << name  << "> HighFive !!"<< std::endl;
}