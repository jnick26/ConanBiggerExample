#include <gmock/gmock.h>
#include <fmt/format.h>

namespace
{
    int add(int a, int b)
    {
        return a + b;
    }
}

using namespace testing;

TEST(ComplexComponentTest, BasicTest)
{
    EXPECT_THAT(add(2, 3), Eq(10));
}

TEST(ComplexComponentTest, BasicFailingTest)
{
    EXPECT_THAT(add(2, 4), Eq(5));
}