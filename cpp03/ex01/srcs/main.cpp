#include "../includes/ScavTrap.hpp"

int main()
{
	{	
		ClapTrap soldier("soldier");
		
		soldier.attack("peter");
		soldier.beRepaired(1);
		soldier.takeDamage(2);
	}
    std::cout << std::endl;
	{
		ScavTrap james("james");

		james.guardGate();
		james.attack("peter");
		james.beRepaired(1);
		james.takeDamage(2);
	}
    std::cout << std::endl;
    {
        ScavTrap soldier;

		soldier.guardGate();
        soldier.attack("james");
        soldier.takeDamage(50);
        soldier.beRepaired(100);
    }
    std::cout << std::endl;
    {
        ScavTrap manA("manA");
        ScavTrap manB(manA);

		manB.guardGate();
        manB.attack("james");
        manB.takeDamage(50);
        manB.beRepaired(100);
    }

	return (0);
}