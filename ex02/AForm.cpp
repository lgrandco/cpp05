#include "AForm.hpp"

AForm::AForm(/* args */) : name("default_name"), sign_grade(100), exec_grade(100), _signed(false) {}

AForm::AForm(const AForm& src)
    : name(src.name), sign_grade(src.sign_grade), exec_grade(src.exec_grade), _signed(src._signed) {
    // print_color("Default AForm copy constructor called");
}

AForm& AForm::operator=(const AForm& src) {
    _signed = src._signed;
    const_cast<std::string&>(name) = src.name;
    const_cast<int&>(sign_grade) = src.sign_grade;
    const_cast<int&>(exec_grade) = src.exec_grade;
    return *this;
}

AForm::~AForm() { // print_color("AForm destructor called");
}

AForm::AForm(std::string name, int sign_grade, int exec_grade)
    : name(name), sign_grade(sign_grade), exec_grade(exec_grade), _signed(false) {
    if (sign_grade < 1 || exec_grade < 1) throw AForm::GradeTooHighException();
    if (sign_grade > 150 || exec_grade > 150) throw AForm::GradeTooLowException();
}

void AForm::beSigned(Bureaucrat bureaucrat) {
    if (_signed) throw AForm::FormAlreadySignedException();
    if (bureaucrat.getGrade() > sign_grade) throw Bureaucrat::GradeTooLowException();
    _signed = true;
}

void AForm::signAForm(Bureaucrat bureaucrat) {

    try {
        beSigned(bureaucrat);
        print_color(bureaucrat.getName() + " signed " + this->name);
    } catch (std::exception& e) {
        print_color(
            bureaucrat.getName() + " couldn't sign " + this->name + " because " + e.what(),
            std::cerr
        );
    };
}

int AForm::getSign_grade() { return sign_grade; }
int AForm::getExec_grade() { return exec_grade; }
std::string AForm::getName() const { return name; }
bool AForm::isSigned() { return _signed; }

std::ostream& operator<<(std::ostream& out, AForm& aform) {
    return out << aform.getName() << ", aform sign_grade: " << aform.getSign_grade()
               << ", aform exec_grade: " << aform.getExec_grade()
               << ", signed status: " << aform.isSigned();
};

const char* AForm::FormAlreadySignedException::what() const throw() {
    return ("form is already signed");
};

const char* AForm::FormNotSignedException::what() const throw() { return ("form is not signed"); };

const char* AForm::GradeTooHighException::what() const throw() {
    return ("Form grade is too high");
};

const char* AForm::GradeTooLowException::what() const throw() { return ("Form grade is too low"); };

void AForm::execute(Bureaucrat const& executor) const {
    {
        if (!_signed) throw AForm::FormNotSignedException();
        if (executor.getGrade() > this->exec_grade) throw Bureaucrat::GradeTooLowException();
        doTask();
    }
}
