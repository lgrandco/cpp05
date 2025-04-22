#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    print_color("ex00 tests");
    print_color("trying to lower the score of a 150 graded bureaucrat ----------------------");
    Bureaucrat a("test", 150);
    std::cout << get_color() << a << std::endl;
    try {
        a.downgrade();
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };

    print_color("\ntrying to up the score of a 1 graded bureaucrat ----------------------");
    a.setgrade(1);
    std::cout << get_color() << a << std::endl;
    try {
        a.upgrade();
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };

    print_color("\ntrying instantiate a bureaucrate with a grade of 200 ----------------------");
    try {
        Bureaucrat b("Bureaucrat with grade 200", 200);
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };

    ShrubberyCreationForm shrub("test_form");
    shrub.signAForm(a);
    a.executeForm(shrub);
    PresidentialPardonForm pres("test_form");
    pres.signAForm(a);
    a.executeForm(pres);
    RobotomyRequestForm rob("test_form");
    a.executeForm(rob);
    rob.signAForm(a);
    a.executeForm(rob);

    print_color("\nex03 tests");

    Intern someRandomIntern;
    AForm* rrf;
    rrf = someRandomIntern.makeForm("rrrr request", "Bender");
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        a.executeForm(*rrf);
        rrf->beSigned(a);
        a.executeForm(*rrf);
        a.executeForm(*rrf);
        a.executeForm(*rrf);
        a.executeForm(*rrf);
        a.executeForm(*rrf);
    }
}
