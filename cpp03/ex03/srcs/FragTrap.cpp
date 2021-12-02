#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void)
{
   name = "noname";
   hitPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << name << "> is called !"<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
   hitPoints = 100;
   attackDamage = 30;
   std::cout << "FragTrap <" << name << "> is called !"<< std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
	if (this != &src)
	{
		name = src.name;
      hitPoints = src.hitPoints;
      attackDamage = src.attackDamage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
   std::cout << "FragTrap <" << name  << "> is uncalled !"<< std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src)
{
	*this = src;
   std::cout << "FragTrap <" << name << "> is copy called !"<< std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap <" << name  << "> HighFive !!"<< std::endl;
}