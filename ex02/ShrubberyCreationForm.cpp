#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::create_tree(std::string target) const {
    std::string name = target + "_shrubbery";
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

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137) {};
ShrubberyCreationForm::~ShrubberyCreationForm() {};
// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm&) {};
// ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm&) {};
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target, 145, 137) {};

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
    if (executor.getGrade() <= 150) create_tree("abc");
};
