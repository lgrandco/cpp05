#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

class Form;
class Bureaucrat;
#include "AForm.hpp"
#include "colors.hpp"

class Bureaucrat {
private:
    const std::string name;
    int grade;
    Bureaucrat& operator=(const Bureaucrat&);

public:
    Bureaucrat();
    Bureaucrat(std::string, int);
    Bureaucrat(const Bureaucrat&);
    ~Bureaucrat();
    std::string getName() const;
    int getGrade() const;
    void upgrade();
    void downgrade();
    void setgrade(int);
    void signForm(AForm& Form);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    void executeForm(AForm const& form) const;
};

std::ostream& operator<<(std::ostream&, Bureaucrat&);

#endif
