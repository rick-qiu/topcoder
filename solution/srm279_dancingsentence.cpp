/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5950
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

class DancingSentence {
public:
    string makeDancing(string sentence);
};

string DancingSentence::makeDancing(string sentence) {
    string ret;
    return ret;
}


int test0() {
    string sentence = "This is a dancing sentence";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "ThIs Is A dAnCiNg SeNtEnCe";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sentence = " This is a dancing sentence ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " ThIs Is A dAnCiNg SeNtEnCe ";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sentence = "aaaaaaaaaaa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAaAaAaAaA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sentence = "z";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Z";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sentence = " a";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " A";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sentence = " A";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " A";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sentence = "a ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "A ";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sentence = "A ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "A ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sentence = " z ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Z ";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sentence = " Z ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Z ";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sentence = " z ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Z ";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sentence = " Z ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Z ";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string sentence = "r";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sentence = "R";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "R";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sentence = "rr";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Rr";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sentence = "rR";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Rr";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sentence = "Rr";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Rr";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sentence = "RR";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Rr";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sentence = "RRR";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "RrR";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sentence = "FMzLNyIR FeOdTaKBzPIkple hrVtuwR d kmXfBSGRazmtJC";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "FmZlNyIr FeOdTaKbZpIkPlE hRvTuWr D kMxFbSgRaZmTjC";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sentence = "fl dFnxhBkmvUh";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Fl DfNxHbKmVuH";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sentence = "FciDhA EjJZVsg DClylMYvJ BxXQuw fD CeYx spbZ h";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "FcIdHa EjJzVsG dClYlMyVj BxXqUw Fd CeYx SpBz H";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sentence = "CqEgtDu IGeEuci";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "CqEgTdU iGeEuCi";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sentence = "tY eycWSY Oqpz ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Ty EyCwSy OqPz ";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sentence = "tLJvR yraZDPyQQHc";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "TlJvR yRaZdPyQqHc";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sentence = "cplwPppFIUvhCHCaTFmdVHAf";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "CpLwPpPfIuVhChCaTfMdVhAf";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sentence = "jAfWhqgQtXGFsnSHOm mGNeiGAg njekasM ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "JaFwHqGqTxGfSnShOm MgNeIgAg NjEkAsM ";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sentence = "lkrBYRZ hHsCR SzI teDjiIFyc IYGyUZY nc EbntX";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "LkRbYrZ hHsCr SzI tEdJiIfYc IyGyUzY nC eBnTx";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sentence = " HDUehUGk xZgOcXOulrYScFm VDLB DiWV";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " HdUeHuGk XzGoCxOuLrYsCfM vDlB dIwV";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string sentence = "IEHAQBFfRHkK";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "IeHaQbFfRhKk";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string sentence = "Vy RGSpMfdMOiXEg uit";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Vy RgSpMfDmOiXeG uIt";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string sentence = "qoqLvbzjchYfoPcxUeCxE ahzFXHhamP";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "QoQlVbZjChYfOpCxUeCxE aHzFxHhAmP";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string sentence = "FbOB jQ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "FbOb Jq";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string sentence = "NZ PtdorzsNHBXMsByJoWSOkooj ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Nz PtDoRzSnHbXmSbYjOwSoKoOj ";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string sentence = "RolkeHaljRxEAp ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "RoLkEhAlJrXeAp ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string sentence = " D";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " D";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string sentence = "wuo shHkN RkC";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "WuO sHhKn RkC";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string sentence = "zECJAdUg orH";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "ZeCjAdUg OrH";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string sentence = "zc xMTQjbMBmsjhIBOe nwXcEjBYrRIs";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Zc XmTqJbMbMsJhIbOe NwXcEjByRrIs";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string sentence = "CQmBJQDaGvLczgvSg";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "CqMbJqDaGvLcZgVsG";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string sentence = "kDRrUycYCOdTYIZnW e yS";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "KdRrUyCyCoDtYiZnW e Ys";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string sentence = "k wqDnDXnZJr MtQukHYdbPHrysouZpWamZWhHhrDTDYgv";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "K wQdNdXnZjR mTqUkHyDbPhRySoUzPwAmZwHhHrDtDyGv";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string sentence = "DBSaisvXBynGeuKI fwYhpsQQd";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "DbSaIsVxByNgEuKi FwYhPsQqD";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string sentence = "POLZJbV";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "PoLzJbV";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string sentence = "vJvGQh kNhICqq cWixJ ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "VjVgQh KnHiCqQ cWiXj ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string sentence = "ASaEKYuJenWbYPRTMmiEDiEHuhjpwm Px";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AsAeKyUjEnWbYpRtMmIeDiEhUhJpWm Px";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string sentence = "rLx pDLA RxdMQK q kyKztZ XltV lCWmkPBuTREDnyOnp ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "RlX pDlA rXdMqK q KyKzTz XlTv LcWmKpBuTrEdNyOnP ";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string sentence = "WQas WddOmc";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "WqAs WdDoMc";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string sentence = "kFuhwcoPPBPzDd QrhOwspBZc QhBM d";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "KfUhWcOpPbPzDd QrHoWsPbZc QhBm D";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string sentence = "L yiy n OFQ I Gqee Z Zm loKXf";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "L yIy N oFq I gQeE z Zm LoKxF";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string sentence = "O FJ kIr X E yuk ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "O fJ kIr X e YuK ";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string sentence = "diI k r BM QJ c fd G x A PW";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "DiI k R bM qJ c Fd G x A pW";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string sentence = "dn ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Dn ";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string sentence = "W MLs L II Gq syR p NB UF x U jd U E FJ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "W mLs L iI gQ sYr P nB uF x U jD u E fJ";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string sentence = "J Nks qZ PDYqb z O w L w ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "J nKs Qz PdYqB z O w L w ";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string sentence = " SXq oCvr c Z m ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " SxQ oCvR c Z m ";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string sentence = " nRal yOZ gc m DhIrL OlX";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " NrAl YoZ gC m DhIrL oLx";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string sentence = " e HD i Vl o A lC Au ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " E hD i Vl O a Lc Au ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string sentence = " t s eJnFo HKF C k K XftjQY ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " T s EjNfO hKf C k K xFtJqY ";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string sentence = "EdNns q";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "EdNnS q";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string sentence = " C yqdO";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " C yQdO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string sentence = " p h ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " P h ";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string sentence = " d w i K h M C HH iI p Cv X Xba BN f ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " D w I k H m C hH iI p Cv X xBa Bn F ";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string sentence = "x z z E B icGr hlWQ W QoRr I";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "X z Z e B iCgR hLwQ w QoRr I";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string sentence = "G w s Mgf l t vc AZZw K";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "G w S mGf L t Vc AzZw K";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string sentence = "n l rCQLD ZUunPH D VdfU do X a ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "N l RcQlD zUuNpH d VdFu Do X a ";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string sentence = "vv U SQ iQGg B xGG Eij A aB Y S fq";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Vv U sQ iQgG b XgG eIj A aB y S fQ";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string sentence = " RzE kr F v l nh q f ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " RzE kR f V l Nh Q f ";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string sentence = " X dZz dK QJ e qjL ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " X dZz Dk Qj E qJl ";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string sentence = "CC uL Y jM";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Cc Ul Y jM";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string sentence = "j yQ bJ t KaM wg ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "J yQ bJ t KaM wG ";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string sentence = " j C t sB B ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " J c T sB b ";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string sentence = " l D";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " L d";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string sentence = "f i W b q D Dxs V pF b vLJ Vikh ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "F i W b Q d DxS v Pf B vLj ViKh ";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string sentence = " chh N ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " ChH n ";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string sentence = " gYsN ibj pLMB qg g ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " GySn IbJ pLmB qG g ";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string sentence = " a exQGG lTAdZX R Xsy c U cT TM M";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " A eXqGg LtAdZx R xSy C u Ct Tm M";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string sentence = "eA mpr H V N N qH ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Ea MpR h V n N qH ";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string sentence = "r z u T";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "R z U t";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string sentence = " This is a dancing sentence ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " ThIs Is A dAnCiNg SeNtEnCe ";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string sentence = "abc";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AbC";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string sentence = "aaaaaaaaaaa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAaAaAaAaA";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string sentence = "ZZ";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Zz";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string sentence = " this is a dancing sentence";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " ThIs Is A dAnCiNg SeNtEnCe";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string sentence = " a";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " A";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string sentence = "AAA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaA";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string sentence = "XXX";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "XxX";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string sentence = "a aa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "A aA";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string sentence = "The quick brown fox jumped over the lazy dog";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "ThE qUiCk BrOwN fOx JuMpEd OvEr ThE lAzY dOg";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string sentence = "a a a a a a a a a";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "A a A a A a A a A";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string sentence = " a S S S aaa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " A s S s AaA";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string sentence = "aA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Aa";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string sentence = "AAAAA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAaA";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string sentence = "aaaaaaaaaaaaaaaaa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAaAaAaAaAaAaAaA";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string sentence = "aB";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Ab";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string sentence = "fgfdsgdfg";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "FgFdSgDfG";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string sentence = "ab";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Ab";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string sentence = "A b";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "A b";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string sentence = " Z Z Z Z";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Z z Z z";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string sentence = "z z";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Z z";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string sentence = " Aa";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " Aa";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string sentence = "AB";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "Ab";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string sentence = "AAAA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAa";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string sentence = "BBBBBBBBBB";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "BbBbBbBbBb";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string sentence = "AAaA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAa";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string sentence = "DGDFSGDFSGDF";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "DgDfSgDfSgDf";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string sentence = "AAAAAA";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AaAaAa";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string sentence = " tHiS is wrong";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = " ThIs Is WrOnG";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string sentence = "Abc";
    DancingSentence* pObj = new DancingSentence();
    clock_t start = clock();
    string result = pObj->makeDancing(sentence);
    clock_t end = clock();
    delete pObj;
    string expected = "AbC";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=8076&pm=5950
********************************************************************************
#include <algorithm> 
#include <iostream> 
#include <sstream> 
#include <string> 
#include <vector> 
#include <queue> 
#include <set> 
#include <map> 
#include <cstdio> 
#include <cstdlib> 
#include <cctype> 
#include <cmath> 
#include <list> 
#include <regex.h>  
using namespace std; 
 
// LIB CODE 
#define VAR(a,b) __typeof(b) a=b 
#define FORIT(it,v) for(VAR(it,(v).begin());it!=(v).end();++(it)) 
// REAL CODE 
 
class DancingSentence { 
public: 
  string makeDancing(string s) { 
    bool up=true; 
    FORIT(i,s) { 
      if(*i==' ') continue; 
      if(up) *i=toupper(*i); else *i=tolower(*i); 
      up=!up; 
    } 
    return s; 
  } 
   
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/