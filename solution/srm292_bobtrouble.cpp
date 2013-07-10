/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6016
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

class BobTrouble {
public:
    int minSupers(vector<string> name, vector<string> bossName);
};

int BobTrouble::minSupers(vector<string> name, vector<string> bossName) {
    int ret;
    return ret;
}


int test0() {
    vector<string> name = {"BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> name = {"JOHN", "AL", "DON", "BOB"};
    vector<string> bossName = {"*", "*", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> name = {"BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> name = {"BOB", "BOB", "J", "K", "L", "M"};
    vector<string> bossName = {"K", "J", "BOB", "J", "M", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> name = {"BOB", "BOB", "JACK"};
    vector<string> bossName = {"BOB", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> name = {"BOB", "A", "B", "C", "D", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> name = {"BOB", "A", "B", "C", "D", "BOB"};
    vector<string> bossName = {"C", "*", "*", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> name = {"BOB", "A", "B", "C", "D", "BOB"};
    vector<string> bossName = {"C", "BOB", "*", "D", "A", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> name = {"BOB", "A", "B", "C", "D", "BOB"};
    vector<string> bossName = {"C", "BOB", "*", "D", "A", "B"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "A", "B", "C", "D", "E", "F", "G"};
    vector<string> bossName = {"A", "BOB", "D", "*", "BOB", "*", "A", "*", "G", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> name = {"A", "B", "C", "D", "BOB", "BOB"};
    vector<string> bossName = {"C", "*", "B", "BOB", "BOB", "D"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> name = {"A", "B", "C", "D", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"C", "*", "B", "BOB", "BOB", "D", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> name = {"A", "B", "C", "D", "BOB", "BOB", "BOB", "F"};
    vector<string> bossName = {"C", "*", "B", "BOB", "BOB", "F", "F", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> name = {"A", "D", "BOB", "BOB", "B", "C", "BOB", "F"};
    vector<string> bossName = {"C", "BOB", "BOB", "F", "*", "B", "F", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> name = {"A", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"A", "*", "A", "A", "A", "A", "*", "BOB", "*", "BOB", "A", "BOB", "*", "*", "BOB", "BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "A", "BOB", "A", "*", "*", "A", "BOB", "BOB", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> name = {"A", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "A", "A", "A", "A", "*", "BOB", "*", "BOB", "A", "BOB", "*", "*", "BOB", "BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "A", "BOB", "A", "*", "*", "A", "BOB", "BOB", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
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
    vector<string> name = {"A", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "A", "A", "A", "A", "*", "BOB", "*", "BOB", "A", "BOB", "*", "*", "BOB", "BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "A", "BOB", "A", "*", "*", "A", "BOB", "BOB", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
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
    vector<string> name = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"C", "C", "F", "F", "F", "P", "M", "H", "G", "BOB", "*", "J", "H", "D", "BOB", "B", "BOB", "Q", "M", "BOB", "*", "F", "J", "*", "K", "BOB", "B", "BOB", "D", "I", "M", "BOB", "G", "E", "*", "H", "J", "C", "BOB", "BOB", "BOB", "A"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> name = {"A", "B", "C", "D", "E", "F", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"B", "B", "B", "*", "E", "BOB", "C", "*", "B", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ANNETTE", "BRETT"};
    vector<string> bossName = {"BOB", "ANNETTE", "BRETT", "ANNETTE", "*", "BOB", "*", "ANNETTE", "BRETT", "BRETT"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> name = {"RKSG", "WUK", "VGL", "TVOA", "UEL", "FCYBQJT", "FQIFO", "SNYIELHNFR", "TFTKPZI", "WCEZADLNH", "OX", "VIYPQBXV", "IHHTAV", "FTV", "DLI", "ASQXTVQI", "NPUJALUL", "NCUB", "NUGUGDTQPH", "NLCR", "MRP", "QRCE", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"NPUJALUL", "DLI", "RKSG", "SNYIELHNFR", "NLCR", "FCYBQJT", "FCYBQJT", "RKSG", "*", "VGL", "OX", "*", "QRCE", "SNYIELHNFR", "QRCE", "*", "*", "*", "RKSG", "TVOA", "TFTKPZI", "TFTKPZI", "UEL", "OX", "IHHTAV", "MRP", "IHHTAV", "NCUB", "FQIFO", "*", "TFTKPZI", "WUK", "*", "WUK", "QRCE", "UEL", "*", "FQIFO", "QRCE", "BOB", "*", "*", "IHHTAV", "NLCR", "WCEZADLNH", "IHHTAV", "NUGUGDTQPH", "TVOA", "OX", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> name = {"FQD", "JSDYBUSXTI", "GMHBFKIR", "QQNIPPWW", "HYR", "EHBTJURQKO", "MVYAI", "XYQ", "UMKNKV", "ZROJJTTP", "KRI", "RQU", "KZGGJLE", "NQD", "VB", "IEEQICI", "DUVZCROHSW", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"HYR", "ZROJJTTP", "ZROJJTTP", "BOB", "ZROJJTTP", "*", "KRI", "FQD", "GMHBFKIR", "DUVZCROHSW", "EHBTJURQKO", "*", "ZROJJTTP", "EHBTJURQKO", "XYQ", "FQD", "KZGGJLE", "MVYAI", "FQD", "QQNIPPWW", "RQU", "UMKNKV", "*", "ZROJJTTP", "KRI", "BOB", "FQD", "DUVZCROHSW", "RQU", "NQD", "JSDYBUSXTI", "MVYAI", "GMHBFKIR", "EHBTJURQKO", "BOB", "VB", "NQD", "*", "BOB", "*", "MVYAI", "UMKNKV", "GMHBFKIR", "XYQ", "BOB", "*", "GMHBFKIR", "ZROJJTTP", "NQD", "KZGGJLE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> name = {"MRMK", "NQFM", "XVOV", "RBWU", "JNM", "CVCPRV", "LE", "TXFJLPHRTN", "URFU", "DQ", "GXYMGYM", "MSSMVXVD", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"MRMK", "XVOV", "*", "MRMK", "GXYMGYM", "CVCPRV", "BOB", "*", "LE", "MRMK", "*", "BOB", "*", "XVOV", "JNM", "CVCPRV", "BOB", "*", "TXFJLPHRTN", "NQFM", "*", "BOB", "*", "GXYMGYM", "BOB", "BOB", "LE", "RBWU", "BOB", "*", "RBWU", "*", "XVOV", "GXYMGYM", "CVCPRV", "MRMK", "URFU", "MRMK", "LE", "BOB", "MRMK", "BOB", "XVOV", "CVCPRV", "DQ", "*", "URFU", "*", "URFU", "LE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> name = {"IRGOMKNN", "HH", "BOB", "NTHBCGHD", "HLWRAOW", "JFHASKDY", "ONK", "BOB", "SSREUQ", "NVDMIGWKCV", "BOB", "BOB", "KXRLSOZD", "OT", "OJF", "BOB", "GASAQY", "TISHB", "BOB", "BOB", "BOB", "RFXEEL", "TNTVLQM", "SQIXIJCJWJ", "DIKVBP", "UIAY", "BOB", "HLHFTWPZ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TNBUV", "BOB", "BOB", "BOB", "XFEC", "BOB", "YSGHOX", "BOB", "BOB", "UWYZT", "BOB", "GJLSUO", "KNRWARNRR", "BOB", "BOB"};
    vector<string> bossName = {"*", "KNRWARNRR", "HH", "RFXEEL", "OJF", "NVDMIGWKCV", "DIKVBP", "KNRWARNRR", "BOB", "GASAQY", "IRGOMKNN", "*", "UIAY", "TISHB", "OJF", "UIAY", "GJLSUO", "*", "SQIXIJCJWJ", "OT", "KXRLSOZD", "YSGHOX", "SSREUQ", "*", "*", "ONK", "KNRWARNRR", "TNTVLQM", "*", "RFXEEL", "TNBUV", "GASAQY", "HH", "YSGHOX", "NVDMIGWKCV", "OJF", "RFXEEL", "XFEC", "*", "HH", "IRGOMKNN", "UWYZT", "JFHASKDY", "BOB", "JFHASKDY", "YSGHOX", "IRGOMKNN", "NTHBCGHD", "YSGHOX", "SQIXIJCJWJ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "*", "*", "BOB", "*", "*", "*", "BOB", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "BOB", "*", "*", "*", "*", "*", "BOB", "BOB", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> name = {"PQV", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "XWHVBHZMQ", "BOB", "BOB", "DUHN", "BOB", "BOB", "HZVANCK", "MHHLJRMHY", "BOB", "HFLTRMFKA", "BOB", "QKYWRYUVN", "BOB", "OZVEAWQIP", "BOB", "MDI", "FOU", "TCYOHMYRUQ", "GHPMNRHI", "BOB", "NF", "JT", "BOB", "BOB", "BOB", "BOB", "BOB", "GAK", "HIN", "BOB", "BOB", "SOOAD", "BOB", "BOB", "BOB", "BOB", "BOB", "ENYYU", "BOB", "BOB", "DWGFJEWFY"};
    vector<string> bossName = {"GHPMNRHI", "*", "GAK", "MHHLJRMHY", "BOB", "JT", "TCYOHMYRUQ", "*", "BOB", "HIN", "HFLTRMFKA", "HFLTRMFKA", "*", "HIN", "HIN", "HIN", "OZVEAWQIP", "*", "MDI", "BOB", "JT", "BOB", "*", "BOB", "FOU", "*", "OZVEAWQIP", "NF", "BOB", "GAK", "DWGFJEWFY", "*", "DWGFJEWFY", "*", "PQV", "NF", "DUHN", "ENYYU", "HFLTRMFKA", "QKYWRYUVN", "OZVEAWQIP", "*", "DUHN", "*", "DUHN", "*", "JT", "NF", "BOB", "DWGFJEWFY"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> name = {"BOB", "RALOSXCQY", "QTQKIAIA", "QVTHQOAEJ", "DLYSKS", "JCSGFVE", "SCXRYNIGWM", "FMKPN", "OYT", "BOB", "BOB", "BOB", "BOB", "BOB", "ADYOYSDZIT", "BOB", "BOB", "BOB", "FWZZW", "BOB", "MGKQDKJPA", "BOB", "BOB", "BOB", "KERNM", "BOB", "BOB", "SAEUGSVBS", "VUJKZ", "TWDUENJYP", "BOB", "NPWJZNIPA", "BOB", "MEENMNOTW", "BOB", "BOB", "RRRCPM", "BOB", "BOB", "AZEDASWCK", "RHPZYC", "BKUNSFOB"};
    vector<string> bossName = {"*", "BKUNSFOB", "FMKPN", "*", "SAEUGSVBS", "*", "RALOSXCQY", "RRRCPM", "RHPZYC", "KERNM", "RHPZYC", "DLYSKS", "FMKPN", "VUJKZ", "RALOSXCQY", "QTQKIAIA", "TWDUENJYP", "RRRCPM", "SAEUGSVBS", "KERNM", "MGKQDKJPA", "*", "*", "SCXRYNIGWM", "FMKPN", "*", "BOB", "FMKPN", "BOB", "FWZZW", "VUJKZ", "QTQKIAIA", "MEENMNOTW", "RHPZYC", "VUJKZ", "*", "FWZZW", "QTQKIAIA", "JCSGFVE", "ADYOYSDZIT", "QVTHQOAEJ", "FWZZW"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "*", "*", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "*", "BOB", "*", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> name = {"NOBEBNTKL", "OOUZPW", "MDIRZHTMIF", "DKRX", "RTOAFYHNN", "MMKRGDLRT", "BOB", "BAGN", "BOB", "AETGYC", "QLKNMKVDQG", "JWBE", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "MCIAQF", "BOB", "DEG", "BOB", "BOB", "YHNRV", "BOB", "YFUWJDZX", "LJYIWL", "JKXCEQTMA", "BOB", "BOB", "JOKQTN", "BOB", "BOB", "BHT", "BOB", "WER", "MLUSSDZ", "ZJTOFZQXW", "ZRFRCQSJWK", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"DEG", "ZRFRCQSJWK", "NOBEBNTKL", "BHT", "AETGYC", "DEG", "MMKRGDLRT", "RTOAFYHNN", "ZJTOFZQXW", "NOBEBNTKL", "WER", "BOB", "ZRFRCQSJWK", "JKXCEQTMA", "YFUWJDZX", "YFUWJDZX", "ZRFRCQSJWK", "QLKNMKVDQG", "DEG", "JKXCEQTMA", "*", "MDIRZHTMIF", "*", "BOB", "ZRFRCQSJWK", "JWBE", "JKXCEQTMA", "JKXCEQTMA", "*", "WER", "OOUZPW", "JWBE", "YFUWJDZX", "OOUZPW", "*", "ZJTOFZQXW", "JWBE", "*", "MDIRZHTMIF", "WER", "*", "ZRFRCQSJWK"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "*", "*", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "*", "BOB", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> name = {"GDEGTYHIRI", "KLMDSTLJWC", "BOB", "PQCMXOVM", "VFC", "IGHYS", "BOB", "BOB", "TQUOAYQV", "RKPBX", "DUYYIKSUL", "VPTGQ", "BOB", "RJTSVXPJAP", "LRKUFPX", "BOB", "AOD", "AHWVMZVREU", "BOB", "BOB", "BOB", "BOB", "OKKVGD", "ZKCOOQBF", "BDCJ", "UVBGB", "VNNBVUNVUE", "LIV", "BOB", "YHS", "UBBKXDIAJ", "LEPIK", "VHFWVXV", "BOB", "BOB", "JDMDC", "IWZQ", "GLGZKHTQYV", "FHTE", "WLI", "JKJ", "HBTDDBVJHR", "UBSFHXRCI", "BOB", "BOB", "ZEVHVL", "BOB", "EDSMGL"};
    vector<string> bossName = {"UBBKXDIAJ", "KLMDSTLJWC", "*", "LRKUFPX", "UBBKXDIAJ", "UVBGB", "IWZQ", "VFC", "*", "RKPBX", "LIV", "UBBKXDIAJ", "*", "IWZQ", "OKKVGD", "AOD", "JKJ", "BOB", "VPTGQ", "TQUOAYQV", "ZKCOOQBF", "VHFWVXV", "FHTE", "UBSFHXRCI", "PQCMXOVM", "*", "IWZQ", "FHTE", "UBBKXDIAJ", "DUYYIKSUL", "EDSMGL", "*", "IGHYS", "KLMDSTLJWC", "JKJ", "TQUOAYQV", "YHS", "LIV", "AOD", "LIV", "*", "LIV", "JDMDC", "GDEGTYHIRI", "BOB", "GLGZKHTQYV", "*", "EDSMGL"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> name = {"FYYW", "BOB", "ELSB", "BOB", "RMASLFPT", "BOB", "PMITN", "YMDXWNLO", "YMPMRCDGWT", "BOB", "BOB", "JTHQNHGG", "BOB", "BOB", "BOB", "WZVGSBQBIH", "KOTB", "BOB", "BOB", "BOB", "GBCURB", "BOB", "BOB", "GIIYRESIGH", "CFHOBH", "BOB", "BOB", "CLLBQ", "BOB", "BOB", "TOXODK", "BOB", "BOB", "YHBRA", "MHG", "ROX", "BOB", "BOB"};
    vector<string> bossName = {"KOTB", "FYYW", "YMPMRCDGWT", "YMDXWNLO", "GBCURB", "FYYW", "KOTB", "*", "WZVGSBQBIH", "PMITN", "RMASLFPT", "ROX", "GIIYRESIGH", "GIIYRESIGH", "KOTB", "*", "*", "CLLBQ", "TOXODK", "*", "MHG", "ROX", "*", "BOB", "*", "TOXODK", "YMPMRCDGWT", "ROX", "WZVGSBQBIH", "MHG", "GBCURB", "BOB", "WZVGSBQBIH", "*", "JTHQNHGG", "RMASLFPT", "TOXODK", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "QMTGPIQ", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "QMTGPIQ", "BOB", "BOB", "BOB", "QMTGPIQ", "BOB", "*", "*", "BOB", "BOB", "BOB", "*", "QMTGPIQ", "*", "BOB", "*", "QMTGPIQ", "*", "*", "BOB", "*", "QMTGPIQ", "BOB", "QMTGPIQ", "*", "BOB", "*", "*", "*", "BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "QMTGPIQ", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> name = {"PPISF", "SKPENANRVI", "YRLJJOHEI", "BOB", "GLMQDTC", "NMA", "NAUFN", "DJB", "JIPPV", "IQXPRX", "CDHQERIZ", "BOB", "BZCUXB", "CHMYUVZS", "INE", "PQBT", "JNHIPFJG", "KZRHSGF", "AAMVHUHYP", "QMAG", "BOB", "BOB", "VRGSYAY", "NADLT", "RRGMMRN", "CUKTK", "KFM", "KPVETXB", "UPZDDQK", "CJKAZDG", "WSDR", "QCR", "NGHNV", "CKF", "PIVCYWSKEM", "JBVFEMT", "NZAVIYTCQS", "MZLKR", "YLS", "IBHV", "QBGS", "ASEUWLUUN", "NKAXH", "QQQ", "WMPJT", "FVXL"};
    vector<string> bossName = {"UPZDDQK", "QMAG", "CUKTK", "IBHV", "YLS", "YRLJJOHEI", "JBVFEMT", "SKPENANRVI", "NKAXH", "SKPENANRVI", "WSDR", "NADLT", "QQQ", "NAUFN", "CKF", "FVXL", "VRGSYAY", "CUKTK", "KFM", "YLS", "FVXL", "YRLJJOHEI", "YRLJJOHEI", "GLMQDTC", "KZRHSGF", "MZLKR", "DJB", "IBHV", "CDHQERIZ", "INE", "PQBT", "SKPENANRVI", "IQXPRX", "QCR", "FVXL", "GLMQDTC", "*", "*", "*", "UPZDDQK", "PQBT", "NZAVIYTCQS", "BZCUXB", "QBGS", "NADLT", "WSDR"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> name = {"OGF", "BOB", "RVTUUM", "BOB", "BOB", "QRF", "VLT", "BOB", "BOB", "FDBM", "NUECUSG", "TXZFCKOL", "CDXLUJCNDM", "FXMIIJT", "QBBN", "XUZLBWQGIC", "TYZFYXCIDU", "HKLWLU", "BOB", "GKUBRVZYS", "BOB", "BOB", "OWMEHO", "EZDWUOKJR", "ONZHG", "BOB", "BOB", "BOB", "PFKEKISGK", "BOB", "BOB", "DROM", "RHWOPYUOB", "BOB", "XUTTGVPQO", "BOB", "LOZTIA", "BOB", "BOB", "SGYXJYZH", "NNUGNM", "DHUYXMZGLH", "BOB", "BOB", "BOB", "BOB", "XTXL", "BOB"};
    vector<string> bossName = {"FDBM", "PFKEKISGK", "*", "DHUYXMZGLH", "FXMIIJT", "*", "NUECUSG", "QBBN", "ONZHG", "LOZTIA", "OWMEHO", "RVTUUM", "LOZTIA", "XUZLBWQGIC", "XUZLBWQGIC", "RVTUUM", "DHUYXMZGLH", "CDXLUJCNDM", "DROM", "SGYXJYZH", "VLT", "DHUYXMZGLH", "DHUYXMZGLH", "FDBM", "QBBN", "*", "RHWOPYUOB", "OGF", "VLT", "OGF", "DROM", "OWMEHO", "*", "BOB", "*", "*", "QBBN", "*", "RHWOPYUOB", "NUECUSG", "XUTTGVPQO", "XUZLBWQGIC", "HKLWLU", "RHWOPYUOB", "*", "NUECUSG", "HKLWLU", "RHWOPYUOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "ZLQUEWGK", "BOB", "BOB", "LDIOYWHOY", "BOB", "BOB", "BOB", "YCYMDEX", "BOB", "BOB", "BOB", "KZWSG", "BOB", "RSBAIRWDJ", "LWEXVWLX", "BOB", "BOB", "BOB", "BOB", "BOB", "WKSO", "BOB", "BOB", "IWKQIIXYB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"KZWSG", "*", "KZWSG", "*", "*", "*", "LDIOYWHOY", "LWEXVWLX", "*", "*", "IWKQIIXYB", "YCYMDEX", "*", "RSBAIRWDJ", "*", "BOB", "LDIOYWHOY", "BOB", "YCYMDEX", "*", "WKSO", "YCYMDEX", "*", "BOB", "YCYMDEX", "BOB", "WKSO", "BOB", "LWEXVWLX", "*", "LWEXVWLX", "BOB", "*", "*", "KZWSG", "LDIOYWHOY", "IWKQIIXYB", "*", "BOB", "BOB", "YCYMDEX"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> name = {"EKJ", "BOB", "BOB", "YTTOAN", "BOB", "BOB", "ZKHQE", "BOB", "BOB", "BOB", "BOB", "BOB", "PLBDO", "BOB", "BOB", "BOB", "BOB", "BOB", "SFDBUD", "BOB", "MQMIHJLL", "BOB", "MLZ", "BOB", "BOB", "BOB", "FLCASNYL", "GKVZARDYU", "BOB", "QSMJC", "BOB", "BOB", "BOB", "XXLYB", "YAD", "TVP", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"SFDBUD", "FLCASNYL", "GKVZARDYU", "YAD", "*", "*", "PLBDO", "BOB", "QSMJC", "*", "XXLYB", "BOB", "MLZ", "QSMJC", "*", "GKVZARDYU", "*", "EKJ", "*", "*", "*", "BOB", "*", "MLZ", "BOB", "GKVZARDYU", "EKJ", "YTTOAN", "XXLYB", "YTTOAN", "BOB", "SFDBUD", "EKJ", "*", "PLBDO", "MQMIHJLL", "XXLYB", "GKVZARDYU", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> name = {"KMJWXZVQOG", "WYCVV", "UGOJOPD", "JZXVY", "JJSU", "BOB", "BOB", "UUUH", "PEUQMW", "BOB", "SYPID", "BOB", "FSIRADHQJ", "CRZXCWOTL", "SUCTOCFEL", "MEBGKMR", "BOB", "FMLVNVJLCC", "ZSSYMOV", "RCEQDURXJ", "TJOWBJPKF", "BOB", "BOB", "ASCI", "SLSUBQVWJ", "BOB", "MMQW", "SSPV", "ICH", "RZEMMXGHP", "LWR", "NSJQIXR", "QWMCTBTK", "QDUOWLZ", "UDKKUDRBO", "OXLD"};
    vector<string> bossName = {"SYPID", "PEUQMW", "SUCTOCFEL", "JZXVY", "ASCI", "SUCTOCFEL", "*", "RZEMMXGHP", "RZEMMXGHP", "JJSU", "*", "TJOWBJPKF", "SYPID", "KMJWXZVQOG", "UUUH", "UDKKUDRBO", "UDKKUDRBO", "FSIRADHQJ", "SYPID", "*", "KMJWXZVQOG", "BOB", "CRZXCWOTL", "SSPV", "ASCI", "*", "SLSUBQVWJ", "TJOWBJPKF", "FSIRADHQJ", "SSPV", "SUCTOCFEL", "UUUH", "SYPID", "*", "SSPV", "RCEQDURXJ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> name = {"BOB", "ENYPFKM", "BOB", "BOB", "BOB", "BOB", "VGIUFQE", "RFIK", "BOB", "BOB", "BOB", "DYNILXDKO", "BOB", "TNEDL", "BOB", "BOB", "LOB", "WCCMADIYJZ", "BOB", "EITJ", "MGKR", "PRTN", "BOB", "BOB", "AUGWVH", "JHQUNZKXO", "GCKBQ", "BOB", "BOB", "KPBOFVZLI", "TETGJ", "VIU", "BOB", "BOB", "RGJHIJA", "DXNYWSV", "NEFJGAUVZ", "DSWFEACCB", "BODORKU", "ZXNDZ"};
    vector<string> bossName = {"ENYPFKM", "*", "KPBOFVZLI", "JHQUNZKXO", "ZXNDZ", "BOB", "AUGWVH", "VIU", "MGKR", "*", "*", "BOB", "PRTN", "DXNYWSV", "DSWFEACCB", "BOB", "NEFJGAUVZ", "DXNYWSV", "BOB", "*", "*", "JHQUNZKXO", "BOB", "VIU", "PRTN", "*", "*", "JHQUNZKXO", "BOB", "LOB", "JHQUNZKXO", "LOB", "JHQUNZKXO", "DXNYWSV", "ENYPFKM", "ENYPFKM", "KPBOFVZLI", "LOB", "BOB", "DXNYWSV"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> name = {"BOB", "MSVO", "BOB", "BOB", "BOB", "BOB", "YLFLHFXZTQ", "ZIGVVR", "XHGXPE", "BMJTW", "BOB", "GYDDQDO", "BOB", "RNISB", "XBMXJSGU", "BOB", "VMOKGN", "BOB", "XTB", "QJLIXVD", "BOB", "BOB", "BOB", "WEMOG", "BOB", "WIABAEHLTU", "BOB", "ICWSPVXJYL", "JHUO", "SJMRGFROTZ", "BOB", "HXPOKMXC", "VVMA", "TQUDNIBFU", "BOB", "BOB", "EJZRUWJ", "YBRV", "GSYVK", "BOB", "BOB", "BOB", "ABP", "WOXVEQFWI", "FCSXVNVM", "BOB", "WZXQQZX", "WZQHNPP", "OVPSUR", "XRAP"};
    vector<string> bossName = {"WZXQQZX", "TQUDNIBFU", "YLFLHFXZTQ", "WZXQQZX", "RNISB", "TQUDNIBFU", "WIABAEHLTU", "ZIGVVR", "RNISB", "RNISB", "*", "GYDDQDO", "VMOKGN", "*", "TQUDNIBFU", "XTB", "GSYVK", "TQUDNIBFU", "GSYVK", "FCSXVNVM", "ZIGVVR", "BOB", "ZIGVVR", "ICWSPVXJYL", "*", "GYDDQDO", "TQUDNIBFU", "SJMRGFROTZ", "VMOKGN", "VVMA", "*", "*", "XBMXJSGU", "*", "BOB", "WOXVEQFWI", "YLFLHFXZTQ", "XRAP", "BOB", "*", "XBMXJSGU", "*", "TQUDNIBFU", "WZQHNPP", "XBMXJSGU", "FCSXVNVM", "*", "XTB", "YLFLHFXZTQ", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> name = {"BOB", "BOB", "IILP", "OSZII", "BOB", "INDXL", "BOB", "BOB", "BOB", "TDTKWWJWIU", "BOB", "BOB", "BOB", "BOB", "RDOS", "DVZVJJLRD", "CNKKZBVW", "WCCWOPK", "WKLUXE", "BOB", "BOB", "WUKNKA", "LNFVKCVAT", "BOB", "XWQXFRPR", "XSFWI", "PFZWFOTL", "CAUKIZ", "WYZVFZF", "BOB", "PSJXLRJW", "BOB", "BOB", "BEYJSBE", "BOB", "GOUBBNC", "GFYAZJ", "SMUKUMGXZ", "BOB", "BOB", "OYANXZ", "RHMO", "BOB", "JUPZUEDPN", "YDDVFICYQV"};
    vector<string> bossName = {"JUPZUEDPN", "XSFWI", "RHMO", "PFZWFOTL", "XWQXFRPR", "PSJXLRJW", "WCCWOPK", "WUKNKA", "DVZVJJLRD", "WUKNKA", "*", "CAUKIZ", "PFZWFOTL", "DVZVJJLRD", "CNKKZBVW", "DVZVJJLRD", "RDOS", "PSJXLRJW", "*", "GFYAZJ", "*", "*", "WKLUXE", "OSZII", "GFYAZJ", "RHMO", "XSFWI", "*", "OYANXZ", "JUPZUEDPN", "CNKKZBVW", "IILP", "BOB", "*", "XSFWI", "XWQXFRPR", "WUKNKA", "RHMO", "SMUKUMGXZ", "GFYAZJ", "DVZVJJLRD", "CNKKZBVW", "WCCWOPK", "PSJXLRJW", "LNFVKCVAT"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> name = {"BIXVUZVC", "HUQR", "BOB", "BOB", "IBPH", "HFYY", "YHIMU", "UQSXQR", "NCVNG", "TLTQUS", "FVGRR", "CIBNDU", "BOB", "BOB", "AFUVZ", "BOB", "HNYY", "PEBRW", "OJTLNOP", "PPV", "KIQCEZG", "WNBNHWTKQ", "BOB", "XIKYIRLS", "RVCZW", "AIL", "MIJLWELBAE", "BOB", "MWYUQE", "RMOCMC", "BOB", "AKL", "BIWGOJJBFK", "HLAPZZQZOT", "QQDE", "ZQPQJDCA", "IBHJFAQKN", "PVUVWJHJ", "BOB", "GDPHU", "ZBOOFY"};
    vector<string> bossName = {"WNBNHWTKQ", "OJTLNOP", "FVGRR", "ZQPQJDCA", "ZBOOFY", "CIBNDU", "MWYUQE", "*", "AKL", "OJTLNOP", "HUQR", "PEBRW", "HUQR", "ZBOOFY", "AFUVZ", "GDPHU", "PPV", "MIJLWELBAE", "YHIMU", "YHIMU", "*", "BIWGOJJBFK", "UQSXQR", "*", "UQSXQR", "WNBNHWTKQ", "ZQPQJDCA", "BIXVUZVC", "YHIMU", "XIKYIRLS", "AFUVZ", "CIBNDU", "*", "MIJLWELBAE", "*", "PEBRW", "*", "HNYY", "TLTQUS", "PEBRW", "MWYUQE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> name = {"BOB", "BOB", "BOB", "ISYC", "BOB", "JNUCFWM", "ISN", "IIQY", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "JEMD", "BOB", "ZBVJJITBBV", "BOB", "BOB", "BOB", "BOB", "YBTVA", "BOB", "PPLJH", "BOB", "BOB", "AAVCHB", "DYQJYI", "CFLMTPBMH", "DZWQUMGM", "BOB", "KIJQF", "BOB", "ZGRS"};
    vector<string> bossName = {"DZWQUMGM", "*", "BOB", "BOB", "IIQY", "BOB", "DYQJYI", "KIJQF", "PPLJH", "BOB", "*", "KIJQF", "AAVCHB", "DZWQUMGM", "DYQJYI", "ZBVJJITBBV", "*", "*", "ISYC", "YBTVA", "ISYC", "ISYC", "DYQJYI", "BOB", "ZBVJJITBBV", "*", "JEMD", "KIJQF", "AAVCHB", "PPLJH", "AAVCHB", "PPLJH", "AAVCHB", "YBTVA", "*", "YBTVA"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> name = {"BOB", "OOELIPDKTV", "QGUIU", "BOB", "BOB", "GTZ", "BOB", "BOB", "MGYHPE", "BOB", "BOB", "BOB", "VLTVGZNWEN", "BOB", "LZBGTPEFJN", "BOB", "SIJTTGT", "BOB", "BOB", "YUAYTD", "BOB", "BOB", "BOB", "FMGHNJJRIZ", "YUPGO", "BOB", "BOB", "BOB", "BOB", "BOB", "PAEAJJQN", "HRBHE", "BOB", "IHVCUJ", "BOB"};
    vector<string> bossName = {"PAEAJJQN", "SIJTTGT", "OOELIPDKTV", "*", "LZBGTPEFJN", "YUAYTD", "FMGHNJJRIZ", "BOB", "HRBHE", "HRBHE", "YUAYTD", "*", "LZBGTPEFJN", "LZBGTPEFJN", "OOELIPDKTV", "BOB", "IHVCUJ", "PAEAJJQN", "QGUIU", "PAEAJJQN", "IHVCUJ", "HRBHE", "MGYHPE", "YUPGO", "*", "*", "LZBGTPEFJN", "SIJTTGT", "BOB", "MGYHPE", "*", "VLTVGZNWEN", "*", "PAEAJJQN", "VLTVGZNWEN"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> name = {"TFTF", "TYVXAOE", "CIJSFZHK", "BOB", "BOB", "VHV", "NJLVAUGA", "JYAWJF", "BOB", "BOB", "BOB", "BOB", "GXVCJJXQU", "BOB", "EHD", "BOB", "BOB", "TEXDSB", "OXX", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "SZSHG", "BOB", "BOB", "BOB", "ICJBH", "AOWJHUSOG", "BOB", "BOB", "BOB", "ATCSVY", "BOB", "UPCJMRC", "BOB", "BOB", "BOB", "BOB", "YYRUVKOMHA", "BOB", "OENHHUZSY", "BOB", "BOB", "BOB", "QIDWQGFQD", "FBHOD", "BOB"};
    vector<string> bossName = {"*", "OXX", "ICJBH", "TEXDSB", "*", "UPCJMRC", "SZSHG", "EHD", "NJLVAUGA", "TFTF", "GXVCJJXQU", "TFTF", "TYVXAOE", "CIJSFZHK", "*", "ATCSVY", "TEXDSB", "FBHOD", "ATCSVY", "*", "OXX", "BOB", "GXVCJJXQU", "*", "SZSHG", "ICJBH", "YYRUVKOMHA", "*", "BOB", "JYAWJF", "VHV", "GXVCJJXQU", "QIDWQGFQD", "OXX", "*", "BOB", "TYVXAOE", "ICJBH", "GXVCJJXQU", "OENHHUZSY", "*", "TYVXAOE", "JYAWJF", "QIDWQGFQD", "BOB", "EHD", "AOWJHUSOG", "VHV", "TYVXAOE", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> name = {"GXSZS", "BOB", "BOB", "KCT", "BOB", "BOB", "EESMVQHZ", "BOB", "BOB", "UQDLEXWNLP", "BOB", "VLWQAKFIVS", "XGXMZQJJHB", "ZAYGJCAOEA", "BOB", "BOB", "BOB", "BOB", "PXKETCJRDE", "WSOHAR", "BOB", "XHDMDOW", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ZGNTICEXBC", "IYEPYTBV", "BOB", "BOB", "NQRGCA", "BOB", "BOB", "BOB", "BOB", "GEAMZ", "BOB", "DWI", "BOB", "KHZHFIKQ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "XHDMDOW", "KCT", "BOB", "*", "GEAMZ", "EESMVQHZ", "XGXMZQJJHB", "XGXMZQJJHB", "KCT", "PXKETCJRDE", "GXSZS", "*", "EESMVQHZ", "BOB", "KCT", "XGXMZQJJHB", "ZGNTICEXBC", "PXKETCJRDE", "XGXMZQJJHB", "DWI", "KCT", "PXKETCJRDE", "DWI", "DWI", "PXKETCJRDE", "NQRGCA", "*", "UQDLEXWNLP", "DWI", "XGXMZQJJHB", "XGXMZQJJHB", "BOB", "UQDLEXWNLP", "XGXMZQJJHB", "ZGNTICEXBC", "*", "*", "EESMVQHZ", "XGXMZQJJHB", "BOB", "VLWQAKFIVS", "KCT", "*", "ZAYGJCAOEA", "VLWQAKFIVS"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "*", "*", "*", "BOB", "*", "BOB", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "*", "*", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "*", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> name = {"LBJ", "BOB", "BOB", "BOB", "GSZKLEYLOT", "BOB", "BOB", "BOB", "TWMRF", "OCZRCJHQA", "BOB", "BVSSVDMG", "BOB", "HFFA", "IGC", "LNRROKI", "QQVXI", "BOB", "ECBIA", "BOB", "BOB", "RGBCVVNJE", "QHBNLPD", "FXFUHMOBJL", "BOB", "AVDEQEG", "IYIQZ", "BYFAEBD", "BOB", "TRZBR", "BOB", "BOB", "BOB", "TVAZ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "OKWZGGRTN", "JFJXFFY", "SHPBYNUQN", "BOB", "BOB", "ANYYVXZBW", "WFRBVXCX", "PGDPTPX"};
    vector<string> bossName = {"SHPBYNUQN", "FXFUHMOBJL", "QQVXI", "GSZKLEYLOT", "TRZBR", "JFJXFFY", "*", "BOB", "IYIQZ", "*", "OCZRCJHQA", "LNRROKI", "*", "WFRBVXCX", "PGDPTPX", "TWMRF", "LBJ", "BOB", "FXFUHMOBJL", "HFFA", "LNRROKI", "ECBIA", "WFRBVXCX", "BYFAEBD", "HFFA", "PGDPTPX", "TWMRF", "BYFAEBD", "SHPBYNUQN", "QQVXI", "GSZKLEYLOT", "QQVXI", "BOB", "WFRBVXCX", "BVSSVDMG", "JFJXFFY", "BYFAEBD", "LNRROKI", "GSZKLEYLOT", "RGBCVVNJE", "LNRROKI", "WFRBVXCX", "IYIQZ", "PGDPTPX", "GSZKLEYLOT", "OCZRCJHQA", "AVDEQEG", "IGC", "AVDEQEG", "RGBCVVNJE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TALOYIOVK", "BOB", "BOB", "BOB", "BOB", "YETAZSU", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "DDKXSJDI", "BOB", "BOB", "FCVVXAZMXS", "BOB", "VNPYLUIZ", "BOB", "VMIP", "BOB", "BOB", "BRLNWLFS", "FWIMYA", "BOB", "NQVQ", "RTEB", "BOB", "BOB", "BOB", "BOB", "PZY", "XPSMXW", "BOB", "BOB", "XYMON", "BOB", "BOB", "BFXWUPG", "BOB", "BOB", "BOB", "SCLWDUR", "KZIANW"};
    vector<string> bossName = {"KZIANW", "SCLWDUR", "TALOYIOVK", "BOB", "BFXWUPG", "VMIP", "TALOYIOVK", "XYMON", "KZIANW", "KZIANW", "BOB", "VMIP", "RTEB", "*", "VMIP", "XPSMXW", "BOB", "BRLNWLFS", "FWIMYA", "XYMON", "VMIP", "KZIANW", "*", "SCLWDUR", "FCVVXAZMXS", "KZIANW", "YETAZSU", "BRLNWLFS", "SCLWDUR", "BOB", "BOB", "*", "KZIANW", "BRLNWLFS", "DDKXSJDI", "NQVQ", "DDKXSJDI", "*", "FCVVXAZMXS", "NQVQ", "*", "PZY", "DDKXSJDI", "BOB", "FWIMYA", "VNPYLUIZ", "DDKXSJDI", "*", "VMIP", "PZY"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> name = {"BOB", "BOB", "LQZNIR", "BOB", "RZG", "ZFA", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ZUXBQ", "ZUGPTRQX", "BOB", "RANYTVPUAO", "OBOUJZKSSI", "FXJ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "NMPM", "BOB", "BOB", "BOB", "BOB", "GNZPWNDSFX", "BOB", "NGG", "KUFMKQP", "BOB", "VQQWYYVFMV", "BOB", "UGRK", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"ZFA", "*", "ZUXBQ", "UGRK", "*", "UGRK", "UGRK", "ZFA", "BOB", "FXJ", "OBOUJZKSSI", "OBOUJZKSSI", "VQQWYYVFMV", "LQZNIR", "LQZNIR", "LQZNIR", "*", "RZG", "NGG", "LQZNIR", "*", "GNZPWNDSFX", "UGRK", "FXJ", "ZUGPTRQX", "KUFMKQP", "*", "BOB", "BOB", "LQZNIR", "OBOUJZKSSI", "ZFA", "UGRK", "KUFMKQP", "*", "LQZNIR", "BOB", "*", "NMPM", "*", "BOB", "FXJ", "FXJ", "ZUGPTRQX", "VQQWYYVFMV", "*", "ZUXBQ", "LQZNIR"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> name = {"NANLLFY", "HQGCSLBRRL", "KIZBRMAR", "NQXZKBNVLU", "BOB", "YQSYS", "SNSQOQ", "IYINVIKCL", "UWAA", "BOB", "BOB", "BOB", "BOB", "OYNBHULMYP", "KQTD", "HYZZUT", "BOB", "VEQTCH", "PRBDQ", "WQFCKV", "BOB", "FFG", "LDOOGPMVIR", "IEJPHYCPBD", "BOB", "WDIITDRTQG", "BOB", "MMAYPYYN", "RJIYZPF", "BOB", "BOB", "SCWRNM", "UMHKGAASM", "YXLSX", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"PRBDQ", "YXLSX", "*", "YXLSX", "WDIITDRTQG", "SNSQOQ", "*", "IYINVIKCL", "SNSQOQ", "WQFCKV", "KQTD", "WQFCKV", "OYNBHULMYP", "PRBDQ", "HYZZUT", "*", "SCWRNM", "FFG", "UWAA", "NANLLFY", "BOB", "HQGCSLBRRL", "KQTD", "WDIITDRTQG", "BOB", "FFG", "PRBDQ", "*", "WDIITDRTQG", "YQSYS", "NANLLFY", "*", "PRBDQ", "*", "UWAA", "UWAA", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> name = {"PXMQNBJWRL", "BOB", "ZPPHKAT", "FBEQ", "XPNTDI", "KGK", "CDUMXLO", "BOB", "YLCHSIQQB", "BOB", "BOB", "EEQWZCE", "GSAIJIEIYO", "PZGQW", "FOWB", "BOB", "BOB", "CJLCRJE", "HUPSFWID", "BOB", "BOB", "KWI", "KZHBTD", "RTRYBEZPRK", "FNWUNA", "FVSFUF", "BOB", "GYBYSQXBIB", "TVBZCCF", "BOB", "AZD", "YVC", "IBEZTC", "DWDKAEXBD", "ODANJF", "HBIVF", "SXIGUX", "DOGV", "HIMTWNCS", "YMNUXDTAB", "YVR"};
    vector<string> bossName = {"GYBYSQXBIB", "BOB", "BOB", "HIMTWNCS", "CJLCRJE", "BOB", "IBEZTC", "FOWB", "FBEQ", "*", "HBIVF", "PZGQW", "FNWUNA", "*", "FVSFUF", "RTRYBEZPRK", "SXIGUX", "CDUMXLO", "TVBZCCF", "RTRYBEZPRK", "DWDKAEXBD", "IBEZTC", "TVBZCCF", "CDUMXLO", "*", "BOB", "BOB", "IBEZTC", "FNWUNA", "KGK", "FBEQ", "FNWUNA", "EEQWZCE", "HBIVF", "EEQWZCE", "DWDKAEXBD", "SXIGUX", "IBEZTC", "FVSFUF", "EEQWZCE", "DOGV"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> name = {"BOB", "BOB", "JFVMEUSCJ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "FATQ", "ERC", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ZSAP", "BOB", "BOB", "WZVR", "BOB", "BOB", "RKLMH", "FKUYVH", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"ZSAP", "*", "*", "BOB", "*", "WZVR", "WZVR", "BOB", "FATQ", "FKUYVH", "FKUYVH", "FKUYVH", "*", "BOB", "*", "BOB", "BOB", "ERC", "BOB", "ERC", "JFVMEUSCJ", "*", "BOB", "BOB", "*", "FATQ", "BOB", "*", "*", "*", "FKUYVH", "*", "*", "BOB", "*", "*", "FATQ", "RKLMH", "JFVMEUSCJ", "WZVR", "BOB", "*", "BOB", "*", "WZVR", "WZVR", "ZSAP", "BOB", "BOB", "ZSAP"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> name = {"WZDB", "THW", "TAEG", "PQZJWQ", "BOB", "JFBLUXYFXV", "BOB", "AFCE", "RIZQIUVL", "KIPEJYEXB", "OWULT", "VJHOJYWVT", "PTUVO", "LQJJZQWCGR", "WGI", "BOB", "GVZSRCM", "FFKGAGJYH", "BOB", "NVFRQEG", "TIE", "VNLCQWF", "CGGTCWOURU", "CQFYZ", "IBPSREKJ", "CBGTVIYX", "BOB", "YVMWSNOKGF", "ONPZ", "TTICTVQ", "BOB", "BOB", "VLM", "OYGRDSYICI", "CWJFN", "HGPKM", "GGDXUW", "SJCZ", "BOB", "YIYPMW", "EOYSMOF", "KYHGGODMR", "ZHBRMTP", "LEBKULSD", "BOB", "VBVNN"};
    vector<string> bossName = {"IBPSREKJ", "CQFYZ", "AFCE", "VBVNN", "NVFRQEG", "CQFYZ", "NVFRQEG", "AFCE", "KYHGGODMR", "VJHOJYWVT", "TTICTVQ", "VNLCQWF", "*", "VNLCQWF", "*", "TIE", "AFCE", "*", "LEBKULSD", "LEBKULSD", "CQFYZ", "JFBLUXYFXV", "VNLCQWF", "CBGTVIYX", "JFBLUXYFXV", "LQJJZQWCGR", "CGGTCWOURU", "EOYSMOF", "OWULT", "*", "TTICTVQ", "GVZSRCM", "HGPKM", "EOYSMOF", "YVMWSNOKGF", "VNLCQWF", "TAEG", "WZDB", "PQZJWQ", "JFBLUXYFXV", "*", "WZDB", "JFBLUXYFXV", "NVFRQEG", "PTUVO", "PQZJWQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> name = {"BOB", "KMBXEPLXCY", "IPUSJTVPXO", "BOB", "NOWLNVW", "WIOCQC", "TSC", "JIN", "ROBBLOBTJQ", "BOB", "BOB", "WNTIFJAVDU", "MOQVXORXFG", "UKVARY", "BOB", "OSKOK", "BOB", "GTAFSW", "GEYDMYZX", "YIUEMEK", "BOB", "LHF", "BOB", "MSSMCBEQ", "BOB", "PQV", "LKWLAJVY", "LGMJWX", "BOB", "USZZSDEV", "HLFQPWXDC", "BOB", "JOPTT", "VWIS", "BOB", "LHGTUNVHSZ", "KMTBELDI", "UOIUIA", "BOB", "BOB", "BOB", "BOB", "BOB", "PSBKETMJD", "DTP", "BOB", "BOB", "XDLTJ"};
    vector<string> bossName = {"KMTBELDI", "NOWLNVW", "JIN", "DTP", "WIOCQC", "ROBBLOBTJQ", "XDLTJ", "JOPTT", "*", "BOB", "WIOCQC", "VWIS", "LHF", "*", "PQV", "WIOCQC", "BOB", "DTP", "OSKOK", "JOPTT", "*", "DTP", "LGMJWX", "IPUSJTVPXO", "BOB", "IPUSJTVPXO", "PQV", "LGMJWX", "NOWLNVW", "LKWLAJVY", "NOWLNVW", "*", "ROBBLOBTJQ", "*", "BOB", "ROBBLOBTJQ", "XDLTJ", "*", "YIUEMEK", "BOB", "BOB", "XDLTJ", "BOB", "PSBKETMJD", "UOIUIA", "MOQVXORXFG", "WNTIFJAVDU", "TSC"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> name = {"BOB", "GJHIK", "FAFZ", "BOB", "IRNTPAWZXP", "BOB", "BOB", "QCL", "XWOCJDUJOU", "LBE", "WSWGWIXZ", "POVE", "BOB", "BOB", "BOB", "BOB", "RLEYKOBVO", "JSENRCBR", "BOB", "BOB", "BOB", "BOB", "JUMM", "OIKLQXTLWN", "BOB", "BOB", "BOB", "MPWXWMKOW", "BOB", "GVZGUPEWO", "YRMLWQXN", "NLUBWMRKA", "BOB", "GKNVS", "BOB", "BOB", "VRQSALYXTW", "BOB", "YIQWKVB", "AFQBXYM", "UXICUA", "WSJISYZZ", "BOB", "ZPS"};
    vector<string> bossName = {"QCL", "LBE", "QCL", "OIKLQXTLWN", "JSENRCBR", "GVZGUPEWO", "OIKLQXTLWN", "YIQWKVB", "JUMM", "YRMLWQXN", "OIKLQXTLWN", "*", "BOB", "OIKLQXTLWN", "IRNTPAWZXP", "MPWXWMKOW", "FAFZ", "*", "AFQBXYM", "*", "JUMM", "QCL", "OIKLQXTLWN", "RLEYKOBVO", "WSJISYZZ", "BOB", "XWOCJDUJOU", "MPWXWMKOW", "WSJISYZZ", "UXICUA", "XWOCJDUJOU", "IRNTPAWZXP", "LBE", "*", "*", "*", "FAFZ", "JSENRCBR", "JSENRCBR", "POVE", "JUMM", "GKNVS", "YIQWKVB", "GVZGUPEWO"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> name = {"KLUZIYV", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "HCGVTOLJ", "BOB", "BOB", "XGLSEFJ", "BOB", "BOB", "BOB", "IGEKD", "BOB", "BOB", "BOB", "BOB", "BOB", "MLIDN", "BOB", "UJO", "IYMBH", "NNP", "BOB", "BOB", "URILUK", "BXJG", "BOB", "BOB", "GGTWG", "MBBSFLV", "SXPTIE", "BOB", "AVOYBUXN", "FIZDNI", "FAFSSRQJG", "VTATTVCY", "TOPSGX"};
    vector<string> bossName = {"MLIDN", "UJO", "AVOYBUXN", "IGEKD", "VTATTVCY", "BXJG", "BXJG", "*", "GGTWG", "URILUK", "HCGVTOLJ", "BOB", "*", "BOB", "AVOYBUXN", "URILUK", "AVOYBUXN", "NNP", "AVOYBUXN", "IGEKD", "*", "UJO", "AVOYBUXN", "FAFSSRQJG", "XGLSEFJ", "BXJG", "*", "MBBSFLV", "UJO", "BOB", "BOB", "FAFSSRQJG", "KLUZIYV", "NNP", "FAFSSRQJG", "VTATTVCY", "*", "URILUK", "XGLSEFJ", "XGLSEFJ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> name = {"ATDNVYN", "GBCZKRGM", "XGVXZICG", "UKQT", "UMH", "GBFRKIAOMY", "ZAB", "LBCPJYACIH", "AQAMGGQ", "BOB", "DMIJZJ", "BOB", "VPZJ", "BOB", "WGI", "BOB", "AXWQAO", "BOB", "BOB", "VIFVZNVZ", "QVGNR", "VIY", "RQJM", "DPGEQKE", "GMLEIPBKX", "PBFTSESD", "WOQB", "BOB", "VKUGQUQH", "UCMRHR", "BOB", "BOB", "CYT", "TQQML", "AWL", "OZMKYIV", "BOB", "QAJD", "BOB", "LIEZHAQ", "BOB", "JPKQVVFM", "FZDAIGK"};
    vector<string> bossName = {"BOB", "QAJD", "OZMKYIV", "QVGNR", "XGVXZICG", "LIEZHAQ", "DMIJZJ", "DPGEQKE", "*", "WOQB", "*", "TQQML", "*", "QAJD", "VKUGQUQH", "UMH", "WOQB", "DPGEQKE", "RQJM", "ZAB", "AQAMGGQ", "XGVXZICG", "RQJM", "QVGNR", "VIFVZNVZ", "DMIJZJ", "RQJM", "WOQB", "TQQML", "*", "VKUGQUQH", "JPKQVVFM", "XGVXZICG", "*", "DPGEQKE", "TQQML", "BOB", "UKQT", "OZMKYIV", "CYT", "*", "DPGEQKE", "PBFTSESD"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "*", "*", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "*", "*", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> name = {"BOB", "BOB", "VWEJOBBW", "BOB", "AGFGMLLSJ", "BOB", "DSDT", "BOB", "BOB", "BOB", "BOB", "UJFQFGHK", "CIB", "ANRTAZ", "BOB", "BOB", "BOB", "HCZLCOHLDH", "BOB", "BOB", "BIDJMPXL", "QDTIUMILP", "BOB", "BOB", "BQVGZ", "JPCTA", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "XYTUBTHI", "BOB", "BOB", "KTWASXQPU", "BOB", "OSUTLI", "BOB", "BOB", "BOB", "CQOHVM"};
    vector<string> bossName = {"*", "UJFQFGHK", "KTWASXQPU", "BOB", "ANRTAZ", "QDTIUMILP", "CQOHVM", "UJFQFGHK", "BQVGZ", "BQVGZ", "UJFQFGHK", "AGFGMLLSJ", "CIB", "HCZLCOHLDH", "BQVGZ", "BQVGZ", "BQVGZ", "CQOHVM", "CIB", "UJFQFGHK", "CIB", "VWEJOBBW", "BOB", "BIDJMPXL", "*", "JPCTA", "BOB", "BOB", "*", "BIDJMPXL", "BIDJMPXL", "HCZLCOHLDH", "VWEJOBBW", "*", "JPCTA", "VWEJOBBW", "QDTIUMILP", "VWEJOBBW", "ANRTAZ", "DSDT", "*", "OSUTLI"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> name = {"KKQ", "ZBZXQX", "GXWW", "XALUL", "VHB", "BOB", "ROAH", "BOB", "PPVJL", "BLPOGPXAI", "DPYGUZJ", "IDUSAAP", "BOB", "CUARDOPVAF", "BOB", "JGTYLWWZQ", "BOB", "QTMNCGTET", "EAVPG", "OPC", "VOFSDWTC", "YLFBM", "FFLELQ", "DBHWEAX", "ZKA", "SQOJL", "RLTYFRTOLC", "YQLVTGEN", "IOIBISAF", "QQPC", "BWNS", "QTQHF", "CHFDMXUXO", "BOB", "ZGNGF", "AJHEVLNJ", "BOB", "LVQQ", "FNKIWANSYC", "YBRHOKQY", "BOB", "BOB", "UPOACPMVQ", "HOLEQAX"};
    vector<string> bossName = {"*", "*", "VOFSDWTC", "SQOJL", "BOB", "SQOJL", "GXWW", "FFLELQ", "CUARDOPVAF", "YQLVTGEN", "LVQQ", "HOLEQAX", "OPC", "YQLVTGEN", "UPOACPMVQ", "FFLELQ", "AJHEVLNJ", "DPYGUZJ", "QTMNCGTET", "BWNS", "DBHWEAX", "*", "XALUL", "EAVPG", "CUARDOPVAF", "BWNS", "OPC", "ZBZXQX", "CUARDOPVAF", "QQPC", "CHFDMXUXO", "ROAH", "IDUSAAP", "*", "UPOACPMVQ", "BLPOGPXAI", "KKQ", "ZGNGF", "PPVJL", "ZKA", "*", "BOB", "YBRHOKQY", "LVQQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> name = {"BOB", "FKCG", "HWXJH", "CVESH", "RLRGHPO", "HVU", "BSXTV", "KXMXWV", "BARGOCX", "WBTHDDO", "FBQT", "WBM", "LEQVQZOJP", "MOEBU", "SMHNFERHO", "SABWDW", "WVBSNG", "VSBTC", "CWAYRTT", "SVD", "UWDG", "AVEDPDSUF", "QDS", "BOB", "DDAMHST", "QWZN", "HQKL", "KQTAPUMHHU", "RSKVCULCDC", "WMHQGYUMTB", "KKISAUPWS", "ROHUJMV", "IZQNKOYF", "KHLWVSHAE", "OHDXXKH", "QGT", "KGZTHSE", "IEYLLWXBNO", "JDFCQAGPI", "BSDHOYNV"};
    vector<string> bossName = {"AVEDPDSUF", "WBTHDDO", "VSBTC", "JDFCQAGPI", "HQKL", "QGT", "BSDHOYNV", "WBM", "KQTAPUMHHU", "HWXJH", "QGT", "*", "KKISAUPWS", "ROHUJMV", "HWXJH", "WMHQGYUMTB", "HVU", "RLRGHPO", "CWAYRTT", "WVBSNG", "MOEBU", "WBM", "SABWDW", "QDS", "DDAMHST", "QGT", "QDS", "KGZTHSE", "KHLWVSHAE", "QGT", "SVD", "RLRGHPO", "CWAYRTT", "WMHQGYUMTB", "WVBSNG", "RLRGHPO", "MOEBU", "IEYLLWXBNO", "IZQNKOYF", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> name = {"SSQWNG", "GGWOVWXTF", "DNNYITI", "AEFWXPM", "DGPILT", "BOB", "IRNDK", "TYUMNSBWGD", "KCQXXISGH", "SAFQSGR", "TISKJN", "DOIIOQXOGU", "CQHQ", "VKJOWJQW", "MGFGBXPNHQ", "YNNBQLVVI", "BOB", "VLONFCOLTK", "AVFAMTV", "DGFHKT", "BOB", "KSOZBM", "NYFXUJKPJV", "RYLBAWBPOL", "IDDLYD", "TUBNQN", "GEA", "RUT", "JKUAECW", "XVRJQL", "BEDT", "BRESYQKX", "KCXFCF", "HERZMVWXQ", "KWQNEDQJF", "QCSGPTU", "BOB", "BOB", "GBJBMZ", "FWUSLNWKWY", "ISST", "YZKFZDWB", "UKWWOUZDS", "SMUATUJY", "OSDWOD", "BOB", "BGJKCEGO", "OIMPP"};
    vector<string> bossName = {"GEA", "XVRJQL", "KCXFCF", "BEDT", "SSQWNG", "GBJBMZ", "OIMPP", "VKJOWJQW", "VLONFCOLTK", "SAFQSGR", "TISKJN", "GGWOVWXTF", "UKWWOUZDS", "QCSGPTU", "DOIIOQXOGU", "CQHQ", "RUT", "CQHQ", "GEA", "AEFWXPM", "BGJKCEGO", "NYFXUJKPJV", "FWUSLNWKWY", "IRNDK", "HERZMVWXQ", "OSDWOD", "OSDWOD", "KCXFCF", "KWQNEDQJF", "ISST", "DNNYITI", "YZKFZDWB", "YZKFZDWB", "VLONFCOLTK", "IDDLYD", "BEDT", "AEFWXPM", "YZKFZDWB", "RYLBAWBPOL", "DGFHKT", "SAFQSGR", "SAFQSGR", "DGPILT", "*", "GEA", "*", "IDDLYD", "DGPILT"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> name = {"DEEMORN", "DXOQK", "BOB", "IKU", "BOB", "UZLZLGJC", "BOB", "BOB", "BOB", "BOB", "BOB", "VKKUS", "BOB", "BOB", "BOB", "BOB", "RKCJSDOBBS", "BOB", "KEPCTF", "ITQZFX", "DGEI", "XDHY", "BOB", "BOB", "BXDOZENOV", "BOB", "NYW", "KOPISNWH", "OXPWEYGXV", "BOB", "BOB", "GXLVXUS", "DXRQOBPC", "BOB", "BOB", "IBITKGBWHX", "BOB", "BOB", "OWLUMOGYC", "EBWVR", "QSSMONKTX", "BOB", "LMR", "BOB", "BOB"};
    vector<string> bossName = {"*", "ITQZFX", "OXPWEYGXV", "DEEMORN", "LMR", "DXOQK", "DEEMORN", "UZLZLGJC", "NYW", "*", "*", "OWLUMOGYC", "KEPCTF", "*", "KOPISNWH", "OXPWEYGXV", "LMR", "RKCJSDOBBS", "XDHY", "IKU", "DXOQK", "XDHY", "OWLUMOGYC", "XDHY", "KOPISNWH", "DGEI", "RKCJSDOBBS", "RKCJSDOBBS", "ITQZFX", "GXLVXUS", "IKU", "*", "VKKUS", "*", "XDHY", "GXLVXUS", "BXDOZENOV", "OWLUMOGYC", "XDHY", "GXLVXUS", "BOB", "DXOQK", "DXRQOBPC", "DEEMORN", "DEEMORN"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> name = {"AGVG", "BOB", "BOB", "NJXLCC", "BOB", "BOB", "BOB", "FHON", "BOB", "MEAQIAVXYI", "BOB", "BOB", "DDOXENEUI", "BOB", "BOB", "GDWKEU", "BOB", "ZYEMV", "QTEPVPVP", "CYVOYUFDL", "BOB", "NVTP", "BOB", "BOB", "VVJBIQKMP", "ULVUOC", "NIE", "RKWUV", "SAKE", "BOB", "NOLZWFCZ", "BOB", "OXEUKO", "JKFRE", "BOB", "BOB", "EAS", "IGDEVDZHQI", "MXQUI", "BOB", "SEYPHFMZ", "BOB", "WJYJQ"};
    vector<string> bossName = {"RKWUV", "RKWUV", "*", "OXEUKO", "DDOXENEUI", "CYVOYUFDL", "MEAQIAVXYI", "MXQUI", "NJXLCC", "SAKE", "SAKE", "*", "WJYJQ", "JKFRE", "CYVOYUFDL", "EAS", "NIE", "*", "SAKE", "*", "*", "NIE", "IGDEVDZHQI", "QTEPVPVP", "MEAQIAVXYI", "WJYJQ", "MXQUI", "JKFRE", "ULVUOC", "MXQUI", "*", "*", "QTEPVPVP", "MXQUI", "*", "*", "EAS", "*", "CYVOYUFDL", "OXEUKO", "DDOXENEUI", "ULVUOC", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> name = {"GIJWA", "IJGEQ", "BOB", "GNUVUPJMPC", "RQMXA", "QZRSGYLC", "HQTFOLXMN", "ETOAFVI", "BOB", "BOB", "BOB", "BKJBZEPE", "UTLOEUCYU", "BOB", "VBKSLRMWP", "HBACMPDLC", "IWXAHVZLH", "BOB", "XJB", "KZOLSCP", "YSFDDCKF", "QJFDQJ", "KLSGYJKVA", "MUMRMIGLLC", "CNWIRZWG", "PBVVJYC", "DVWM", "GVJIWFKZA", "BOB", "UHC", "MIISNDAPT", "BOB", "BOB", "CVF", "BOB", "AQWRUDCKP", "UYVAFZJ", "DVPFSDD", "USU", "ODM", "BOB", "BOB", "SYIJJSRI", "RGZWXITTTW"};
    vector<string> bossName = {"CNWIRZWG", "XJB", "MUMRMIGLLC", "IJGEQ", "CVF", "RGZWXITTTW", "UYVAFZJ", "RGZWXITTTW", "YSFDDCKF", "MUMRMIGLLC", "*", "CVF", "CVF", "BOB", "ODM", "GIJWA", "QZRSGYLC", "*", "*", "UYVAFZJ", "*", "YSFDDCKF", "PBVVJYC", "XJB", "SYIJJSRI", "QJFDQJ", "CNWIRZWG", "MUMRMIGLLC", "PBVVJYC", "IJGEQ", "ETOAFVI", "MUMRMIGLLC", "HQTFOLXMN", "BKJBZEPE", "*", "DVWM", "PBVVJYC", "RQMXA", "XJB", "PBVVJYC", "PBVVJYC", "IWXAHVZLH", "XJB", "UTLOEUCYU"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> name = {"ZWAR", "BYNZD", "KAVCPUIAUW", "NGQX", "BOB", "KLZC", "IMSK", "CZZVAVG", "AICVTDYDJD", "IRLQTMKQH", "DQE", "HYLAYLKNM", "BKFPDAUSCN", "GRIA", "QOBC", "BGCDYSTRZG", "OLSVW", "IVAR", "AOD", "KWXZNPHTVD", "LFYLAFO", "TTOOSQ", "IPWSWNIIG", "IEHAD", "DTFKB", "BOB", "GLBIQ", "VXRQUJCK", "LUXJGEQIQ", "MDZQUI", "AKIGMPN", "QPMTCVG", "REYGZSI", "DDUEBOCV", "KSBQ", "BOB", "BOB", "OYXZHFLCD", "YWZCY", "SLXK", "XPKPIVV", "NWGE", "HIPIQZAC", "XQNUZGZ", "OLYHK", "THFNIDSVDI", "BOB", "FIWPOJXM"};
    vector<string> bossName = {"OLSVW", "XQNUZGZ", "OLSVW", "OLYHK", "*", "BYNZD", "HYLAYLKNM", "LFYLAFO", "NGQX", "HYLAYLKNM", "THFNIDSVDI", "SLXK", "VXRQUJCK", "*", "BOB", "IPWSWNIIG", "*", "CZZVAVG", "OLYHK", "DQE", "QPMTCVG", "FIWPOJXM", "DTFKB", "BGCDYSTRZG", "CZZVAVG", "LUXJGEQIQ", "IRLQTMKQH", "IMSK", "YWZCY", "THFNIDSVDI", "OLSVW", "AOD", "CZZVAVG", "*", "IPWSWNIIG", "*", "BKFPDAUSCN", "ZWAR", "FIWPOJXM", "KWXZNPHTVD", "AOD", "NWGE", "ZWAR", "QPMTCVG", "LUXJGEQIQ", "THFNIDSVDI", "BKFPDAUSCN", "THFNIDSVDI"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "BOB", "BOB", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "*", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> name = {"KJGPRI", "BOB", "BOB", "BOB", "YSUSUWQQZ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "YOL", "BOB", "OVNDWVPB", "PBBU", "MFFBCBZ", "OQPHMZSPD", "HMIT", "BOB", "ZNDXSGPJSE", "BOB", "BOB", "ZCUL", "BOB", "BOB", "BOB", "QIQ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "LXJFNUP", "BOB", "BOB", "XQBNX", "GXYYBC", "BOB", "BOB", "BOB", "BOB", "BOB", "RWR"};
    vector<string> bossName = {"YOL", "ZNDXSGPJSE", "ZNDXSGPJSE", "OQPHMZSPD", "XQBNX", "QIQ", "ZNDXSGPJSE", "ZCUL", "BOB", "RWR", "ZCUL", "*", "LXJFNUP", "BOB", "*", "OVNDWVPB", "*", "ZNDXSGPJSE", "RWR", "OVNDWVPB", "ZCUL", "BOB", "YSUSUWQQZ", "*", "OQPHMZSPD", "MFFBCBZ", "BOB", "*", "PBBU", "*", "*", "RWR", "GXYYBC", "*", "*", "OVNDWVPB", "GXYYBC", "LXJFNUP", "BOB", "ZNDXSGPJSE", "OQPHMZSPD", "YOL", "BOB", "BOB", "YSUSUWQQZ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TRAQ", "RWFROJM", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "TRAQ", "BOB", "RWFROJM", "RWFROJM", "BOB", "BOB", "BOB", "TRAQ", "BOB", "*", "*", "*", "BOB", "TRAQ", "*", "*", "*", "*", "*", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "TRAQ", "BOB", "BOB", "*", "BOB", "BOB", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "CZONQLOR", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "UXLINIM", "BOB", "BOB", "BOB", "GZLIVQYXI", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "BOB", "BOB", "BOB", "*", "*", "*", "*", "*", "BOB", "BOB", "GZLIVQYXI", "CZONQLOR", "GZLIVQYXI", "*", "*", "BOB", "*", "*", "BOB", "BOB", "GZLIVQYXI", "BOB", "GZLIVQYXI", "BOB", "BOB", "*", "BOB", "*", "UXLINIM", "BOB", "UXLINIM", "*", "*", "*", "*", "GZLIVQYXI", "GZLIVQYXI", "GZLIVQYXI"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> name = {"CCPVY", "BOB", "SKVUOFOMXG", "ZQNTIFZW", "CTYBUNA", "BOB", "BOB", "MHTZAJJPV", "AEQ", "JSE", "OEUI", "BOB", "ASPK", "CWVYZBVID", "BOB", "WNIPYGZTQ", "KDWEBCUTI", "BOB", "BOB", "RRLV", "MGPJZZVCM", "CXZUESFSH", "BOB", "BOB", "YYKUVQRYB", "EOWOQL", "VKQPYFRDYO", "ODROI", "SWXIXQI", "BOB", "YPURLUMO", "BOB", "RGAIDMGLH", "BOB", "BOB", "COSIUBUMNX", "GFIOYDCWWK", "BOB"};
    vector<string> bossName = {"MGPJZZVCM", "CWVYZBVID", "GFIOYDCWWK", "ASPK", "*", "WNIPYGZTQ", "JSE", "CXZUESFSH", "OEUI", "KDWEBCUTI", "RGAIDMGLH", "YYKUVQRYB", "YYKUVQRYB", "ZQNTIFZW", "CXZUESFSH", "ASPK", "YPURLUMO", "ASPK", "*", "RGAIDMGLH", "ZQNTIFZW", "JSE", "EOWOQL", "CTYBUNA", "*", "OEUI", "AEQ", "JSE", "ODROI", "OEUI", "MHTZAJJPV", "SWXIXQI", "YYKUVQRYB", "MHTZAJJPV", "COSIUBUMNX", "RGAIDMGLH", "ASPK", "WNIPYGZTQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> name = {"BOB", "BOB", "REWLTJAW", "BOB", "LDYPUE", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "NCGNR", "BOB", "LDQ", "BOB", "ZVUMDXM", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TVD"};
    vector<string> bossName = {"REWLTJAW", "NCGNR", "TVD", "*", "*", "TVD", "BOB", "BOB", "NCGNR", "*", "*", "*", "NCGNR", "LDYPUE", "*", "*", "REWLTJAW", "*", "*", "*", "*", "BOB", "*", "REWLTJAW", "*", "*", "*", "BOB", "*", "*", "BOB", "LDQ", "*", "REWLTJAW", "LDQ", "*", "LDQ", "BOB", "BOB", "BOB", "BOB", "REWLTJAW", "*", "LDQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "FUJYK", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "PCVUEH", "GLWIKNAMG", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "UKWNUQH", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "GLWIKNAMG", "*", "*", "*", "BOB", "*", "*", "*", "GLWIKNAMG", "BOB", "UKWNUQH", "GLWIKNAMG", "*", "PCVUEH", "BOB", "BOB", "*", "*", "BOB", "GLWIKNAMG", "*", "*", "PCVUEH", "*", "*", "*", "GLWIKNAMG", "*", "BOB", "*", "FUJYK", "*", "GLWIKNAMG", "*", "*", "*", "*", "BOB", "PCVUEH", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> name = {"PVAPQPXI", "VOG", "BOB", "BJGK", "TSQLLZ", "POVPJVBP", "BOB", "LTBTR", "IHTSVJOYB", "PTHFHKQ", "WZHXWBUR", "BOB", "FVOJF", "BOB", "OWCAGH", "SQYODWE", "ODRARUXJJ", "BOB", "BOB", "FHZIPLAG", "VBCZM", "SUBBSVEBSY", "EOO", "FBWNDW", "FNCFVKNXRW", "XTLH", "BOB", "GWY", "VES", "BOB", "CJMORRDC", "IRKKK", "BOB", "BOB", "FVA", "BOB", "NEFKBSABVH", "DIUFJNCVHK", "BOB", "BOB", "DSRIGOM"};
    vector<string> bossName = {"VBCZM", "GWY", "FVOJF", "SUBBSVEBSY", "PTHFHKQ", "FBWNDW", "BOB", "BJGK", "VBCZM", "PTHFHKQ", "DIUFJNCVHK", "*", "SUBBSVEBSY", "BOB", "FBWNDW", "FNCFVKNXRW", "FNCFVKNXRW", "PTHFHKQ", "FHZIPLAG", "VBCZM", "LTBTR", "VOG", "DSRIGOM", "IHTSVJOYB", "POVPJVBP", "*", "BOB", "VES", "CJMORRDC", "PVAPQPXI", "BOB", "*", "FVOJF", "DSRIGOM", "BJGK", "VES", "FBWNDW", "OWCAGH", "FHZIPLAG", "LTBTR", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "XFCCDBH", "DJZXWDG", "BOB", "BOB", "BOB", "BOB", "BOB", "SVALCIVH", "PPBO", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"XFCCDBH", "BOB", "BOB", "BOB", "DJZXWDG", "BOB", "BOB", "PPBO", "XFCCDBH", "SVALCIVH", "DJZXWDG", "*", "BOB", "*", "*", "PPBO", "*", "*", "PPBO", "BOB", "DJZXWDG", "SVALCIVH", "DJZXWDG", "*", "XFCCDBH", "*", "PPBO", "DJZXWDG", "*", "SVALCIVH", "*", "*", "BOB", "*", "*", "*", "SVALCIVH", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> name = {"BCSVVGKD", "UHMLSI", "PJGC", "AONILGO", "ULSTAAYN", "BOB", "RSJUHZH", "AKSMTOY", "RXQDMGR", "BOB", "XHN", "JSKLNPYID", "ALOJIX", "BGYGRRQ", "BOB", "SKLGZP", "GLL", "GATDED", "BOB", "AUELUACSKA", "BOB", "SGOMH", "WIUGCFZG", "BOB", "BMINO", "AUDIAFOAEI", "XBAK", "ZMMNYBEZ", "TAKJFPGTR", "MMODKSUJYH", "TQDEWCRR", "ZFLKDZO", "BOB", "WDMDB", "UCBJ", "BUKO", "KJPNWSGE", "WLBFMCWXXR", "NBJUWOVHEI", "KSRY", "FHXG", "JTDI", "IDBGLEFN", "FTNLCPWW", "EOTVVUWZX", "AXQYURWKZ", "ERVPE", "LEM", "PHY"};
    vector<string> bossName = {"BOB", "GATDED", "TQDEWCRR", "SKLGZP", "UCBJ", "UCBJ", "BMINO", "ZFLKDZO", "MMODKSUJYH", "*", "BCSVVGKD", "BUKO", "PHY", "BCSVVGKD", "TAKJFPGTR", "WDMDB", "XHN", "BCSVVGKD", "ZMMNYBEZ", "BOB", "BOB", "IDBGLEFN", "ERVPE", "WIUGCFZG", "BUKO", "NBJUWOVHEI", "KJPNWSGE", "KJPNWSGE", "EOTVVUWZX", "JTDI", "AUDIAFOAEI", "XHN", "WIUGCFZG", "*", "ZFLKDZO", "*", "AXQYURWKZ", "AONILGO", "RSJUHZH", "WLBFMCWXXR", "*", "WDMDB", "MMODKSUJYH", "PJGC", "ALOJIX", "XBAK", "XBAK", "MMODKSUJYH", "BGYGRRQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> name = {"NODIY", "BITSKUQ", "RCPXEQQN", "YWRJXKZ", "WGPQ", "PQKBFYIHV", "WGQG", "UBVUBVSWBA", "JTUR", "LZBU", "IMGDU", "LUEZND", "BOB", "QMXF", "NXLPFNCLGV", "EYKBVH", "CLBOZG", "TZSEN", "QHCKOYQZFB", "MHARMCAGIP", "XKFNO", "NCODIE", "ZXFZTX", "SMFLXAVN", "BMJHHB", "GCDX", "VIAEWA", "XADD", "PICAC", "UXKA", "XNVFQGEII", "VRXFVO", "BGSOYQELS", "VZRBTEEQQG", "TOBFPW", "OEAP", "PLRCNIYG", "LWNDUS"};
    vector<string> bossName = {"YWRJXKZ", "BMJHHB", "QMXF", "BOB", "CLBOZG", "*", "OEAP", "NODIY", "ZXFZTX", "BOB", "NXLPFNCLGV", "UXKA", "BITSKUQ", "*", "NODIY", "PQKBFYIHV", "EYKBVH", "BOB", "NXLPFNCLGV", "BITSKUQ", "LWNDUS", "EYKBVH", "BOB", "XKFNO", "WGQG", "JTUR", "VIAEWA", "*", "UBVUBVSWBA", "LWNDUS", "WGPQ", "LUEZND", "NODIY", "XNVFQGEII", "*", "NXLPFNCLGV", "XADD", "EYKBVH"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> name = {"KOXPF", "BOB", "RTOHR", "OJDFJFCFMN", "SDITIRH", "OQT", "BOB", "VGEPSK", "QEJYA", "JMAUJK", "BOB", "QRFUPWWP", "LFCTJ", "BOB", "ZGBRQN", "HVCL", "BOB", "EUHZQW", "IZGK", "FRGD", "BOB", "BOB", "NZFOJQY", "BOB", "INSTL", "BOB", "AIM", "BOB", "BOB", "NJNELHRH", "BOB", "AOVUZ", "KBN", "BOB", "BOB", "ZFO", "SHAMDP", "BOB", "OQGXEV", "AJOUADDBJE", "BOB", "BOB", "VHPSXXZQ"};
    vector<string> bossName = {"AIM", "SDITIRH", "RTOHR", "*", "*", "OJDFJFCFMN", "QEJYA", "HVCL", "*", "ZFO", "EUHZQW", "*", "ZGBRQN", "FRGD", "FRGD", "*", "OQT", "ZGBRQN", "SHAMDP", "*", "LFCTJ", "INSTL", "AJOUADDBJE", "OQT", "SHAMDP", "BOB", "*", "AJOUADDBJE", "AOVUZ", "SHAMDP", "JMAUJK", "*", "OJDFJFCFMN", "VHPSXXZQ", "ZGBRQN", "KOXPF", "EUHZQW", "BOB", "BOB", "HVCL", "BOB", "BOB", "INSTL"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> name = {"XZIV", "IJUSXHU", "BLMG", "CQSRKWGQF", "BOB", "BOB", "PBHG", "LPXYBTXTE", "BOB", "BOB", "BOB", "BOB", "DESYFOGRW", "COOJSZSYGD", "RXFS", "BNJRWDK", "DQQB", "BOB", "BOB", "BOB", "BOB", "BOB", "TARAOFF", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "SCEEAXSIFV", "TNZIDAWKA", "BOB", "THNFONF", "BOB", "BOB", "BOB", "RZYCVOY", "BOB", "BOB", "BOB", "BOB", "TJFT", "OGRTKXR", "PVYFQJTAML"};
    vector<string> bossName = {"COOJSZSYGD", "TARAOFF", "SCEEAXSIFV", "PBHG", "BLMG", "*", "PVYFQJTAML", "RZYCVOY", "THNFONF", "RXFS", "TNZIDAWKA", "DQQB", "TARAOFF", "DQQB", "XZIV", "BLMG", "LPXYBTXTE", "DESYFOGRW", "IJUSXHU", "BOB", "IJUSXHU", "OGRTKXR", "THNFONF", "PVYFQJTAML", "TARAOFF", "DQQB", "CQSRKWGQF", "BLMG", "BOB", "TNZIDAWKA", "PBHG", "PBHG", "BOB", "DESYFOGRW", "TNZIDAWKA", "DESYFOGRW", "THNFONF", "TARAOFF", "BOB", "DQQB", "DQQB", "TJFT", "*", "LPXYBTXTE", "BOB", "TJFT", "BLMG", "*", "PVYFQJTAML"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> name = {"BOB", "QDOEX", "DBNYINNN", "BOB", "WZRGJ", "BOMABZGP", "CGHRYMTQ", "TCLWY", "TDEBKBGH", "CBMXG", "AANYI", "FMVIXLROBH", "EFYBXWJER", "SUNTFWQQQI", "NSZGCBE", "GIL", "RYBXVUCN", "VGMDSDHIF", "QSYZQCLYL", "YOIK", "SGZJVM", "RJULFUVKHB", "OXTTQPL", "VOZWKCL", "WXSC", "LRJZQGUDPV", "BFRRO", "MHDBORI", "IJWK", "BOB", "ZHDFWVNKD", "QZYN", "OGCQTAIANA", "BOB", "VMWID", "BOB", "AOLW", "FPOP", "ZFXABLYX"};
    vector<string> bossName = {"WXSC", "YOIK", "TCLWY", "BOB", "LRJZQGUDPV", "IJWK", "FMVIXLROBH", "FPOP", "BOMABZGP", "WZRGJ", "SGZJVM", "FPOP", "IJWK", "DBNYINNN", "*", "*", "YOIK", "WXSC", "AOLW", "FMVIXLROBH", "SGZJVM", "*", "BOMABZGP", "QZYN", "OXTTQPL", "CGHRYMTQ", "EFYBXWJER", "CGHRYMTQ", "WZRGJ", "WXSC", "FPOP", "YOIK", "RYBXVUCN", "AOLW", "VMWID", "BOMABZGP", "AANYI", "QDOEX", "CGHRYMTQ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> name = {"AFNCA", "BOB", "FRRIK", "BOB", "MWPBGH", "WIQXQA", "KGP", "KKKZQCIY", "GMTYKT", "COI", "QRM", "SONVO", "ZIE", "ILMXVHLKIE", "WOELYJM", "MYRIC", "BZWUJGCFFV", "BOB", "SUAAKGO", "LCYCEBRKEH", "TKPWYG", "KFHV", "WSPD", "MTQ", "WWLWMP", "KIOQOCKL", "MCBVGCNNM", "BLGNPYXXUH", "YKV", "FXOYWB", "LYVXIN", "NGHVOGMQR", "EFCCNMU", "AHSCT", "SLLZSRXAO", "UFRMRDGXF", "NXBJSIPWPC", "EQIWQIN", "ABFH", "RGYFYOBA", "LHA", "HQOIPMUQ", "RIWDTRJHJ", "VULZ", "XMBAAHJHOK", "RDBODBANJS", "PNVVGDOWDQ"};
    vector<string> bossName = {"SUAAKGO", "WIQXQA", "PNVVGDOWDQ", "GMTYKT", "GMTYKT", "WSPD", "AFNCA", "AHSCT", "XMBAAHJHOK", "LCYCEBRKEH", "SLLZSRXAO", "MWPBGH", "WSPD", "AHSCT", "TKPWYG", "LYVXIN", "LCYCEBRKEH", "MTQ", "VULZ", "MWPBGH", "VULZ", "COI", "LYVXIN", "UFRMRDGXF", "PNVVGDOWDQ", "*", "MCBVGCNNM", "KGP", "KGP", "MTQ", "*", "ZIE", "SONVO", "MWPBGH", "RIWDTRJHJ", "MYRIC", "PNVVGDOWDQ", "EQIWQIN", "ILMXVHLKIE", "XMBAAHJHOK", "EFCCNMU", "AHSCT", "MWPBGH", "ABFH", "UFRMRDGXF", "KKKZQCIY", "KKKZQCIY"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> name = {"BOB", "VHDQS", "FHDTYOYFAL", "BOB", "BOB", "MWTBLXN", "BOB", "BOB", "BOB", "BOB", "BOB", "GZMEYVY", "VTWDKFP", "BOB", "OCKNED", "BOB", "BOB", "KSVLQSKO", "BOB", "BOB", "BOB", "BOB", "LELV", "BOB", "BBEVL", "BOB", "BOB", "BOB", "BOB", "XVVY", "OTGCSZYMED", "VKUDUJD", "BOB", "BOB", "BOB", "SCUAOGQ", "ZZSNIRDGE", "BOB", "HCXGBL", "BOB", "BOB", "BOB", "THFSTNUFSO", "BOB"};
    vector<string> bossName = {"XVVY", "*", "*", "BOB", "VTWDKFP", "MWTBLXN", "BOB", "THFSTNUFSO", "*", "VKUDUJD", "*", "ZZSNIRDGE", "HCXGBL", "VKUDUJD", "VKUDUJD", "OCKNED", "BOB", "BBEVL", "MWTBLXN", "HCXGBL", "BOB", "VKUDUJD", "OTGCSZYMED", "KSVLQSKO", "BBEVL", "MWTBLXN", "LELV", "KSVLQSKO", "ZZSNIRDGE", "BBEVL", "OCKNED", "*", "BOB", "VKUDUJD", "GZMEYVY", "*", "FHDTYOYFAL", "ZZSNIRDGE", "OTGCSZYMED", "MWTBLXN", "OCKNED", "LELV", "KSVLQSKO", "LELV"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> name = {"PTPZIXMRR", "HSVHEMYNWZ", "VHN", "BOB", "VFQJS", "SSB", "CPAPFMCLJ", "CQPQUK", "KUHR", "BHQER", "XZNB", "BOB", "BOB", "YPUD", "XPU", "MNCKFETG", "LRAH", "EQWBXII", "WVLP", "JVHDCDHNY", "YVNZGVAHGC", "UVMSBRZNK", "FQZCSM", "CWI", "YTFRJ", "OLLX", "TZISHEECGZ", "UIP", "BOB", "VBPJ", "BOB", "TBMEQCHYS", "PKCREDVS", "PRTUB", "IFDPGUSXR", "ZNXZAMO", "IQTTI"};
    vector<string> bossName = {"FQZCSM", "SSB", "*", "OLLX", "BOB", "KUHR", "OLLX", "XZNB", "BHQER", "IQTTI", "XPU", "XZNB", "FQZCSM", "*", "MNCKFETG", "VFQJS", "YVNZGVAHGC", "JVHDCDHNY", "KUHR", "PRTUB", "HSVHEMYNWZ", "*", "KUHR", "CWI", "*", "BHQER", "VBPJ", "CQPQUK", "CWI", "IFDPGUSXR", "BOB", "LRAH", "CWI", "CQPQUK", "XPU", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "BOB", "*", "*", "*", "*", "*", "*", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "*", "*", "*", "*", "BOB", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "*", "*", "*", "BOB", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> name = {"OSLBEYPA", "CCEIR", "ZREHOJXXO", "JMSRXC", "KGH", "BEMICJZ", "LVXWIJRIW", "KSBHB", "MSAT", "MMIAYGQVO", "CAXAPPQWK", "CZVXHOLLE", "XUNID", "RSNIM", "UEKHQFQDRM", "DDFTIUUTQA", "TKCEDL", "XDDXCVLKK", "NBKE", "EHGQ", "ORSQM", "CDHOTW", "BOB", "KOREJNAPP", "XMZMQRNRN", "ALWQNWQIEU", "GNRPNKDWNK", "VHR", "BWZXUEO", "UCVRKWXLK", "XEYJ", "XGA", "FXPMQ", "MWYCL", "LGUA", "IGGY", "ADJXYJXDZ", "OJJEIEWJ", "XYEOJM", "PHW", "TNVCMIHKH", "XNMECPKPNW", "VTOYXK", "RPXUQYBBXZ", "WFEKQ", "DTNAJ"};
    vector<string> bossName = {"MMIAYGQVO", "BOB", "XDDXCVLKK", "UCVRKWXLK", "MMIAYGQVO", "XDDXCVLKK", "IGGY", "IGGY", "XUNID", "NBKE", "KSBHB", "LGUA", "CCEIR", "OSLBEYPA", "IGGY", "CDHOTW", "MWYCL", "RPXUQYBBXZ", "ZREHOJXXO", "ORSQM", "VTOYXK", "LVXWIJRIW", "GNRPNKDWNK", "MSAT", "MSAT", "DTNAJ", "CAXAPPQWK", "BEMICJZ", "CCEIR", "ORSQM", "KOREJNAPP", "ORSQM", "OJJEIEWJ", "*", "UCVRKWXLK", "JMSRXC", "CCEIR", "VTOYXK", "*", "XYEOJM", "IGGY", "RSNIM", "TNVCMIHKH", "ORSQM", "CDHOTW", "ORSQM"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "XJAA", "BOB", "BOB", "BOB", "PEYFYEX", "IRU", "BOB", "BOB", "BOB", "BOB", "LLAFCZVFQ", "BOB", "KSHDAWD", "BOB", "MVAYIE", "STWHSTEIX", "BOB", "KXICPHSFRE", "BOB", "BOB", "BOB", "BOB", "BOB", "BMOJUQYC", "AOWEQPPHHI", "BOB", "BOB", "OCWO", "BOB", "QXCLUG", "PQOJGXBFJ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BIWT", "BOB"};
    vector<string> bossName = {"IRU", "*", "*", "PEYFYEX", "STWHSTEIX", "BOB", "OCWO", "PQOJGXBFJ", "IRU", "KXICPHSFRE", "OCWO", "*", "BOB", "BOB", "AOWEQPPHHI", "*", "AOWEQPPHHI", "MVAYIE", "AOWEQPPHHI", "LLAFCZVFQ", "PEYFYEX", "PQOJGXBFJ", "BMOJUQYC", "BOB", "BOB", "QXCLUG", "BOB", "MVAYIE", "MVAYIE", "*", "*", "MVAYIE", "*", "KSHDAWD", "IRU", "BOB", "*", "KXICPHSFRE", "BOB", "BIWT", "XJAA", "KXICPHSFRE", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> name = {"FDF", "BOB", "ZHTEH", "SSSYM", "FENT", "CYFSXGKBWH", "OKSHTZCIGY", "BOB", "SIUYJY", "BOB", "PFREKKCHN", "IEDWZAS", "EHBXSTXHZ", "WSCDA", "JBU", "BOB", "BJWUYUFH", "AWAWOGBAC", "ASEMPNQHZO", "XLMXPNCI", "CCSLE", "UTVVKFRPS", "BVWTWQZ", "GXNJB", "PKQHSBV", "BOB", "ABBNA", "EXOAWKHJJJ", "JWVNCL", "DERKNMWHVC", "KSRN", "QAUOTYYJWW", "BOB", "RWSHWMI", "GPSXBVL", "JBJV", "BOB", "BOB", "XLZJ", "BOB", "UTKFEOT", "BOB", "NCTNM", "GAQ", "FEOQORY", "BOB", "PTQKP", "GTZLBG", "BOB"};
    vector<string> bossName = {"NCTNM", "BOB", "PFREKKCHN", "GTZLBG", "OKSHTZCIGY", "GTZLBG", "BVWTWQZ", "BOB", "JBU", "SIUYJY", "JWVNCL", "JBU", "BJWUYUFH", "GXNJB", "IEDWZAS", "BOB", "OKSHTZCIGY", "QAUOTYYJWW", "UTKFEOT", "SIUYJY", "RWSHWMI", "JBU", "UTVVKFRPS", "JBU", "BJWUYUFH", "JBU", "EHBXSTXHZ", "FENT", "XLZJ", "JWVNCL", "BJWUYUFH", "GXNJB", "*", "GPSXBVL", "AWAWOGBAC", "SSSYM", "EHBXSTXHZ", "PKQHSBV", "QAUOTYYJWW", "BOB", "BVWTWQZ", "BVWTWQZ", "DERKNMWHVC", "*", "BOB", "ABBNA", "EXOAWKHJJJ", "OKSHTZCIGY", "FEOQORY"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> name = {"BOB", "SHVHW", "BGSZK", "BOB", "AGQ", "BOB", "APQI", "TXXOWN", "BOB", "FUWSWGK", "QOKSWDJ", "ULONIPZPV", "BOB", "ZFMKTA", "BOB", "BOB", "SBKF", "BOB", "BOB", "BOB", "GDV", "HAZ", "SUCPXL", "BOB", "GXERUCJS", "BOB", "BOB", "BOB", "BOB", "NSTIESA", "BOB", "DSIFR", "BOB", "BOB", "BOB", "YYPVKS", "BOB", "BOB", "BOB", "KKWNRCHZC", "BOB", "BOB"};
    vector<string> bossName = {"*", "YYPVKS", "SBKF", "BOB", "GXERUCJS", "*", "*", "ULONIPZPV", "SUCPXL", "*", "*", "ZFMKTA", "BOB", "*", "ULONIPZPV", "*", "TXXOWN", "SUCPXL", "NSTIESA", "SBKF", "HAZ", "ZFMKTA", "DSIFR", "BGSZK", "ZFMKTA", "*", "AGQ", "SHVHW", "BOB", "APQI", "BOB", "YYPVKS", "QOKSWDJ", "TXXOWN", "SHVHW", "BOB", "*", "HAZ", "DSIFR", "AGQ", "ULONIPZPV", "SBKF"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> name = {"DJUT", "LUE", "LGNIEXT", "QGU", "RWVYZY", "SHNKLJHDZ", "XVFRUXS", "QUZGCLHP", "JFFX", "FGFTFGMMCG", "DRDWCPLMN", "XHVMFNFR", "LRBE", "PEN", "YRQAJRS", "MESTRNUTTR", "ZWGRAD", "UKZWYU", "OQEZNFZRL", "BOB", "KFDMAYC", "ZATSTIKPB", "EPAGFRX", "UHKYS", "UYOS", "KZJ", "RALWROD", "LJUUGTJCFG", "LZIDRN", "GIBBRAGVYP", "HCBKZ", "SGGFJ", "KVFLCZI", "ZRFIM", "NHVQHPS", "WCKRT", "USNWXLIWE", "FXLLZD", "JQUTMADMVJ", "KTZRJ", "POLOWFDDXM", "AXKT", "GASZUZDWB"};
    vector<string> bossName = {"DRDWCPLMN", "XVFRUXS", "UYOS", "SGGFJ", "UKZWYU", "GIBBRAGVYP", "QGU", "KFDMAYC", "LRBE", "POLOWFDDXM", "SHNKLJHDZ", "ZWGRAD", "YRQAJRS", "KFDMAYC", "HCBKZ", "JFFX", "KZJ", "FXLLZD", "UKZWYU", "RALWROD", "HCBKZ", "XVFRUXS", "GASZUZDWB", "SGGFJ", "ZATSTIKPB", "MESTRNUTTR", "ZATSTIKPB", "POLOWFDDXM", "DRDWCPLMN", "*", "*", "UYOS", "LRBE", "ZWGRAD", "JFFX", "XHVMFNFR", "KFDMAYC", "*", "POLOWFDDXM", "KVFLCZI", "SHNKLJHDZ", "DRDWCPLMN", "POLOWFDDXM"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> name = {"BOB", "VBGRT", "BOB", "BOB", "BOB", "BOB", "BOB", "ATQHRC", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "LIX", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "KBFMTXD", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "KBFMTXD", "ATQHRC", "BOB", "VBGRT", "BOB", "*", "BOB", "VBGRT", "*", "BOB", "*", "*", "KBFMTXD", "*", "BOB", "BOB", "KBFMTXD", "VBGRT", "KBFMTXD", "BOB", "BOB", "VBGRT", "*", "VBGRT", "BOB", "*", "*", "*", "*", "BOB", "ATQHRC", "*", "VBGRT", "*", "VBGRT", "BOB", "*", "*", "BOB", "BOB", "LIX", "*", "LIX", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> name = {"BOB", "BOB", "BOB", "HRQBSVOI", "SHLD", "HPETTKVJY", "DZLVER", "BOB", "CQFSWJN", "BXRJEJVUUL", "BOB", "TDMMGPKW", "BOB", "VML", "BOB", "ALRIILVGZH", "OACK", "BOB", "GCWIESYLLZ", "MIPVEZAGV", "BOB", "JXVQ", "JFXUT", "BOB", "BOB", "MOGCSSP", "BOB", "XZMX", "NCBLFEYPW", "HISCMBBT", "YNY", "BOB", "RYDLSEDSS", "BOB", "ZCRW", "TBXA", "BOB", "BOB"};
    vector<string> bossName = {"SHLD", "TDMMGPKW", "JFXUT", "*", "TDMMGPKW", "HISCMBBT", "YNY", "MOGCSSP", "*", "TBXA", "*", "*", "CQFSWJN", "MIPVEZAGV", "*", "BXRJEJVUUL", "XZMX", "NCBLFEYPW", "ZCRW", "*", "HPETTKVJY", "BXRJEJVUUL", "HPETTKVJY", "BXRJEJVUUL", "MIPVEZAGV", "TBXA", "MOGCSSP", "SHLD", "ALRIILVGZH", "DZLVER", "MOGCSSP", "RYDLSEDSS", "CQFSWJN", "ALRIILVGZH", "NCBLFEYPW", "HISCMBBT", "MIPVEZAGV", "VML"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> name = {"WGPK", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BUITYHJVVF", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "JDYWNIW", "BOB", "BOB", "BOB", "EZHN", "BOB"};
    vector<string> bossName = {"JDYWNIW", "*", "WGPK", "*", "JDYWNIW", "BUITYHJVVF", "*", "BOB", "EZHN", "BOB", "JDYWNIW", "BOB", "BUITYHJVVF", "BOB", "*", "*", "*", "*", "*", "BOB", "*", "*", "*", "*", "BOB", "BOB", "BOB", "WGPK", "BOB", "*", "BOB", "*", "BUITYHJVVF", "BOB", "*", "WGPK", "BOB", "WGPK", "BOB", "*", "JDYWNIW"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TNDAITCMQS", "OKJEDV", "BOB", "SNFH", "GHQRM", "MRIQMCSA", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "YFBRBG", "BOB", "NSJ", "ZICKPZPN", "BOB", "BOB", "BOB", "AUYGJKUXX", "BOB", "BOB", "BOB", "VLXN", "ABNIOC", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"YFBRBG", "MRIQMCSA", "BOB", "AUYGJKUXX", "BOB", "ZICKPZPN", "SNFH", "OKJEDV", "SNFH", "VLXN", "*", "YFBRBG", "OKJEDV", "NSJ", "OKJEDV", "*", "*", "YFBRBG", "MRIQMCSA", "NSJ", "NSJ", "ZICKPZPN", "VLXN", "BOB", "BOB", "TNDAITCMQS", "BOB", "TNDAITCMQS", "*", "BOB", "BOB", "OKJEDV", "*", "BOB", "*", "BOB", "GHQRM"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> name = {"BOB", "BOB", "BOB", "MNGBEGHP", "BOB", "BOB", "ZOO", "BOB", "BOB", "BOB", "TQPMDA", "CMXLPKE", "BOB", "BOB", "LPYZEO", "BOB", "BOB", "BOB", "BOB", "NES", "PNA", "BOB", "BOB", "BOB", "BOB", "BOB", "SDIIOTDL", "IHVAVZW", "BOB", "BOB", "BOB", "BOB", "AWXHJRWX", "BOB", "ZZEZZV", "BOB", "XEHYGIXB", "PCEBSE", "QZFQUEZH", "BOB", "OZUGZU", "XVPFXEBY", "BOB", "BOB", "BOB", "QBILIRF"};
    vector<string> bossName = {"LPYZEO", "IHVAVZW", "*", "SDIIOTDL", "PCEBSE", "IHVAVZW", "SDIIOTDL", "BOB", "XVPFXEBY", "LPYZEO", "OZUGZU", "IHVAVZW", "PNA", "*", "BOB", "NES", "ZOO", "BOB", "BOB", "PCEBSE", "QBILIRF", "XVPFXEBY", "MNGBEGHP", "AWXHJRWX", "OZUGZU", "QBILIRF", "NES", "*", "BOB", "XEHYGIXB", "XVPFXEBY", "*", "IHVAVZW", "BOB", "AWXHJRWX", "NES", "OZUGZU", "SDIIOTDL", "PCEBSE", "IHVAVZW", "LPYZEO", "*", "NES", "LPYZEO", "SDIIOTDL", "CMXLPKE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "DNKOMZ", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "TQZEK", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "*", "*", "*", "BOB", "TQZEK", "*", "BOB", "BOB", "DNKOMZ", "DNKOMZ", "BOB", "BOB", "*", "*", "TQZEK", "DNKOMZ", "BOB", "BOB", "*", "BOB", "*", "*", "DNKOMZ", "BOB", "DNKOMZ", "BOB", "DNKOMZ", "DNKOMZ", "*", "BOB", "*", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> name = {"SUOPOSDHPY", "NLPKTPTHGK", "KAFUH", "QRQWQ", "FHQHFCVL", "VDKMKF", "IWA", "WNCP", "CLD", "DUJ", "SMTVD", "NZBB", "PXAUHF", "PBAXYODOLD", "WLDYIVUKMJ", "MUS", "NFP", "CIMY", "PNOJ", "BMTCP", "EWUV", "ADTQQYZJ", "IHPGHHTBFE", "HGNG", "PHIEQO", "CHBMTIXOSP", "CPEHXDFVDW", "CYDTEIEQ", "ZYRPLPWFU", "HSCA", "VCPIXGPC", "WMHUDVU", "THVDBOQFCB", "BOB", "GSRIGHSVX", "UVZFOY", "EFELWGHNU", "QCQQPKE", "ANQXAZNLW", "BXCT", "SWETSH", "VZXTIZXXD"};
    vector<string> bossName = {"CLD", "WLDYIVUKMJ", "IWA", "PXAUHF", "VDKMKF", "NFP", "BOB", "CHBMTIXOSP", "WNCP", "PNOJ", "PBAXYODOLD", "GSRIGHSVX", "MUS", "DUJ", "ADTQQYZJ", "FHQHFCVL", "HSCA", "NZBB", "QCQQPKE", "SUOPOSDHPY", "QRQWQ", "HGNG", "ZYRPLPWFU", "BMTCP", "CPEHXDFVDW", "EFELWGHNU", "BXCT", "KAFUH", "SWETSH", "PHIEQO", "WMHUDVU", "CIMY", "VCPIXGPC", "*", "NLPKTPTHGK", "EWUV", "UVZFOY", "IHPGHHTBFE", "SMTVD", "ANQXAZNLW", "CYDTEIEQ", "THVDBOQFCB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> name = {"JYOECO", "BOB", "KDVZ", "EZXAKD", "BJZXEPKHI", "RAYINCEU", "CMUZWJS", "ZEXBYBBPTM", "BBBZR", "DMOJ", "DGCOVW", "NYXCGPWSTG", "FPZZJ", "JPHAFM", "PTRXC", "SLTJGOU", "SBOP", "YXJWWVAZM", "VFVGRFBW", "YJUKI", "SZUQH", "HTASCBGPPT", "ZTNK", "VGMSRTQME", "MFJSBCOLY", "ICB", "WBRLHZNXHY", "DVQXVKCZL", "KDUOIB", "GEYVYTF", "SNUXNL", "FJIEQH", "LZLEK", "BRAEHNDII", "AILBLNGA", "BWACIGBYAQ", "HYY", "VLEYNBFE", "HXEBUR"};
    vector<string> bossName = {"VGMSRTQME", "*", "SBOP", "RAYINCEU", "NYXCGPWSTG", "SZUQH", "BOB", "MFJSBCOLY", "ZEXBYBBPTM", "BBBZR", "JPHAFM", "PTRXC", "BRAEHNDII", "ICB", "VLEYNBFE", "HXEBUR", "YJUKI", "GEYVYTF", "BJZXEPKHI", "LZLEK", "HYY", "YXJWWVAZM", "DGCOVW", "BWACIGBYAQ", "KDUOIB", "DMOJ", "DVQXVKCZL", "HTASCBGPPT", "EZXAKD", "KDVZ", "FJIEQH", "ZTNK", "CMUZWJS", "SNUXNL", "VFVGRFBW", "WBRLHZNXHY", "JYOECO", "FPZZJ", "AILBLNGA"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> name = {"BESGNI", "AAVB", "FWZ", "MOQZPCXTHN", "RKTVDTY", "HDZKDTPXN", "SVDRBMZI", "XERZLIYT", "MGSVAT", "ZRO", "TPA", "SVWEATA", "BND", "SSCZ", "VUVEMK", "RZCL", "ZAWQIVXEGH", "JGJHYON", "LGUBLZ", "YDLWR", "QIZHVVAJSZ", "RZEW", "BOB", "AUJM", "RTNV", "MBXNSDPONL", "NOOK", "YXMXMZR", "MPILQOJ", "QORAKFYRY", "OEVY", "CIE", "BQCS", "XTYXLA", "VURHQM", "UUSSN", "PSTAU", "HGDUR", "TENSPRBD", "MYKHZ", "CCAX", "DRVKTQ", "NERVTBG"};
    vector<string> bossName = {"RZEW", "UUSSN", "SVWEATA", "NERVTBG", "AUJM", "QIZHVVAJSZ", "JGJHYON", "FWZ", "DRVKTQ", "VURHQM", "OEVY", "YDLWR", "CCAX", "BQCS", "TENSPRBD", "BESGNI", "MPILQOJ", "YXMXMZR", "MGSVAT", "RZCL", "QORAKFYRY", "HDZKDTPXN", "*", "HGDUR", "TPA", "SSCZ", "MBXNSDPONL", "AAVB", "NOOK", "MOQZPCXTHN", "LGUBLZ", "XERZLIYT", "BND", "RTNV", "VUVEMK", "ZRO", "MYKHZ", "SVDRBMZI", "CIE", "ZAWQIVXEGH", "BOB", "RKTVDTY", "PSTAU"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> name = {"RLRH", "MCHWQ", "WWAQIGSTT", "BOB", "MFK", "YVXEEG", "SJSHCE", "ORXJOSK", "CPADO", "VOYBIGLZTA", "YKM", "ALIDGCZ", "FNZNAZFNGO", "ZSLXPBXH", "FZSRSZVD", "MHNMIRUHK", "WTFNO", "FLOOGB", "JFPFDHVZF", "KWLAN", "GTSEEJSHUF", "JCY", "APR", "HMJUNUXOXI", "RWFNOZX", "DBCR", "CSKKZHBTFY", "DTU", "QEW", "ZYGQQHSX", "XANKCI", "TGVVAJWI", "HVSAYOJ", "TTXRD", "ILUN", "LVKIS", "TRSJAZNM", "EAUTGJQYCB", "QZKWDYPDSF", "RNOSAJPSRF", "YXQV", "ENZYPGEFKO", "TBYIIFJKKS", "LXMMHOHJ", "DGRQMQCMX", "UURFZ", "VGKSVUSECT", "NWZZ", "BFNX", "IRGTNRGRG"};
    vector<string> bossName = {"TRSJAZNM", "YVXEEG", "BFNX", "*", "GTSEEJSHUF", "BOB", "WTFNO", "SJSHCE", "DTU", "HMJUNUXOXI", "APR", "ILUN", "CPADO", "JFPFDHVZF", "LXMMHOHJ", "JCY", "YXQV", "ZSLXPBXH", "HVSAYOJ", "LVKIS", "TTXRD", "DBCR", "RWFNOZX", "RNOSAJPSRF", "MCHWQ", "VOYBIGLZTA", "RLRH", "QEW", "KWLAN", "XANKCI", "TGVVAJWI", "WWAQIGSTT", "ORXJOSK", "ZYGQQHSX", "MHNMIRUHK", "QZKWDYPDSF", "NWZZ", "IRGTNRGRG", "VGKSVUSECT", "YKM", "FZSRSZVD", "TBYIIFJKKS", "CSKKZHBTFY", "UURFZ", "EAUTGJQYCB", "ALIDGCZ", "DGRQMQCMX", "FLOOGB", "FNZNAZFNGO", "ENZYPGEFKO"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> name = {"HCN", "BOB", "IOSAJ", "JUINRXAE", "CYZJWL", "ZMYHRPBIRV", "IKUAPXO", "FYASV", "VLUFOPUTZ", "UDHAQCYFY", "WBLP", "CEDDWNNNM", "PZPIPJL", "MKY", "QQNUQTCMUD", "YLHHEHONRU", "DEDUXEDT", "GYHKYTIZ", "ARMJIUE", "JFOIQCZD", "MWSCE", "IXIM", "UHBOGPBNJ", "HIK", "OPUFFOXCSZ", "PQWCDZZG", "LUYR", "UQMZ", "MWSBVSYROE", "YXTNNIIE", "NUKNW", "HPYMOARWYB", "WSWCFDE", "TOI", "ENURJN", "LLTCPPHG", "HMDO", "GPKOP", "ECZSVRTK", "DXSVEZI", "OOXRYUXFT", "QQKVDVAUEJ", "GTBXKQTHG", "NFYLMNDGQ", "VMPZBXBMKW", "BKDFPL", "KIMBCGMS", "YYUTI", "VEXRRN", "YUPKPIBZ"};
    vector<string> bossName = {"MWSCE", "*", "IXIM", "WSWCFDE", "UDHAQCYFY", "VMPZBXBMKW", "HIK", "GYHKYTIZ", "ZMYHRPBIRV", "ARMJIUE", "YLHHEHONRU", "LUYR", "YUPKPIBZ", "TOI", "FYASV", "KIMBCGMS", "JFOIQCZD", "QQKVDVAUEJ", "BKDFPL", "VLUFOPUTZ", "OPUFFOXCSZ", "LLTCPPHG", "GPKOP", "QQNUQTCMUD", "WBLP", "IOSAJ", "VEXRRN", "NFYLMNDGQ", "UHBOGPBNJ", "YYUTI", "YXTNNIIE", "DXSVEZI", "HMDO", "MWSBVSYROE", "CYZJWL", "DEDUXEDT", "PZPIPJL", "HPYMOARWYB", "HCN", "NUKNW", "PQWCDZZG", "ENURJN", "MKY", "OOXRYUXFT", "ECZSVRTK", "BOB", "GTBXKQTHG", "IKUAPXO", "JUINRXAE", "UQMZ"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> name = {"SIZ", "RQDL", "WJKQE", "YJSJ", "BRKGI", "RJZS", "ZLJMZ", "LVLFWDFRXV", "CSNOG", "GHUINT", "IWOKIBXH", "TJZW", "GIFRUXHEAB", "VHZNDSIKN", "BOB", "UEERGKZI", "IMIFATQXI", "YPGCFZC", "FDJGLHB", "BWC", "LBRFYAE", "EAEZC", "DHPOS", "UATYUAWSD", "FYIDQI", "ERSZHRIBH", "BDIYCGCP", "ISGPVRLDX", "TXMT", "AACMYM", "AWED", "HNDREN", "YWD", "RJEHABYIYN", "YYGBBQ", "XKCKG", "CGQPSVAVB", "OEHPJHGBAZ", "MLT", "LCYCWDORS", "TNXN", "FTEFPZTR", "KFGWQHEUDS", "WSERNNEDLE", "UIKZE", "FLZOVLE", "UPYUORPLT", "WSC", "PUBKDFQGJE", "ISCXPYVJ"};
    vector<string> bossName = {"BRKGI", "LCYCWDORS", "MLT", "RJEHABYIYN", "KFGWQHEUDS", "UEERGKZI", "YYGBBQ", "UPYUORPLT", "VHZNDSIKN", "LVLFWDFRXV", "BOB", "CGQPSVAVB", "UIKZE", "WSC", "*", "OEHPJHGBAZ", "AWED", "FYIDQI", "HNDREN", "WSERNNEDLE", "FLZOVLE", "LBRFYAE", "GIFRUXHEAB", "RJZS", "UATYUAWSD", "PUBKDFQGJE", "TXMT", "FTEFPZTR", "ISCXPYVJ", "SIZ", "RQDL", "ZLJMZ", "BDIYCGCP", "BWC", "CSNOG", "TJZW", "IMIFATQXI", "IWOKIBXH", "ISGPVRLDX", "FDJGLHB", "XKCKG", "YWD", "EAEZC", "GHUINT", "AACMYM", "WJKQE", "ERSZHRIBH", "YJSJ", "YPGCFZC", "TNXN"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "*", "*", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "*", "BOB", "*", "*", "*", "*", "*", "*", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "*", "*", "*", "*", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "*", "*", "*", "*", "*", "BOB", "*", "*", "BOB", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "*", "BOB", "*", "BOB", "*", "*", "*", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "BOB", "*", "*", "BOB", "*", "*", "*", "BOB", "*", "*", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "*", "*", "*", "BOB", "*", "BOB", "*", "*", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "*", "*", "*", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "BOB", "*", "BOB", "*", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "*", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "*", "*", "*", "BOB", "BOB", "*", "BOB", "*", "*", "*", "*", "*", "BOB", "*", "*", "BOB", "*", "*", "BOB", "*", "BOB", "*", "BOB", "*", "*", "*", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "BOB", "*", "BOB", "BOB", "BOB", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "*", "*", "BOB", "*", "*", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "*", "*", "*", "BOB", "*", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "*", "*", "BOB", "BOB", "*", "*", "*", "*", "*", "BOB", "*", "*", "BOB", "BOB", "*", "BOB", "BOB", "*", "BOB", "*", "*", "BOB", "*", "BOB", "*", "*", "*", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "*", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> name = {"BOB", "BOB", "BOB", "NPV", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ACGLSTY", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "XXDMR", "BOB", "BOB", "BOB", "BOB", "BOB", "RXTQFSCRS", "BOB", "BOB", "BOB", "BOB", "BOB", "VUHMLS", "VMNL", "BOB", "BOB", "BOB", "BOB", "BOB", "TAIGOVXGWK"};
    vector<string> bossName = {"BOB", "XXDMR", "VUHMLS", "VMNL", "BOB", "*", "*", "*", "*", "NPV", "ACGLSTY", "BOB", "BOB", "BOB", "BOB", "TAIGOVXGWK", "VUHMLS", "*", "*", "BOB", "*", "*", "VUHMLS", "XXDMR", "NPV", "BOB", "*", "RXTQFSCRS", "NPV", "NPV", "BOB", "*", "XXDMR", "*", "*", "NPV", "*", "BOB", "*", "ACGLSTY", "BOB", "RXTQFSCRS", "BOB", "NPV", "XXDMR", "BOB", "*", "XXDMR", "VMNL"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "OISMYDH", "BOB"};
    vector<string> bossName = {"BOB", "*", "*", "*", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> name = {"BOB", "HIPSZNJA", "AWVRFOWC", "BOB", "XZNRXTJOO"};
    vector<string> bossName = {"AWVRFOWC", "BOB", "BOB", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> name = {"KYD", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "ENZMF"};
    vector<string> bossName = {"ENZMF", "*", "BOB", "KYD", "BOB", "BOB", "BOB", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> name = {"BWEJ", "SNOMYTBX", "BIYJLXPMK", "BOB", "AEQC", "BOB", "BOB", "PGO", "TPURDJD", "FWKO", "RCBJG", "XXMIUUX", "QFOLEZH", "BOB", "FBZYKIWHA"};
    vector<string> bossName = {"QFOLEZH", "*", "PGO", "*", "*", "BWEJ", "TPURDJD", "BIYJLXPMK", "PGO", "*", "BIYJLXPMK", "FWKO", "BIYJLXPMK", "BIYJLXPMK", "TPURDJD"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> name = {"JKQ", "MQOOILU", "JLQMIZ", "BOB", "BOB", "BOB", "ONMIQV"};
    vector<string> bossName = {"*", "*", "*", "*", "JLQMIZ", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> name = {"BOB", "BOB", "SJS", "BOB", "KIN", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "SEYJWXLQV", "BOB"};
    vector<string> bossName = {"*", "SJS", "SEYJWXLQV", "KIN", "SJS", "*", "SJS", "BOB", "SEYJWXLQV", "BOB", "BOB", "BOB", "SJS", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> name = {"VKP", "ZZDG", "DNFQG", "BOB", "BOB", "FWG", "BOB", "BOB", "JEACLKYKFN", "PDJXZPJ", "QVMLWCN", "BOB"};
    vector<string> bossName = {"*", "ZZDG", "JEACLKYKFN", "BOB", "PDJXZPJ", "JEACLKYKFN", "ZZDG", "BOB", "QVMLWCN", "*", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> name = {"BOB", "PQSSCNRGN", "BJJAQRZIF", "XJXMD", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BJJAQRZIF", "*", "XJXMD", "BJJAQRZIF", "XJXMD", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> name = {"PQYPPWBD", "WNLLARU", "BOB", "BOB", "ZUI", "FCC", "EYYKSQGO"};
    vector<string> bossName = {"*", "WNLLARU", "ZUI", "*", "ZUI", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> name = {"ORRLTMJ", "BOB", "DZKLFFNGV", "BSNLBSL", "BOB", "NDXARK", "LAPN", "XTMI", "KTPKNU", "FOGFHNNO", "BAB", "ZISXWDHGL", "BOB"};
    vector<string> bossName = {"XTMI", "NDXARK", "*", "*", "BOB", "FOGFHNNO", "ZISXWDHGL", "NDXARK", "NDXARK", "DZKLFFNGV", "FOGFHNNO", "DZKLFFNGV", "DZKLFFNGV"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> name = {"HFWU", "OCS", "LCATLKL", "NZPYFXDOJ", "OUTMH", "WGSMYAMM", "NMETYFBAC", "BOB", "QMEK", "OEFNR", "FYFXHMR", "XABO", "BOB", "BFO", "XRIBFYDN"};
    vector<string> bossName = {"OUTMH", "*", "NZPYFXDOJ", "WGSMYAMM", "*", "XRIBFYDN", "FYFXHMR", "BOB", "OUTMH", "OEFNR", "*", "XABO", "OUTMH", "NMETYFBAC", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> name = {"LULREEHI", "XGZJKFTTU", "BOB", "UTQOP", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "*", "*", "UTQOP", "BOB", "*", "BOB", "BOB", "XGZJKFTTU", "*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> name = {"A", "BOB", "B", "BOB", "BOB", "BOB", "BOB", "BOB", "C", "BOB"};
    vector<string> bossName = {"*", "A", "A", "BOB", "BOB", "BOB", "BOB", "B", "B", "C"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> name = {"BOB", "A"};
    vector<string> bossName = {"*", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> name = {"RADIUM", "YING"};
    vector<string> bossName = {"YING", "RADIUM"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> name = {"BOB", "BOB", "BOB", "A", "B", "C", "D", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "A", "D", "BOB", "C", "D", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> name = {"ALICE", "JANE"};
    vector<string> bossName = {"JANE", "ALICE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> name = {"A", "B", "C", "D"};
    vector<string> bossName = {"*", "*", "A", "B"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> name = {"JACK", "KATE"};
    vector<string> bossName = {"KATE", "JACK"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> name = {"A", "B", "C", "D"};
    vector<string> bossName = {"B", "C", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "FRED"};
    vector<string> bossName = {"*", "*", "BOB", "FRED", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> name = {"ALICE"};
    vector<string> bossName = {"ALICE"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> name = {"A", "B", "C", "D", "E", "F", "G", "H", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "*", "A", "BOB", "BOB", "C", "BOB", "F", "BOB", "BOB", "*", "BOB", "*", "G"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> name = {"JACK", "ANN"};
    vector<string> bossName = {"ANN", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> name = {"A", "B", "C"};
    vector<string> bossName = {"*", "C", "B"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> name = {"BOB", "C", "BOB", "D"};
    vector<string> bossName = {"C", "BOB", "D", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> name = {"Y", "BOB", "X", "BOB", "Z", "M", "O"};
    vector<string> bossName = {"*", "Y", "BOB", "X", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> name = {"BOB", "BOB", "Z", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "A", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "E", "BOB", "BOB", "BOB", "M", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "*", "BOB", "BOB", "*", "BOB", "Z", "BOB", "*", "BOB", "BOB", "BOB", "BOB", "BOB", "A", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "E", "BOB", "BOB", "*", "BOB", "BOB", "M", "BOB", "BOB", "*", "BOB", "BOB", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> name = {"BOB", "JACK", "TOMEK", "BOB", "SNAP"};
    vector<string> bossName = {"JACK", "TOMEK", "BOB", "JACK", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> name = {"A"};
    vector<string> bossName = {"*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> name = {"BOB", "ALICE", "BOB", "BOB"};
    vector<string> bossName = {"ALICE", "BOB", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> name = {"A", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "A", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> name = {"BOB", "A", "B", "BOB"};
    vector<string> bossName = {"A", "BOB", "BOB", "B"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> name = {"BOB", "JACK", "KATE"};
    vector<string> bossName = {"*", "BOB", "JACK"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> name = {"BOB", "A"};
    vector<string> bossName = {"A", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> name = {"BOB", "A", "B"};
    vector<string> bossName = {"A", "B", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> name = {"BOB", "BOB", "BOB", "JACK", "FRED"};
    vector<string> bossName = {"FRED", "JACK", "BOB", "BOB", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> name = {"JACK", "ANN", "MIKE"};
    vector<string> bossName = {"ANN", "JACK", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> name = {"JACK"};
    vector<string> bossName = {"*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> name = {"A", "B", "BOB", "J", "D", "K", "C", "BOB"};
    vector<string> bossName = {"B", "C", "BOB", "D", "K", "J", "*", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> name = {"A", "B", "C", "D"};
    vector<string> bossName = {"B", "C", "D", "A"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> name = {"A", "B", "C"};
    vector<string> bossName = {"B", "A", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> name = {"A", "B", "C", "D", "E", "F", "G"};
    vector<string> bossName = {"B", "C", "*", "C", "D", "A", "E"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> name = {"BOB", "Q", "W", "BOB", "E", "R"};
    vector<string> bossName = {"Q", "W", "BOB", "E", "R", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> name = {"A", "BOB", "BOB"};
    vector<string> bossName = {"BOB", "A", "*"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> name = {"BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB", "BOB"};
    vector<string> bossName = {"*", "BOB", "BOB", "BOB", "BOB", "*", "BOB", "BOB", "*", "*", "BOB", "BOB"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> name = {"A", "B"};
    vector<string> bossName = {"B", "A"};
    BobTrouble* pObj = new BobTrouble();
    clock_t start = clock();
    int result = pObj->minSupers(name, bossName);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=9813&pm=6016
********************************************************************************
# include <algorithm> 
# include <bitset> 
# include <cassert> 
# include <cctype> 
# include <cmath> 
# include <complex> 
# include <cstdio> 
# include <cstdlib> 
# include <cstring> 
# include <ctime> 
# include <deque> 
# include <functional> 
# include <iostream> 
# include <iterator> 
# include <list> 
# include <map> 
# include <numeric> 
# include <queue> 
# include <set> 
# include <sstream> 
# include <stack> 
# include <string> 
# include <valarray> 
# include <vector> 
# include <utility> 
 
using namespace std ; 
 
// Types 
typedef long double ld ; 
typedef long long ll ; 
typedef pair < int , int > pii ; 
typedef vector < int > vi ; 
typedef vector < pii > vp ; 
typedef vector < ld > vd ; 
typedef vector < string > vs ; 
typedef vector < bool > vb ; 
typedef queue < pii > qp ; 
typedef map < string , int > msi ; 
 
// Constants 
const int INF = 1000000000 ; 
const ld EPS = 1e-10L ; 
const ld PI = 3.14159265358979L ; 
 
class BobTrouble 
{ 
// Global 
 
// Functions 
public : 
  int minSupers ( vector <string> nm , vector <string> bn ) 
  { 
    int res = 0 ; 
    int n = nm . size ( ) ; 
    set < string > good ; 
    queue < string > q ; 
    q . push ( "*" ) ; 
    while ( q . size ( ) ) 
    { 
      string cur = q . front ( ) ; 
      q . pop ( ) ; 
      for ( int i = 0 ; i < n ; ++ i ) 
      { 
        if ( bn [ i ] == cur && good . find ( nm [ i ] ) == good . end ( ) ) 
        { 
          q . push ( nm [ i ] ) ; 
          good . insert ( nm [ i ] ) ; 
        } 
      } 
    } 
    for ( int i = 0 ; i < n ; ++ i ) 
    { 
      if ( good . find ( nm [ i ] ) == good . end ( ) ) 
        return - 1 ; 
    } 
    set < string > ans ; 
    for ( int i = 0 ; i < n ; ++ i ) 
      ans . insert ( bn [ i ] ) ; 
    return ans . size ( ) - 1 ; 
  } 
   
 
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.1 [28-Sep-2005]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/