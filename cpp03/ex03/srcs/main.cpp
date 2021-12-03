#include "../includes/DiamondTrap.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "**  NONAME  **" <<std::endl;
    std::cout << std::endl;
    {
        DiamondTrap dia;
        std::cout << std::endl;
        dia.attack("peter");
        dia.beRepaired(100);
        dia.takeDamage(50);

        dia.highFiveGuys();
        dia.guardGate();
        dia.whoAmI();
    }
    std::cout << std::endl;
    std::cout << "**    STRING  **" <<std::endl;
    std::cout << std::endl;
    {
        DiamondTrap harry("harry");
        std::cout << std::endl;
        harry.attack("james");
        harry.beRepaired(100);
        harry.takeDamage(50);

        harry.highFiveGuys();
        harry.guardGate();
        harry.whoAmI();
    }
    std::cout << std::endl;
    std::cout << "**    COPY    **" <<std::endl;
    std::cout << std::endl;
    {
        DiamondTrap james("james");
        std::cout << std::endl;
        DiamondTrap peter(james);
        std::cout << std::endl;

        peter.attack("peter");
        peter.beRepaired(100);
        peter.takeDamage(50);

        peter.highFiveGuys();
        peter.guardGate();
        peter.whoAmI();
    }
    return (0);
}