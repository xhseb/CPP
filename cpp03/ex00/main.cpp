#include "ClapTrap.hpp"

int main()
{
    {
        ClapTrap james("james");

        james.attack("peter");
        james.takeDamage(3);
        james.beRepaired(7);
    }
    std::cout << std::endl;
    {
        ClapTrap soldier;

        soldier.attack("james");
        soldier.takeDamage(10);
        soldier.beRepaired(10);
    }
    std::cout << std::endl;
    {
        ClapTrap manA("manA");
        ClapTrap manB(manA);

        manB.attack("james");
        manB.takeDamage(5);
        manB.beRepaired(10);
    }

    return (0);
}