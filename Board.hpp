#pragma once

#include "PPP/Simple_window.h"

class Board {
public:
    Board(Simple_window& window);

private:
    Simple_window& window;
    int x_size = window.x_max();
    int y_size = window.y_max();
};