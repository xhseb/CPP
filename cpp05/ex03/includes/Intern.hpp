#ifndef INTERN_HPP
# define INTERN_HPP

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
    private:

    public:
    Intern();
    Intern(const Intern &src);
    Intern &operator=(const Intern &src);
    ~Intern();

    Form *makeForm(std::string form, std::string target) const;
};

#endif