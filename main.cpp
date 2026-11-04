#include <iostream>
#include "PPP/Simple_window.h"
#include "PPP/Graph.h"

 double dsin(double d) {
        return sin(d);
    }

    // learning about C++ GUI

int main(){
    using namespace Graph_lib;

    Application app;

    Point t1 {900,500};
    Simple_window win {t1, 800, 600, "Window"};
    
    win.set_label("Test");
    win.wait_for_button();


    return 0;
}