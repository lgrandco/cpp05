#include "Intern.hpp"

Intern::Intern() {};
Intern::~Intern() {};
Intern::Intern(Intern&) {};
Intern& Intern::operator=(Intern&) { return *this; };

static AForm* createRobotomy(const std::string& target) { return new RobotomyRequestForm(target); }
static AForm* createPresidential(const std::string& target) {
    return new PresidentialPardonForm(target);
}
static AForm* createShrubbery(const std::string& target) {
    return new ShrubberyCreationForm(target);
}

typedef AForm* (*FormCreator)(const std::string&);
AForm* Intern::makeForm(std::string name, std::string target) {
    static HashMap<FormCreator> t;
    static bool initialized = false;
    if (!initialized) {
        t.insert("robotomy request", &createRobotomy);
        t.insert("presidential pardon", &createPresidential);
        t.insert("shrubbery creation", &createShrubbery);
        initialized = true;
    }

    FormCreator* creator = t.get_value(name);
    if (!creator) {
        print_color("Form not found", std::cerr);
        return NULL;
    }
    return ((*creator)(target));
};
