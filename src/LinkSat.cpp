#include <LinkSat.h>
#include <chrono>
#include <iostream>
#include <thread>

using namespace std::string_literals;

LinkSat::LinkSat() { std::cout << type() << "{"s << id() << "}"s << std::endl; }            // log construction
LinkSat::~LinkSat() { std::cout << "~"s << type() << "{"s << id() << "}"s << std::endl; }   // log destruction

bool LinkSat::send(const std::string &message) {
    std::this_thread::sleep_for(std::chrono::milliseconds(3500));                 // simulate delay
    std::cout << "send ok,     via "s << id() << ", "s << message << std::endl;   // log sending
    return true;
}
