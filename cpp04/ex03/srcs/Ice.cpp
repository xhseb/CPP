#include "../includes/AMateria.hpp"

Ice::Ice()
{
	type = "ice";
	std::cout << "New Ice!" << std::endl;
}

Ice::Ice(const Ice& src) : AMateria (src)
{
	std::cout << "Copy Ice!" << std::endl;
}

Ice & Ice::operator=(const Ice& src)
{
	if (this != &src)
	{
		type = src.getType();
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Delete Ice!" << std::endl;
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}
