#include "static.h"

#include <iostream>

my_class my_class::var;

    my_class::my_class() { std::cerr << "ctor with this " << this << '\n'; }
    my_class::~my_class()
    {
        std::cerr << "this is " << this;
        std::cerr << " dctor called ";
        if (a != b)
            std::cerr << "once\n"; 
        else
            std::cerr << "twice\n"; // this second dctor for the same obj
        a = b;
    }
    void my_class::func() { std::cerr << "func\n"; }