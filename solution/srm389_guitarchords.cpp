/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8545
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class GuitarChords {
public:
    int stretch(vector<string> strings, vector<string> chord);
};

int GuitarChords::stretch(vector<string> strings, vector<string> chord) {
    int ret;
    return ret;
}


int test0() {
    vector<string> strings = {"D#"};
    vector<string> chord = {"D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> strings = {"C", "C#", "F"};
    vector<string> chord = {"C#", "D", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> strings = {"D", "E", "C", "A#"};
    vector<string> chord = {"A", "B", "C#", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> strings = {"C", "C"};
    vector<string> chord = {"B", "C#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> strings = {"B", "A", "F#", "D", "C#", "E"};
    vector<string> chord = {"D#", "A#", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> strings = {"E", "F"};
    vector<string> chord = {"F#", "D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> strings = {"A", "A", "A", "A", "A", "A"};
    vector<string> chord = {"G", "A", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> strings = {"A", "A"};
    vector<string> chord = {"G#", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> strings = {"E", "A", "D", "G", "F#", "F"};
    vector<string> chord = {"E", "G#", "B", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> strings = {"C", "C", "C"};
    vector<string> chord = {"C", "E", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> strings = {"A"};
    vector<string> chord = {"B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> strings = {"A", "A#", "B"};
    vector<string> chord = {"F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> strings = {"A", "A", "A", "A", "A"};
    vector<string> chord = {"A#", "A", "G#", "G", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> strings = {"D#", "G#", "A#", "C#", "F#"};
    vector<string> chord = {"A", "B", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> strings = {"D", "E"};
    vector<string> chord = {"D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> strings = {"A", "B", "C", "D", "E", "F"};
    vector<string> chord = {"D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> strings = {"A", "B", "C", "D#", "F#", "D"};
    vector<string> chord = {"C", "E", "G", "A", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> strings = {"B", "A", "F#", "D", "C#", "E"};
    vector<string> chord = {"D#", "A#", "G", "E", "A"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> strings = {"A", "B"};
    vector<string> chord = {"C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> strings = {"A", "A", "A", "A", "A", "A"};
    vector<string> chord = {"A", "B", "C", "D", "E", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> strings = {"A", "A", "A", "A", "A", "A"};
    vector<string> chord = {"G", "B", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> strings = {"B", "C", "C#", "D", "D#", "E"};
    vector<string> chord = {"A#", "B", "C", "C#", "D", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> strings = {"A", "A", "A"};
    vector<string> chord = {"A", "D", "G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> strings = {"A", "A", "A", "A", "A", "A"};
    vector<string> chord = {"A", "E", "F", "F#", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> strings = {"A#", "B", "B"};
    vector<string> chord = {"A", "C", "C#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> strings = {"A", "A", "A"};
    vector<string> chord = {"A#", "G#", "D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> strings = {"E", "A#", "B", "C#", "A", "G"};
    vector<string> chord = {"D#", "D", "G#", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> strings = {"F", "A#", "D", "D#", "E", "B"};
    vector<string> chord = {"G", "G#", "A", "C", "D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> strings = {"A", "B", "C", "D", "E", "G"};
    vector<string> chord = {"A#", "C#", "D#", "F#", "G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> strings = {"E", "A", "D", "G", "B", "E"};
    vector<string> chord = {"E", "G#", "B", "C#", "A", "D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> strings = {"A#", "F", "G#", "F", "G#", "G#"};
    vector<string> chord = {"G#", "G", "A", "F", "B", "D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> strings = {"F", "A#", "D", "D#", "E", "B"};
    vector<string> chord = {"G", "G#", "A", "C", "D", "E"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> strings = {"E", "A", "D", "G", "B", "E"};
    vector<string> chord = {"C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> strings = {"A", "G#"};
    vector<string> chord = {"B", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> strings = {"A", "C", "F"};
    vector<string> chord = {"C#", "F#", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> strings = {"E", "A", "D", "G", "B", "E"};
    vector<string> chord = {"E", "G#", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> strings = {"D#"};
    vector<string> chord = {"D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> strings = {"E", "F"};
    vector<string> chord = {"F#", "D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> strings = {"C", "C", "C"};
    vector<string> chord = {"C", "E", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> strings = {"G"};
    vector<string> chord = {"G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> strings = {"B", "B"};
    vector<string> chord = {"F#", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> strings = {"C#", "E", "F", "A", "G#", "B"};
    vector<string> chord = {"C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> strings = {"C", "D", "E", "G", "A", "C"};
    vector<string> chord = {"G#", "C#", "D#", "D", "C", "E"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> strings = {"D", "G", "F"};
    vector<string> chord = {"C#", "B", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> strings = {"G", "A", "F#", "C", "F#", "F"};
    vector<string> chord = {"G#", "C#", "B", "A", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> strings = {"A", "A#", "F#", "G", "C#"};
    vector<string> chord = {"C#", "D", "F#", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> strings = {"D#", "A#", "E", "G", "B"};
    vector<string> chord = {"G", "A#", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> strings = {"F#", "F", "E", "D#", "B", "B"};
    vector<string> chord = {"G", "D", "G#", "F#", "A", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> strings = {"D#", "F#", "B"};
    vector<string> chord = {"F#", "D", "C#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> strings = {"E", "F#", "A#", "A#", "A", "D"};
    vector<string> chord = {"D", "C", "G#", "B", "F#", "G"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> strings = {"C", "A#", "D#", "C#", "G", "G"};
    vector<string> chord = {"F#", "C#", "D#", "B", "F", "D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> strings = {"A#", "G", "D", "A#"};
    vector<string> chord = {"F#", "F", "D", "C#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> strings = {"F#", "F#", "F#", "D#", "G#", "A#"};
    vector<string> chord = {"F", "G#", "D"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> strings = {"C#", "D#", "A#", "D#", "F#", "A"};
    vector<string> chord = {"C#", "C", "F", "F#", "B", "G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> strings = {"D#", "G#", "E"};
    vector<string> chord = {"A", "G#", "C#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> strings = {"E", "B", "E", "G#", "G#", "E"};
    vector<string> chord = {"B", "G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> strings = {"D", "G#", "C", "F", "G#", "D#"};
    vector<string> chord = {"A#", "G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> strings = {"C", "A", "G", "E", "F", "E"};
    vector<string> chord = {"A", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> strings = {"E", "G#", "G#", "F", "D#", "D"};
    vector<string> chord = {"A", "E", "D#", "G#", "D", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> strings = {"A", "F", "F", "A", "C#", "G"};
    vector<string> chord = {"G#", "C", "E", "F#", "A#", "D#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> strings = {"C#", "F", "G", "C#", "D", "D"};
    vector<string> chord = {"D", "G#", "D#", "G", "B", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> strings = {"E", "D#", "F#", "G#", "B", "E"};
    vector<string> chord = {"C#", "A", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> strings = {"D", "B", "F", "D#", "G#", "F#"};
    vector<string> chord = {"A#", "C", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> strings = {"F#", "C#", "D", "E", "G#", "E"};
    vector<string> chord = {"B", "C#", "E"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> strings = {"G#", "C#", "F#", "G", "B", "F#"};
    vector<string> chord = {"E"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> strings = {"E"};
    vector<string> chord = {"G#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> strings = {"G#", "G", "E", "A#", "A#", "C"};
    vector<string> chord = {"C", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> strings = {"D#", "B", "E", "G#", "F#", "A#"};
    vector<string> chord = {"F", "C#", "D", "E", "G#", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> strings = {"G", "C#", "A"};
    vector<string> chord = {"G", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> strings = {"A", "C", "C#", "E", "C#", "F#"};
    vector<string> chord = {"C", "E", "A#", "F"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> strings = {"A#", "E", "A#", "A#", "A#"};
    vector<string> chord = {"F", "A"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> strings = {"C", "C", "C#"};
    vector<string> chord = {"A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> strings = {"C", "F", "G#", "B", "D"};
    vector<string> chord = {"F", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> strings = {"F", "F", "F", "F", "F", "F"};
    vector<string> chord = {"E", "F", "F#", "A#", "B", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> strings = {"D", "D", "D", "D", "D", "D"};
    vector<string> chord = {"C#", "E", "G", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> strings = {"G", "G", "G", "G", "G", "G"};
    vector<string> chord = {"G#", "A#", "C", "D", "E", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> strings = {"G#", "G#", "G#", "G#", "G#", "G#"};
    vector<string> chord = {"G#", "A#", "C", "D", "E", "F#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> strings = {"F#", "B", "G", "A"};
    vector<string> chord = {"C#", "A", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> strings = {"B", "G", "B", "C", "D"};
    vector<string> chord = {"G", "F#", "D", "B"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> strings = {"C#", "C", "D#", "A#", "D#", "A"};
    vector<string> chord = {"F", "G#", "E"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> strings = {"D#", "D#", "D#", "D#", "D#", "D#"};
    vector<string> chord = {"C#", "E", "G", "A#"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> strings = {"C", "A#", "G", "B", "F#", "D"};
    vector<string> chord = {"B", "F#", "A#", "G", "D", "C"};
    GuitarChords* pObj = new GuitarChords();
    clock_t start = clock();
    int result = pObj->stretch(strings, chord);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    test24() == 0 ? ++passed : ++failed;
    test25() == 0 ? ++passed : ++failed;
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22653358&rd=11123&pm=8545
********************************************************************************
#include <vector> 
#include <string> 
#include <iostream> 
#include <fstream> 
using namespace std; 
 
int ss[10]; 
int cs[10]; 
int cp[10]; 
int tcp[10]; 
int n, m; 
int tmin; 
int was[10]; 
 
int Count() 
{ 
  memset(was, 0, sizeof(was)); 
  int i; 
  for (i = 0; i < n; i++) 
  { 
    was[cp[i]] = 1; 
  } 
  for (i = 0; i < m; i++) if (was[i] == 0) return 2000000000; 
  int minfr = 2000000000; 
  int maxfr = -2000000000; 
  for (i = 0; i < n; i++) 
  { 
    int fr = cs[cp[i]] - ss[i]; 
    if (fr == 0) continue; 
    if (fr < 0) fr += 12; 
    fr += tcp[i]; 
    if (fr < minfr) minfr = fr; 
    if (fr > maxfr) maxfr = fr; 
  } 
  if (minfr == 2000000000) return 0; 
  return maxfr - minfr + 1; 
} 
 
void Gen(int pos) 
{ 
  if (pos == n) 
  { 
    int cur = Count(); 
    if (cur < tmin) tmin = cur; 
    return; 
  } 
  int i; 
  tcp[pos] = 0; 
  for (i = 0; i < m; i++) 
  { 
    cp[pos] = i; 
    Gen(pos + 1);     
  } 
  tcp[pos] = 12; 
  for (i = 0; i < m; i++) 
  { 
    cp[pos] = i; 
    Gen(pos + 1);     
  } 
} 
 
class GuitarChords 
{ 
public:   
  int Convert(string n) 
  { 
    if (n == "A") return 0; 
    if (n == "A#") return 1; 
    if (n == "B") return 2; 
    if (n == "C") return 3; 
    if (n == "C#") return 4; 
    if (n == "D") return 5; 
    if (n == "D#") return 6; 
    if (n == "E") return 7; 
    if (n == "F") return 8; 
    if (n == "F#") return 9; 
    if (n == "G") return 10; 
    if (n == "G#") return 11; 
    return 12; 
  } 
  int stretch(vector <string> strings, vector <string> chord) 
  { 
    n = strings.size(); 
    m = chord.size(); 
    int i; 
    for (i = 0; i < n; i++) ss[i] = Convert(strings[i]); 
    for (i = 0; i < m; i++) cs[i] = Convert(chord[i]); 
    tmin = 2000000000; 
    Gen(0); 
    return tmin; 
  } 
};

********************************************************************************
*******************************************************************************/