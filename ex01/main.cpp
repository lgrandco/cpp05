#include "Bureaucrat.hpp"
#include "Form.hpp"

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

    print_color("\nex01 tests");
    print_sep();
    Form form_a("form_a", 50, 100);
    std::cout << get_color() << form_a << std::endl;
    Bureaucrat("bureaucrat_too_low", 51).signForm(form_a);
    Bureaucrat("bureaucrat_ok", 50).signForm(form_a);
    Bureaucrat("bureaucrat_too_high", 50).signForm(form_a);
    std::cout << get_color() << form_a << std::endl;
    print_sep();
    print_color("trying instantiate a form with a sign grade of 200");
    try {
        Form form_b("Form with grade 200", 200, 100);
    } catch (std::exception& e) { print_color(e.what(), std::cerr); };

    return 0;
}
