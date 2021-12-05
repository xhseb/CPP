#include "../includes/AMateria.hpp"

AMateria::AMateria()
{
	type = "";
	std::cout << "New AMateria!" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	std::cout << "New AMateria!" << std::endl;
}

AMateria::AMateria(const AMateria& src)
{
	*this = src;
	std::cout << "Copy AMateria!" << std::endl;
}

AMateria & AMateria::operator=(const AMateria& src)
{
	if (this != &src)
	{
		type = src.getType();
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "Delete AMateria!" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << target.getName() << std::endl;
}
