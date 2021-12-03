#include "../includes/FragTrap.hpp"

int main()
{
	{	
		ClapTrap soldier("jenny");
		
		soldier.attack("peter");
		soldier.beRepaired(1);
		soldier.takeDamage(2);
	}
    std::cout << std::endl;
	{
		FragTrap james("james");

		james.highFiveGuys();
		james.attack("peter");
		james.beRepaired(1);
		james.takeDamage(2);
	}
    std::cout << std::endl;
    {
        FragTrap soldier;

		soldier.highFiveGuys();
        soldier.attack("james");
        soldier.takeDamage(50);
        soldier.beRepaired(100);
    }
    std::cout << std::endl;
    {
        FragTrap manA("manA");
        FragTrap manB(manA);

		manB.highFiveGuys();
        manB.attack("james");
        manB.takeDamage(50);
        manB.beRepaired(100);
    }
	return (0);
}