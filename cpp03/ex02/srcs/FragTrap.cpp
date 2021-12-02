#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
    Name = "noname";
   hitPoints = 100;
   energyPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << Name << "> is called !"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   hitPoints = 100;
   energyPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << Name << "> is called !"<< std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		Name = src.Name;
      hitPoints = src.hitPoints;
      energyPoints = src.energyPoints;
      attackDamage = src.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
   std::cout << "FragTrap <" << Name << "> is uncalled !"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
   std::cout << "FragTrap <" << Name << "> is copy called !"<< std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap <" << Name << "> HighFive !!"<< std::endl;
}