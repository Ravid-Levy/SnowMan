/**
 * An test of SnowMan mission
 *
 * 
 *
 * AUTHORS: Ravid Levi
 * 
 * Date: 2021-02
 */

#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;

/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

/** check output is not failing on matching
 */
TEST_CASE("Good snowman code") {


    CHECK(nospaces(snowman(12121212)) == nospaces(" _===_\n(..o)/\n<( : )\n(\" \")"));
    CHECK(nospaces(snowman(13131313)) == nospaces("_===_\n(._O)\n<( : )\\(___)"));
    CHECK(nospaces(snowman(34343434)) == nospaces("_\n/_\\(O -)\n/(> <)\n(   )"));
    CHECK(nospaces(snowman(43434343)) == nospaces(" ___\n(_*_)\n(-_O)\n(   )\\(___)"));
    CHECK(nospaces(snowman(13431343)) == nospaces(" _===_\n(-_O)\n<(   )\\(___)"));
    CHECK(nospaces(snowman(11114411)) == nospaces("_===_\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12331233)) == nospaces("_===_\n(O.O)/\n<(> <)\n(___)"));
    CHECK(nospaces(snowman(13231123)) == nospaces("_===_\n(o_O)\n<(] [)>\n(___)"));
    CHECK(nospaces(snowman(11111111)) == nospaces("_===_\n(.,.)\n<( : )>\n( : )"));
    CHECK(nospaces(snowman(14141414)) == nospaces("_===_\n(. -)\n<( : )\n(   )"));
    CHECK(nospaces(snowman(41414141)) == nospaces("___\n(_*_)\n(-,.)\n(   )>\n( : )"));
    CHECK(nospaces(snowman(13413414)) == nospaces("_===_\n(-_.)\n/( : )\n(   )"));
    CHECK(nospaces(snowman(43143143)) == nospaces("___\n(_*_)\n(._-) \n/(   )>\n(___)"));
    CHECK(nospaces(snowman(43211234)) == nospaces("___\n(_*_)\n(o_.)/\n<(> <) \n(   )"));
    CHECK(nospaces(snowman(12321232)) == nospaces("_===_\n(O.o)/\n<(> <)\n(\" \")"));
    CHECK(nospaces(snowman(42324243)) == nospaces("___\n(_*_)\n(O.o)/\n(   )\n(___)"));

}
/** check wrong output
 */
TEST_CASE("Bad snowman code") {
    CHECK_THROWS(snowman(1234431));
    CHECK_THROWS(snowman(555));
    CHECK_THROWS(snowman(1243));
    CHECK_THROWS(snowman(7643));
    CHECK_THROWS(snowman(9012));
    CHECK_THROWS(snowman(6070));
    CHECK_THROWS(snowman(80531));
    CHECK_THROWS(snowman(3126));
    CHECK_THROWS(snowman(890));
    CHECK_THROWS(snowman(111));
    CHECK_THROWS(snowman(10));
    CHECK_THROWS(snowman(0));
    CHECK_THROWS(snowman(1));
    CHECK_THROWS(snowman(15));
    CHECK_THROWS(snowman(12));
    CHECK_THROWS(snowman(89));
    CHECK_THROWS(snowman(843));
    CHECK_THROWS(snowman(7378));
    CHECK_THROWS(snowman(376));
    CHECK_THROWS(snowman(435));
    CHECK_THROWS(snowman(54));
    CHECK_THROWS(snowman(31));
    CHECK_THROWS(snowman(896));
    CHECK_THROWS(snowman(567));
    CHECK_THROWS(snowman(796));
    CHECK_THROWS(snowman(657));
// MINUS
    CHECK_THROWS(snowman(-89));
    CHECK_THROWS(snowman(-843));
    CHECK_THROWS(snowman(-7378));
    CHECK_THROWS(snowman(-376));
    CHECK_THROWS(snowman(-435));
    CHECK_THROWS(snowman(-54));
    CHECK_THROWS(snowman(-31));
    CHECK_THROWS(snowman(-896));
    CHECK_THROWS(snowman(-567));
    CHECK_THROWS(snowman(-796));
    CHECK_THROWS(snowman(-657));
//HIGHER
    CHECK_THROWS(snowman(123456789));
    CHECK_THROWS(snowman(123454789));
    CHECK_THROWS(snowman(413454789));
    CHECK_THROWS(snowman(413454760));
    CHECK_THROWS(snowman(413454780));
}


/* Add more test cases here */
