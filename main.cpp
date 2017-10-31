#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Distance.h"

TEST_CASE("Testing development of Distance class")
{
    SECTION("Test 1) Check Default Constructor")
    {
        Distance d1;
        REQUIRE(d1.getFeet() == 0);
        REQUIRE(d1.getInches() == 0);
    }
    SECTION("Test 2) Check Constructor with Parameters")
    {
        Distance d1(2, 4.5);
        REQUIRE(d1.getFeet() == 2);
        REQUIRE(d1.getInches() == 4.5);
    }
    SECTION("Test 3) Operator Overload '+' <obj> + <obj>")
    {
        Distance d1(3, 4.5);
        Distance d2(4, 2.1);
        Distance d3, d4;
        d3 = d2 + d1;
        REQUIRE(d1.getFeet() == 7);
        // Use approx with floating points
        REQUIRE(d1.getInches() == Approx(6.6));
        d4 = d3 + d3;
        REQUIRE(d4.getFeet() == 15);
        REQUIRE(d4.getInches() == Approx(1.2));
    }
    SECTION("Test 4) Operator Overload '+' <obj> + <const>")
    {
        Distance d1(3, 4.5);
        Distance d2;
        // We need to break this down further
        // Right now is only supporting feet
        d2 = d1 + 5;
        REQUIRE(d2.getFeet() == 8);
        // Use approx with floating points
        REQUIRE(d2.getInches() == Approx(4.5));
    }
    SECTION("Test 5) Operator Overload '+' <const> + <obj>")
    {
        Distance d1(3, 4.5);
        Distance d2;
        // We need to break this down further
        // Right now is only supporting feet
        d2 = 5 + d1;
        REQUIRE(d2.getFeet() == 8);
        // Use approx with floating points
        REQUIRE(d2.getInches() == Approx(4.5));
    }
}