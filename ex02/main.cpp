#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    print_color("ex00 tests");
    print_sep();
    print_color("trying to lower the score of a 150 graded bureaucrat");
    Bureaucrat a("test", 150);
    std::cout << get_color() << a << std::endl;
    try {
        a.downgrade();
    } catch (std::exception& e) { print_color(e.what(), std::cerr); }
    print_sep();
    print_color("trying to up the score of a 1 graded bureaucrat");
    a.setgrade(1);
    std::cout << get_color() << a << std::endl;
    try {
        a.upgrade();
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };
    print_sep();
    print_color("trying instantiate a bureaucrate with a grade of 200");
    try {
        Bureaucrat b("Bureaucrat with grade 200", 200);
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };

    print_color("\nex02 tests");
    print_sep();
    ShrubberyCreationForm shrub("test_form");
    a.signForm(shrub);
    a.executeForm(shrub);
    PresidentialPardonForm pres("test_form");
    a.signForm(pres);
    a.executeForm(pres);
    RobotomyRequestForm rob("test_form");
    a.executeForm(rob);
    a.signForm(rob);
    a.executeForm(rob);
}
