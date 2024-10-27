#ifndef AFORM_HPP
#define AFORM_HPP

class AForm;
#include "Bureaucrat.hpp"
#include "colors.hpp"
class AForm {
private:
    const std::string name;
    const int sign_grade;
    const int exec_grade;
    bool _signed;

public:
    AForm(/* args */);
    ~AForm();
    AForm(const AForm&);
    AForm& operator=(const AForm&);
    AForm(std::string, int, int);

    void beSigned(Bureaucrat);
    void signAForm(Bureaucrat);
    int getSign_grade();
    int getExec_grade();
    std::string getName();
    bool isSigned();
    void execute(Bureaucrat const& executor) const;
    void create_tree(std::string) const;
};

std::ostream& operator<<(std::ostream&, AForm&);

#endif // !AFORM_HPP
