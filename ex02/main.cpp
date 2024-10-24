#include "AForm.hpp"
#include "Bureaucrat.hpp"

int main() {
    print_color("ex00 tests");
    print_color("trying to lower the score of a 150 graded bureaucrat ----------------------");
    Bureaucrat a("test", 150);
    std::cout << get_color() << a << std::endl;
    try {
        a.downgrade();
    } catch (Bureaucrat::GradeTooHighException& e) {
        print_color(e.what());
    } catch (Bureaucrat::GradeTooLowException& e) {
        print_color(e.what());
    } catch (std::exception& e) { e.what(); };

    print_color("\ntrying to up the score of a 1 graded bureaucrat ----------------------");
    a.setgrade(1);
    std::cout << get_color() << a << std::endl;
    try {
        a.upgrade();
    } catch (Bureaucrat::GradeTooHighException& e) {
        print_color(e.what());
    } catch (Bureaucrat::GradeTooLowException& e) {
        print_color(e.what());
    } catch (std::exception& e) { e.what(); };

    print_color("\ntrying instantiate a bureaucrate with a grade of 200 ----------------------");
    try {
        Bureaucrat b("Bureaucrat with grade 200", 200);
    } catch (Bureaucrat::GradeTooHighException& e) {
        print_color(e.what());
    } catch (Bureaucrat::GradeTooLowException& e) {
        print_color(e.what());
    } catch (std::exception& e) { e.what(); };

    print_color("\nex01 tests");
    AForm form_a("form_a", 50, 100);
    std::cout << get_color() << form_a << std::endl;
    form_a.signAForm(Bureaucrat("bureaucrat_too_low", 51));
    form_a.signAForm(Bureaucrat("bureaucrat_ok", 50));
    form_a.signAForm(Bureaucrat("bureaucrat_ok", 50));
    std::cout << get_color() << form_a << std::endl;
    print_color("\ntrying instantiate a form with a sign grade of 200 ----------------------");
    try {
        AForm form_b("AForm with grade 200", 200, 100);
    } catch (Bureaucrat::GradeTooHighException& e) {
        print_color(e.what());
    } catch (Bureaucrat::GradeTooLowException& e) {
        print_color(e.what());
    } catch (std::exception& e) { e.what(); };

    return 0;
}
