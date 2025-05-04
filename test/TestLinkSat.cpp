#include <LinkSat.h>
#include <gtest/gtest.h>

using namespace std::string_literals;

TEST(TestLinkSat, ExampleTest) {
    LinkSat linkSat = diff::Instantiator<LinkSat>("testId"s)   //
                          .make_instance();

    EXPECT_EQ(1u, 1u);
}
