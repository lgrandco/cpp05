#ifndef COLORS_HPP
#define COLORS_HPP

#include <cstdlib>
#include <iostream>
#include <unistd.h>

#define ANSI_COLOR_RED "\x1b[31m"
#define ANSI_COLOR_GREEN "\x1b[32m"
#define ANSI_COLOR_YELLOW "\x1b[33m"
#define ANSI_COLOR_BLUE "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN "\x1b[36m"
#define ANSI_WHITE "\x1b[37m"
#define ANSI_RESET "\x1b[0m"
#define ANSI_BOLD "\x1b[1m"
#define ANSI_ITALIC "\x1b[3m"

int print_color(std::string text, std::ostream& os = std::cout, bool endl = true, bool bold = true);
std::string get_color(std::ostream& os = std::cout, bool bold = true);

#endif // !COLORS_HPP
