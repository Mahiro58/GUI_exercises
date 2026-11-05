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

    Rectangle field{Point{100,100}, 80, 80};
    win.attach(field);
    
    win.set_label("Test");
    win.wait_for_button();

    //tests


    return 0;
}