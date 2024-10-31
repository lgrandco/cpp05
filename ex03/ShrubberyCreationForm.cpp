#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::doTask() const {
    std::string name = _target + "_shrubbery";
    std::ofstream out(name.c_str());
    out << "                                                         .\n                           "
           "                   .         ;  \n                 .              .              ;%    "
           " ;;   \n                   ,           ,                :;%  %;   \n                   "
           " :         ;                   :;%;'     .,   \n           ,.        %;     %;         "
           "   ;        %;'    ,;\n             ;       ;%;  %%;        ,     %;    ;%;    ,%'\n   "
           "           %;       %;%;      ,  ;       %;  ;%;   ,%;' \n               ;%;      %;   "
           "     ;%;        % ;%;  ,%;'\n                `%;.     ;%;     %;'         `;%%;.%;'\n  "
           "               `:;%.    ;%%. %@;        %; ;@%;%'\n                    `:%;.  :;bd%;   "
           "       %;@%;'\n                      `@%:.  :;%.         ;@@%;'   \n                   "
           "     `@%.  `;@%.      ;@@%;         \n                          `@%%. `@%%    ;@@%;    "
           "    \n                            ;@%. :@%%  %@@%;       \n                            "
           "  %@bd%%%bd%%:;     \n                                #@%%%%%:;;\n                     "
           "           %@@%%%::;\n                                %@@@%(o);  . '         \n        "
           "                        %@@@o%;:(.,'         \n                            `.. "
           "%@@@o%::;         \n                               `)@@@o%::;         \n               "
           "                 %@@(o)::;        \n                               .%@@@@%::;         "
           "\n                               ;%@@@@%::;.          \n                              "
           ";%@@@@%%:;;;. \n                          ...;%@@@@@%%:;;;;,.. "
        << std::endl;
    out << "              v .   ._, |_  .,\n           `-._\\/  .  \\ /    |/_\n               "
           "\\\\  _\\, y | \\//\n         _\\_.___\\\\, \\\\/ -.\\||\n           `7-,--.`._||  / / "
           ",\n           /'     `-. `./ / |/_.'\n                     |    |//\n                  "
           "   |_    /\n                     |-   |\n                     |   =|\n                 "
           "    |    |\n--------------------/ ,  . \\--------._"
        << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shruberry", 145, 137), _target("") {};
ShrubberyCreationForm::~ShrubberyCreationForm() {};
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) { *this = src; };
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src) {
    _target = src._target;
    return *this;
};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("Shruberry", 145, 137), _target(target) {};
