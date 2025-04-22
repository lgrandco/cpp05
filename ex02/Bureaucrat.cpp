#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default_name"), grade(100) {
    // print_color("Default Bureaucrat constructor called");
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
    if (grade > 150) throw Bureaucrat::GradeTooLowException();
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

std::string Bureaucrat::getName() const { return name; }

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

void Bureaucrat::executeForm(AForm const& form) const {
    try {
        form.execute(*this);
        print_color("Succesfuly executed form");
    } catch (std::exception& e) {
        print_color(
            this->name + " couldn't execute " + form.getName() + " because " + e.what(),
            std::cerr
        );
    }
};
