
#include "Bulls_and_cows_test.h"
#include <cassert>

void testCheckNotEntryOneParam() {
    vector<int> m(4);
    enemy_comp(m);
    assert(m.at(0) >= 0 && m.at(0) <= 9);
}


void testCheckNotEntryThoParam() {
    vector<int> m(4);
    enemy_comp(m);
    assert(m.at(1) >= 0 && m.at(1) <= 9);
}


void testCheckNotEntryThreeParam() {
    vector<int> m(4);
    enemy_comp(m);
    assert(m.at(2) >= 0 && m.at(2) <= 9);
}


void testCheckNotEntryForParam() {
    vector<int> m(4);
    enemy_comp(m);
    assert(m.at(3) >= 0 && m.at(3) <= 9);
}
