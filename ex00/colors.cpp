#include "colors.hpp"

const static std::string colors[7] = {
    ANSI_COLOR_RED,
    ANSI_COLOR_GREEN,
    ANSI_COLOR_YELLOW,
    ANSI_COLOR_BLUE,
    ANSI_COLOR_MAGENTA,
    ANSI_COLOR_CYAN,
    ANSI_WHITE
};

std::string get_color(std::ostream& os, bool bold) {
    if (bold) os << ANSI_BOLD;
    static bool first = true;
    if (first) {
        std::srand(time(NULL));
        first = false;
    }
    std::string color = colors[std::rand() % 7];
    if (isatty(STDOUT_FILENO)) os << color;
    return color;
}

int print_color(std::string text, std::ostream& os, bool endl, bool bold) {
    get_color(os, bold);
    os << text << ANSI_RESET;
    if (endl) os << std::endl;
    return 1;
}
