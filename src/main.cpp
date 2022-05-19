#include <atomic>
#include <chrono>
#include <future>
#include <iostream>
#include <mutex>
#include <thread>

#include "static.h"
#include "dynamic.h"

using namespace std::chrono;

int main()
{
    static_usage();
    dynamic_func();
}
