#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default_name"), grade(100) {
    // print_color("Default Bureaucrat constructor called");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
    if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : name(src.name), grade(src.grade) {
    // print_color("Default Bureaucrat copy constructor called");
    // *this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    // print_color("Bureaucrat copy assignment operator called");
    if (this != &src) { this->grade = src.grade; }
    return *this;
}

Bureaucrat::~Bureaucrat() { // print_color("Bureaucrat destructor called");
}

const std::string& Bureaucrat::getName() const { return name; }

int Bureaucrat::getGrade() const { return grade; }

void Bureaucrat::upgrade() {
    --grade;
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::downgrade() {
    ++grade;
    if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::setgrade(int grade) {
    this->grade = grade;
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
    if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat) {
    return out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Bureaucrat grade is too high");
};

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Bureaucrat grade is too low");
};
