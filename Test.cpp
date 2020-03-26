#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;



TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of lower-case and upper-case") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    /* Add more checks here */
}

/* Add more test cases here */


TEST_CASE("Test replacement of v and w") {
    string text = "xxx vappv yyy";
    CHECK(find(text, "wappv") == string("vappv"));
    CHECK(find(text, "wabbw") == string("vappv"));
    CHECK(find(text, "vapbv") == string("vappv"));
    CHECK(find(text, "vabpw") == string("vappv"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of w with v") {
    string text = "xxx wappw yyy";
    CHECK(find(text, "wappv") == string("wappw"));
    CHECK(find(text, "wabbw") == string("wappw"));
    CHECK(find(text, "vapbv") == string("wappw"));
    CHECK(find(text, "vabpw") == string("wappw"));
    /* Add more checks here */
}

TEST_CASE("Test replacement of v with w") {
    string text = "xxx valve yyy";
    CHECK(find(text, "walve") == string("valve"));
    CHECK(find(text, "walwe") == string("valve"));
    CHECK(find(text, "valve") == string("valve"));
    CHECK(find(text, "valwe") == string("valve"));
    /* Add more checks here */
}



