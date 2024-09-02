#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    // print_color("Default Bureaucrat constructor called");
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) {
    // print_color("Default Bureaucrat copy constructor called");
    *this = src;
}

Bureaucrat::~Bureaucrat() { // print_color("Bureaucrat destructor called");
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src) {
    // print_color("Bureaucrat Copy assignement operator called");
    grade = src.grade;
    const_cast<std::string&>(name) = src.name;
    return *this;
}

std::string Bureaucrat::getName() { return name; }

int Bureaucrat::getGrade() { return grade; }

void Bureaucrat::upgrade() { --grade; }

void Bureaucrat::downgrade() { ++grade; }
