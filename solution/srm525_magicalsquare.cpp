/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11594
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

class MagicalSquare {
public:
    long getCount(vector<string> rowStrings, vector<string> columnStrings);
};

long MagicalSquare::getCount(vector<string> rowStrings, vector<string> columnStrings) {
    long ret;
    return ret;
}


int test0() {
    vector<string> rowStrings = {"f", "o", "x"};
    vector<string> columnStrings = {"f", "o", "x"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> rowStrings = {"x", "x", "x"};
    vector<string> columnStrings = {"x", "", "xx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> rowStrings = {"cd", "cd", "cd"};
    vector<string> columnStrings = {"dvd", "dvd", "dvd"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> rowStrings = {"abab", "ab", "abab"};
    vector<string> columnStrings = {"abab", "ab", "abab"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> rowStrings = {"qwer", "asdf", "zxcv"};
    vector<string> columnStrings = {"qaz", "wsx", "erdfcv"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> rowStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> columnStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 879801;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> rowStrings = {"ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    vector<string> columnStrings = {"ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 61776;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> rowStrings = {"abababababababababababababababababababababababab", "ababababababababababababababababababababababababab", "ababababababababababababababababababababababab"};
    vector<string> columnStrings = {"ababababababababababababababababababababababababab", "ababababababababababababababababababababababab", "ababababababababababababababababababababababababab"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> rowStrings = {"xxxxxxxxxxxxxxxxxxxxxxxxx", "", "xxxxxxxxxxxxxxxxxxxxxxxxx"};
    vector<string> columnStrings = {"", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> rowStrings = {"xx", "xx", "xx"};
    vector<string> columnStrings = {"xx", "xx", "xxx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> rowStrings = {"xx", "xxx", "xx"};
    vector<string> columnStrings = {"xx", "xx", "xx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> rowStrings = {"xx", "xx", "xx"};
    vector<string> columnStrings = {"xxx", "xx", "xx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> rowStrings = {"", "", ""};
    vector<string> columnStrings = {"", "", "x"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> rowStrings = {"", "x", ""};
    vector<string> columnStrings = {"", "", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> rowStrings = {"", "", ""};
    vector<string> columnStrings = {"x", "", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> rowStrings = {"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"};
    vector<string> columnStrings = {"", "", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> rowStrings = {"", "", ""};
    vector<string> columnStrings = {"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> rowStrings = {"p", "", ""};
    vector<string> columnStrings = {"q", "", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> rowStrings = {"", "", "r"};
    vector<string> columnStrings = {"", "", "s"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> rowStrings = {"m", "o", "f"};
    vector<string> columnStrings = {"m", "o", "ffffffffffffffffffffffffffffffffffffffffffffffffff"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> rowStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    vector<string> columnStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 686323;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> rowStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    vector<string> columnStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 584155;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> rowStrings = {"dsvnmnfkdwv", "pbekllboe", "mdb"};
    vector<string> columnStrings = {"dsvnpbek", "mnfllbomdb", "kdwve"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> rowStrings = {"pqvsey", "qiib", "cpuih"};
    vector<string> columnStrings = {"pqvqicpui", "seibh", "y"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> rowStrings = {"mehma", "eapisprjja", "bozuwaqzd"};
    vector<string> columnStrings = {"meeapibozu", "hsprwaqz", "majjad"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> rowStrings = {"losoymuiiztgbdtggxivr", "vawumovutpfyjvuupvowtbfefrxxveqqkyzfbachqq", "awndkvyjbo"};
    vector<string> columnStrings = {"lvawumovutpfyjvuu", "osoymupvowtbfefrxxawndkvyj", "iiztgbdtggxivrveqqkyzfbachqqbo"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> rowStrings = {"oplgxprczjbikyghfsbidfab", "prongzbztgkcyyz", "gzoqygtlkgcslqlwgascyrjcjhcdrzqtnxxhsmkze"};
    vector<string> columnStrings = {"oplgxprczjbiprongzbztgkcyygzoqygtl", "kykgcslqlwgascyrjc", "ghfsbidfabzjhcdrzqtnxxhsmkze"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> rowStrings = {"ffgljugzxnqndgecxzrjnlaztcudnbffusnsjdcqrs", "gqabxtuptmbwabmytt", "cddgjgzzxyppvlnxrgryuojzlxcy"};
    vector<string> columnStrings = {"ffgljugzxnqndgecgqabcdd", "xzrjnlaztcudnbffuxgjgzzxyppvlnxr", "snsjdcqrstuptmbwabmyttgryuojzlxcy"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> rowStrings = {"rsiluxcpecbwqkjffghitctbtyno", "vmdismvqsvkfanlwwguwoibzkuptornraqejidrtwdbvbptc", "esuwkpsarsbtovhrqhpcuqnvhdzkdeyxxlf"};
    vector<string> columnStrings = {"rsilvmdismvqsvkfanlwwguwoibzkuptesuwk", "uxcpecbwqkjffghitcornraqejidrtwpsarsbtovhrqhpcuqn", "tbtynodbvbptcvhdzkdeyxxlf"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> rowStrings = {"uzmbkwboqfvinwwhr", "ifzrumibefhygfncwrfwieavuubiwt", "xkcaokeihtfkwfmhuqvgfdzkajxfxzjfkbtovj"};
    vector<string> columnStrings = {"uzmixkc", "bkwboqfvfzraokeihtfkwfmhuqvgfdzkajxfx", "inwwhrumibefhygfncwrfwieavuubiwtzjfkbtovj"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> rowStrings = {"vdqaeluowxvhxprapcrphhgaqd", "imoknwydnqthldrwtftwlvwcdtwixou", "bjjuscghgljtbapxsbfruztedcdyameieuhvqnxjgt"};
    vector<string> columnStrings = {"imoknwydnqthldrwtftwlvwcdtwixbjjus", "voucghgljtbapxsbfruzted", "dqaeluowxvhxprapcrphhgaqdcdyameieuhvqnxjgt"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> rowStrings = {"rluzmtyjjcnhpceeghniqcohoiws", "atlmqcswtdtenihynrwhsnog", "bxwcedlbwgxdxbpkihfmmxwtmfgraygxpxqqsqeixoodikij"};
    vector<string> columnStrings = {"rlatlmqcswtdtenihynbxwced", "urwhslbwgxdxbpkihfmmxwtmfgraygxpxq", "zmtyjjcnhpceeghniqcohoiwsnogqsqeixoodikij"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> rowStrings = {"opmjexwskyhbefpimfhplopqmbdk", "rwawkfiuztpzrcjtxgwwzifcedewiiv", "wddtlcgjtoaakhaueskgtdmciaxhildilnd"};
    vector<string> columnStrings = {"opmjexwskyhrwawkfiuztpzrwddtlc", "befpimfcjtxgwwzifcegjtoaakhaueskgtdmciaxhil", "hplopqmbdkdewiivdilnd"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> rowStrings = {"ddrveeeutgqyadxvqhozakptabuniluspkdvf", "oltdxyukvsukiufwxmildtobezkjbcgylvauzvpyddg", "jayzlmibyxofowecdwagjutvpsuzbiaqqkyfoofpnfm"};
    vector<string> columnStrings = {"oltdxyukvsukiufwxmildtobjayzlmibyxofowecdwagjutv", "ddrveeeutgqyadxvqhozakpezkjpsuzbiaqqkyfo", "tabuniluspkdvfbcgylvauzvpyddgofpnfm"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> rowStrings = {"jjspadbyedsaqtvpmqcbgodvrxxubpezjieq", "qifxtinjifbrczrqmbpyo", "hywtglcgdlahvwpsacblidfqheyahvkzscnpu"};
    vector<string> columnStrings = {"jjspaqifxtinj", "dbyedsaqtvpmqcbgodvrxxubpeifbrchywtglcgdlahvwpsac", "zjieqzrqmbpyoblidfqheyahvkzscnpu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> rowStrings = {"sepwlqbwashywswdhzxepummcnalmwzbraoiqnfcgoctipvuj", "grtkglcilplaresoltjryiqgppg", "kxwvzsblwkhplvsjnkdqlkthjjcgjurzkpumejdy"};
    vector<string> columnStrings = {"sepwlqbwashywswdhzxepummcnalmgrtkglcilplkxwvzsbl", "aresoltjryiqgppwkhp", "wzbraoiqnfcgoctipvujglvsjnkdqlkthjjcgjurzkpumejdy"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> rowStrings = {"imgphqfziddlghbjaribnifzigyfkylcz", "pzyzpkivyiwuxvmzuxpyeikdrsazsvtzgyhirxo", "yurtyrdqityspsyzlbtnlmfteaoyyvgmxsyuttgjdajoctswbg"};
    vector<string> columnStrings = {"imgphqfziddlghbjaribnifzigpyurtyrdqityspsyzlbt", "yfkylzyznlmfteaoyyvgmxsyuttgjdajoct", "czpkivyiwuxvmzuxpyeikdrsazsvtzgyhirxoswbg"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> rowStrings = {"eebbierbeeerbie", "brbirerrirriibbriebrriiibe", "rieebbiieierbrreiiireiebbei"};
    vector<string> columnStrings = {"eebbbrbirerririeebbiieierb", "ierbeeerbirriibbrir", "eebrriiibereiiireiebbei"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> rowStrings = {"qvqyqycycqcvvvqccyvvqyvqvvvvqqqqy", "yyqcycyccyyycqvccvqyvcvcyyy", "qyvcccyqqcqycccvvyqycvqyvyycq"};
    vector<string> columnStrings = {"qvqyqycycqcvvyyqcycyccyyycqvqyvc", "vqccyvvccccyqqcqyccc", "qyvqvvvvqqqqyvqyvcvcyyyvvyqycvqyvyycq"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> rowStrings = {"oaeeeaedaoaaeeaoeeeadoaaeedoe", "aeaadoeeeaoaeooddadeodeao", "oedaaoeeeeeoaoaoeaooadeeda"};
    vector<string> columnStrings = {"oaeeeaedaoaaeaadoeoedaaoeeeeeo", "aeeaoaeooddadeodea", "eeaoeeeadoaaeedoeaooaoeaooadeeda"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> rowStrings = {"tzffttutffffzfzfftfzuuffutfuuttfutttfuzftztzztu", "fzzzfftz", "zutfftfzzztztttffffutfuuu"};
    vector<string> columnStrings = {"tzfzutfftfzzztztttff", "fttutffffzfzfftfzuuffutffzzzfft", "uuttfutttfuzftztzztuzffutfuuu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> rowStrings = {"jqqvvqqeeqejjeqveejeqjqjqeqqvqvjvjvejvee", "qevejqeeeqjqqvvevej", "ejjeqjvqeqveeejjeqjqjevqqjvejj"};
    vector<string> columnStrings = {"jqqvvqqeeqejjeqveejeqjqjqeqqqevejqeejje", "vqvjvjveeqjqqvvqjvqeqveeejje", "ejveeevejqjqjevqqjvejj"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> rowStrings = {"bbddbbdbbdybbbuududdubbbbududddddbyyyy", "dudddbyydddubydbuyd", "yuuuubydydyuyddbbydyddybudbubbybu"};
    vector<string> columnStrings = {"bbddbbddyuuuubydy", "bbdybbbuududdubbbbudddbydy", "ududddddbyyyyydddubydbuyduyddbbydyddybudbubbybu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> rowStrings = {"mmuummmuummmummummuuuuumuuuuummmuuuumumuu", "uuuuuuuuummuummmmmummmmmmmmmmmmuu", "mmmuummmuumummuummuuumumumuuuuuumu"};
    vector<string> columnStrings = {"mmuuuuuuuuuuummuummmmmuummmuumummuummu", "mmmuummmummummmummmmmmmmmmmmuuuumumumuuuuuumu", "mmuuuuumuuuuummmuuuumumuu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> rowStrings = {"kykykyykkkyykyyyykkyykykyyykkyyykkykyykyyky", "kyykkkyyykykykkyyykkkkk", "yykkkkkyykyykkykkykkkykykyykkyyykyyyk"};
    vector<string> columnStrings = {"kykykyykkyykkkkkyykyy", "kkyykyyyykkyykkkyyykkkykkykkkykykyykkyyyky", "yykykyyykkyyykkykyykyykyykykkyyykkkkkyyk"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> rowStrings = {"xxoxxxoooooxxxooooxxoxooxoxoxooxooxxo", "xxoxxxxooxxoxoxoxoxxxoxoooxxoooooxxoxxoxoooxxoxx", "oxxooxxxxoxxoxooxxxoooxxoxoxxx"};
    vector<string> columnStrings = {"xxoxxxoooooxxxooooxxoxxxxooxxoxoxooxxooxxxxo", "xxoxooxxoxxxoxoooxxxoxooxxxooo", "oxoxooxooxxoxoooooxxoxxoxoooxxoxxxxoxoxxx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> rowStrings = {"rrcrccrcrcrrcrrccrrrrcccrcrrcccccccrrrrccc", "rrrrcrrrrrrcrrrrrcccrcrccrcc", "rcrcrrrccrrrccrcrccrcrcrcrrrccrr"};
    vector<string> columnStrings = {"rrrrcrrrrrrcrrrrrcccrcrccr", "rrcrccrcrcrrcrrccrrrrcccrcrrccccrcrcr", "cccccrrrrcccrrccrrrccrcrccrcrcrcrrrccrr"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> rowStrings = {"wwwwyywywwywywwwywwwywwywywyyywywwyw", "wwwywyywyywyyyywyyywyywwwyy", "wyywwyywwwyywywyywywyywyyyyyywwywwwyyyy"};
    vector<string> columnStrings = {"wwwywyywyywywyywwyywwwyywywyywywyywyy", "wwwwyyywyyywyyyyy", "yywywwywywwwywwwywwywywyyywywwywwwwyyywwywwwyyyy"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> rowStrings = {"mmaamaamaammaaaammmmmmmmaammaaaa", "maammammmammammaamaaamaammmammmamaamm", "mammammmaaammaamammaammmmammmaa"};
    vector<string> columnStrings = {"mmamaammammmammammaamaaamaamammammmaaam", "amaamaammaaaammmmmmmmaammammmammmammaa", "aaaaammmammaammmmammmaa"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> rowStrings = {"nc", "wn", "mm"};
    vector<string> columnStrings = {"mm", "nc", "wn"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> rowStrings = {"hn", "c", "l"};
    vector<string> columnStrings = {"l", "c", "hn"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> rowStrings = {"or", "s", "oj"};
    vector<string> columnStrings = {"s", "or", "oj"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> rowStrings = {"uwcrzvrriwgtprnpuhfgqlejrlpzvvhocbljejdewfhyrg", "rexjpupfzltoyhwbqmhrgxfdhkwihgldlvdtlfodgcy", "ntzqdowhkhbbaktrsuwfywguhupybpvcxoqlaatn"};
    vector<string> columnStrings = {"uwcrzvrriwgtprnpuhfgqlejrlpzvvhocbljejdewfhyrg", "rexjpupfzltoyhwbqmhrgxfdhkwihgldlvdtlfodgcy", "ntzqdowhkhbbaktrsuwfywguhupybpvcxoqlaatn"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> rowStrings = {"rpuwqkjgurwnzhjccnbqvkogayfsouhpxlyyvxbvqk", "kpdhuefyedkcygyzxrvwwjxhcbgvfgjincprvutpvsetamcs", "gvrubluzyqyhqbfdvdouevdhzdnmvzdpqzdnapissif"};
    vector<string> columnStrings = {"rpuwqkjgurwnzhjccnbqvkogayfsouhpxlyyvxbvqk", "kpdhuefyedkcygyzxrvwwjxhcbgvfgjincprvutpvsetamcs", "gvrubluzyqyhqbfdvdouevdhzdnmvzdpqzdnapissif"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> rowStrings = {"ygmwpuaxprgsklxoreaepcroqctyejvgnmkwkgfgpvkebuth", "xmmspgybocuoaluzezlejrpwbcbjqdzlmtfcflwfedsmok", "nvcmwlceokuxnsapdspzyxcmwsscjtydiamvdwknyrqubghc"};
    vector<string> columnStrings = {"xmmspgybocuoaluzezlejrpwbcbjqdzlmtfcflwfedsmok", "nvcmwlceokuxnsapdspzyxcmwsscjtydiamvdwknyrqubghc", "ygmwpuaxprgsklxoreaepcroqctyejvgnmkwkgfgpvkebuth"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> rowStrings = {"gh", "", "hg"};
    vector<string> columnStrings = {"gh", "hg", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> rowStrings = {"tdd", "tt", ""};
    vector<string> columnStrings = {"", "tdd", "tt"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> rowStrings = {"a", "a", ""};
    vector<string> columnStrings = {"a", "", "a"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> rowStrings = {"tatattattttattttttataaatttaatttttatttattaaaaaata", "tatataatttttattaataatatttaatattaatattttaattttata", "atataaaatttttttataaaatatttttttattatatatatattaaata"};
    vector<string> columnStrings = {"atataaaatttttttataaaatatttttttattatatatatattaaata", "tatataatttttattaataatatttaatattaatattttaattttata", "tatattattttattttttataaatttaatttttatttattaaaaaata"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> rowStrings = {"hkkhhhkkkhkkkkkhkhkkkhkkkkkhkhhhkkkkhkhhkhhkhkh", "hkhkkhkhhkkkkhkhhhhkhhkkkhhhkhhkhhhkhhhhhkkkkkkkhk", "hkkkhhhkkhhhkkkkkkhhkkkkkhhhkhhhhhkkkkkkhkhhhkhkkh"};
    vector<string> columnStrings = {"hkkkhhhkkhhhkkkkkkhhkkkkkhhhkhhhhhkkkkkkhkhhhkhkkh", "hkkhhhkkkhkkkkkhkhkkkhkkkkkhkhhhkkkkhkhhkhhkhkh", "hkhkkhkhhkkkkhkhhhhkhhkkkhhhkhhkhhhkhhhhhkkkkkkkhk"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> rowStrings = {"pmmmmmmmmpppmmppmpmmmmppmmmppmpmmmmmpppmpmpmpmpm", "mpmpppmmpmppmmpppmmmpmmpmppmpmpmmmpppmppmmppmpm", "pmpmpmmmmmpmppmmppmpmpmpmmpppppmmmppmmmmmppmmmpmm"};
    vector<string> columnStrings = {"pmpmpmmmmmpmppmmppmpmpmpmmpppppmmmppmmmmmppmmmpmm", "mpmpppmmpmppmmpppmmmpmmpmppmpmpmmmpppmppmmppmpm", "pmmmmmmmmpppmmppmpmmmmppmmmppmpmmmmmpppmpmpmpmpm"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> rowStrings = {"hhxxhxxxhhxxhxhhxxhxhxhxxxxxxxxhhhxhhhhxhhhhxxxhxx", "xhxhhhxxxhxxhhhxhhhxxxxxxhxhhxhxhhxhhhxhhxxhhhxxxh", "xxhxhhhhxxhhxhhhxxxhhxxhhhhhhxxxxxxxhhhhhhhxhxxxhh"};
    vector<string> columnStrings = {"hhxxhxxxhhxxhxhhxxhxhxhxxxxxxxxhhhxhhhhxhhhhxxxhxx", "xxhxhhhhxxhhxhhhxxxhhxxhhhhhhxxxxxxxhhhhhhhxhxxxhh", "xhxhhhxxxhxxhhhxhhhxxxxxxhxhhxhxhhxhhhxhhxxhhhxxxh"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> rowStrings = {"tittiiitttiititttiitiitiiititiiitiititttitttttttit", "tiittttiiiitttittiitiiitttiiitiiiiiiiiiittiiiiiiii", "itiiittiiiitttiittiititititittttttiiiiititiitittti"};
    vector<string> columnStrings = {"tittiiitttiititttiitiitiiititiiitiititttitttttttit", "tiittttiiiitttittiitiiitttiiitiiiiiiiiiittiiiiiiii", "itiiittiiiitttiittiititititittttttiiiiititiitittti"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> rowStrings = {"taaatatttatattatataaattttaaattataataattaatatataata", "attaaaattaaatttatattattttattaatattataaattaatatttat", "aattaaaattaatttatataaaaaattatataaaattaataaaaattttt"};
    vector<string> columnStrings = {"taaatatttatattatataaattttaaattataataattaatatataata", "attaaaattaaatttatattattttattaatattataaattaatatttat", "aattaaaattaatttatataaaaaattatataaaattaataaaaattttt"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> rowStrings = {"ggggggggggggggggggggggggggggggggggggggggggggggggg", "ggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggggg"};
    vector<string> columnStrings = {"ggggggggggggggggggggggggggggggg", "ggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggg"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 120270;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> rowStrings = {"ddddddddddddddddddddddddddddddddddddddddddddddddd", "ddddddddddddddddddddddddddddddddddddddddddddd", "ddddddddddddddddddddd"};
    vector<string> columnStrings = {"ddddddddddddddddddddddddddddddddddddddddddd", "ddddddddddddddddddddddddddddddddddddd", "ddddddddddddddddddddddddddddddddddd"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 182413;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> rowStrings = {"cccccccccccccccccccccccccccc", "cccccccccccccccccccccccccccccccccc", "cccccccccccc"};
    vector<string> columnStrings = {"ccccccccccccccccccccccc", "ccccccccccccccccccc", "cccccccccccccccccccccccccccccccc"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 25969;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> rowStrings = {"ccccccccccccccccccccccccccccccccccccccccccc", "ccccccccccccccc", "cccccccccccccccccc"};
    vector<string> columnStrings = {"ccccccccccccc", "cccccccccccccccccccccccccc", "ccccccccccccccccccccccccccccccccccccc"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 17150;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> rowStrings = {"uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuu"};
    vector<string> columnStrings = {"uuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu", "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 70098;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> rowStrings = {"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"};
    vector<string> columnStrings = {"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 697428;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> rowStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    vector<string> columnStrings = {"eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee", "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 685447;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> rowStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> columnStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 741707;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> rowStrings = {"wwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwww"};
    vector<string> columnStrings = {"wwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwwwwwwwwww", "wwwwwwwwwwwwwwwwwwwww"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 51952;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> rowStrings = {"jjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjj"};
    vector<string> columnStrings = {"jjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjj"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 63641;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> rowStrings = {"kkkkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkk"};
    vector<string> columnStrings = {"kkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkk", "kkkkkkkkkkkkkkkkkkkkkkkkkkkkkk"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 62007;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> rowStrings = {"nswnnrsnw", "mns", "rmnn"};
    vector<string> columnStrings = {"nmnrm", "swmn", "rsnwsnn"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> rowStrings = {"zazjzgazgoaagojoja", "ojaaojoozjgzjjz", "goaggojgzjz"};
    vector<string> columnStrings = {"zazjzgojaaogoa", "azgjooggojg", "oaagojajazjgzjjzzjz"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> rowStrings = {"pqqqhrrrhrphrqhqrqrpbpq", "qqpbhqrphrrp", "rbbbbpbrqbhrrhqpbhqrqb"};
    vector<string> columnStrings = {"pqqqqqrbbbbpbrq", "hqrrhrphpbbhrrhqpbh", "rqhqrqrpbpqhqrphrrpqrqb"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> rowStrings = {"yfocomofocmomoccyyymmcom", "cfmfymyoyymoyyoymcfcommmfoo", "fofmffyomymmfcccmomcymfoy"};
    vector<string> columnStrings = {"yfocomofcfmfofmffyom", "ocmomoccyyymmfymyoymmfcccmom", "comyymoyyoyocfcommmfoocymfoy"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> rowStrings = {"emmememmeemmemeemmmmmmemmmmmmmmmmemmmemmeee", "eemmmemmmmmmemeeemee", "mmemmeeemmmemmmmmmemememeeemeemeememeemmmeememmm"};
    vector<string> columnStrings = {"eeemmemmeeemmmemmmmm", "mmememmeemmmmemmmmmmemememememeeemeemmemem", "memeemmmmmmemmmmmmmmmmemmmemmeeeeemeeeemmmeememmm"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> rowStrings = {"kkkkvkvkkkkvvvvvvkkkkvvkvk", "vvvvkvvvkvkvkkvkkvvkvkvkvkvvvkvvvkvvkvkv", "kkvvkkk"};
    vector<string> columnStrings = {"kkkkvkvkkkkvvvvvvvvvvkkk", "kkkkvvkvkvvkkvkvkkvkkvvkvvvk", "kvkvkvvvkvvvkvvkvkvkk"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> rowStrings = {"ccaaaaaacacaacacaccac", "caacacccaccacaaccaaaac", "ccaaaccccaaaacaaccccccccacaaacccca"};
    vector<string> columnStrings = {"ccaaaaaaccaacacccaccaccaa", "acaacacaccaaacccca", "cacccaaaacacacaaccccccccacaaacccca"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> rowStrings = {"isissiiisiiiissisisissisiissssssssssisisiisissis", "iiisissisissssssisssissii", "isiisssissssisisiissiisiiisisssssiisssssssiiisi"};
    vector<string> columnStrings = {"isissiiisiiiissisisiiisissisissssssissisiisssissss", "issisiissssssissiiis", "sssssisisiisissisisiissiisiiisisssssiisisssssiiisi"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> rowStrings = {"fffsffssf", "ffsssfsssssssfsffffsffss", "fsfssssfssffsfssf"};
    vector<string> columnStrings = {"ffsssfsfss", "ffffsssssssfsffffsfssfssffsf", "fffssffssssf"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> rowStrings = {"uvvvvvvuuuvvvvuvvuuuvuvvvuvuvuvvuuuvv", "uuvvvvuvuvuvuvuvuuvvuvvuvuvuvuvuvvuuvvuuuuv", "vuuuuvvvuuuvuvuuuvuvuuuuvvvvvvuuuvuvuuvvuvuvvvvv"};
    vector<string> columnStrings = {"uvvvvvvuuvvvvuvuvuvuvuvvuuuuvvvuuuvuvuuuvuvuuuuvvv", "uuuvvvvuvvuuuvuvvvuvuvuvvuuvvvuuuvuvuuv", "uvvuuvvuvvuvuvuvuvuvvuuvvvuuuvvuvuvvvvv"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> rowStrings = {"hhhhhzzhzhzzhzz", "zhhhhzhhzhzhhhzzhhhhzhzhzhhzhhzhhzhzhzhhh", "hzzzzzhhzzzzhzzzhhhzhzzzhhzzzhzhzhhzzhzhhzhzhzhhh"};
    vector<string> columnStrings = {"hzhhhhzhhzhzhhhzzhhhhzhzzzzzhhzzzzhzzzh", "hhhhhzhzzzhhzzzhzhzh", "hzzhzhzzhzzhzhzhhzhhzhhzhzhzhhhhzzhzhhzhzhzhhz"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> rowStrings = {"", "", ""};
    vector<string> columnStrings = {"", "", ""};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> rowStrings = {"abab", "ab", "abab"};
    vector<string> columnStrings = {"abab", "ab", "abab"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> rowStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    vector<string> columnStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 879801;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> rowStrings = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    vector<string> columnStrings = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 879801;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> rowStrings = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "bbbbbbbbbbbbbbbbbbbbbbbbbbbbbb", "cccccccccccccccccccccccccccccc"};
    vector<string> columnStrings = {"aaaaaabbbbbbbbbbbbbbbccccccccc", "aaaaaaaaaaabbbbbbbbbbbbccccccc", "aaaaaaaaaaabbbcccccccccccccccc"};
    MagicalSquare* pObj = new MagicalSquare();
    clock_t start = clock();
    long result = pObj->getCount(rowStrings, columnStrings);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22909241&rd=14550&pm=11594
********************************************************************************
#include<iostream> 
#include<cstring> 
#include<string> 
#include<vector> 
 
using namespace std; 
 
const int MAXN = 60; 
 
string s[4]; 
string a; 
long long f[MAXN][MAXN][MAXN][4]; 
int no = 0; 
 
void dfs(int i1, int i2, int i3, int cur, int len, long long cnt, int c) 
{ 
   ++no; 
   //cout << no << ": " << i1 <<' '<<i2<<' '<<i3<<' '<<cur<<' '<<len<<' '<<cnt<<' '<<c<<endl; 
   int i; 
   if (cur == 4) 
   { 
      f[i1][i2][i3][c] += cnt; 
      return; 
   } 
   else if (cur == 3) 
   { 
      for (i=len; i<a.size(); ++i) 
      if ((i3 >= s[3].size()) || (s[3][i3] != a[i])) 
         return; 
      else ++i3; 
      dfs(i1, i2, i3, cur+1, a.size(), cnt, c); 
   } 
   else if (cur == 2) 
   { 
      dfs(i1, i2, i3, cur+1, len, cnt, c); 
      for (i=len; i<a.size(); ++i) 
      if ((i2 >= s[2].size()) || (s[2][i2] != a[i])) 
         return; 
      else 
      { 
         ++i2; 
         dfs(i1, i2, i3, cur+1, i+1, cnt, c); 
      } 
   } 
   else if (cur == 1) 
   { 
      dfs(i1, i2, i3, cur+1, len, cnt, c); 
      for (i=len; i<a.size(); ++i) 
      if ((i1 >= s[1].size()) || (s[1][i1] != a[i])) 
      { 
         //cout << no <<": " << i1 << ' '<< s[1][i1] << ' '<<a[i]<< endl; 
         return; 
      } 
      else 
      { 
         ++i1; 
         dfs(i1, i2, i3, cur+1, i+1, cnt, c); 
      } 
   } 
} 
 
class MagicalSquare 
{ 
  public: 
     long long getCount(vector <string> rowStrings, vector <string> columnStrings) 
     { 
        int n = rowStrings[0].size(); 
        int m = rowStrings[1].size(); 
        int k = rowStrings[2].size(); 
        s[1] = rowStrings[0]; 
        s[2] = rowStrings[1]; 
        s[3] = rowStrings[2]; 
        //cout << n << ' '<< m <<' '<< k<<endl; 
        //cout << columnStrings[0].size() <<' '<< columnStrings[1].size() <<' '<< 
        //    columnStrings[2].size(); 
        if (n + m + k != columnStrings[0].size() + columnStrings[1].size() + 
            columnStrings[2].size()) return 0; 
        memset(f, 0, sizeof(f)); 
        f[0][0][0][0] = 1; 
        int i1, i2, i3, i; 
        for (i=0; i<3; ++i) 
        { 
           a = columnStrings[i]; 
           for (i1=0; i1<=n; ++i1) 
           for (i2=0; i2<=m; ++i2) 
           for (i3=0; i3<=k; ++i3) 
           if (f[i1][i2][i3][i] > 0) 
              dfs(i1, i2, i3, 1, 0, f[i1][i2][i3][i], i+1); 
        } 
        return f[n][m][k][3]; 
     } 
};

********************************************************************************
*******************************************************************************/