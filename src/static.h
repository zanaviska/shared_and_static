#pragma once

void static_usage();

class my_class
{
    static const int a = 19;
    int b;
public:
    my_class();
    ~my_class();
    void func();
    static my_class var;
};