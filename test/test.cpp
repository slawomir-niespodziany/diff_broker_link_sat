#include <LinkSat.h>

using namespace std::string_literals;

int main(int argc, char *argv[]) {
    LinkSat linkSat = diff::Instantiator<LinkSat>("testId"s)   //
                          .make_instance();

    // run tests here

    return 0;
}
