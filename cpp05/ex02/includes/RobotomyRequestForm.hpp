#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

class RobotomyRequestForm : public Form
{
    private:

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &src);
        RobotomyRequestForm& operator= (const RobotomyRequestForm &src);
        ~RobotomyRequestForm();
        virtual void execute(Bureaucrat const & executor) const;
};

#endif
