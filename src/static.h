#pragma once

class my_class
{
    inline static int a = 19;
    inline static int b = 20;

public:
    my_class();
    ~my_class();
    void func();
    static my_class var;
};