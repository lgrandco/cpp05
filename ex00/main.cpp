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

    return 0;
}
