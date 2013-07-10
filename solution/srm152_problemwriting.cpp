/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1763
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

class ProblemWriting {
public:
    string myCheckData(string dotForm);
};

string ProblemWriting::myCheckData(string dotForm) {
    string ret;
    return ret;
}


int test0() {
    string dotForm = "3+5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string dotForm = "9..+.5...*....3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string dotForm = "5.3+4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string dotForm = "9*9*9*9*9*9*9*9*9*9*9*9*9*9";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm must contain between 1 and 25 characters, inclusive.";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string dotForm = "3.........../...........4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string dotForm = "1+2*5../3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string dotForm = "9.....*8..+.3./.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 16.";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string dotForm = "12";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string dotForm = "1-.0-.1-.2-.3-.4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string dotForm = ".3+4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string dotForm = "1.+..................";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 21.";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string dotForm = "1+.2*3-.5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string dotForm = "1*2*2*2+.3.-..4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string dotForm = "2589860";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string dotForm = "2+..20";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 5.";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string dotForm = "20+..2";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string dotForm = "9.20+2";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string dotForm = "1+..4...3*.....9+.............";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm must contain between 1 and 25 characters, inclusive.";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string dotForm = "3+5%8";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 3.";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string dotForm = "(9*9).+..5*9";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string dotForm = "1+1+.....11";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 10.";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string dotForm = "*9";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string dotForm = "3*4*9...W.8";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 8.";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string dotForm = "7*6*5*4+3-9/....5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string dotForm = "4+4=8";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 3.";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string dotForm = "3.../...2..*..4-4.+3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string dotForm = "slkdfsla";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string dotForm = "55";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string dotForm = "5+.++";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 3.";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string dotForm = "5..*..45..*..4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 7.";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string dotForm = "5.3+4";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string dotForm = "1.+...";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 6.";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string dotForm = """";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string dotForm = "1...";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 4.";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string dotForm = "5+";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string dotForm = "5.++.++";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 3.";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string dotForm = "3..*..6../..";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 12.";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string dotForm = "1.-.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 4.";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string dotForm = ".5+3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string dotForm = "9+6.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 4.";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string dotForm = "...+...3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string dotForm = ".1";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string dotForm = "22";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string dotForm = "+";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string dotForm = "3+";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string dotForm = ".";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string dotForm = "5+3.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 4.";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string dotForm = "5......";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 7.";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string dotForm = "9+";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string dotForm = "5...+...";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 8.";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string dotForm = "33...";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string dotForm = ".5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string dotForm = "5+3..";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 5.";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string dotForm = "3/5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string dotForm = "3..*..8..UH/9";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 9.";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string dotForm = "1_";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string dotForm = "5.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string dotForm = "1+";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string dotForm = "..+5";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string dotForm = "5..........+..5++";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 16.";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string dotForm = "1.";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 2.";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string dotForm = "99";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string dotForm = "+6";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string dotForm = "11";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string dotForm = "5....";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 5.";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string dotForm = "..+..3";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string dotForm = "1.+2";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string dotForm = "43543";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 1.";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string dotForm = "9..+..0";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string dotForm = "FOO";
    ProblemWriting* pObj = new ProblemWriting();
    clock_t start = clock();
    string result = pObj->myCheckData(dotForm);
    clock_t end = clock();
    delete pObj;
    string expected = "dotForm is not in dot notation, check character 0.";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=297766&rd=4565&pm=1763
********************************************************************************
// common includes 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <map> 
#include <stdlib.h> 
#include <stdio.h> 
#include <ctype.h> 
using namespace std; 
 
// common typedefs 
typedef vector<string> VS; 
typedef vector<int> VI; 
 
typedef string::iterator SI; 
typedef VS::iterator VSI; 
typedef VI::iterator VII; 
 
// Statements I wish existed 
#define foreach(it, collection) for(typeof(collection.begin()) it = collection.begin(); it != collection.end(); it++) 
#define rforeach(it, collection) for(typeof(collection.rbegin()) it = collection.rbegin(); it != collection.rend(); it++) 
#define sortc(collection) sort(collection.begin(), collection.end()); 
#define rsortc(collection) sort(collection.rbegin(), collection.rend()); 
 
class ProblemWriting 
{ 
public: 
  bool isnum(char c) 
  { 
    return (c>='0') && (c<='9'); 
  } 
 
  bool isop(char c) 
  { 
    return (c=='+') || (c=='-') || (c=='*') || (c=='/'); 
  } 
 
  string errat(int i) 
  { 
    char ch[1000]; 
    sprintf(ch, "dotForm is not in dot notation, check character %d.", i); 
    return string(ch); 
  } 
 
  string myCheckData(string a) 
  { 
    if (a.size() > 25) 
      return string("dotForm must contain between 1 and 25 characters, inclusive."); 
 
    if (!isnum(a[0])) 
      return errat(0); 
 
    bool numnext=true; 
 
    for(int i=0; i<a.size(); i++) 
    { 
      char ch = a[i]; 
      if (numnext && isop(ch)) 
        return errat(i); 
      if (!numnext && isnum(ch)) 
        return errat(i); 
      if (!isop(ch) && !isnum(ch) && ch!='.') 
        return errat(i); 
      if (isop(ch)) 
        numnext=true; 
      if (isnum(ch)) 
        numnext=false; 
    } 
 
    if (!isnum(a[a.size()-1])) 
      return errat(a.size()); 
 
    return string(""); 
  } 
}; 
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/