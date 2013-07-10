/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8560
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

class SpecificPolyominoCovering {
public:
    vector<string> findCovering(vector<string> region);
};

vector<string> SpecificPolyominoCovering::findCovering(vector<string> region) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> region = {"XXXX", "XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBA", "AAAA"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> region = {"X..XXXX..X", "XXXX..XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A..ABBA..A", "AAAA..AAAA"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> region = {"XXXXXX", "XXXXXX", "XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBABB", "AAAABB", "BBBBBB"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> region = {"X..XX", "XXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> region = {"XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXX..XXX", "XXXXXXXXXX", "XXXXXXXXXX", "XXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBABB", "AAAAAAAABB", "ABBABBBBBB", "AAAAA..ABB", "ABBAAAAABB", "AAAAABBABB", "BBBBAAAABB"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB..", "..AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBB"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> region = {"...XXXX...", "X..XXXX..X", "XXXX..XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BBBB...", "A..ABBA..A", "AAAA..AAAA"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> region = {"..........", ".........."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..........", ".........."};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> region = {"."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> region = {"X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> region = {"XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> region = {"X..X", "XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A..A", "AAAA"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> region = {"XX", "XX", "XX", "XX", "XX", "XX", "XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "BB", "BB", "BB", "BB", "BB", "BB"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> region = {"XX....XX", "XX....XX", "XXXXXXXX", "XXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB....BB", "BB....BB", "ABBAABBA", "AAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> region = {"XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBAABBABB", "AAAAAAAAAAAABB", "ABBAABBAABBABB", "AAAAAAAAAAAABB", "ABBAABBAABBABB", "AAAAAAAAAAAABB", "ABBAABBAABBABB", "AAAAAAAAAAAABB"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> region = {"XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX", "XXXXXX.XXXXXXX", "XXXXXX.XXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> region = {"XXX..XXX", "XXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBA..ABB", "BBAAAABB"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> region = {"XXXX..XXXX", "XXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBA..ABBA", "AAAABBAAAA"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> region = {"XXX..XXXX", "XXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> region = {"XXXXXX", "X..XXX", "XXXXXX", "XX.XX.", "..XXXX", "XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBB", "A..ABB", "AAAABB", "BB.BB.", "..ABBA", "BBAAAA"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> region = {".XX.XX", "XXX..X", "XXXXXX", "XXXXXX", ".XXXX.", "XXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BB.BB", "BBA..A", "BBAAAA", "BBBBBB", ".BBBB.", "BBBB.."};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> region = {"XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", "XXXXXX", ".XX.XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBABB", "AAAABB", "ABBABB", "AAAABB", "BBBBBB", ".BB.BB"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> region = {"....XX", "..X..X", "..XXXX", "......", "...XX.", "..XX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....BB", "..A..A", "..AAAA", "......", "...BB.", "..BB.."};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> region = {"XXXXXX", "XXX..X", "XXXXXX", "..XXXX", "XX....", ".XX..."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBB", "BBA..A", "BBAAAA", "..BBBB", "BB....", ".BB..."};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> region = {"XXXX..", "......", "XXXX..", "XXXX..", "......", "XX.XX.", ".XX...", "XX.XX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBB..", "......", "ABBA..", "AAAA..", "......", "BB.BB.", ".BB...", "BB.BB."};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> region = {".", ".", ".", ".", ".", ".", ".", "."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".", ".", ".", ".", ".", ".", ".", "."};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> region = {"..XX....", "..XX...."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..BB....", "..BB...."};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> region = {"XX", "XX", "..", "..", "XX", "XX", "XX", "XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB", "BB", "..", "..", "BB", "BB", "BB", "BB"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> region = {"XXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBB."};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> region = {"XX.XX.XXXXXXXXXXXXXXXXXXXXXX.XX.", "XXXXXX.XX.XXXX..XX.XX.XXXXXX..XX", "XXXXXXXXXX.XXXX.XX..XXXXXX.XX.XX", "..XXXXXX.XXXXXX.XX..XXXX.XXXX...", "XXXX.XX..XXXXXX.XX.XX.XX.XXXXXX.", "XX.XX.XX.XX....XX...XXXX.XX.XXXX", "XX.XX.XX.XXXXXXXXXXXXXXXX....XX.", "XXXX..XX.XX.XX.XXXXXX..XXXXXXXX.", "XX.XX.....XXXXXX..XX.XX.XXXXXXXX", "XXXX..XXXX.XX.XX.XXXX....XXXX.XX", ".XXXXXX..XX.XX..XX.XX..XXXX.XXXX", "XXXXXXXX..XXXX..XX..XXXX.XX.XXXX", "XXXXXXXXXXXXXX.XX.XX.XXXXXXXXXX.", ".XXXXXX.XXXX....XXXX.XX.XXXXXXXX", "XX.XX.XX.XX.XXXX.XX.XX.XXXXXX...", "XXXXXXXXXXXXXXXX.XX.XXXXXXXX.XX.", "XX.XXXX..XX.XX.XX.XXXXXXXX..XXXX", "XX.XXXXXX.XXXXXXXXXXXX.XXXXXX...", "XXXXXXXX.XXXXXX.XX.XX...XXXXXXXX", "XXXXXX.XX.XXXXXX..XXXXXXXXXX..XX", "XXXX.XXXX.XXXX...XXXX.XX..XXXXXX", ".XXXX...XXXXXX.XXXXXX.XXXXXXXXXX", "XX.XXXXXXXXXX.XX.XXXX.XXXXXXXX..", "XXXXXXXXXXXXXXXX.XX..XX.XXXX.XX.", "XXXX.XXXXXXXXXX.XXXXXXXX.XXXXXX.", "...XX..XX..XXXX..XX..XXXXXXXX.XX", "XXXX..XXXXXXXXXX.XX.XX.XX....XX.", "XXXX.XXXXXXXXXX.XXXX.XX..XXXX.XX", "XXXXXXXXXX.XXXXXX..XXXXXXXXXXXX.", ".XXXXXXXXXXXXXX..XXXXXX.XX.XXXX.", "..XXXXXXXXXXXXXXXXXX.XX...XX.XX.", "XXXXXXXXXXXX....XXXXXX.XX.XXXX..", "XX.XXXXXX.XXXX.XXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXX.XXXXXX...XX", "XXXX.XXXX..XX.XX.XXXXXXXX.XXXXXX", "XXXXXXXXXXXXXX.XX.XXXXXXXX..XXXX", ".XX.XXXXXX..XX.XX.XXXX.XXXX.....", "XXXXXXXX..XXXX.XX.XXXXXXXXXX..XX", "XXXX..XX.XX.XXXX.XX.XXXXXX.XXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB.BB.BBBBABBABBBBBBBBABBABB.BB.", "ABBABB.BB.AAAA..BB.BB.AAAABB..BB", "AAAAABBABB.ABBA.BB..ABBABB.BB.BB", "..BBAAAA.BBAAAA.BB..AAAA.ABBA...", "BBBB.BB..BBBBBB.BB.BB.BB.AAAABB.", "BB.BB.BB.BB....BB...BBBB.BB.BBBB", "BB.BB.BB.BBBBBBABBABBBBBB....BB.", "BBBB..BB.BB.BB.AAAABB..BBBBBBBB.", "BB.BB.....BBBBBB..BB.BB.BBBBBBBB", "BBBB..BBBB.BB.BB.BBBB....BBBB.BB", ".BBBBBB..BB.BB..BB.BB..BBBB.ABBA", "ABBAABBA..ABBA..BB..BBBB.BB.AAAA", "AAAAAAAABBAAAA.BB.BB.BBBBBBBBBB.", ".BBBBBB.BBBB....BBBB.BB.BBBBBBBB", "BB.BB.BB.BB.ABBA.BB.BB.BBBBBB...", "BBBBBBBBBBBBAAAA.BB.ABBABBBB.BB.", "BB.ABBA..BB.BB.BB.BBAAAABB..BBBB", "BB.AAAABB.BBBBBBBBBBBB.BBBBBB...", "ABBABBBB.BBBBBB.BB.BB...ABBABBBB", "AAAABB.BB.ABBABB..BBBBBBAAAA..BB", "BBBB.BBBB.AAAA...ABBA.BB..ABBABB", ".BBBB...BBBBBB.BBAAAA.ABBAAAAABB", "BB.BBBBBBBBBB.BB.BBBB.AAAABBBB..", "ABBABBBBBBBBBBBB.BB..BB.BBBB.BB.", "AAAA.BBBBBBABBA.BBBBBBBB.ABBABB.", "...BB..BB..AAAA..BB..BBBBAAAA.BB", "ABBA..BBBBBBBBBB.BB.BB.BB....BB.", "AAAA.BBBBBBABBA.BBBB.BB..ABBA.BB", "BBBBBBBBBB.AAAABB..ABBABBAAAABB.", ".BBBBBBBBBBBBBB..BBAAAA.BB.BBBB.", "..ABBAABBABBBBBBABBA.BB...BB.BB.", "BBAAAAAAAABB....AAAABB.BB.BBBB..", "BB.BBBBBB.ABBA.BBBBBBABBABBBBBB.", "ABBABBBBBBAAAABBBBBB.AAAABB...BB", "AAAA.BBBB..BB.BB.BBBBBBBB.BBABBA", "BBBBABBABBBBBB.BB.ABBABBBB..AAAA", ".BB.AAAABB..BB.BB.AAAA.BBBB.....", "ABBABBBB..BBBB.BB.BBABBABBBB..BB", "AAAA..BB.BB.BBBB.BB.AAAABB.BBBB."};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> region = {"XXXX.", "XX...", "XXXX.", "XX.XX", "XXXX.", "XXXX.", "..XX.", "XXXX.", "XX.XX", "XX.XX", "XX.XX", "XXXX.", "XXXX.", "XXXX.", "XX.XX", "XXXX.", ".XXXX", ".XXXX", "XXXX.", "..XX.", "XX.XX", "XXXX.", "XXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBB.", "BB...", "BBBB.", "BB.BB", "ABBA.", "AAAA.", "..BB.", "BBBB.", "BB.BB", "BB.BB", "BB.BB", "ABBA.", "AAAA.", "BBBB.", "BB.BB", "BBBB.", ".ABBA", ".AAAA", "BBBB.", "..BB.", "BB.BB", "ABBA.", "AAAA."};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> region = {"XXXX...XXXX.XX..XXXXXX..XXXX.....", "XXXXXX.XX....XXXXXXXXXXXX..XX....", "....XX.XX.XXXXXXXXXX.XX.XXXXXXXX.", "XX.XXXXXX.XX..XXXXXXXX.XXXXXXXX..", "XXXXXXXX.XX.XX.XXXX.XX.XX.XXXX...", "XXXXXX..XXXX.XX..XXXXXXXXXXXX.XX.", "XX...XXXXXXXX.XXXXXXXX....XX...XX", "XXXXXX.XX.XXXX...XXXX.XXXX.XXXXXX", "XX..XXXX..XXXXXX..XX.XX..XX..XXXX", "...XX....XXXXXXXXXXXXXXXXXX....XX", ".XXXXXXXXXX.XX.XX.XXXXXXXXXX..XX.", "XXXXXX..XX..XX.XX..XX.XXXXXXXX.XX", ".XX.XXXX.XX...XXXX...XX.XXXXXX...", "XXXX..XXXXXXXXXXXX.XXXXXX....XX..", "XX.XXXXXXXX...XX.XX.XX...XX.XX.XX", ".XXXX.XX.XX....XX..XXXXXX...XX...", ".XX.XXXX.XX.XXXXXXXX..XXXXXXXX.XX", "XXXXXX.....XX.XXXX.XX..XX...XXXX.", "XXXXXX.XX...XXXXXXXX..XX.XXXX.XX.", "...XX.XXXXXX.XXXXXX.....XX.XXXXXX", ".XXXX.XX.XXXXXX.XXXX...XX..XX....", "XXXXXXXXXXXX.XX..XX..XXXX.XX.XXXX", "XX.XX...XXXXXX.....XX.XX..XXXXXX.", "..XX.XX.XXXX.XXXXXX.XX.....XX.XX.", ".XXXXXX.XXXXXX....XX.XXXX.....XX.", "XX.XX...XX..XX.XXXXXX....XX..XXXX", "....XXXXXX..XX.XX.XX..XX.XXXXXX..", "XXXXXXXXXX..XXXXXXXXXX..XX..XX.XX", "..XXXX.XX...XX....XXXXXXXX..XXXX.", ".XX.XX.XXXXXX..XX.XXXX..XX.XXXXXX", ".XX..XXXXXXXX..XX..XXXX.XX....XX.", ".XX.XXXXXX.XX...XX..XX.XXXXXXXX..", "XX.XXXXXXXX.XX.XXXXXX...XX....XX.", "XXXX...XXXX.XXXXXXXXXX.XX..XXXX..", ".XX.XXXXXXXXXX.XXXX.XXXX.XXXX..XX", "XXXXXXXXXX.XXXXXX.XX....XXXX.XX..", "XXXXXX...XXXX.XXXX...XX.XXXXXX...", "XXXX.XXXX.XXXX.....XX.XX.XXXXXXXX", "XXXX.XXXX..XXXXXX..XXXX.XXXX..XX.", "XXXXXX..XXXX.XXXXXX.XX.XXXX......", "XX....XX.XX.XXXX.XXXX.XXXX..XX.XX", "XXXXXX.XXXXXXXX..XX.....XXXXXX.XX", ".....XX..XXXX.XXXXXX....XXXX.XX..", "..XXXX..XXXX..XXXX...XX.XX..XXXX.", ".XXXXXXXXXXXXXXXX.XXXXXX.XXXX..XX", ".XXXXXXXXXXXXXX.XXXXXX.XX...XXXX.", ".XX..XX..XXXXXX..XXXXXX.XX.....XX", "XXXXXX...XXXXXX.XX.......XXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBA...BBBB.BB..BBBBBB..BBBB.....", "AAAABB.BB....BBBBBBBBBBBB..BB....", "....BB.BB.BBBBABBABB.BB.BBBBBBBB.", "BB.BBBBBB.BB..AAAABBBB.BBBBBBBB..", "ABBABBBB.BB.BB.BBBB.BB.BB.BBBB...", "AAAABB..BBBB.BB..BBBBBBBBBBBB.BB.", "BB...BBBBBBBB.BBBBBBBB....BB...BB", "BBBBBB.BB.ABBA...BBBB.BBBB.BBABBA", "BB..BBBB..AAAABB..BB.BB..BB..AAAA", "...BB....BBBBBBBBBBBBBBBBBB....BB", ".BBBBBBBBBB.BB.BB.BBBBABBABB..BB.", "BBBBBB..BB..BB.BB..BB.AAAAABBA.BB", ".BB.BBBB.BB...ABBA...BB.BBAAAA...", "BBBB..BBBBBBBBAAAA.BBBBBB....BB..", "BB.BBBBBBBB...BB.BB.BB...BB.BB.BB", ".BBBB.BB.BB....BB..BBBBBB...BB...", ".BB.BBBB.BB.BBABBABB..BBBBBBBB.BB", "ABBABB.....BB.AAAA.BB..BB...BBBB.", "AAAABB.BB...BBBBBBBB..BB.BBBB.BB.", "...BB.BBBBBB.BBBBBB.....BB.BBBBBB", ".BBBB.BB.BBBBBB.BBBB...BB..BB....", "BBBBBBBBABBA.BB..BB..BBBB.BB.BBBB", "BB.BB...AAAABB.....BB.BB..BBBBBB.", "..BB.BB.ABBA.BBBBBB.BB.....BB.BB.", ".BBBBBB.AAAABB....BB.BBBB.....BB.", "BB.BB...BB..BB.BBBBBB....BB..BBBB", "....ABBABB..BB.BB.BB..BB.BBBBBB..", "BBBBAAAABB..BBBBBBABBA..BB..BB.BB", "..BBBB.BB...BB....AAAABBBB..BBBB.", ".BB.BB.ABBABB..BB.BBBB..BB.BBBBBB", ".BB..BBAAAABB..BB..BBBB.BB....BB.", ".BB.BBBBBB.BB...BB..BB.BBBBBBBB..", "BB.BBBBABBA.BB.BBBBBB...BB....BB.", "BBBB...AAAA.BBBBBBBBBB.BB..BBBB..", ".BB.ABBABBBBBB.BBBB.BBBB.BBBB..BB", "ABBAAAAABB.BBBBBB.BB....ABBA.BB..", "AAAABB...BBBB.BBBB...BB.AAAABB...", "ABBA.ABBA.BBBB.....BB.BB.BBBBBBBB", "AAAA.AAAA..BBABBA..BBBB.BBBB..BB.", "BBBBBB..BBBB.AAAABB.BB.BBBB......", "BB....BB.BB.BBBB.BBBB.BBBB..BB.BB", "BBBBBB.BBABBABB..BB.....ABBABB.BB", ".....BB..AAAA.ABBABB....AAAA.BB..", "..BBBB..BBBB..AAAA...BB.BB..BBBB.", ".ABBAABBAABBABBBB.ABBABB.BBBB..BB", ".AAAAAAAAAAAABB.BBAAAA.BB...BBBB.", ".BB..BB..ABBABB..BBBBBB.BB.....BB", "BBBBBB...AAAABB.BB.......BBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> region = {"XX...XX..........", "XX.............XX", "...XX.XXXXXXXX.XX", "XXXX....XX.......", "..XX.........XXXX", "XXXX...XXXX.XX...", ".XXXX....XX...XX.", ".............XX..", ".......XX......XX", "XX...XX..XX.XXXX.", "........XX..XX.XX", "....XXXX...XX....", "XX.........XX.XX.", ".XXXX.XX......XX.", ".......XX...XX.XX", ".XX......XXXX....", "XX....XX.XX....XX", ".....XXXX........", "..............XX.", "....XX.XX.....XX.", "...XXXX.....XX...", "XX...XX..XXXXXXXX", ".....XXXX........", "XX.XXXX.XX.......", "..XX..XX.....XXXX", "XX.....XX..XXXX..", "..........XX...XX", "..XX...XX...XXXX.", ".XX.......XXXX...", "..XX.XX...XX..XX.", "XX.....XX.XXXXXX.", "...XXXX..XXXXXXXX", ".XXXX.XX...XX.XX.", "...XX.XX.XX...XX.", "....XX...........", "XX....XX......XX.", "...XX.XX..XX.XX..", "..XX.XX.XXXX.....", "XXXX.XX....XX....", "XX.....XXXX....XX", "..XXXX...XX....XX", "............XX...", "....XX.XX..XX..XX", "..XX...XX........", ".....XX.XXXX..XX.", ".XX...XX..XX.XX..", "...XX..XX......XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB...BB..........", "BB.............BB", "...BB.BBBBBBBB.BB", "BBBB....BB.......", "..BB.........BBBB", "BBBB...BBBB.BB...", ".BBBB....BB...BB.", ".............BB..", ".......BB......BB", "BB...BB..BB.BBBB.", "........BB..BB.BB", "....BBBB...BB....", "BB.........BB.BB.", ".BBBB.BB......BB.", ".......BB...BB.BB", ".BB......BBBB....", "BB....BB.BB....BB", ".....BBBB........", "..............BB.", "....BB.BB.....BB.", "...BBBB.....BB...", "BB...BB..BBBBBBBB", ".....BBBB........", "BB.BBBB.BB.......", "..BB..BB.....BBBB", "BB.....BB..BBBB..", "..........BB...BB", "..BB...BB...BBBB.", ".BB.......BBBB...", "..BB.BB...BB..BB.", "BB.....BB.BBBBBB.", "...BBBB..BBBBBBBB", ".BBBB.BB...BB.BB.", "...BB.BB.BB...BB.", "....BB...........", "BB....BB......BB.", "...BB.BB..BB.BB..", "..BB.BB.BBBB.....", "BBBB.BB....BB....", "BB.....BBBB....BB", "..BBBB...BB....BB", "............BB...", "....BB.BB..BB..BB", "..BB...BB........", ".....BB.BBBB..BB.", ".BB...BB..BB.BB..", "...BB..BB......BB"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> region = {".XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XX.XX.XX.XXXX.XXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXX..XXXX", ".XXXX.XX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XX.XX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XX..XXXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXX.XX.", "XXXX..XXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXX.XX.XX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXX.XXXX.XXXX.XXXXXX.XXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXX.XX.XX.XXXX.XXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXX.XXXX.XX.XXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXX..XXXX.XXXXXXXXXXXXXXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXX.XXXXXX.XXXXXX.XXXXXX.XXXX.XXXXXXXX.", "XX.XXXXXX.XXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXX..XX.XXXXXXXXXX..XXXXXX.XXXXXX", "XXXX.XXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX..XXXXXX.", "XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXXXXXX.XXXX..XXXXXX.XX.XXXX..", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBB.BBABBABBBBBBBBBBBBBBBBBBBBBB", "BBABBABB.BB.BB.BB.AAAA.BBBBABBABBBBBBBBBBBB.", "..AAAABBBBBBBBABBAABBAABBA.AAAA.ABBABB..ABBA", ".BBBB.BB.ABBA.AAAAAAAAAAAABBBBBBAAAABBBBAAAA", "BB.BBBBBBAAAABBABBAABBAABBAABBABB.BBBB.BB.BB", "ABBAABBAABBABB.AAAAAAAAAAAAAAAAABBABB.ABBABB", "AAAAAAAAAAAABBBBBBBBBB.BB..BBBBAAAA.BBAAAABB", "ABBABBABBAABBA.BBBBABBAABBABB.ABBAABBABB.BB.", "AAAA..AAAAAAAABBBB.AAAAAAAA.BBAAAAAAAA.BB.BB", ".BBBBBBBBBBBBABBAABBAABBABBBBBBBBBBBBBBBBBB.", "ABBAABBAABBA.AAAAAAAAAAAA.BBBBBBBBBBBBABBABB", "AAAAAAAAAAAAABBABBBBBBABBA.ABBABBBBBB.AAAABB", "ABBAABBABBBBAAAA.ABBA.AAAA.AAAABB.BBBBBBBBBB", "AAAAAAAA.BBBBBBBBAAAA.BB.BB.BBBB.ABBAABBA.BB", "ABBAABBAABBAABBABBBB.BBBB.BB.ABBAAAAAAAAA.BB", "AAAAAAAAAAAAAAAABB..BBBB.ABBAAAAAABBABBBBBB.", "BB.BBBBBBABBABBBBBBBBBBBBAAAABBBBAAAABB.BBBB", "BBBBBBBB.AAAABB.BBBBBB.ABBABB.BBBB.BBBBBBBB.", "BB.BBBBBB.ABBA.BBBBABBAAAAABBBBBB.BBBBABBABB", "ABBABBBBBBAAAA..BB.AAAAABBABB..ABBABB.AAAABB", "AAAA.BBBBBBBBBBABBA.BB.AAAAABBAAAAABBABBABB.", "ABBAABBAABBABB.AAAABBBBABBAAAAABBBB..AAAABB.", "AAAAAAAAAAAABBBBBBBBBB.AAAA.ABBABBBBBBABBABB", "ABBA.BBBBBBBBBBABBABB.BBBB..AAAABB.BB.AAAA..", "AAAAABBAABBABB.AAAABBBBBBBBBBBBBBBBBBBB.BBBB", "BBBBAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.."};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> region = {"...XX.............................................", "..................................................", "................................................XX", "...................................XX.............", ".................XX...........XX..................", "..................................................", "................XX................................", "...................XX..............XX.............", ".................XX........XX.....................", ".............................XX...................", "..................................................", ".....XX......................XX...................", "XX..XX............................................", ".......XX............XX...........................", "..........XX.........XX...........................", ".......................XX...............XX........", "..................................................", "..................................................", ".XX..................................XX...........", "XX................................................", "..............XX..................................", "..................................................", "....XX.................XX...............XX........", ".XX...............................................", "...................XX.................XX.XX.XX....", "..................................................", "..................................................", "..................................................", "...........XX................XX................XX.", "..................................................", ".........XX................XX.....XX..............", "..................................................", ".......XX.........................................", "...................XX..XX.............XX..........", "...................XX..................XXXX.......", "................XXXX.XX........XX.................", "........................XX.............XX.........", "..................................................", "......XX..........................................", ".............................XX...................", "..................................................", ".......................XX.......................XX", "..........XX.....XX.............XX................", "...........XX..XX.................................", ".XX............................................XX.", ".................................XX..XX...........", "..........XX......................XX..............", "....................XX.........XX...............XX", "...................XX................XX...........", ".............................XX...XX.............."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BB.............................................", "..................................................", "................................................BB", "...................................BB.............", ".................BB...........BB..................", "..................................................", "................BB................................", "...................BB..............BB.............", ".................BB........BB.....................", ".............................BB...................", "..................................................", ".....BB......................BB...................", "BB..BB............................................", ".......BB............BB...........................", "..........BB.........BB...........................", ".......................BB...............BB........", "..................................................", "..................................................", ".BB..................................BB...........", "BB................................................", "..............BB..................................", "..................................................", "....BB.................BB...............BB........", ".BB...............................................", "...................BB.................BB.BB.BB....", "..................................................", "..................................................", "..................................................", "...........BB................BB................BB.", "..................................................", ".........BB................BB.....BB..............", "..................................................", ".......BB.........................................", "...................BB..BB.............BB..........", "...................BB..................BBBB.......", "................BBBB.BB........BB.................", "........................BB.............BB.........", "..................................................", "......BB..........................................", ".............................BB...................", "..................................................", ".......................BB.......................BB", "..........BB.....BB.............BB................", "...........BB..BB.................................", ".BB............................................BB.", ".................................BB..BB...........", "..........BB......................BB..............", "....................BB.........BB...............BB", "...................BB................BB...........", ".............................BB...BB.............."};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXX.XXXXXXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXX.XXXX.XXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XX.XXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXX.", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXX.XX.", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", ".XX.XXXXXXXXXXXX..XXXXXX..XXXXXXXXXXXXXXXXXX.XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXX.XXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.BB.", "AAAAAAAA.ABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBABB.BBAAAA.ABBABBBBABBAABBAABBAABBABBBBBBBBBBBB", "AAAABBBBBBBBBBAAAA.BB.AAAAAAAAAAAAAAAA.BBBBBBABBA.", "BB.BBBBBBBBBBBBBBABBAABBABB.BBBB.ABBABB.BBBB.AAAA.", "ABBAABBAABBAABBA.AAAAAAAAABBAABBAAAAABBBBBBABBABB.", "AAAAAAAAAAAAAAAA.ABBAABBAAAAAAAAAABBABB.BB.AAAABB.", "ABBAABBAABBAABBA.AAAAAAAAABBAABBAAAAAABBA.BBBBBBBB", "AAAAAAAAAAAAAAAABB.BBBBBBAAAAAAAABBBBAAAABBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBAABBAABBA", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.AAAAAAAAAAAA", "BBBBBB.BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBABBBB.BB", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAABB.ABBA", "ABBABBBBABBAABBAABBABBBBBBBBBBBBABBAABBAABBABBAAAA", "AAAA.BB.AAAAAAAAAAAA.BBBBBBBBBB.AAAAAAAAAAAAABBABB", "ABBAABBAABBAABBABBBBBBBBBBBBABBAABBAABBAABBAAAAABB", "AAAAAAAAAAAAAAAABB.ABBAABBA.AAAAAAAAAAAAAAAABBBBBB", "ABBAABBAABBABBBBBB.AAAAAAAABBBBBBBBBBBBBBBBBBABBA.", "AAAAAAAAAAAABB.BBBBABBABB.BBBBBBBBBBBBABBABB.AAAA.", "ABBAABBAABBABBBBBB.AAAAABBAABBAABBABB.AAAABBBB.BB.", "AAAAAAAAAAAABB.BBBBBBBBAAAAAAAAAAAABBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBABBBBBBBB.BB.BBABBAABBAABBA", "AAAAAAAAAAAAAAAAAAAAAAAABB.ABBAABBABB.AAAAAAAAAAAA", "BB.BBABBAABBAABBAABBAABBABBAAAAAAAAABBAABBAABBABB.", "ABBA.AAAAAAAAAAAAAAAAAAAABBBBBBBBBBAAAAAAAAAAAABB.", "AAAAABBAABBAABBAABBAABBAABBAABBAABBABBBBBBBBABBABB", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB.BBBB.AAAABB", "AAAA.BBBBBBBBBBBBBBABBAABBAABBABB.BBBBBBBBABBAABBA", "ABBAABBABBBBBBBBBB.AAAAAAAAAAAABBBBBBBBBB.AAAAAAAA", "AAAAAAAA.BBBBBBBBBBBBBBBBBBBB.ABBAABBAABBABBBBBBBB", ".BB.ABBAABBAABBA..ABBABB..ABBAAAAAAAAAAAAABB.BBBB.", "ABBAAAAAAAAAAAAABBAAAAABBAAAAAABBAABBAABBAABBAABBA", "AAAABBBB.ABBA.BBBBBBBBAAAAABBAAAAAAAAAAAAAAAAAAAAA", "ABBABB.BBAAAABBBBBBBB.BBBBAAAABBBBBBBBBBBBBBABBABB", "AAAAABBAABBAABBABBABBA.BBBBBBBBBBBBBBBBBBBB.AAAABB", "ABBAAAAAAAAAAAAA..AAAAABBAABBAABBAABBAABBAABBABB..", "AAAAABBAABBAABBAABBABBAAAAAAAAAAAAAAAAAAAAAAAABB..", "ABBAAAAAAAAAAAAAAAAABBBBBBBBBBBB.ABBAABBAABBAABBA.", "AAAAABBAABBAABBA.BBBBBBBBBBABBABBAAAAAAAAAAAAAAAA.", "ABBAAAAAAAAAAAAAABBAABBABB.AAAA.ABBA.BBBBBBBBBBBB.", "AAAAABBAABBAABBAAAAAAAAAABBAABBAAAAAABBAABBAABBABB", "ABBAAAAAAAAAAAAABBABBABBAAAAAAAAABBAAAAAAAAAAAAABB", "AAAAABBAABBAABBA..AAAAABBAABBABBAAAAABBAABBAABBABB", "BBBBAAAAAAAAAAAABBABBAAAAAAAAABB.BB.AAAAAAAAAAAABB", "BB.BBBBBBBBABBABB.AAAABBBBBBBBBBBBBBBBBBBBBBABBABB", "ABBAABBABB.AAAABBBBBBBBBBBBBBBBBBBBBBBBBBBB.AAAABB", "AAAAAAAAABBAABBAABBAABBABBBBBBBBBBBBBBBBABBAABBABB", "ABBAABBAAAAAAAAAAAAAAAAABB.BBBBBBBBBBBB.AAAAAAAABB", "AAAAAAAAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBAAAABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB."};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> region = {"......XXXX.XXXXXX.XX......XX..XX.XXXX.XXXX..XXXX..", "XXXX..XX.XXXX..XXXX...XXXX.XX.......XX.XX.XX..XX..", "..XX..XX.XX..XXXXXX..XX...XX....XXXXXX........XX..", "...XX.XXXX...XXXX..XXXXXXXX..XXXX............XXXX.", "....XXXX.......XX.......XX.XX.XXXX..XXXXXX...XX...", "..........XXXX.XX.XX.XX.XX...XX....XX..XXXX..XX...", "XX.XX.XX.XXXX.XX.XXXXXX...XX.XX..XX...XX..XX..XX..", "XX.XXXXXX....XXXX.XX..........XXXX.XXXX..XX.XX....", ".XX.XX...XX.XX..XX..XX..XX...XX..XX.XXXX...XX...XX", "..XXXX.....XX...XX.XX........XX.XX.XX..XXXX.XX..XX", ".XXXX.......XX.......XXXX.XX.XX.XX....XX......XXXX", "XX.XX..XXXXXX..........XX.XX..XX.XX.......XXXX....", "XX.XXXX.XX......XX....XXXX...XXXXXX........XX.....", ".XX.XXXX...XXXX.XX...XX...XXXX.XX....XXXX.XX..XX..", "..XX.XX.XXXXXXXX...........XXXX.XX...XXXX..XX.....", "...XX....XXXX..XX.XX.....XX...............XX..XX..", "....XXXXXX.XXXXXX.....XX.XX...XXXXXX.XXXXXX..XX.XX", "XX.......XX.......XX.XX.XX.XX..XX.XX....XXXXXX....", "XX...XXXXXXXX.XX....XX..XXXX....XX......XX.XXXX.XX", ".XXXX..XXXX.....XXXXXXXXXXXX........XXXX.XX..XX...", "XX..XX.......XXXX.XX.XX...XX.XX.XX.....XXXX.XX.XX.", "....XX.XXXX..XX.XX.XX....XXXXXX.........XX.XXXX...", "XXXXXX......XXXX.XXXX.........XXXX......XX...XXXX.", ".XX.XX.......XX.XX.XX.XX...XX....XX...XX.XX..XX...", "..........XXXX..XXXXXX.XX.XXXXXX.XX....XX.....XX..", ".....XX..XXXXXX...XX...XX..XX.XX.XX.XX.XXXX...XXXX", "XX...XX..XXXX.....XX.XXXXXX.XXXX......XX...XX..XX.", ".XX.XXXX..XXXX...XXXXXX...XX..XX.XX...XX......XXXX", "XXXX.XXXX..XX.........XX...XX.XX.XX......XXXX.....", "......XXXX..XXXXXXXX.XX........XXXXXX..XX....XX...", ".XXXX.XX..XXXX.........XXXXXXXX.XX.XXXX..XX..XXXX.", "XX.....XX...XX..XXXX.XX....XX....XX...XX....XX....", "XXXX..XX.......XX...XX...XX.XX......XX..XX.XX.XX..", "....XX.......XXXXXX...........XXXX.......XXXXXX...", "..XX...XXXXXXXX..XXXXXX......XXXX..XXXXXX...XX..XX", "XX..XX.XX..XXXXXX......XXXX.XX...XXXXXX......XX...", ".....XXXX..XX....XX...XX....XX....XXXX......XXXXXX", "XXXX..XX.XX.XX.XX.XX.......XX.....XX.XX.....XXXXXX", "..XX...XXXX..XX.....XX.XX...XX..XX....XX..XX......", ".....XX.....XXXXXXXXXX....XXXX..XX.XXXX...XXXX....", "XX...XX..XX.XX...XX.XX.XXXX..XX.XXXX.....XX...XX..", ".XX.....XX.XXXXXXXX......XXXXXXXX...XXXX........XX", "...XX...XXXX..XXXXXX..XX.XX...XX......XX....XX..XX", "XX.XXXX...XX......XX..XX..XX.XX..XXXXXX......XX...", ".XX.XXXXXXXX...........XX.XX.XX.....XXXX...XXXX.XX", "..XXXX.XXXX.....XXXXXX..XX....XX.XXXX.XX..XX..XXXX", "...XX..XX...XXXX......XXXXXX..XX.XX.XXXXXX....XXXX", "XX.XX.XX..XX..XX.XX.........XX....XX.XXXXXX...XX..", "..XX.XXXX.XX.....XX.XXXX..XX.XX.......XXXX...XXXX.", "...XX..XXXXXXXXXXXX.....XX.XX....XX.XX...XXXX....."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......BBBB.BBBBBB.BB......BB..BB.BBBB.BBBB..BBBB..", "BBBB..BB.BBBB..ABBA...BBBB.BB.......BB.BB.BB..BB..", "..BB..BB.BB..BBAAAA..BB...BB....BBBBBB........BB..", "...BB.BBBB...BBBB..BBBBBBBB..BBBB............BBBB.", "....BBBB.......BB.......BB.BB.BBBB..BBBBBB...BB...", "..........BBBB.BB.BB.BB.BB...BB....BB..BBBB..BB...", "BB.BB.BB.BBBB.BB.BBBBBB...BB.BB..BB...BB..BB..BB..", "BB.BBBBBB....BBBB.BB..........BBBB.BBBB..BB.BB....", ".BB.BB...BB.BB..BB..BB..BB...BB..BB.BBBB...BB...BB", "..BBBB.....BB...BB.BB........BB.BB.BB..BBBB.BB..BB", ".BBBB.......BB.......BBBB.BB.BB.BB....BB......BBBB", "BB.BB..BBBBBB..........BB.BB..BB.BB.......BBBB....", "BB.BBBB.BB......BB....BBBB...BBBBBB........BB.....", ".BB.BBBB...BBBB.BB...BB...BBBB.BB....ABBA.BB..BB..", "..BB.BB.BBBBBBBB...........BBBB.BB...AAAA..BB.....", "...BB....BBBB..BB.BB.....BB...............BB..BB..", "....BBBBBB.BBBBBB.....BB.BB...BBBBBB.BBBBBB..BB.BB", "BB.......BB.......BB.BB.BB.BB..BB.BB....BBBBBB....", "BB...BBABBABB.BB....BB..ABBA....BB......BB.BBBB.BB", ".BBBB..AAAA.....BBBBBBBBAAAA........BBBB.BB..BB...", "BB..BB.......BBBB.BB.BB...BB.BB.BB.....BBBB.BB.BB.", "....BB.BBBB..BB.BB.BB....BBBBBB.........BB.BBBB...", "BBBBBB......BBBB.BBBB.........BBBB......BB...BBBB.", ".BB.BB.......BB.BB.BB.BB...BB....BB...BB.BB..BB...", "..........BBBB..BBBBBB.BB.BBBBBB.BB....BB.....BB..", ".....BB..ABBABB...BB...BB..BB.BB.BB.BB.BBBB...BBBB", "BB...BB..AAAA.....BB.BBBBBB.BBBB......BB...BB..BB.", ".BB.BBBB..BBBB...BBBBBB...BB..BB.BB...BB......BBBB", "BBBB.BBBB..BB.........BB...BB.BB.BB......BBBB.....", "......BBBB..BBBBBBBB.BB........BBBBBB..BB....BB...", ".BBBB.BB..BBBB.........BBBBBBBB.BB.BBBB..BB..BBBB.", "BB.....BB...BB..BBBB.BB....BB....BB...BB....BB....", "BBBB..BB.......BB...BB...BB.BB......BB..BB.BB.BB..", "....BB.......BBBBBB...........BBBB.......BBBBBB...", "..BB...BBBBABBA..BBBBBB......BBBB..ABBABB...BB..BB", "BB..BB.BB..AAAABB......BBBB.BB...BBAAAA......BB...", ".....BBBB..BB....BB...BB....BB....BBBB......ABBABB", "BBBB..BB.BB.BB.BB.BB.......BB.....BB.BB.....AAAABB", "..BB...BBBB..BB.....BB.BB...BB..BB....BB..BB......", ".....BB.....BBBBBBBBBB....BBBB..BB.BBBB...BBBB....", "BB...BB..BB.BB...BB.BB.BBBB..BB.BBBB.....BB...BB..", ".BB.....BB.BBBBBBBB......BBBBBBBB...BBBB........BB", "...BB...BBBB..BBBBBB..BB.BB...BB......BB....BB..BB", "BB.BBBB...BB......BB..BB..BB.BB..BBBBBB......BB...", ".BB.BBBBBBBB...........BB.BB.BB.....BBBB...BBBB.BB", "..BBBB.BBBB.....BBBBBB..BB....BB.BBBB.BB..BB..ABBA", "...BB..BB...BBBB......BBBBBB..BB.BB.BBBBBB....AAAA", "BB.BB.BB..BB..BB.BB.........BB....BB.BBBBBB...BB..", "..BB.BBBB.BB.....BB.BBBB..BB.BB.......BBBB...BBBB.", "...BB..BBBBBBBBBBBB.....BB.BB....BB.BB...BBBB....."};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> region = {"...XX..XXXXXX..XXXXXXXXXXXXXX.XX..XXXXXXXXXXXXXXXX", "XXXX.XX.XX.XXXX....XX.XXXXXX.XXXX..XX...XXXXXX.XX.", ".XXXX.XX...XX.XX........XXXX..XXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXX..XX...XX.XX.XXXX.XXXXXXXX.XXXXXXXX", ".XXXX......XX.XXXX.XX.XX.XXXX............XXXX.XXXX", ".XX.XXXX.XXXX..XX...XX...XX.XXXX..XXXX...XXXX..XX.", ".XXXXXXXXXXXXXXXX...XXXX..........XX...XXXXXX...XX", "XX.XX..XXXX..XX.XXXX.XXXXXX...XXXXXXXXXXXX.XX..XX.", ".XX..XXXXXXXX..XXXXXX.XX.XX......XXXXXXXX..XXXXXX.", "XXXX......XXXXXX.XX.XX.XXXXXX.XX..XX...XX.XX.XXXX.", ".XX..XXXX.XXXX..XX.XXXXXX..XX...XX..XXXX.....XX.XX", "XXXX..XX....XX..XX..XXXXXXXXXXXXXX.XX..XXXX..XXXX.", "XXXX..XX...XX.XXXXXX.XXXXXX.XXXXXXXXXXXX.XXXXXXXX.", "XX.XXXXXXXX...XXXX..XX..XX..XXXXXX..XXXXXX.XXXXXX.", ".XXXX...XX..XXXX....XXXX.XXXX.XX...XX.XX.XXXX.....", ".XX...XXXX..XX.XX..XX.XX..XXXXXX..XXXX..XX.....XX.", "...XXXXXX.XXXX...XX.XX.XX..XX.XX.XXXX.XXXXXX.XXXX.", "XX.XXXX...XX.XX.XX.XX.XX.XX..XXXXXXXXXXXXXX.XX.XX.", "....XXXXXX....XXXX.XXXXXXXX.XX.XX.XXXXXXXX...XXXX.", "XXXX..XX......XX..XX....XX.XX.XXXX..XX.XXXXXX..XX.", "XXXX.XX...XX.XXXXXXXX.XX.XX.XXXXXXXXXXXXXXXX..XXXX", ".XXXXXXXX.XXXXXX.XX....XX.XXXX....XXXX.XX...XX.XX.", "...XX.XX...XX..XXXX.XX.XXXXXXXXXXXXXXXX..XX.XX.XX.", "XX..XXXX.XX.XXXXXXXX.XX.XXXXXX.XX..XXXX.XX.XX...XX", "XX..XXXXXX.XXXX...XX..XXXX.XX.XXXX.XXXXXX.XXXXXX..", "....XXXX...XX.XXXX..XX.XX...XX....XXXX.XXXXXXXXXX.", ".XX.XXXX..XXXXXX..XXXX...XXXX.XXXXXX...XXXXXXXX.XX", ".XXXXXXXX.XXXX.XXXX.XX......XX.XX...XX...XXXX.XX..", ".XXXXXXXXXX.XX.XXXXXX.XXXXXX..XXXXXX...XX.XXXXXXXX", "XX..XXXX.XXXXXX...XX...XXXXXX.XX..XXXXXX..XXXX.XX.", ".XX...XXXX.XXXX.XXXX.XX..XX.....XX..XX.XX..XX.....", "...XXXX.XX.XXXXXXXX..XX.XXXX.XXXX.......XXXX.XX...", "XX..XXXXXX...XX....XX.XXXXXX.XX.....XXXXXX..XX....", "XX.XX.XX.XXXXXX.XX.....XXXX.XX..XXXX.XXXX..XXXX.XX", ".XXXXXX..XXXXXXXX...XX.XXXX..XX..XXXXXXXXXX.XXXX..", "....XXXXXX......XX.XX...XX........XX.XXXXXX.XXXX..", "XX.XX.XXXXXXXXXXXXXX.XX.XX.XXXX..XX.XXXXXXXX.XXXX.", "..XX.XX.XXXX.XXXXXXXXXX.XX..XXXXXX..XX..XXXX.XXXX.", "..XXXX.XXXXXXXX.XXXXXXXX.XXXXXX.XXXXXXXXXXXX.XXXX.", "XXXX..XX.XXXXXX.XXXX.XXXX.XXXX.XXXXXXXXXXXX..XXXX.", "XXXXXX...XX...XXXXXXXX...XX...XX.XX.XX..XXXX..XXXX", "XX.XXXX.XXXX.....XX..XXXXXXXXXXXXXX..XXXX...XX....", ".XX..XXXX..XXXX.XX....XXXX..XXXX.XXXXXX.XXXXXXXX..", "XX..XX.XX.XX...XXXXXX.XXXXXX.XX.XX..XXXX.XX.XX.XX.", "XXXX....XXXX.XX..XXXXXX.XXXX..XXXX.XX...XXXX.XXXX.", ".....XXXXXXXXXXXXXXXXXX.XXXXXXXX...XX..XXXX...XX..", ".XX....XXXX.....XXXX..XX..XXXXXX.XX.XX.XXXX..XXXX.", "..XX.XXXXXXXX.....XX...XX.XX.XX.........XXXXXX..XX", ".XXXXXXXXXXXX......XXXXXX..XX.XX.XX.XXXXXX.XXXX.XX", "..XXXXXXXX...XX..XX..XXXXXXXXXX..XXXXXXXX...XXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BB..BBBBBB..BBBBBBBBBBBBBB.BB..BBBBBBABBABBBBBB", "BBBB.BB.BB.BBBB....BB.BBABBA.BBBB..BB...AAAABB.BB.", ".BBBB.BB...BB.BB........AAAA..BBBBBBBBBBBBABBAABBA", "BBBBBBBB.BBBBBB..BB...BB.BB.BBBB.BBBBBBBB.AAAAAAAA", ".BBBB......BB.BBBB.BB.BB.BBBB............ABBA.BBBB", ".BB.BBBB.ABBA..BB...BB...BB.BBBB..BBBB...AAAA..BB.", ".BBBBBBBBAAAABBBB...BBBB..........BB...BBBBBB...BB", "BB.BB..ABBA..BB.BBBB.BBBBBB...BBBBBBBBBBBB.BB..BB.", ".BB..BBAAAABB..BBBBBB.BB.BB......BBBBBBBB..BBABBA.", "BBBB......ABBABB.BB.BB.BBBBBB.BB..BB...BB.BB.AAAA.", ".BB..BBBB.AAAA..BB.BBBBBB..BB...BB..BBBB.....BB.BB", "ABBA..BB....BB..BB..BBBBBBBBABBABB.BB..BBBB..ABBA.", "AAAA..BB...BB.ABBABB.BBBBBB.AAAABBBBABBA.BBBBAAAA.", "BB.BBBBBBBB...AAAA..BB..BB..BBBBBB..AAAABB.BBBBBB.", ".BBBB...BB..BBBB....BBBB.BBBB.BB...BB.BB.BBBB.....", ".BB...BBBB..BB.BB..BB.BB..BBBBBB..BBBB..BB.....BB.", "...ABBABB.BBBB...BB.BB.BB..BB.BB.ABBA.BBBBBB.BBBB.", "BB.AAAA...BB.BB.BB.BB.BB.BB..BBBBAAAABBBBBB.BB.BB.", "....BBBBBB....BBBB.BBBBBBBB.BB.BB.BBBBBBBB...BBBB.", "ABBA..BB......BB..BB....BB.BB.ABBA..BB.BBBBBB..BB.", "AAAA.BB...BB.BBBBBBBB.BB.BB.BBAAAAABBABBBBBB..BBBB", ".BBBBBBBB.BBBBBB.BB....BB.BBBB....AAAA.BB...BB.BB.", "...BB.BB...BB..BBBB.BB.BBBBBBBBBBBBABBA..BB.BB.BB.", "BB..ABBA.BB.BBBBBBBB.BB.BBBBBB.BB..AAAA.BB.BB...BB", "BB..AAAABB.BBBB...BB..BBBB.BB.BBBB.BBBBBB.BBBBBB..", "....ABBA...BB.BBBB..BB.BB...BB....BBBB.ABBAABBABB.", ".BB.AAAA..ABBABB..BBBB...BBBB.BBBBBB...AAAAAAAA.BB", ".ABBAABBA.AAAA.ABBA.BB......BB.BB...BB...BBBB.BB..", ".AAAAAAAABB.BB.AAAABB.BBBBBB..BBBBBB...BB.ABBABBBB", "BB..BBBB.BBABBA...BB...BBBBBB.BB..BBBBBB..AAAA.BB.", ".BB...BBBB.AAAA.BBBB.BB..BB.....BB..BB.BB..BB.....", "...BBBB.BB.BBBBBBBB..BB.ABBA.BBBB.......BBBB.BB...", "BB..BBBBBB...BB....BB.BBAAAA.BB.....BBBBBB..BB....", "BB.BB.BB.ABBABB.BB.....ABBA.BB..BBBB.ABBA..BBBB.BB", ".BBBBBB..AAAABBBB...BB.AAAA..BB..BBBBAAAABB.ABBA..", "....BBABBA......BB.BB...BB........BB.BBBBBB.AAAA..", "BB.BB.AAAABBBBBBBBBB.BB.BB.BBBB..BB.BBBBABBA.ABBA.", "..BB.BB.BBBB.BBBBBBBBBB.BB..BBBBBB..BB..AAAA.AAAA.", "..BBBB.BBABBABB.ABBABBBB.BBBBBB.BBBBBBBBBBBB.ABBA.", "ABBA..BB.AAAABB.AAAA.BBBB.BBBB.BBBBBBBBBBBB..AAAA.", "AAAABB...BB...BBBBBBBB...BB...BB.BB.BB..BBBB..BBBB", "BB.BBBB.BBBB.....BB..BBBBBBBBBBBBBB..BBBB...BB....", ".BB..BBBB..BBBB.BB....ABBA..BBBB.BBBBBB.BBBBBBBB..", "BB..BB.BB.BB...BBABBA.AAAABB.BB.BB..BBBB.BB.BB.BB.", "BBBB....BBBB.BB..AAAABB.ABBA..BBBB.BB...BBBB.BBBB.", ".....BBABBABBBBBBBBBBBB.AAAAABBA...BB..ABBA...BB..", ".BB....AAAA.....BBBB..BB..BBAAAA.BB.BB.AAAA..BBBB.", "..BB.ABBAABBA.....BB...BB.BB.BB.........BBBBBB..BB", ".BBBBAAAAAAAA......BBABBA..BB.BB.BB.BBBBBB.BBBB.BB", "..BBBBBBBB...BB..BB..AAAABBBBBB..BBBBBBBB...BBBB.."};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXX.XXXX.XXXXXX.XXXXXXXX", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXX.XXXXXX.XXXX..XXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX..XX.", "XXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX..", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXX.XXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX..XXXXXXXX.XXXX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXX..XX.XX.XXXX.", ".XXXXXXXXXX.XX.XXXXXXXXXXXXXX.XXXXXX..XXXX.XXXXXX.", "XXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXX.", "XXXXXX.XXXXXXXX.XXXXXXXX.XX.XXXXXXXXXX.XXXXXXXXXX.", "XXXXXXXXXXXXXXXXXX..XX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXX.XXXXXXXXXXXXXX...XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXX.XXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.", "XXXXXXXX.XXXX.XX.XX.XXXX.XX..XXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXX.XX.XXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXXXXXXX.XX.", "XXXXXXXXXXXXXXXX..XX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XX.XXXXXX.XX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX.", "XXXXXXXXXX.XXXXXXXXXXXXXX.XX.XXXXXXXXXX..XXXXXX.XX", ".XX.XXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXX.XXXXXXXX.", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX.XXXX.", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXXXX.XXXX.XXXXXXXX.XX.XXXXXXXX.XXXXXX.XXXX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", ".XXXXXXXXXX..XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XX.XXXXXXXX.XXXXXXXX", ".XXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXX.XXXXXX", ".XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.", ".XXXXXXXXXX..XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXX", "XX.XXXXXXXX..XXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBABBBBBBBBBBABBAABBAABBAABBAABBABBBBBBBBBBBB", "AAAAAAAABB.BBBBBB.AAAAAAAAAAAAAAAAAAAA.BBBBBBBBBB.", "ABBAABBAABBABBBBBBBBBBBBBBBBBBABBABBBBBBBBABBAABBA", "AAAAAAAAAAAABB.BBBBBBBBBBBBBB.AAAA.BBBBBB.AAAAAAAA", "..ABBAABBABBBBBBBBABBABBABBAABBAABBAABBAABBAABBA..", "BBAAAAAAAA.BBBBBB.AAAA..AAAAAAAAAAAAAAAAAAAAAAAA..", "ABBAABBAABBAABBAABBAABBA.BB.BBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAABBA.BBBBBBBBBBBBBBBB..BB.", "ABBABBBB.ABBAABBAABBA.BBAAAABBBBBBBBBBBBBBBBABBABB", "AAAABB.BBAAAAAAAAAAAAABBAABBABBBBBBBBBBBBBB.AAAA..", "ABBAABBAABBAABBAABBA.AAAAAAAABB.BBBBBBBBBB.BBBBBB.", "AAAAAAAAAAAAAAAAAAAAABBAABBA.BB..BBBBBBBB.BBBB.BB.", "BBBBBBBBBBBBBBBBBBBBAAAAAAAABBBBBBBBBBBBBB.BBABBA.", "BB.ABBAABBABBBBABBAABBAABBABB.BB.BBBB..BB.BB.AAAA.", ".BBAAAAAAAA.BB.AAAAAAAAAAAABB.ABBABB..BBBB.ABBABB.", "ABBAABBAABBA.BB.ABBAABBABBBBBBAAAA.ABBAABBAAAAABB.", "AAAAAAAAAAAAABBAAAAAAAAABB.ABBAABBAAAAAAAAABBBBBB.", "ABBAABBABBBBAAAABBBBBBBB.BBAAAAAAAABBABBABB.BBBBBB", "AAAAAAAABB.ABBABBBBBBBBBBBBBBBBBB.BB.AAAAABBAABBA.", "ABBABB.BBBBAAAA.BBBBBBBB.BB.BBBBBBBBBB.BBAAAAAAAA.", "AAAABBBBBBBBBBBBBB..BB.BBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBA.ABBAABBABBBBBB...ABBABBBBBBABBAABBAABBAABBABB", "AAAA.AAAAAAAABB.BBBBBBAAAABB.BB.AAAAAAAAAAAAAAAABB", "ABBAABBAABBA.BBBBBBBBBBBBBBBBABBAABBAABBAABBAABBA.", "AAAAAAAAAAAABBBBBBBBABBABBBB.AAAAAAAAAAAAAAAAAAAA.", "ABBAABBA.BBBB.BB.BB.AAAA.BB..ABBABBBBBB.ABBAABBABB", "AAAAAAAAABBAABBABB.BBBB.BB.BBAAAA.ABBABBAAAAAAAABB", "ABBAABBAAAAAAAAABBBBBB.ABBABB.BBBBAAAAABBAABBA.BB.", "AAAAAAAAABBAABBA..BB.BBAAAABBBB.BBBBBBAAAAAAAAABBA", "ABBAABBAAAAAAAAABBBBBBBBBBBB.BBBBBBBB.ABBAABBAAAAA", "AAAAAAAABBBBBBBBBB.ABBAABBABB.BBBBBBBBAAAAAAAABBBB", "BBBBBBBBBB.BB.BB.BBAAAAAAAABBBBBBBBBBBBBBBBBBBBBB.", "BB.BBABBA.BB.ABBABBBBBBBB.ABBAABBAABBAABBABBBBBBBB", "ABBA.AAAABBBBAAAA.BBBBBBBBAAAAAAAAAAAAAAAA.ABBABB.", "AAAAABBABB.BBABBAABBABBBB.BB.BBBBBBBBBB..BBAAAA.BB", ".BB.AAAAABBA.AAAAAAAABB.BBABBAABBAABBABBBBBBBBBBBB", "ABBABBBBAAAABBBB.ABBAABBA.AAAAAAAAAAAABB.BBBBABBA.", "AAAA.BBABBAABBABBAAAAAAAAABBAABBAABBA.ABBABB.AAAA.", "ABBABB.AAAAAAAABBBBBBBBBBAAAAAAAAAAAA.AAAAABBABBBB", "AAAAABBA.BBBB.ABBAABBA.BB.ABBAABBA.BBBBBB.AAAA.BB.", "BBBBAAAABBBBBBAAAAAAAAABBAAAAAAAAAABBABB..ABBAABBA", ".BBABBAABBA..ABBABB.BBAAAAABBAABBAAAAAABBAAAAAAAAA", "BB.AAAAAAAABBAAAAABBA.BBBBAAAAAAAABBBBAAAAABBAABBA", "BBBBBBBBBBBBBBBB.AAAABBBBBBBB.BB.ABBAABBA.AAAAAAAA", ".ABBAABBABBBBBBBBBB.ABBAABBABB.BBAAAAAAAABB.BBBBBB", ".AAAAAAAABB.BBBBBBBBAAAAAAAAABBA.BBBBBBBBBBBBBBBB.", ".BBBBBBBBBB..BBBBBBBBBB.ABBAAAAABBBBBBBBBBBBABBABB", "BBBB.BB.BBBBBBBBBBBBBBBBAAAA.BBBBBBBBBBBBBB.AAAABB", "BB.BBBBBBBB..BBBBABBA.BBBBBBBBBBBBBBBBBB.ABBAABBA.", "BBBBBBBBBBBBBBBB.AAAABBBBBBBBBBBBBBBBBBBBAAAAAAAA."};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.", "XXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBAABBAABBAABBABBBBBBBBBB..BBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAABB.BBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBA.BBBB.", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBB", "ABBAABBAABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "AAAAAAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBA..ABBABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAABBAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBA", "BBBBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBABBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB.BBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB.BB.", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBB", "ABBABBBBABBAABBAABBAABBAABBAABBAABBABB.BBBBBBBBBB.", "AAAA.BB.AAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAABBAABBABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAAAAAAAAAAAAABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAABBAABBABB", "ABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAABB", "AAAAAAAA.BBABBAABBAABBAABBAABBAABBAABBAABBAABBABB.", "ABBAABBABB.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB.", "AAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "BBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAA.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBABBBBBBABBAABBAABBAABBAABBAABBAABBAABBAABBA", "AAAAAAAABB.BB.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "ABBAABBAABBAABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAA.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB.BBBBBB.", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBB", "ABBAABBAABBAABBAABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBB.", "AAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXX.XXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "AAAAAAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAABBAABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAAAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBABBBBBBBBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBAABBAABBABB.", "ABBAABBAABBAABBAABBA.BB.BBBBBBBBBB.AAAAAAAAAAAABB.", "AAAAAAAAAAAAAAAAAAAAABBABB.BBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAAAAAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAABBAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBB..BBAAAABBBBBBBBBBBBBBBBBBBBBBBBBB", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBABBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAABB.ABBAABBAABBAABBAABBAABBABB.", "ABBAABBAABBAABBA.BBBBBBAAAAAAAAAAAAAAAAAAAAAAAABB.", "AAAAAAAAAAAAAAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBABBAABBAABBA.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBA.AAAAAAAAAAAA.", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBA.BBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBABBBBBBBBAAAABBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAABB.BBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBABBBBBBBBBBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA.BBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBABBBBBBBBBBBBBB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.ABBAABBAABBA.", "ABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBAAAAAAAAAAAA.", "AAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAABBAABBAABBAABBAABBAABBAABBAABBAABBABB.BBBBBB.", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAABBABB", "AAAAABBAABBAABBAABBABBBBBBBBBBBBBBBBBBBBAAAAAAAABB", "ABBAAAAAAAAAAAAAAAAABB.BBBBBBBBBBBBBBBBBBBBBBBBBB.", "AAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "ABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "AAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAABBAABBAABBAABBAABBAABBAABBA.BBBBBBBBBB.ABBABB", "ABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBBBBBBBBBBBAAAABB", "AAAAABBAABBAABBAABBABB.BBABBAABBABBBBBBBBBBBBBBBB.", "BBBBAAAAAAAAAAAAAAAABBBB.AAAAAAAABB.BBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> region = {".XXXXXXXX.", "XXXXXXXXXX", ".XXXXXXXX.", "XXXXXXXXXX", ".XXXXXXXX.", "XXXXXXXXXX", ".XXXXXXXX.", "XXXXXXXXXX", ".XXXXXXXX.", "XXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBB.", "BBBBBBBBBB", ".BBBBBBBB.", "BBBBBBBBBB", ".BBBBBBBB.", "BBBBBBBBBB", ".BBBBBBBB.", "BBBBBBBBBB", ".BBBBBBBB.", "BBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> region = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> region = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> region = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> region = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..BBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX................XXXXXXXXXXXX..........XX", "XX......................................XX", "XX................XXXXXX..XXXX..........XX", "XX................XXXXXX..XXXXXXXXXXXXXXXX", "XX..XXXXXXXXXXXXXXXXXXXX..XXXXXXXX......XX", "XX......................................XX", "XX..XXXXXXXXXXXXXXXXXXXXXXXX..XXXX......XX", "XX..................XXXXXXXX..XXXXXXXXXXXX", "XX.....XXXX.....XX....XXXXXX............XX", "XXXXX..XXXX..XXXXXXX..XXXXXXXXXXXXXXXX..XX", "XX..XXXX..XXXX..XXXXXXXX....XXXXXXXXXX..XX", "XXXXXX......XXXXXXXXXXXX................XX", "XXXX......................XXXXXXXXXXXX..XX", "XXXX..............................XXXX..XX", "XXXX..............................XXXX..XX", "XXXX............XX..XX....XXXX....XXXX..XX", "XXXX............XX..XX..XXXXXX....XXXX..XX", "XX..............XX..XXX..XXXX..XXXXXXX..XX", "XX..............XX..XXXXXX..XXXXXXXXXX..XX", "XXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX..XX", "XX......................................XX", "XXXX..XXXXXX..XXXXXXXXXX..XXXXXX..XXXX..XX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX................XXXXXXXXXXXX..........XX", "XX......................................XX", "XX................XXXXXX..XXXX..........XX", "XX................XXXXXX..XXXXXXXXXXXXXXXX", "XX..XXXXXXXXXXXXXXXXXXXX..XXXXXXXX......XX", "XX......................................XX", "XX..XXXXXXXXXXXXXXXXXXXXXXXX..XXXX......XX", "XX..................XXXXXXXX..XXXXXXXXXXXX", "XX..............XX....XXXXXX............XX", "XX......XX......XXXX....XXXXXXXXXXXXXX..XX", "XX..............XXXXXX......XXXXXXXXXX..XX", "XXXXXXXXXXXXXXXXXXXXXXXXXX..............XX", "XXXX....................................XX", "XXXX......................XX......XX....XX", "XXXX......................XXXX..XXXX....XX", "XXXX............XX........XX.XXXX.XX....XX", "XXXX............XX........XX......XX....XX", "XX..............XX........XX......XX....XX", "XX..............XX......XXXXXXXXXXXXXX..XX", "XXXXXXXXXXXXXXXXXX......XX..........XX..XX", "XX......................................XX", "XXXX..XXXXXX..XXXXXXXXXX..XXXXXX..XXXX..XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBABBAABBAABBABBBBBBBBBBBB", "BB................AAAAAAAAAAAA..........BB", "BB......................................BB", "BB................ABBABB..ABBA..........BB", "BB................AAAABB..AAAAABBABBBBBBBB", "BB..BBBBBBBBBBBBBBBBBBBB..BBBBAAAA......BB", "BB......................................BB", "BB..BBBBBBBBBBBBBBBBABBAABBA..ABBA......BB", "BB..................AAAAAAAA..AAAABBBBBBBB", "BB.....BBBB.....BB....ABBABB............BB", "BBBBA..ABBA..ABBABBA..AAAABBABBAABBABB..BB", "BB..AAAA..AAAA..AAAAABBA....AAAAAAAABB..BB", "ABBABB......BBBBBBBBAAAA................BB", "AAAA......................BBBBBBBBABBA..BB", "ABBA..............................AAAA..BB", "AAAA..............................ABBA..BB", "ABBA............BB..BB....ABBA....AAAA..BB", "AAAA............BB..BB..BBAAAA....ABBA..BB", "BB..............BB..BBA..ABBA..ABBAAAA..BB", "BB..............BB..BBAAAA..AAAAABBABB..BB", "BBBBBBBBBBBBBBBBBB..BBBBBBBBBBBBAAAABB..BB", "BB......................................BB", "ABBA..ABBABB..ABBAABBABB..ABBABB..ABBA..BB", "AAAA..AAAAABBAAAAAAAAAABBAAAAAABBAAAAAABBA", "BBBB..BBBBAAAABBBBABBAAAAAABBAAAAABBBBAAAA", "BB................AAAABBBBAAAA..........BB", "BB......................................BB", "BB................ABBABB..ABBA..........BB", "BB................AAAABB..AAAAABBABBBBBBBB", "BB..BBBBBBBBBBBBBBBBBBBB..BBBBAAAA......BB", "BB......................................BB", "BB..BBBBBBBBBBBBBBBBABBAABBA..ABBA......BB", "BB..................AAAAAAAA..AAAABBBBBBBB", "BB..............BB....BBABBA............BB", "BB......BB......ABBA....AAAAABBAABBABB..BB", "BB..............AAAABB......AAAAAAAABB..BB", "ABBABBBBBBBBBBBBBBBBBBBBBB..............BB", "AAAA....................................BB", "ABBA......................BB......BB....BB", "AAAA......................BBBB..BBBB....BB", "ABBA............BB........BB.BBBB.BB....BB", "AAAA............BB........BB......BB....BB", "BB..............BB........BB......BB....BB", "BB..............BB......BBBBBBBBBBBBBB..BB", "BBBBBBBBBBBBBBBBBB......BB..........BB..BB", "BB......................................BB", "ABBA..ABBABB..ABBAABBABB..ABBABB..ABBA..BB", "AAAABBAAAABBBBAAAAAAAABBBBAAAABBBBAAAABBBB"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> region = {"...XXXX.XX...XXXXXX..XXXX.....X..X...XX...XX..XX..", ".XX..XXXX..XXXXXX.XX.XXXXXXXX.XXXXX..X....XX.XX...", "..X..XXXXX.XXXX...XX.XX...XX.XXXX.XXXX.X..X.XXXXXX", "XXXXXXXXXX.XX...XXXXXX.XXX..X.XXXXXXXX.XXXX.XXXX..", "..XX...XX..XX.XXXX..XXXX.XXXXXXXX.XXX..X.XX..XXXX.", "XXXXXX.XX.XX..XXXX.X..XXX.XX....XXXXXXXXXX...XXXX.", "XXXX...XXXX...XXXX.XXXXXX.X..X..XX...XX.XX...XXXX.", "XXXXXXXXXX.XX.X..X..XX.XX.XXXX.XXXXXXXXXXXX..XXXX.", "....XXXXXXXX..XXXX..XX..XXXX.XX.XX.XX..XXXX.XX..XX", "..XXXXXXXX.X..XXX..XXXX...XXXX.XX.XX...XX..XX..XX.", "...XXXX..XXXXXXXX.XXXX....XXXXXX...X..X.XX...XX...", "X..XXXXXXX.XX.XX.XXXX.XXXXXXX..X...XXXXXXXX..XXXX.", "XXXXXXXXXXX..X.XXXXXX.XXXX..XXXX.XX.XX..X..X..XX..", "XXXX.XXXX.XXXX.XXXXXX.XX.X..X.XXXXXX..XXXXXX.XX.XX", "XXXX..XX...XXXX...X..X...XXXX.XXXXXX....X..X.X..X.", ".XX.XXX..XXX.XXXX.XXXX.XX...XX.XX..XXXX.XXXX.XXXX.", "..XX..XXXXXXXXXXXXXXX..XXXXXXX.XXXX.XXXXXX.X..X.XX", "..XXX..X..XX....XXXXXXXX.XX...XX..XXXXXX...XXXX...", "XX..XXXXXXXXXXXXXX.XX...XX.XXXX...XXXXX..X........", "XX.X..XXXXX..XX....XXXX.XXXX.XX.XX.XX.XXXX.X..X...", "...XXXXXX..XXXX.XX.XXXX.XX.XX.XXXX....XX...XXXXXX.", "..XXXX..XXXXXXXXXX.XXXX....XX.XXXX.XX..XX...X..XXX", "...XXX..XX..X.XXXX.X..X..X..X....XXXX.XXXXXXXXXXXX", ".XXXXXXXXXXXXX..X..XXXX..XXXXXX....XXXX......XXXX.", ".XX..XX...XX.XXXX.....XX.XXXXX..X.XX.XXXXXXXX.XXXX", "XX..XXXX.XXXXXX..XX...XXXXXX.XXXXXXX..XXXXXXX...XX", "..XXXX..X..X.......XX.....XX.XXXXXXXXXX...XXX..X..", "XX..XX..XXXX...XX..X..X...X..XXX..XXXX......XXXX..", "..XXXXXXXX......XX.XXXXXX.XXXXXX..XXXXXXXX......XX", ".X..X.XXXX.XX.XX.XX..X..X...XX....XXX..XXXXXX..X..", ".XXXXXX.XX..X..XXX.XXXXXXXXXX..XXXX.XXXXXXXXXXXX..", ".X..XXX.XX..XXXX.X..X.XX..XXXX..XXXX.X..XX..XX..X.", ".XXXX......XXX..XXXXX.....XX..XX...XXXXXXXXXXXXXX.", "XX..X..XXX.XXXXXX.X..XXX..XX.XXXXXX..X..X..X..X.XX", "XXXXXXXXXXXXXXXX..XXXX...XXXXXXXX.XX.XXXX..XXXXXX.", "XXXX....XXXXXXXXX..XXX.XXX..XXX..XX.XX.XXXXXX.XX..", ".XXXXXX.XX.XX.XXXXXX.XXXXXXXX.XXXX.XXXXX..XXX.X..X", ".XXXX..XX.XX.XXXX..XXXXXXXX...XXXXXXXX.XXXX...XXXX", "XXXXXXXXXX...XXXX..XXXXXX...XX...X..X...XXXXXXXX..", "XXXX.XX.XX...X..X..XXXX......XX..XXXXX..X....XXXX.", ".XX..X..X.XX.XXXXXXXX....XXX..X.XX.XXXXXXXX..X..X.", "..XX.XXXX......XXX..XXXXX..XXXXXXXXXXXXX..X..XXXX.", ".X..XX..XXXXX....XXXX.XXX..X.XXXXXX..XXXXXX.XX.XX.", ".XXXXXXXX.XX....XX.XX.XXXXXX.XX.XXXXXXXXX..X......", ".XXXX.XXXX.XXXXXXXX....XX...XX.XXXXXX...XXXXXX..XX", ".XXXX.XXXX...XXXX....XX.X..XX..XXX..XXXX.XX..XX...", "..XX....XX..XX.XXXXXX.XXXXXXXXXX..X..XXXXX.X..X...", ".X..XXX...X..X.XXXX.....X..X....XXXXXXXXXX.XXXX...", ".XXXX.XXXXXXXX...XX.XXXXXXXX.....XX.XXXXXX..XX..XX", "XX.....XXXXXX.......XXXX.XX.XX....XXXXXXXXXXXXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BBBB.BB...ABBABB..ABBA.....A..A...BB...BB..BB..", ".BB..BBBB..BBAAAA.BB.AAAABBBB.AAAAA..A....BB.BB...", "..A..AABBA.BBBB...BB.BB...BB.BBBB.AAAA.A..A.ABBABB", "BBAAAAAAAA.BB...BBBBBB.BBA..A.BBBBBBBB.AAAA.AAAA..", "..BB...BB..BB.ABBA..BBBB.AAAABBBB.BBA..A.BB..ABBA.", "ABBABB.BB.BB..AAAA.A..ABB.BB....BBBBAAAABB...AAAA.", "AAAA...BBBB...BBBB.AAAABB.A..A..BB...BB.BB...ABBA.", "BBBBABBABB.BB.A..A..BB.BB.AAAA.BBBBBBBBABBA..AAAA.", "....AAAABBBB..AAAA..BB..BBBB.BB.BB.BB..AAAA.BB..BB", "..BBBBBBBB.A..ABB..BBBB...ABBA.BB.BB...BB..BB..BB.", "...BBBB..BBAAAABB.BBBB....AAAABB...A..A.BB...BB...", "A..AABBABB.BB.BB.ABBA.ABBABBA..A...AAAABBBB..BBBB.", "AAAAAAAABBA..A.BBAAAA.AAAA..AAAA.BB.BB..A..A..BB..", "ABBA.BBBB.AAAA.BBBBBB.BB.A..A.ABBABB..BBAAAA.BB.BB", "AAAA..BB...BBBB...A..A...AAAA.AAAABB....A..A.A..A.", ".BB.BBA..ABB.BBBB.AAAA.BB...BB.BB..BBBB.AAAA.AAAA.", "..BB..AAAABBBBBBABBAA..ABBBBBB.BBBB.ABBABB.A..A.BB", "..BBA..A..BB....AAAAAAAA.BB...BB..BBAAAA...AAAA...", "BB..AAAABBBBBBBBBB.BB...BB.BBBB...BBBBA..A........", "BB.A..ABBBB..BB....ABBA.BBBB.BB.BB.BB.AAAA.A..A...", "...AAAABB..BBBB.BB.AAAA.BB.BB.ABBA....BB...AAAABB.", "..BBBB..BBBBBBABBA.BBBB....BB.AAAA.BB..BB...A..ABB", "...BBA..AA..A.AAAA.A..A..A..A....BBBB.BBBBBBAAAABB", ".BBBBAAAAAAAAA..A..AAAA..AAAABB....BBBB......BBBB.", ".BB..BB...BB.AAAA.....BB.BBBBA..A.BB.BBABBABB.BBBB", "BB..BBBB.BBBBBB..BB...BBBBBB.AAAABBA..AAAAABB...BB", "..BBBB..A..A.......BB.....BB.BBBBBBAAAA...BBA..A..", "BB..BB..AAAA...BB..A..A...A..ABB..ABBA......AAAA..", "..BBBBABBA......BB.AAAABB.AAAABB..AAAABBBB......BB", ".A..A.AAAA.BB.BB.BB..A..A...BB....BBA..AABBAA..A..", ".AAAABB.BB..A..ABB.BBAAAABBBB..BBBB.AAAAAAAAAAAA..", ".A..ABB.BB..AAAA.A..A.BB..BBBB..BBBB.A..AA..AA..A.", ".AAAA......BBA..AAAAA.....BB..BB...BBAAAAAAAAAAAA.", "BB..A..ABB.BBAAAA.A..ABB..BB.ABBABB..A..A..A..A.BB", "ABBAAAAAABBAABBA..AAAA...BBBBAAAA.BB.AAAA..AAAABB.", "AAAA....AAAAAAAAA..ABB.BBA..ABB..BB.BB.BBBBBB.BB..", ".ABBABB.BB.BB.BBAAAA.ABBAAAAA.ABBA.BBBBA..ABB.A..A", ".AAAA..BB.BB.ABBA..BBAAAABB...AAAABBBB.AAAA...AAAA", "ABBABBBBBB...AAAA..ABBABB...BB...A..A...BBBBBBBB..", "AAAA.BB.BB...A..A..AAAA......BB..AAAAA..A....BBBB.", ".BB..A..A.BB.AAAABBBB....BBA..A.BB.BBAAAABB..A..A.", "..BB.AAAA......BBA..ABBBB..AAAAABBABBBBA..A..AAAA.", ".A..AA..ABBBB....AAAA.BBA..A.BBAAAA..BBAAAA.BB.BB.", ".AAAAAAAA.BB....BB.BB.BBAAAA.BB.BBBBBBBBA..A......", ".ABBA.ABBA.BBABBABB....BB...BB.BBBBBB...AAAABB..BB", ".AAAA.AAAA...AAAA....BB.A..AA..ABB..BBBB.BB..BB...", "..BB....BB..BB.ABBABB.BBAAAAAAAA..A..AABBA.A..A...", ".A..ABB...A..A.AAAA.....A..A....BBAAAAAAAA.AAAA...", ".AAAA.BBBBAAAA...BB.ABBAAAAA.....BB.ABBABB..BB..BB", "BB.....BBBBBB.......AAAA.BB.BB....BBAAAABBBBBBBB.."};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> region = {".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.BB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> region = {"...XXXX...........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BBBB...........................................", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> region = {"...XX...XX.....XX....XXXXXXX..X.X..XXXXXXX.XXXXXX.", ".......XX..XX.XX.XX...XXXX.XXXX.XXXXXXXXXX.XXXXXX.", ".XX..XXXX...XX..XX..XXXXXXXXXX...XXXX.XXXXXX.XX...", "X..X.XXXXXX.XXXX..XXXXXX..XXXX......XX.XXXXXX..XX.", "XXXXXX.XXXX.XXXX.X..XXX.XX.XX....XXXXXX..XXXX.X..X", ".XX..XX.XX.XX..XXXXXX..XX.XXXX.XX..XXXX.XX..XXXXXX", "...XX.X..XXXXX.XXX..X.....XXXX.XX.XXX..X.XXXX..XX.", "XX.XX.XXXXXXXX...XXXXXXXXXX.XX..X..XXXXX.XXXX.....", ".XXXX....XXXXXXXX.XX...XXXXX..X.XXXXXX...XX.XX.XX.", ".XXXX..XXXXXXXX....XXXXX..XXXXX...XX.X..XXX.......", "XXXX..XXXXXXXX..XXXX...XXXX.XXXXXX.XXXXXX...XX....", "XXXX..XXXXXXXXXXXX.X..XXX...XXXX....XXXX.XX..X..X.", "...XX.XXXXXXXXXXXX.XXXX..XXXX.XXXXXXXXXX.XX..XXXX.", ".....XX....X..X..XX.XXXXXX..XX.XX.X..X..X..XXXXX..", "XX....X..X.XXXX.X..X..XX....XXXXXXXXXXXXXXXXXXXX..", "...XX.XXXX..XX..XXXX.XX..XXXXXXXXXXXX.XXXX....XX..", "XX..XX.....XX.XX..XX.XX..XXXXX..X....XXXXXXXXXX.XX", ".XXXX..XXXXX..XXXXX..XX...XX.XXXXXX..XXXXXX.X..XXX", "XXX..X.X..XXXXXXX.X..X.XXXX.XX..XX...X..X.XXXXXX..", "XXXXXX.XXXX..XX.XXXXXX..XXXX.X..X....XXXX.....X..X", ".XXX..XXXXX.X..XXXXX.X..XXXXXXXXX...XX.XXXX.XXXXXX", "XX.XXXXXX.XXXXXX.XXXXXXXX...XX.......XX..XXXX.....", "XXX..XX..XXXXX.XXXXXX..XXXX.XXXX.XXXX...XXXXXX..XX", "..XXXXXXXXXXXX....XX.XX..XXXX..XXXXXX.XXXXXX....XX", "....XXXX.XX.XXXXXXXX.....XXXX..XXXX.XX...XXXX.XX..", "XX.XXXXXX.X..X..XXXXXX.XX..XX.XX.XX..XXXXXXXX.X..X", "..XXXX....XXXX...XX.XX..XX..X..XXX.XXXX..X..X.XXXX", "..XXXX...XX....XX.X..XXXXX..XXXX.XXXXXXXXXXXX..XX.", "..XXXX.XXX..X..XX.XXXXXXXXXX...X..XXX.....XXXX..XX", "..XXXXXX.XXXX..XX.XXX..XXX...XXXXXXXX...XXXXXX.XX.", "XX.XX.X..X.XX..XX...XXXX...XX.XXXXXX...XX...XXXX..", "X..X..XXXX..XX.XX.XXXXXXXX....XXXXXX..XX..XXXXXX..", "XXXX..XX.XX...XX..XXXXXXXX.X..XXXXX..XXXX.XX......", "...XXXXXX.X..XXX....XX.XXXXXXXX..XX..XXXXXXXXXX.XX", ".XXXXXX.XXXXXX.XXXXXXXXXXXX..XXXXXXX..XXX.XXXX.XX.", ".XXXXXX.XXXX.....XXXXXX...XX.XXXXXXXXXX...XXXX.XX.", "X..XXXXXXXX..XXXXXXXXX...XXXXXXXX....XXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXXXX.XX..XXXXX..X.XX.XXXXXXXX.XX", "XX.XX.XX..XX.XX....XXX..X.XXXX.XXXX....X..X...XXXX", "...XX.X..XX..X.....XXXXXXXX..X..X.XX...XXXX...XXXX", "..XXXXXXXXXXXX...XXXXXX.XXXX.XXXXXXXX..XXXXXXXX.XX", "..XXXXXXXX.XXXX.XX..XX..XXXX...XXXXXX.XX.XXXXX..X.", "XXXXXXXXXX.XXXXXXXX..XXX..XXXXXX..XXX.XX...XXXXXX.", "X..XXX.XXXXXX.X..X.X..XXXXXX..XXXXX.XX..XXXX.XX...", "XXXX...XXXXXX.XXXX.XXXXXX..XXXXXX...XX.XX.XX.X..X.", ".XX.....XX.XXXX.XXXX.XX.XX..XX...XX..XXX..X..XXXX.", "XX.XX.XXXX.XXXX.XX..X..XXXXX.X..XXX..XXXXXX...XX..", ".XX....XX...XX.XXXX.XXXX...XXXXXX...XX.XX...XX....", ".X..X.XXXX..XX.XXXX.XX.XXXX..X..XX..X.XX.XXXX.XX..", ".XXXX.XXXX..XXXX.....XXXXXXXXXXXXXXXXXX..XXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BB...BB.....BB....BBBBBBA..A.A..AABBABB.ABBABB.", ".......BB..BB.BB.BB...ABBA.AAAA.AAAAAAAABB.AAAABB.", ".BB..ABBA...BB..BB..BBAAAAABBA...BBBB.BBBBBB.BB...", "A..A.AAAABB.ABBA..BBBBBB..AAAA......BB.BBABBA..BB.", "AAAABB.BBBB.AAAA.A..ABB.BB.BB....BBABBA..AAAA.A..A", ".BB..BB.BB.BB..BBAAAA..BB.ABBA.BB..AAAA.BB..BBAAAA", "...BB.A..AABBA.BBA..A.....AAAA.BB.BBA..A.ABBA..BB.", "BB.BB.AAAAAAAA...AAAABBABBA.BB..A..AAAAA.AAAA.....", ".ABBA....ABBABBBB.BB...AAAAA..A.AAAABB...BB.BB.BB.", ".AAAA..BBAAAABB....BBBBA..AAAAA...BB.A..ABB.......", "ABBA..ABBAABBA..BBBB...AAAA.ABBABB.BBAAAA...BB....", "AAAA..AAAAAAAAABBA.A..ABB...AAAA....ABBA.BB..A..A.", "...BB.BBBBBBBBAAAA.AAAA..BBBB.BBBBBBAAAA.BB..AAAA.", ".....BB....A..A..BB.BBBBBB..BB.BB.A..A..A..AABBA..", "BB....A..A.AAAA.A..A..BB....BBBBBBAAAABBAAAAAAAA..", "...BB.AAAA..BB..AAAA.BB..ABBABBBBBBBB.BBBB....BB..", "BB..BB.....BB.BB..BB.BB..AAAAA..A....ABBABBBBBB.BB", ".BBBB..BBBBA..ABBBB..BB...BB.AAAABB..AAAABB.A..ABB", "BBA..A.A..AAAAABB.A..A.BBBB.BB..BB...A..A.BBAAAA..", "BBAAAA.AAAA..BB.BBAAAA..BBBB.A..A....AAAA.....A..A", ".BBA..ABBBB.A..ABBBB.A..ABBBBAAAA...BB.BBBB.BBAAAA", "BB.AAAABB.BBAAAA.ABBAAAAA...BB.......BB..BBBB.....", "BBA..AA..AABBA.BBAAAA..BBBB.BBBB.ABBA...ABBABB..BB", "..AAAAAAAAAAAA....BB.BB..ABBA..BBAAAA.BBAAAA....BB", "....BBBB.BB.BBBBABBA.....AAAA..BBBB.BB...ABBA.BB..", "BB.BBBBBB.A..A..AAAABB.BB..BB.BB.BB..BBBBAAAA.A..A", "..ABBA....AAAA...BB.BB..BB..A..ABB.ABBA..A..A.AAAA", "..AAAA...BB....BB.A..AABBA..AAAA.BBAAAABBAAAA..BB.", "..ABBA.BBA..A..BB.AAAAAAAABB...A..ABB.....ABBA..BB", "..AAAABB.AAAA..BB.BBA..ABB...BBAAAABB...BBAAAA.BB.", "BB.BB.A..A.BB..BB...AAAA...BB.ABBABB...BB...ABBA..", "A..A..AAAA..BB.BB.ABBAABBA....AAAABB..BB..BBAAAA..", "AAAA..BB.BB...BB..AAAAAAAA.A..ABBBB..ABBA.BB......", "...ABBABB.A..ABB....BB.ABBAAAAA..BB..AAAABBBBBB.BB", ".BBAAAA.BBAAAA.BBABBABBAAAA..ABBABBA..ABB.ABBA.BB.", ".BBBBBB.BBBB.....AAAABB...BB.AAAABBAAAA...AAAA.BB.", "A..AABBABBA..AABBAABBA...BBABBABB....BBABBABB.BBBB", "AAAAAAAABBAAAAAAAAAAAA.BB..AAAAA..A.BB.AAAABBBB.BB", "BB.BB.BB..BB.BB....BBA..A.BBBB.AAAA....A..A...ABBA", "...BB.A..AA..A.....BBAAAABB..A..A.BB...AAAA...AAAA", "..ABBAAAAAAAAA...BBBBBB.ABBA.AAAAABBA..BBABBABB.BB", "..AAAAABBA.ABBA.BB..BB..AAAA...BBAAAA.BB.AAAAA..A.", "BBBBBBAAAA.AAAABBBB..BBA..ABBBBA..ABB.BB...BBAAAA.", "A..ABB.ABBABB.A..A.A..AAAAAA..AAAAA.BB..BBBB.BB...", "AAAA...AAAABB.AAAA.AAAABB..AAAABB...BB.BB.BB.A..A.", ".BB.....BB.ABBA.BBBB.BB.BB..BB...BB..BBA..A..AAAA.", "BB.BB.BBBB.AAAA.BB..A..ABBBB.A..ABB..BBAAAA...BB..", ".BB....BB...BB.ABBA.AAAA...BBAAAA...BB.BB...BB....", ".A..A.ABBA..BB.AAAA.BB.ABBA..A..AA..A.BB.ABBA.BB..", ".AAAA.AAAA..BBBB.....BBAAAABBAAAAAAAABB..AAAABBBB."};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> region = {".XX.XX", "XXXXXX", "XXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BB.BB", "ABBABB", "AAAA.."};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> region = {".XXXX..XX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXX.XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".............XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB..BB.BB.ABBAABBAABBAABBAABBAABBAABBAABBAABBA.", "BBBBBB.BBBB..AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", ".............BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> region = {"....................XXXX.........................", ".................................................", ".........XXXX.....................XXXXXXXX.......", "........XXXXXX.....................XXXXXX........", "........XXXXXX...................................", "..................XXXXXX..............XXXX.......", "..................XXXXXX..............XXXXXX.....", "...................XXXX.................XXXX.....", ".......X..X......................................", ".......XXXX..XXXXXXXXXX.....X..X..X..X...........", ".......X..X..XXXXXXXXXX.....XXXXXXXXXX...........", ".......XXXX..XXXXXXXXXX..........................", "............................X..X..X..X.........XX", "XX................X..X......XXXXXXXXXX...........", "..................XXXX......XXXXXXXXXX...........", "..................XXXX......X..X..X..X...........", "............................XXXXXXXXXX...........", ".......................................XXXX......", ".....XXXXXX............XXXX............X..X......", "...XXXXXXXXXX.........XXXXXX...........XXXX......", "...XXXXXXXXXX........XXXXXXXX....................", "....................XXXXXXXXXX........XXXXXX.....", "....................XXXXXXXXXX.........X..X......", ".......................................XXXX......", ".................................................", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", ".................................................", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....XX.....", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...XXXX....", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...XXXX....", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...X..X....", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...XXXX....", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", ".................................................", "...................XXXX..........................", ".........XXXX.....XXXXXX.........................", "........XXXXXX....XX..XX.........................", "........XXXXXX....XXXXXX................XXXX...XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....................BBBB.........................", ".................................................", ".........BBBB.....................BBBBBBBB.......", "........ABBABB.....................BBBBBB........", "........AAAABB...................................", "..................ABBABB..............ABBA.......", "..................AAAABB..............AAAABB.....", "...................BBBB.................BBBB.....", ".......A..A......................................", ".......AAAA..ABBAABBABB.....A..A..A..A...........", ".......A..A..AAAAAAAABB.....AAAABBAAAA...........", ".......AAAA..BBBBBBBBBB..........................", "............................A..A..A..A.........BB", "BB................A..A......AAAABBAAAA...........", "..................AAAA......BBBBBBBBBB...........", "..................BBBB......A..A..A..A...........", "............................AAAABBAAAA...........", ".......................................BBBB......", ".....ABBABB............BBBB............A..A......", "...BBAAAAABBA.........BBBBBB...........AAAA......", "...BBBBBBAAAA........BBBBBBBB....................", "....................ABBAABBABB........BBBBBB.....", "....................AAAAAAAABB.........A..A......", ".......................................AAAA......", ".................................................", "........ABBAABBAABBAABBAABBAABBAABBABB...........", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...........", "........ABBAABBAABBAABBAABBAABBAABBABB...........", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...........", "........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...........", ".................................................", "........ABBAABBAABBAABBAABBAABBAABBABB....BB.....", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...ABBA....", "........ABBAABBAABBAABBAABBAABBAABBABB...AAAA....", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...A..A....", "........ABBAABBAABBAABBAABBAABBAABBABB...AAAA....", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...........", "........ABBAABBAABBAABBAABBAABBAABBABB...........", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...........", "........ABBAABBAABBAABBAABBAABBAABBABB...........", "........AAAAAAAAAAAAAAAAAAAAAAAAAAAABB...........", ".................................................", "...................BBBB..........................", ".........BBBB.....BBBBBB.........................", "........ABBABB....BB..BB.........................", "........AAAABB....BBBBBB................BBBB...BB"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> region = {".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXX...XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX..."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BB.BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", "ABBA...BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "AAAABBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..ABBA..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBB.AAAA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..ABBA...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.AAAA..."};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> region = {".XXXX.", "XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB.", "BBBBBB"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX.X.XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> region = {"XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.XX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", "BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.BB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> region = {"XX.XX.", "XXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB.BB.", "BBBB.."};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> region = {"XXXX.XX.XXXXXXXXXXXX.XX...XXXXXXXXXX.XXXXXX.XXXXXX", "XX.X..X.XXXXXXXXXXXX.XXXXXXXXXXXXXX..XXXXXXXXXXXX.", "XX.XXXXXXXXX..X..XXXXXXXXXXXXXX.XX.XX.XX..X..XXX..", "XXXX.XXXXXXXXXX.XX.XX.XXXXXX.XXXXXXXXX..X.XXXXXXXX", "XX.XXXXXX.XXXXXX..XXXX.XXXXXXXXXXX..XXXXXXXXXXXXX.", ".XXXXXXXXXX.XXXXXXXXXX.XXXX..XXXXXXXXXXXXXXXXXXXX.", ".XXXX.XXXX.XX.XXXX.XXXX..XX.XX.XXXXXXXXXX..XXXXXX.", "XXXX..XXXX.XXXXXX.XXXXXXXXXX.XX.XXXXXXXXXXX..XXX..", ".XXXX.XX.XXXXXXXX.XXXX..XXXXXXXXXXXXXXXXXXXXXX.XX.", ".XX.XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXX.XXXX.XXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXX.XXXX.XXXXXXXXXX.XXXXXXXX", ".XXXXXX.XXXX.XXXX.XXXXXXXXXXXX.XXXX.XXXX.X..X.XXXX", ".XXXXXX.XXXXXXXXXXXXXXXXXXXXXXX..XXX.XXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXXXX.XXXXXXXXXXXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.", "..XXXX.XXXXXX.XXXXXXXX..XX.XXXXXXXXXX.XXXX.XXXXXX.", "XXXXXX.XXXX.XX..XXXXXX.XXXXXX..XXXXXX.XXXXXX.XX.XX", "XX.XX..XX.XXXXXXXXXXXX.XXXXXX.XX.XXXXXX..XXXXXX.XX", "XX.XXXXXX.XXXXX..XXXXXXXXX.XXXXXX.XX.XXXXXXXXXXXX.", "..XX.XXXXXXXX.XXXXXXXXXXXXXXXX.X..XXXXXXXXXXX.XXXX", "XX.XXXXXX.XX.XXXXXXXXXXXX.XXXX.XXXX.XXXXXX..XXXXXX", "XXXX.XXXX.XX.XXXXXXXXXXXX.XXXXXX.XXXX.XXXXXXXXXXXX", "XXXX.XX.XXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XX.XXXX.XX.XX.XXXX.XX.XXXX.XXXXXX.XX.", ".XX.XXXX.XXXXXX.XXXXXX.XXXXXX.XXXX.XXXX.XXXX.XX.XX", ".XXXXXX.XX.XXXX..XXXX.XX..XXXXXXXX.XXXX.XXXX.XXXX.", "XXXXXXXX.XX.XXXXXX.XXXXXX..XXXXXX.XX.XXXXXXXXXXXX.", "XXXX.XX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX..X..X.", ".XXXXXXXX.XX..XXXX.XXXX.XXXXXX.XXXXXXXXXXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXX.XXXXXXXX.XXXXXXXX", ".XXXX.XXXXXXXXXX.XX..XXXX.XXXXXXXXXXXXXXXXXX.XXXX.", ".XXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX...XX", "XXXXXXXXXXXXXXXXXXXX..XXXXXX.XXXXXXXXXXXXXX.XXXXXX", "XXXXXXXX.XXXX.XXXX.XX.XXXXX..X.XXXXXXXX.XXXXXXXXXX", "..XXXX.XX.XX.XX.XX.XXXXXX.XXXX.XXXXXX.XXXXXXXXXXXX", ".XXXXXXXX.XXXXXXXXXX.XXXXX..XXXXXXXXX.XXXXXXXX.XX.", ".XXXXXXXX.XXXX..XXXX.XXXXXXXXXXXXXXXX.XXXXXXXX.XX.", ".XXXXXXXXXX.XXXXXXXX.XXXX.XXXXXXXX..XXXXXX..XXXXXX", ".XX..XXXXXXXX..XXXXXX.XXXXXXXXXXXX..XXXX.XXXXXXXX.", "XXXXXX..X..XXX.XXXXXXXXXX.X..XXXXXXXXXXX.XX.XXXXXX", ".XXXXXX.XXXXXXXXXX.XX.XXXXXXXX.XXXX.XXXX.XXXX.XXXX", "XXX..X.XXXX.X..X..XX.X..XXXXX..XXXX.XXXXXXXXXXXXXX", "XXXXXX.XXXX.XXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXX.XXXX.XXXX..XXXXXXXXXXXXXXXXXXXX.XX", "XXXX..XX.XXXX.XX.XXXXXXXX.XXXXXXXXXX.XXXXXX.XXXXXX", "XX.XXXXXX.XX.XXXX.XXXX.XX.XXXX.XXXXXXXXX..X.XXXXXX", "XXXXXX.XX..XXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXXXX.XXXXXXXXXXXX...XX.XXXXXX.XXXXXXXXXXXXXXXXXX", ".XX..XXXXXXXX.XXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXX..XX.XX..XXXX.XXXX.XXXXXX..XXXXXXXXXX.XX.XX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBB.BB.ABBAABBAABBA.BB...BBBBBBBBBB.ABBABB.BBBBBB", "BB.A..A.AAAAAAAAAAAA.ABBAABBABBBBBB..AAAABBBBBBBB.", "BB.AAAAABBAA..A..BBBBAAAAAAAABB.BB.BB.BB..A..ABB..", "BBBB.BBAAAAAAAA.BB.BB.BBBBBB.ABBABBBBA..A.AAAABBBB", "BB.ABBABB.BBABBA..ABBA.ABBABBAAAAA..AAAAAABBAABBA.", ".BBAAAABBBB.AAAABBAAAA.AAAA..BBBBAAAAABBAAAAAAAAA.", ".BBBB.ABBA.BB.BBBB.BBBB..BB.BB.BBBBBBAAAA..BBBBBB.", "BBBB..AAAA.ABBABB.ABBABBABBA.BB.ABBAABBABBA..ABB..", ".BBBB.BB.BBAAAABB.AAAA..AAAAABBAAAAAAAAABBAAAA.BB.", ".BB.ABBAABBAABBABBBBBB.BB.BBAAAABBBB.ABBA.ABBAABBA", "BBBBAAAAAAAAAAAA.BBBBBBBB.ABBA.ABBABBAAAA.AAAAAAAA", ".ABBABB.ABBA.BBBB.ABBAABBAAAAA.AAAA.BBBB.A..A.ABBA", ".AAAABB.AAAAABBABBAAAAAAAAABBAA..ABB.ABBAAAAA.AAAA", "ABBAABBAABBAAAAABB.BB.ABBAAAAAAAAA.BBAAAAABBABB.BB", "AAAAAAAAAAAABBABBAABBAAAAA.ABBAABBABBBBBBAAAAABBA.", "..ABBA.ABBABB.AAAAAAAA..BB.AAAAAAAABB.ABBA.BBAAAA.", "BBAAAA.AAAA.BB..ABBABB.ABBABB..BBABBA.AAAABB.BB.BB", "BB.BB..BB.ABBABBAAAABB.AAAABB.BB.AAAABB..ABBABB.BB", "BB.BBABBA.AAAAA..AABBAABBA.BBBBBB.BB.ABBAAAAABBBB.", "..BB.AAAABBBB.AAAAAAAAAAAAABBA.A..ABBAAAABBBB.ABBA", "BB.BBABBA.BB.ABBAABBAABBA.AAAA.AAAA.BBABBA..BBAAAA", "ABBA.AAAA.BB.AAAAAAAAAAAA.ABBABB.BBBB.AAAAABBAABBA", "AAAA.BB.ABBABBBBABBABBBBBBAAAA..BBBBBBBBBBAAAAAAAA", "BBBBABBAAAAA.BB.AAAA.BB.BB.BBBB.BB.ABBA.ABBABB.BB.", ".BB.AAAA.BBABBA.BBBBBB.BBBBBB.ABBA.AAAA.AAAA.BB.BB", ".BBBBBB.BB.AAAA..BBBB.BB..BBBBAAAA.BBBB.BBBB.ABBA.", "ABBABBBB.BB.ABBABB.ABBABB..ABBABB.BB.ABBABBBBAAAA.", "AAAA.BB.BBBBAAAABB.AAAABBBBAAAAABBABBAAAABB..A..A.", ".BBBBBBBB.BB..ABBA.BBBB.ABBABB.AAAAABBABBBB..AAAA.", "BBBBBBABBAABBAAAAABB.BB.AAAAABBA.BBAAAABB.BBBBBBBB", ".ABBA.AAAAAAAABB.BB..BBBB.BBAAAABBBBBBBBBBBB.BBBB.", ".AAAABB.ABBAABBAABBABBABBA.BBABBAABBAABBABBBB...BB", "ABBAABBAAAAAAAAAAAAA..AAAABB.AAAAAAAAAAAABB.ABBABB", "AAAAAAAA.BBBB.BBBB.BB.BBBBA..A.ABBABBBB.ABBAAAAABB", "..BBBB.BB.BB.BB.BB.BBABBA.AAAA.AAAABB.BBAAAABBBBBB", ".ABBAABBA.ABBABBABBA.AAAAA..AABBAABBA.ABBAABBA.BB.", ".AAAAAAAA.AAAA..AAAA.ABBAAAAAAAAAAAAA.AAAAAAAA.BB.", ".BBBBABBABB.BBBBBBBB.AAAA.ABBAABBA..ABBABB..BBBBBB", ".BB..AAAABBBB..ABBABB.BBBBAAAAAAAA..AAAA.BBBBBBBB.", "BBBBBB..A..ABB.AAAABBBBBB.A..ABBBBBBABBA.BB.BBABBA", ".BBBBBB.AAAABBBBBB.BB.BBBBAAAA.ABBA.AAAA.BBBB.AAAA", "BBA..A.ABBA.A..A..BB.A..AABBA..AAAA.ABBAABBAABBABB", "BBAAAA.AAAA.AAAAABBA.AAAAAAAAABBA.BBAAAAAAAAAAAABB", "ABBABBBBBB.BBBB.AAAA.ABBA..BBAAAABBBBABBABBBBBB.BB", "AAAA..BB.BBBB.BB.BBBBAAAA.ABBABBBBBB.AAAABB.ABBABB", "BB.BBBBBB.BB.ABBA.BBBB.BB.AAAA.ABBAABBAA..A.AAAABB", "ABBABB.BB..BBAAAABB.BB.BBABBABBAAAAAAAAAAAABB.ABBA", "AAAABB.ABBABBBBBBBB...BB.AAAABB.ABBAABBAABBABBAAAA", ".BB..BBAAAABB.BBABBA.ABBA.ABBABBAAAAAAAAAAAABBBBBB", ".BBBBBB..BB.BB..AAAA.AAAA.AAAABB..BBBBBBBBBB.BB.BB"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> region = {".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXX..XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXXXXXXXXX..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX..XXXXXX..XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX..XX..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX", "XX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XX", "XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXX", "XXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX", "XXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXX", "XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXX", "XXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXX", "XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXX", "XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXX", "XXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXX..XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXXXXXXXXX..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX..XXXXXX..XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX..XX..XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.BB", "BB..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..BB", "ABBA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBA", "AAAA..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAA", "ABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBABB", "AAAABB..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAABB", "ABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBA", "AAAAAAAA..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAAAAAA", "ABBAABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBABB", "AAAAAAAABB..BBBBBBBBBBBBBBBBBBBBBBBBBB..AAAAAAAABB", "ABBAABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBAABBA", "AAAAAAAAAAAA..BBBBBBBBBBBBBBBBBBBBBB..AAAAAAAAAAAA", "ABBAABBAABBABB.BBBBBBBBBBBBBBBBBBBB.ABBAABBAABBABB", "AAAAAAAAAAAABB..BBBBBBBBBBBBBBBBBB..AAAAAAAAAAAABB", "ABBAABBAABBAABBA.BBBBBBBBBBBBBBBB.ABBAABBAABBAABBA", "AAAAAAAAAAAAAAAA..BBBBBBBBBBBBBB..AAAAAAAAAAAAAAAA", "ABBAABBAABBAABBABB.BBBBBBBBBBBB.ABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAABB..BBBBBBBBBB..AAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBA.BBBBBBBB.ABBAABBAABBAABBAABBA", "AAAAAAAAAAAAAAAAAAAA..BBBBBB..AAAAAAAAAAAAAAAAAAAA", "ABBAABBAABBAABBAABBABB.BBBB.ABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAABB..BB..AAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBB..BBBBBBBBBBBBBBBBBBBBBBBB", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", "BB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.BB", "BB..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..BB", "ABBA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBA", "AAAA..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAA", "ABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBABB", "AAAABB..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAABB", "ABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBA", "AAAAAAAA..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..AAAAAAAA", "ABBAABBABB.BBBBBBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBABB", "AAAAAAAABB..BBBBBBBBBBBBBBBBBBBBBBBBBB..AAAAAAAABB", "ABBAABBAABBA.BBBBBBBBBBBBBBBBBBBBBBBB.ABBAABBAABBA", "AAAAAAAAAAAA..BBBBBBBBBBBBBBBBBBBBBB..AAAAAAAAAAAA", "ABBAABBAABBABB.BBBBBBBBBBBBBBBBBBBB.ABBAABBAABBABB", "AAAAAAAAAAAABB..BBBBBBBBBBBBBBBBBB..AAAAAAAAAAAABB", "ABBAABBAABBAABBA.BBBBBBBBBBBBBBBB.ABBAABBAABBAABBA", "AAAAAAAAAAAAAAAA..BBBBBBBBBBBBBB..AAAAAAAAAAAAAAAA", "ABBAABBAABBAABBABB.BBBBBBBBBBBB.ABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAABB..BBBBBBBBBB..AAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBA.BBBBBBBB.ABBAABBAABBAABBAABBA", "AAAAAAAAAAAAAAAAAAAA..BBBBBB..AAAAAAAAAAAAAAAAAAAA", "ABBAABBAABBAABBAABBABB.BBBB.ABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAABB..BB..AAAAAAAAAAAAAAAAAAAABB", "BBBBBBBBBBBBBBBBBBBBBBBB..BBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> region = {".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX..XXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB..BBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> region = {"XX........XXXXXX.XXXX......X..X....XX...X..XX..X.", "..XXXX...XX.XXXX.XXXXXXX..XXXXXX..XX..X.XXXXXXXX.", "..XXXXXXXXXXXXXX.XXX..XXXXXXX..XXXXXXXXXXXXXXX..X", ".X..X.XXXXXXXXXX.XXXXXX.XX..XXXX.XXXXXXXX....XXXX", ".XXXX...XXXXXXXXXXXXXX.XX.XXXXXX.XXXXXXXXXXXX.XX.", "..XXXX..XXXX.XXXX.XXXX.X..X.X..X.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXX.XXXXX..X..XXXX.XXXX.XXXXXXXXX..XXXXX", "..X..XXXXX.XX.XX.XXXXX..X.XXXX.XXXXXX....XXXX....", "XXXXXX....XXXXXXXXXX.XXXX.XXXXXXXXXXXXXX...XXX..X", ".....X..X.XXXXXXXX.XX.XX..XX.X..X.XXXXXX.XXXXXXXX", "XXXX.XXXX..XX..XXXX.XX..X..X.XXXX..XXXX.XX.XX.XX.", "XX.XX...XXX..XXXXX..XX..XXXXXXX..X.XXXXXXXXXXXX..", "XXX..XXXXXXXXXXXXX.XXXX.X..XXXXXXX..XX.XXXXXXXXXX", "..XXXXXXXX.XX..XXXXXXXX.XXXX...XX.XX.XX.XX.X..XXX", ".X..X..XXXXXXXXXXXX......XXXXXX.XXXX.X..X..XXXX..", ".XXXXXXXX..XXXX....XXXXXXXXXXXX.XXXX.XXXX.XX...XX", "XXXX.XXXXXXXXX..X..XXXXXXXXXX.XXX..XXXXXXX.XXXX..", "X..XX..XXXXX.XXXXXXXX.XXXXXXXXXXXXXX..XXXX.XXXX..", "XXXXXXXXXXXXXXXX.X..X.XXXXXXXX..XXXXX..XXXXX.XXXX", "XXXXXX.X..X.XXXX.XXXX.XXXX.XX.XXXXXXXXXXX..X.XXXX", "..XXXX.XXXX.....XX.XX.XXXXXXXX...X..XXX.XXXX.X..X", "XXXX...XX..XXXXX..XXXXX.XXXXXX.XXXXXXX..XX..XXXXX", ".X..XX..X..XXXXXXXXXXXX.XX.....XXXX..XXXXXXXX..XX", ".XXXXXXXXXX.X..X.XXXXXX.XXXXXX...XXXXXXXXXXX..X..", ".XXXXXXXX.XXXXXX...XXXX...XXXX.XXXXXXXXXX..XXXX..", ".XXXXXXXXXX...XXXXXXXX.XXXX..XX..XXXXX..X.XXXXXX.", ".X..XXXXXXX.XXXXXX.X..XXXXX..XXXXXXXXXXXX...XXXX.", ".XXXXXXXXXXX..X.XX.XXXX..XXXXXXXXX..X.X..X..X..X.", ".XXXXXX..XXXXXX.X..XXX...XXXX.XX.XXXX.XXXXXXXXXX.", ".XXXX..XX.XX..XXXXXX..XXXX.XXXX.XXXXXXXXXX.XXXXXX", ".......XXXXXXXXXX...XXXXXX.XXXX.XXXX..X..X.XXXXXX", "X..XXX.XXXXXXXXXXX..X..XXXX..X..XXXXX.XXXXXXX..X.", "XXXXX..X.XXXXXX..XXXXXX.XXXX.XXXX...XXXXXXXXXXXX.", "..XXXXXX...X..X..X..XXX.XXXX.XXXXXX.XXXX.X..XXX..", "XXXXXX.XXXXXXXXXXXXXXXX.X..X.XXXXXXX..X..XXXXX..X", "XX.X..X.X..X..X..X.XXXX.XXXX....XX.XXXX.XX.XXXXXX", "XX.XXXX.XXXX..XXXX.XXXXXXXXXX.X..X.X..XXXXXXXX..X", "XXX..X.XXXXX..X.XXXXXX.XXXX...XXXX.XXXX..XXXXXXXX", "XXXXXX.XXXXXXXX.XXXXXXXXXXX..X.XX..XXXX.XXXX.X..X", "XXX..X.XXXX....XXXX...XXXXXXXX.XXXXXXXX.XXXX.XXXX", "..XXXX...X..X.XXXX.XXXXXX.X..X.XXXXXXXXXX..X..XXX", "XXXXXXXX.XXXX.XXXXXX.XXXX.XXXXXXXX...XXXXXXXXXX..", "..XXXXXXXX....X..XXXXX.XXXX...XXXXXXX..XX..XX..X.", "XXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXX..X.XXXXXXXXXXXX.", ".X..XX..X.XXXX.X..X.XXXX.XXXX..XXXXX..XX..XXXX..X", ".XXXXXXXXXX....XXXX.XXXX.XXXX..XXXXXXXXXXXX..XXXX", ".XX.XXXX.XXXX..XXXX..X..XXXXXXXXXXX.X..XXXXXXX...", ".XX.XXXX.XXXXXXXXXX..XXXX..XX..XX.XXXXXX..XXXXXX.", ".X..XXX.XX.XXXXXXXX.X..X.XXXX.XXXX.XXXXX..XX..XXX", ".XXXXXX.XX.XXXX.XX..XXXX.XXXX.XXXX.XXXXXXXXXXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB........BBABBA.ABBA......A..A....BB...A..AA..A.", "..ABBA...BB.AAAA.AAAABBA..AAAAAA..AA..A.AAAAAAAA.", "..AAAAABBAABBABB.BBA..AAAAABB..AAAAAAAABBBBBBA..A", ".A..A.AAAAAAAABB.BBAAAA.BB..ABBA.ABBAABBA....AAAA", ".AAAA...ABBABBBBBBABBA.BB.BBAAAA.AAAAAAAAABBA.BB.", "..ABBA..AAAA.ABBA.AAAA.A..A.A..A.ABBAABBAAAAAABBA", "BBAAAAABBABB.AAAAA..A..AAAA.AAAA.AAAAAAAAA..AAAAA", "..A..AAAAA.BB.BB.AAAAA..A.ABBA.BBBBBB....AAAA....", "BBAAAA....ABBAABBABB.AAAA.AAAABBBBABBABB...BBA..A", ".....A..A.AAAAAAAA.BB.BB..BB.A..A.AAAABB.BBBBAAAA", "BBBB.AAAA..BB..BBBB.BB..A..A.AAAA..ABBA.BB.BB.BB.", "BB.BB...BBA..AABBA..BB..AAAABBA..A.AAAAABBAABBA..", "BBA..AABBAAAAAAAAA.ABBA.A..ABBAAAA..BB.AAAAAAAABB", "..AAAAAAAA.BB..ABBAAAAA.AAAA...BB.BB.BB.BB.A..ABB", ".A..A..BBBBABBAAAAA......ABBABB.ABBA.A..A..AAAA..", ".AAAAABBA..AAAA....ABBABBAAAABB.AAAA.AAAA.BB...BB", "BBBB.AAAABBBBA..A..AAAABBBBBB.BBA..ABBABBA.ABBA..", "A..AA..AABBA.AAAABBBB.ABBAABBABBAAAA..AAAA.AAAA..", "AAAAAAAAAAAAABBA.A..A.AAAAAAAA..ABBAA..ABBBB.ABBA", "BBABBA.A..A.AAAA.AAAA.ABBA.BB.BBAAAAAAAAA..A.AAAA", "..AAAA.AAAA.....BB.BB.AAAAABBA...A..ABB.AAAA.A..A", "BBBB...BB..ABBAA..AABBA.BBAAAA.BBAAAAA..AA..AAAAA", ".A..AA..A..AAAAAAAAAAAA.BB.....BBBB..AAAAAAAA..BB", ".AAAAAAAABB.A..A.BBABBA.BBABBA...ABBAABBABBA..A..", ".ABBAABBA.BBAAAA...AAAA...AAAA.BBAAAAAAAA..AAAA..", ".AAAAAAAABB...ABBABBBB.ABBA..BB..ABBAA..A.BBABBA.", ".A..AABBABB.BBAAAA.A..AAAAA..ABBAAAAAAAAA...AAAA.", ".AAAAAAAABBA..A.BB.AAAA..ABBAAAAAA..A.A..A..A..A.", ".ABBABB..BBAAAA.A..ABB...AAAA.BB.AAAA.AAAABBAAAA.", ".AAAA..BB.BB..BBAAAA..ABBA.ABBA.ABBABBBBBB.ABBABB", ".......ABBAABBABB...BBAAAA.AAAA.AAAA..A..A.AAAABB", "A..ABB.AAAAAAAABBA..A..BBBB..A..ABBBB.AAAABBA..A.", "AAAAA..A.BBBBBB..AAAABB.ABBA.AAAA...ABBABBBBAAAA.", "..BBAAAA...A..A..A..ABB.AAAA.ABBABB.AAAA.A..ABB..", "BBBBBB.BBBBAAAABBAAAABB.A..A.AAAABBA..A..AAAAA..A", "BB.A..A.A..A..A..A.ABBA.AAAA....BB.AAAA.BB.BBAAAA", "BB.AAAA.AAAA..AAAA.AAAAABBABB.A..A.A..ABBABBAA..A", "BBA..A.ABBAA..A.ABBABB.AAAA...AAAA.AAAA..AAAAAAAA", "BBAAAA.AAAAAAAA.AAAABBABBAA..A.BB..ABBA.ABBA.A..A", "BBA..A.BBBB....BBBB...AAAAAAAA.ABBAAAAA.AAAA.AAAA", "..AAAA...A..A.ABBA.BBABBA.A..A.AAAABBABBA..A..ABB", "BBABBABB.AAAA.AAAABB.AAAA.AAAAABBA...AAAABBAAAA..", "..AAAAABBA....A..AABBA.BBBB...AAAABBA..AA..AA..A.", "BBBBBBAAAAABBAAAAAAAAABB.ABBABBA..A.AAAAAAAAAAAA.", ".A..AA..A.AAAA.A..A.ABBA.AAAA..AAAAA..AA..ABBA..A", ".AAAAAAAABB....AAAA.AAAA.ABBA..ABBAAAAAAAAA..AAAA", ".BB.ABBA.ABBA..ABBA..A..AAAAABBAAAA.A..ABBABBA...", ".BB.AAAA.AAAABBAAAA..AAAA..BB..BB.BBAAAA..AAAABB.", ".A..ABB.BB.ABBABBBB.A..A.ABBA.ABBA.ABBAA..AA..ABB", ".AAAABB.BB.AAAA.BB..AAAA.AAAA.AAAA.AAAAAAAAAAAA.."};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> region = {"XXXXXX.", ".XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBB.", ".BBBBBB"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> region = {"XX.XX", "XXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB.BB", "BBBB."};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X..X....................................", "XXXXX..................................."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXX.XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> region = {".XX.X..X", "XXXXXXXX", ".XXXX.XX", "XXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BB.A..A", "BBBBAAAA", ".BBBB.BB", "BBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> region = {"...XX.XXXX...XXXXXXXXXXXX.XX..XX..XX...XX.XX.XX.XX", "XX.XX.XX.XXXX..XX..XXXX.XXXXXXXXXXXX..XXXXXXXX....", ".XXXXXXXXXXXXXX..XXXX..XXXXXXXXXX...XXXXXXXXXX.XX.", "..XX..XX..XXXX.XX..XX.XX..XX.XX.XX..XX.....XX.XX..", "..XXXX.XXXX..XXXXXX..XX.XXXX....XX..XXXXXX..XX.XX.", "..XX.XXXXXX.XX..XXXXXXXXXXXX...XX.XX..XX.XX.XXXX..", "XXXX.XXXX..XXXX.XX..XXXX.XX.XX...XX....XX..XXXX...", "XXXXXX.XX..XXXXXXXX.XXXX.XXXXXX....XXXX...XXXXXX..", ".XX.XXXX.XXXXXX.XXXXXX.XX.XXXX.XX..XX.XXXX.XX.XX..", "XXXX.XXXX.XXXX.XX..XX.XXXX...XXXXXX.XXXXXXXX..XXXX", ".XX..XXXXXXXXXX.XX.XXXX..XX.XX.XX.XXXXXX.XX.XX....", "..XXXXXX..XXXX..XXXXXX......XX.XX.XXXX.XXXXXXXX...", ".XX..XXXX.XX..XX.XX..XXXX..XXXX..XXXX.XX.XXXXXX.XX", ".XXXX..XX....XXXXXXXXXX.....XXXX.XX.XXXX..XX.XXXX.", "XX..XX....XX.XX.XXXX.XXXXXX.XXXX.XXXXXX..XX..XX.XX", "XX..XXXX.XX..XX..XXXXXX...XXXXXXXXXX.XXXX...XX.XX.", "..XX..XX....XX..XX.XXXXXX.XX.XXXX.XX.XX.XXXXXXXXXX", "XX...XXXXXX..XXXX....XXXXXXXXXXXX.XX....XX..XXXX..", "..XXXXXX..XX.XX.XXXXXXXXXXXX.XX.XXXXXXXX..XXXX.XX.", ".XX.XX.XX...XXXXXX..XXXX.XXXX.XXXX...XXXX.XX.XX...", "XXXX.XXXXXXXXXX..XXXXXX..XX.XXXX.XXXX..XXXX.XX.XX.", "XX.XXXX....XX..XX..XX..XXXXXXXX.....XX.XXXX.XX.XX.", "XX..XX..XXXXXXXX.....XX..XXXXXXXX..XX...XX.XXXX.XX", "..XXXX.XXXXXXXX..XX..XXXXXX.XXXXXX..XX.XXXX.XXXXXX", ".XX.XXXX...XX..XX...XX..XXXXXXXXXXXXXXXX.XXXXXX...", "XXXXXX.XX.....XXXX.XXXX.XX...XXXX..XX.XXXX.XX.XXXX", "..XX..XX.XX.XXXXXX.XXXX....XXXX.XXXX.XX....XX.....", "XX.XX..XX.XX...XXXX..XXXX.XXXX.XXXX.XXXX...XX.....", "..XXXX...XXXX.XXXX.....XX..XXXXXXXXXX..XXXXXX...XX", "XXXX...XXXX..XX.XXXX.XX.....XX...XX...XX.XXXXXX.XX", "...XX...XX..XXXXXX.XXXX.XXXX...XXXX...XX.XXXX..XX.", ".XXXX.XX.XX..XXXXXXXXXX.XXXX.XX..XXXX.XX.XXXX..XX.", ".XX..XX.XXXX.XXXXXX.XX...XX.XXXXXX.XXXXXXXX...XXXX", ".XXXXXX.XXXX..XX.XXXX.XXXX.XXXX.XX..XX..XXXXXXXXXX", ".XXXX.XX.XX..XX.XXXX.XX.XXXXXXXXXXXX....XX..XX.XX.", "......XX.XX.XX..XXXXXX..XX...XX.XXXX.XX..XX...XXXX", "..XXXXXXXXXXXXXX.XX.XX.XXXX.XXXX.XX.XXXXXX...XX.XX", "...XX.XXXX.XXXX..XX.XXXXXX....XXXX.XX.XXXXXXXXXX..", "XXXX..XX.XXXXXX.......XXXXXXXXXX.XXXXXXXX...XXXXXX", "..XX..XX.XX..XX.XX.XX.XX...XX.XXXX.XXXXXX.XXXX..XX", "......XXXX..XXXXXXXXXX.XXXX.XXXX.XXXX.XXXXXXXX..XX", "..XXXXXX.XX....XX..XXXX.XX.XX..XXXXXXXXXXXXXXXXXX.", ".XXXX..XX.XX.XXXXXXXX..XXXX...XX.XXXX..XX.XXXX....", "..XX..XX......XX..XX.XXXXXXXXXX.XXXX..XXXX......XX", "XXXX..XX...XX.XX..XX.XXXXXX.XXXX.XX.XX.XX.XX.XX.XX", "...XXXX.XX.XX.XX...XX.XXXXXX.XX....XXXX.XXXX.XXXX.", "...XXXXXXXX.XXXXXXXX..XXXXXX.XX.XXXXXX..XXXX..XX..", "XX.XX...XXXX.....XX..XX..XX.XX.XX..XX..XX.XX..XXXX", "XXXX..XX.XXXX.XXXXXX.XX.XX.XXXX.XXXX.XXXXXX..XX.XX", ".XXXXXXXXXX.XXXXXXXXXX.XX...XX..XXXXXXXX.XXXXXXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...BB.BBBB...BBBBBBABBABB.BB..BB..BB...BB.BB.BB.BB", "BB.BB.BB.ABBA..BB..AAAA.BBBBBBBBBBBB..ABBAABBA....", ".BBBBBBBBAAAABB..BBBB..BBBBBBBBBB...BBAAAAAAAA.BB.", "..BB..BB..BBBB.BB..BB.BB..BB.BB.BB..BB.....BB.BB..", "..BBBB.ABBA..BBBBBB..BB.ABBA....BB..BBBBBB..BB.BB.", "..BB.BBAAAA.BB..BBBBABBAAAAA...BB.BB..BB.BB.BBBB..", "ABBA.BBBB..ABBA.BB..AAAA.BB.BB...BB....BB..BBBB...", "AAAABB.BB..AAAABBBB.BBBB.BBBBBB....BBBB...BBBBBB..", ".BB.BBBB.BBBBBB.BBBBBB.BB.BBBB.BB..BB.ABBA.BB.BB..", "BBBB.ABBA.BBBB.BB..BB.BBBB...BBBBBB.BBAAAABB..BBBB", ".BB..AAAABBBBBB.BB.BBBB..BB.BB.BB.ABBABB.BB.BB....", "..BBBBBB..BBBB..BBBBBB......BB.BB.AAAA.BBABBABB...", ".BB..BBBB.BB..BB.BB..BBBB..BBBB..BBBB.BB.AAAABB.BB", ".BBBB..BB....BBBBBBBBBB.....ABBA.BB.BBBB..BB.BBBB.", "BB..BB....BB.BB.BBBB.BBBBBB.AAAA.BBBBBB..BB..BB.BB", "BB..BBBB.BB..BB..BBABBA...BBBBBBBBBB.BBBB...BB.BB.", "..BB..BB....BB..BB.AAAABB.BB.ABBA.BB.BB.BBBBABBABB", "BB...BBBBBB..BBBB....BBBBBBBBAAAA.BB....BB..AAAA..", "..BBBBBB..BB.BB.BBBBABBABBBB.BB.BBBBBBBB..BBBB.BB.", ".BB.BB.BB...BBBBBB..AAAA.BBBB.BBBB...BBBB.BB.BB...", "BBBB.BBBBBBBBBB..BBBBBB..BB.BBBB.BBBB..ABBA.BB.BB.", "BB.BBBB....BB..BB..BB..BBABBABB.....BB.AAAA.BB.BB.", "BB..BB..BBBBBBBB.....BB..AAAABBBB..BB...BB.BBBB.BB", "..BBBB.BBBBBBBB..BB..BBBBBB.ABBABB..BB.BBBB.BBBBBB", ".BB.BBBB...BB..BB...BB..BBBBAAAABBBBBBBB.BBBBBB...", "BBBBBB.BB.....ABBA.ABBA.BB...BBBB..BB.BBBB.BB.BBBB", "..BB..BB.BB.BBAAAA.AAAA....BBBB.BBBB.BB....BB.....", "BB.BB..BB.BB...BBBB..BBBB.BBBB.ABBA.BBBB...BB.....", "..BBBB...BBBB.BBBB.....BB..BBBBAAAABB..BBABBA...BB", "BBBB...BBBB..BB.BBBB.BB.....BB...BB...BB.AAAABB.BB", "...BB...BB..BBBBBB.ABBA.ABBA...BBBB...BB.ABBA..BB.", ".BBBB.BB.BB..ABBABBAAAA.AAAA.BB..BBBB.BB.AAAA..BB.", ".BB..BB.ABBA.AAAABB.BB...BB.BBBBBB.BBBBBBBB...ABBA", ".ABBABB.AAAA..BB.BBBB.BBBB.BBBB.BB..BB..BBBBBBAAAA", ".AAAA.BB.BB..BB.ABBA.BB.BBBBBBBBABBA....BB..BB.BB.", "......BB.BB.BB..AAAABB..BB...BB.AAAA.BB..BB...BBBB", "..BBBBABBABBBBBB.BB.BB.BBBB.BBBB.BB.BBABBA...BB.BB", "...BB.AAAA.ABBA..BB.BBABBA....BBBB.BB.AAAABBABBA..", "BBBB..BB.BBAAAA.......AAAABBBBBB.BBABBABB...AAAABB", "..BB..BB.BB..BB.BB.BB.BB...BB.BBBB.AAAABB.ABBA..BB", "......BBBB..BBBBBBBBBB.BBBB.BBBB.ABBA.BBBBAAAA..BB", "..BBBBBB.BB....BB..BBBB.BB.BB..BBAAAABBBBBBBBBBBB.", ".BBBB..BB.BB.BBBBBBBB..ABBA...BB.BBBB..BB.BBBB....", "..BB..BB......BB..BB.BBAAAABBBB.BBBB..BBBB......BB", "BBBB..BB...BB.BB..BB.BBBBBB.BBBB.BB.BB.BB.BB.BB.BB", "...ABBA.BB.BB.BB...BB.ABBABB.BB....BBBB.ABBA.BBBB.", "...AAAABBBB.BBBBBBBB..AAAABB.BB.BBBBBB..AAAA..BB..", "BB.BB...BBBB.....BB..BB..BB.BB.BB..BB..BB.BB..BBBB", "BBBB..BB.BBBB.ABBABB.BB.BB.BBBB.ABBA.BBBBBB..BB.BB", ".BBBBBBBBBB.BBAAAABBBB.BB...BB..AAAABBBB.BBBBBBBB."};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> region = {"XXXXXX...", ".XXXXX..X", ".....XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBB...", ".BBBBA..A", ".....AAAA"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> region = {".......................XXXX.......................", "......................XXXXXX......................", ".....................XXXXXXXX.....................", "....................XXXXXXXXXX....................", "...................XXXXXXXXXXXX...................", "..................XXXXXXXXXXXXXX..................", ".................XXXXXXXXXXXXXXXX.................", "................XXXXXXXXXXXXXXXXXX................", "...............XXXXXXXXXXXXXXXXXXXX...............", "..............XXXXXXXXXXXXXXXXXXXXXX..............", ".............XXXXXXXXXXXXXXXXXXXXXXXX.............", "............XXXXXXXXXXXXXXXXXXXXXXXXXX............", "...........XXXXXXXXXXXXXXXXXXXXXXXXXXXX...........", "..........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..........", ".........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.........", "........XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX........", ".......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.......", "......XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX......", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....", "....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX....", "...XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".......................BBBB.......................", "......................BBBBBB......................", ".....................BBBBBBBB.....................", "....................BBBBBBBBBB....................", "...................BBBBBBBBBBBB...................", "..................BBBBBBBBBBBBBB..................", ".................BBBBBBBBBBBBBBBB.................", "................BBBBBBBBBBBBBBBBBB................", "...............BBBBBBBBBBBBBBBBBBBB...............", "..............BBBBBBBBBBBBBBBBBBBBBB..............", ".............BBBBBBBBBBBBBBBBBBBBBBBB.............", "............BBBBBBBBBBBBBBBBBBBBBBBBBB............", "...........BBBBBBBBBBBBBBBBBBBBBBBBBBBB...........", "..........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..........", ".........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.........", "........BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB........", ".......BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.......", "......BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB......", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.....", "....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB....", "...BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "..BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB..", ".BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB.", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> region = {"XXXX.XXXXXX.XXXX.XXXXXXXXXX.XX.XX.XX.XXXXXX.XXXXXX", ".XXXX.XXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXX.XXXX.XXXXXX", ".XXXX.XXXXXXXX.XXXXXXXXXXXX.XX.XX.XXXXXXXXXXXXXXXX", "XXXXXXXXXX.XXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XX.XXXXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXX.XXXXXXXXXXXXXXXX.XX.XXXXXX.XXXX.XXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXX.XX.XXXXXXXXXX.XXXXXX", "XX.XXXXXX.XXXXXXXXXXXXXXXX.XXXXXX.XX.XXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXX.XXXXXXXXXXXX.", "XXXXXX.XX.XXXXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXX.XXXXXXXX.XX.XXXX.XXXXXX.XX.XXXX.XXXXXXXX", ".XXXX.XXXXXX.XXXX.XXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXX", "XXXXXXXX.XXXXXXXX.XXXX.XX.XX.XXXXXXXXXXXXXXXX.XXXX", "XX.XX.XXXXXXXXXXXXXX.XXXXXXXXXX.XXXX.XXXXXXXX.XXXX", "XXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXX.XXXXXXXXXX.", "XXXX.XX.XX.XXXX.XXXXXXXX.XX.XXXXXX.XXXX.XX.XXXXXX.", "XXXXXXXX.XXXXXX.XX.XXXXXXXX.XXXX.XXXXXXXX.XXXXXXXX", "XX.XXXXXX.XX.XXXXXXXXXXXXXX.XXXXXXXX.XXXXXXXX.XXXX", "XXXXXXXXXXXX.XXXX.XXXX.XXXXXX.XXXXXX.XXXXXXXXXXXX.", "XXXXXXXX.XXXXXXXX.XXXXXXXX.XX.XXXXXX.XX.XXXXXXXXXX", "XXXXXX.XXXXXXXXXXXX.XXXX.XXXXXXXXXX.XXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXX.XXXXXXXXXXXX.XXXXXX.XX.XXXXXXXX.", ".XXXXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXX.XXXX.XXXXXXXX.", "XX.XXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXXXXXX.XXXXXXXX", ".XXXX.XX.XX.XXXXXX.XXXXXXXXXXXX.XXXX.XXXXXXXXXXXX.", "XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXX.XX.XXXXXXXX.XXXX.XXXX.XXXXXX.XXXX.XXXX.", "XX.XXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX.XXXXXXXXXXXX.XX.XXXXXX.XXXXXX.XXXXXXXXXXXXXX", ".XXXXXX.XXXXXXXX.XX.XXXXXX.XXXXXXXXXXXXXXXXXXXXXX.", ".XXXX.XX.XX.XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX.", "XXXXXX.XXXXXX.XXXXXXXXXX.XXXXXX.XXXXXX.XXXXXXXXXX.", "XXXXXXXXXX.XXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX.XXXX.", ".XXXX.XXXXXXXXXX.XXXX.XXXX.XXXXXXXXXX.XX.XXXXXXXX.", ".XXXXXX.XX.XXXXXXXXXX.XXXXXX.XX.XXXX.XXXXXXXX.XXXX", "XXXXXXXXXXXXXX.XXXXXX.XXXXXX.XXXXXXXX.XXXXXXXXXXXX", "XXXXXXXXXXXXXX.XX.XXXXXXXXXX.XXXXXXXXXXXXXX.XXXXXX", ".XXXXXXXX.XXXX.XXXX.XX.XX.XX.XXXXXXXXXXXXXX.XXXXXX", ".XX.XXXXXXXXXX.XXXXXX.XX.XXXXXXXXXXXXXXXXXXXX.XXXX", ".XXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", ".XXXXXXXXXXXX.XXXX.XX.XX.XXXXXXXXXXXXXXXX.XXXXXXXX", ".XXXX.XX.XXXXXXXXXXXXXXXX.XXXXXX.XXXXXXXXXXXX.XXXX", ".XXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXXXXXXXX.", ".XXXXXXXXXX.XXXX.XXXXXX.XXXXXXXXXXXXXXXXXX.XXXXXX.", "XXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XX.XXXXXX", ".XXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX.XXXXXXXXXX.XXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXX.XXXXXX.", "XX.XXXX.XXXXXXXXXX.XXXXXXXXXX.XXXXXX.XXXXXXXXXXXX.", ".XXXX.XXXXXXXX.XX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX.XXXXXX.XXXX.XXXXXXXX.XXXX.XX.XXXXXXXX.XXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBB.BBBBBB.ABBA.BBBBABBABB.BB.BB.BB.BBABBA.ABBABB", ".ABBA.ABBABBAAAABBBB.AAAABBBB.BBBBABBA.AAAA.AAAABB", ".AAAA.AAAABBBB.ABBABBBBBBBB.BB.BB.AAAAABBAABBAABBA", "BBBBABBABB.BBBBAAAA.ABBAABBAABBAABBABBAAAAAAAAAAAA", ".BB.AAAABBBBABBA.BB.AAAAAAAAAAAAAAAABBBBBBBBABBABB", ".BBBBBBBBBB.AAAAABBABBBBBBBB.BB.BBBBBB.ABBA.AAAABB", "BBBBBBBBBBABBABBAAAABB.BBBBBB.BB.BBBBBBAAAA.BBBBBB", "BB.BBBBBB.AAAAABBAABBAABBA.ABBABB.BB.ABBAABBAABBA.", "ABBABBBBBBABBAAAAAAAAAAAAA.AAAA.ABBA.AAAAAAAAAAAA.", "AAAABB.BB.AAAAABBABB.BB.BBBBBBBBAAAABBBBBBABBAABBA", ".ABBABBBB.BBBBAAAA.BB.ABBA.BBBBBB.BB.BBBB.AAAAAAAA", ".AAAA.BBBBBB.ABBA.ABBAAAAABBBBBBBBBBBBBB.ABBA.ABBA", "BBBBBBBB.BBBBAAAA.AAAA.BB.BB.BBBBBBBBABBAAAAA.AAAA", "BB.BB.ABBAABBAABBABB.ABBAABBABB.ABBA.AAAAABBA.BBBB", "ABBABBAAAAAAAAAAAABB.AAAAAAAABB.AAAABB.BBAAAAABBA.", "AAAA.BB.BB.ABBA.BBBBBBBB.BB.ABBABB.ABBA.BB.BBAAAA.", "BBBBBBBB.BBAAAA.BB.ABBAABBA.AAAA.BBAAAABB.BBBBABBA", "BB.BBBBBB.BB.ABBABBAAAAAAAA.BBABBABB.ABBAABBA.AAAA", "ABBAABBABBBB.AAAA.ABBA.BBBBBB.AAAABB.AAAAAAAABBBB.", "AAAAAAAA.ABBAABBA.AAAABBBB.BB.BBBBBB.BB.ABBAABBABB", "BBBBBB.BBAAAAAAAABB.ABBA.BBBBBBABBA.BBBBAAAAAAAABB", ".ABBAABBAABBAABBA.BBAAAAABBABB.AAAABB.BB.ABBAABBA.", ".AAAAAAAAAAAAAAAABB.BBBBAAAABB.ABBA.BBBB.AAAAAAAA.", "BB.BBBBBBBBBBBBBBBBABBAABBA.BB.AAAABBABBA.BBBBBBBB", ".BBBB.BB.BB.ABBABB.AAAAAAAAABBA.BBBB.AAAAABBAABBA.", "ABBAABBABBBBAAAA.BBBBBBABBAAAAABBABBABBBBAAAAAAAA.", "AAAAAAAABB.BB.ABBAABBA.AAAA.ABBA.AAAABB.ABBA.BBBB.", "BB.BBBBBBBBBB.AAAAAAAAABBABBAAAABBBBABBAAAAAABBABB", ".ABBA.BBABBAABBABB.BB.AAAABB.ABBABB.AAAABBBBAAAABB", ".AAAABB.AAAAAAAA.BB.ABBABB.BBAAAAABBAABBAABBAABBA.", ".BBBB.BB.BB.BBABBABBAAAABB.ABBABBAAAAAAAAAAAAAAAA.", "ABBABB.BBBBBB.AAAABBBBBB.BBAAAA.ABBABB.BBBBBBABBA.", "AAAABBABBA.BBBBBBABBABB.BBBBBBBBAAAABBBBBBBB.AAAA.", ".ABBA.AAAABBBBBB.AAAA.ABBA.BBBBBBBBBB.BB.ABBABBBB.", ".AAAABB.BB.BBBBABBABB.AAAABB.BB.BBBB.BBBBAAAA.ABBA", "ABBAABBAABBABB.AAAABB.ABBABB.ABBAABBA.BBBBBBBBAAAA", "AAAAAAAAAAAABB.BB.BBBBAAAABB.AAAAAAAAABBABB.ABBABB", ".BBBBBBBB.ABBA.ABBA.BB.BB.BB.ABBAABBAAAAABB.AAAABB", ".BB.BBBBBBAAAA.AAAABB.BB.ABBAAAAAAAAAABBAABBA.BBBB", ".ABBA.BB.ABBABBBBBBBBBBBBAAAAABBAABBAAAAAAAAABBBB.", ".AAAABBBBAAAA.BBBB.BB.BB.BBBBAAAAAAAAABBA.BBBBABBA", ".ABBA.BB.ABBAABBABBBBBBBB.ABBABB.BBBBAAAAABBA.AAAA", ".AAAAABBAAAAAAAAA.BBBBBBBBAAAAABBABB.BBBBAAAAABBA.", ".BBBBAAAABB.ABBA.BBBBBB.ABBABBAAAAABBABBBB.BBAAAA.", "BBBB.BB.BBBBAAAAABBAABBAAAAAABBABBAAAABB.BB.ABBABB", ".ABBAABBAABBABB.AAAAAAAABBBBAAAA.ABBABBBBBB.AAAABB", ".AAAAAAAAAAAABBBBBBABBAABBABBBBBBAAAA.BBBB.ABBABB.", "BB.BBBB.ABBABBBBBB.AAAAAAAABB.ABBABB.BBBBBBAAAABB.", ".ABBA.BBAAAABB.BB.ABBAABBABBBBAAAABBBBBBBBBBABBABB", ".AAAA.BBBBBB.BBBB.AAAAAAAA.BBBB.BB.BBBBBBBB.AAAABB"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX.X..XXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX............XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.....XXXXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXX.XXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXX.XXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXX...XXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXX.X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> region = {".XXXX...", "XXXXXXXX", "XXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB...", "ABBAABBA", "AAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X..XX..XX..XX..XX..XX..XX..XX..XX..XX..XXXXXXXXXXX", "X..XX..XX..XX..XX..XX..XX..XX..XX..XX..XXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XX.XXX..X.XXXX....................................", "XXXX.XXXX.XXXX....................................", "XXXXXXXXXX.XX.....................................", "XXXX..XXXXXX......................................", "XXXXXX............................................", ".XXXXXX...........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "X..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXX...........................................", "XXXXXXXX..........................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".XXXX.XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "A..AABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABBA..A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAAAA", "BB.BBA..A.ABBA....................................", "ABBA.AAAA.AAAA....................................", "AAAABBABBA.BB.....................................", "ABBA..AAAABB......................................", "AAAABB............................................", ".BBBBBB...........................................", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "A..AABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABBA..A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABBAAAA", ".BBBBBB...........................................", "ABBAABBA..........................................", "AAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "ABBAABBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", "AAAAAAAAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBABB", "BBBB..BBAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAABB", ".ABBA.ABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAABBA", ".AAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.X."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> region = {"XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX", "XX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XXXX.XX", "X..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..XX..XXXX..X", "XXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXXXXXX..XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA", "BB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BBBB.BB", "A..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..AA..ABBA..A", "AAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAAAAAA..AAAA"};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> region = {".XXXX...", "XXXXX..X", "....XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB...", "BBBBA..A", "....AAAA"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> region = {"XX..XX", ".XXXX."};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BB..BB", ".BBBB."};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX........XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXX", "XX..XXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXX", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..XXXXXXXX", "XXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX..XXXXXXXXXXXXXXX....XXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> region = {".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB", ".....BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", "BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> region = {".XX.", "X..X", "XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BB.", "A..A", "AAAA"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> region = {"......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXX..........................", "....XXXX..XX..........................", "....XXXX..XX..........................", "......................................", "......................................", "....XXXXXXXX..........................", "....XXXXXXXXX.........................", "....XXXX..XXX.........................", "....XXXX...XX.........................", "......................................"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> region = {".XXXX...", "XXXXXXXX", "....XXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".BBBB...", "BBBBABBA", "....AAAA"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.XXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> region = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX...", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..X", ".....XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    SpecificPolyominoCovering* pObj = new SpecificPolyominoCovering();
    clock_t start = clock();
    vector<string> result = pObj->findCovering(region);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBBB...", ".BBBBABBAABBAABBAABBAABBAABBAABBAABBAABBAABBAA..A", ".....AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test82() == 0 ? ++passed : ++failed;
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20812309&rd=13520&pm=8560
********************************************************************************
#include <vector> 
#include <string> 
 
using namespace std; 
 
class SpecificPolyominoCovering { 
  public: 
     
    int n, m; 
   
    bool colorable (vector<string> x, int i, int j) { 
      if (i + 1 < n && j + 3 < m) { 
        if (x[i][j] != 'X') 
          return false; 
        if (x[i+1][j] != 'X') 
          return false; 
        if (x[i+1][j+1] != 'X') 
          return false; 
        if (x[i+1][j+2] != 'X') 
          return false; 
        if (x[i+1][j+3] != 'X') 
          return false; 
        if (x[i][j+3] != 'X') 
          return false; 
        return true; 
        } 
      return false; 
      } 
   
    vector<string> color (vector<string> x, int i, int j) { 
      x[i][j] = 'A'; 
      x[i+1][j] = 'A'; 
      x[i+1][j+1] = 'A'; 
      x[i+1][j+2] = 'A'; 
      x[i+1][j+3] = 'A'; 
      x[i][j+3] = 'A'; 
      return x; 
      } 
     
    bool islegal (vector<string> x) { 
      for (int i = 0; i < n; i ++) 
        for (int j = 0; j < m; j ++) 
          if (x[i][j] == 'X') { 
            if (j + 1 < m && x[i][j + 1] == 'X') 
              x[i][j] = x[i][j + 1] = 'B'; 
            else 
              if (colorable(x, i, j)) 
                x = color(x, i, j); 
              else 
                return false; 
            } 
      return true; 
      } 
   
    vector <string> findCovering(vector <string> x) { 
      n = x.size(); 
      m = x[0].size(); 
      if (!islegal(x)) { 
        vector<string> re; 
        return re; 
        } 
      for (int i = 0; i < n; i ++) 
        for (int j = 0; j < m; j ++) 
          if (colorable(x, i, j) && islegal(color(x, i, j))) 
            x = color(x, i, j); 
      for (int i = 0; i < n; i ++) 
        for (int j = 0; j < m; j ++) 
          if (x[i][j] == 'X') 
            x[i][j] = 'B'; 
      return x; 
      } 
  };

********************************************************************************
*******************************************************************************/