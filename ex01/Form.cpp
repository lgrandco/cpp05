#include "Form.hpp"

Form::Form(/* args */) : name("default_name"), sign_grade(100), exec_grade(100), _signed(false) {}

Form::Form(const Form& src)
    : name(src.name), sign_grade(src.sign_grade), exec_grade(src.exec_grade), _signed(src._signed) {
    // print_color("Default Form copy constructor called");
}

Form& Form::operator=(const Form& src) {
    _signed = src._signed;
    return *this;
}

Form::~Form() { // print_color("Form destructor called");
}

Form::Form(std::string name, int sign_grade, int exec_grade)
    : name(name), sign_grade(sign_grade), exec_grade(exec_grade), _signed(false) {
    if (sign_grade < 1 || exec_grade < 1) throw Form::GradeTooHighException();
    if (sign_grade > 150 || exec_grade > 150) throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat bureaucrat) {
    if (_signed) throw Form::FormAlreadySignedException();
    if (bureaucrat.getGrade() > sign_grade) throw Form::GradeTooLowException();
    _signed = true;
}

int Form::getSign_grade() const { return sign_grade; }
int Form::getExec_grade() const { return exec_grade; }
const std::string& Form::getName() const { return name; }
bool Form::isSigned() const { return _signed; }

std::ostream& operator<<(std::ostream& out, Form& form) {
    return out << form.getName() << ", form sign_grade: " << form.getSign_grade()
               << ", form exec_grade: " << form.getExec_grade()
               << ", signed status: " << form.isSigned();
}

const char* Form::FormAlreadySignedException::what() const throw() {
    return ("form is already signed");
};

const char* Form::FormNotSignedException::what() const throw() { return ("form is not signed"); };

const char* Form::GradeTooHighException::what() const throw() {
    return ("Form grade is too high");
};

const char* Form::GradeTooLowException::what() const throw() { return ("Form grade is too low"); };
