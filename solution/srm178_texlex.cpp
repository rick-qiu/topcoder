/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2271
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

class TeXLeX {
public:
    vector<int> getTokens(string input);
};

vector<int> TeXLeX::getTokens(string input) {
    vector<int> ret;
    return ret;
}


int test0() {
    string input = "aAbB cd";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 65, 98, 66, 32, 99, 100};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string input = "^^ ^^5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 94};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string input = "^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94, 94};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string input = "^^^5e5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 53, 101, 53, 101};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string input = "^^5e^5e^5e^5e^ abASFs&*^@%#";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 97, 98, 65, 83, 70, 115, 38, 42, 94, 64, 37, 35};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string input = "^^5E ^^40";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117, 69, 32, 64};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string input = "`{^^1^^F53D^^^^^^@^^^^^^^^W^^^^&^^^^S1^^G]^^^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 123, 113, 6, 53, 51, 68, 30, 30, 64, 30, 30, 23, 30, 94, 38, 30, 94, 83, 49, 7, 93, 30, 30, 94, 94};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string input = "^^^^^^^^^^^^^^WT^^H^^^^=^^^^^^^^^^^^^^^^^^^^HMY+^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 30, 23, 84, 8, 30, 94, 61, 30, 30, 30, 30, 30, 30, 8, 77, 89, 43, 94, 94};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string input = "^^^^^^^$Q9^^^^^^^^^^b^^^^^^'^^^^[^^^^^^^^J^^^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 94, 36, 81, 57, 30, 30, 30, 94, 98, 30, 30, 39, 30, 94, 91, 30, 30, 10, 30, 30, 94, 94};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string input = "Z^^]^^hW^^6M^^^^#N^^J^^R=^^^^^^^^^^^^^^^^^^^^V^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 29, 40, 87, 118, 77, 30, 94, 35, 78, 10, 18, 61, 30, 30, 30, 30, 30, 30, 22, 30, 94};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string input = "^^^^^^^^^^^^^^^^^]^^^^^^^^^^^^Ks'^^^^;^^(r^^n^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 30, 30, 29, 30, 30, 30, 30, 75, 115, 39, 30, 94, 59, 104, 114, 46, 30, 94};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string input = "x^^^^;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120, 30, 94, 44, 15, 85, 30, 30, 69, 30, 94, 66, 30, 30, 30, 113, 30, 30, 117, 30, 30, 29};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string input = "^^^^^^^ ^^^^^^^^i^^^^^^^^N^^^^N^^Qv^^o^^^^^^W^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 94, 32, 30, 30, 41, 30, 30, 14, 30, 94, 78, 17, 118, 47, 30, 30, 87, 30, 94};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string input = "(^^O^^^^^^LE^^a^^^^^^^^4g^^a^^;F_^^^^]^^f^^=^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 15, 30, 30, 76, 69, 33, 30, 30, 116, 103, 33, 123, 70, 95, 30, 94, 93, 38, 125, 30, 30};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string input = "^^^^$^^FLz{V^^^^^^^^h^^^^^^^^4V^^/^^^^o^^^^^^^^^^d";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 94, 36, 6, 76, 122, 123, 86, 30, 30, 40, 30, 30, 116, 86, 111, 30, 94, 111, 30, 30, 30, 94, 100};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string input = "^^^^6^^^^^^.j^^^^^^^^^^^^<^^^^^^^^S*^^^^^^K^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 94, 54, 30, 30, 46, 106, 30, 30, 30, 30, 60, 30, 30, 19, 42, 30, 30, 75, 30, 30};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string input = "^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94, 94};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string input = "^^^^^^^^F^^^^^^^^F6^^^^^^^^i^^^^^^G^^g^^^^^^^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 6, 30, 30, 6, 54, 30, 30, 41, 30, 30, 71, 39, 30, 30, 30, 30};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string input = "^^8S^^^^&>^^5^^O^^Y^^^^7^^^^(F^^^^z^^^^^^+;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120, 83, 30, 94, 38, 62, 117, 15, 25, 30, 94, 55, 30, 94, 40, 70, 30, 94, 122, 30, 30, 43, 44, 27, 30, 94};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string input = "mUkD^^^^p^^^^^^^^=^^*^^^^^^J@.$^^7^^ @x^^^^b^^^^3$";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 85, 107, 68, 30, 94, 112, 30, 30, 125, 106, 30, 30, 74, 64, 46, 36, 119, 96, 64, 120, 30, 94, 98, 30, 94, 51, 36};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string input = "^^^^^^^^^^JU x^^^^^^m^^^^^^^^^^6R<^^^^^^97^^L>^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 94, 74, 85, 32, 120, 30, 30, 109, 30, 30, 30, 94, 54, 82, 60, 30, 30, 57, 55, 12, 62, 30, 94};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string input = "^^^^^^^^^^^^^^^^^^^^IIy^^^^!6^^^^^^M^^Q^^+^^w^^5^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 30, 30, 30, 9, 73, 121, 30, 94, 33, 54, 30, 30, 77, 17, 107, 55, 117, 94, 94};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string input = "^^^^^^^^^^^^^^L^^^^^^.^^^^^^^^|^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 30, 12, 30, 30, 46, 30, 30, 60, 94, 94};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string input = "^^^^^Z[?^^^^?^^^^^^(^^O^^^^^^i^^^^^^^^p^^^^4sP^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 26, 91, 63, 30, 94, 63, 30, 30, 40, 15, 30, 30, 105, 30, 30, 48, 30, 94, 52, 115, 80, 30, 94};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string input = "^^=^^^^F^^'^^M^^^^^^t^^^^^^wQ^^*s^^4^^;^^^^^^^^&^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {125, 30, 94, 70, 103, 13, 30, 30, 116, 30, 30, 119, 81, 106, 115, 116, 123, 30, 30, 102, 94, 94};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string input = "^^^^^=^^^^^^^^^^^^^^3^^{^^^^^^^^^^^^^^^^.T^^s^^{^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 125, 30, 30, 30, 30, 115, 59, 30, 30, 30, 30, 30, 94, 46, 84, 51, 59, 94, 94};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string input = "^^S^^i^^x^^W^^^^^^[0^^X^^'^^e(^^^^^^^^^^^^C^^^^Z^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19, 41, 56, 23, 30, 30, 91, 48, 24, 103, 37, 40, 30, 30, 30, 30, 67, 30, 94, 90, 94, 94};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string input = "W^^^^^^8^^7^^^^^^b^^^^S^^^^:^^I^^^^y^^^^^^oQ^^+D^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87, 30, 30, 56, 119, 30, 30, 98, 30, 94, 83, 30, 94, 58, 9, 30, 94, 121, 30, 30, 111, 81, 107, 68, 94, 94};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string input = "^^^^^^bJ&^^O^^^^^^^^^^^^^^^t6[^^h^^^^^^^^[G^^t^^;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 98, 74, 38, 15, 30, 30, 30, 30, 30, 116, 54, 91, 40, 30, 30, 27, 71, 52, 108, 114};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string input = "t^^^^^^N^^^^^^^^Q-aO^^^^Z^^pCD^^^^;Y^^^^7^^^^^^^^j";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 30, 30, 78, 30, 30, 17, 45, 97, 79, 30, 94, 90, 48, 67, 68, 30, 94, 59, 89, 30, 94, 55, 30, 30, 42};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string input = "^^^^W^^^^^^b&^^^^i!^^^^N[^^t^^/^^^^AC^^^^^^9^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 94, 87, 30, 30, 98, 38, 30, 94, 105, 33, 30, 94, 78, 91, 52, 111, 30, 94, 65, 67, 30, 30, 57, 30, 30};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string input = "^^^^^^^^^^^^^^^^^^^7^^b^^1v?^^^^^^?^^7^^^^^^^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 30, 30, 30, 30, 94, 55, 34, 113, 118, 63, 30, 30, 63, 119, 30, 30, 30, 30};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string input = "^^^^^n^^^^!^^>;^^^^B{^^^^^^j^^^^^^^^^^I^^{^^^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 46, 30, 94, 33, 126, 59, 30, 94, 66, 123, 30, 30, 106, 30, 30, 30, 94, 73, 59, 30, 30, 94, 94};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string input = "^f7kK^^^^^^0^^8$K^^^^^^%{^^^^f&s#m^^'Q^^2$6^^^^y^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94, 102, 55, 107, 75, 30, 30, 48, 120, 36, 75, 30, 30, 37, 123, 30, 94, 102, 38, 115, 35, 109, 103, 81, 114, 36, 54, 30, 94, 121, 94, 94};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string input = "^^^^^T?^^U^^^^_^^g^^^^$^^^^t^^=v^^^^^^v^^Xz^^^^O^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 20, 63, 21, 30, 94, 95, 39, 30, 94, 36, 30, 94, 116, 125, 118, 30, 30, 118, 24, 122, 30, 94, 79, 94, 94};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string input = "L^^^^=^^b^^^^^^^^1^^^^;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 30, 94, 61, 34, 30, 30, 113, 30, 94, 44, 30, 94, 58, 30, 30, 30, 30, 104, 30, 94, 72, 94, 94};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string input = "^^^^^^aRdR^^[^^.B.v+^^;^^&^^]u^^*^^'ZV6WWd4^^04*?";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 30, 97, 82, 100, 82, 27, 110, 66, 46, 118, 43, 123, 102, 29, 117, 106, 103, 90, 86, 54, 87, 87, 100, 52, 4, 42, 63};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string input = "(^^6^^^^9:vKbu81^^H^^^^E^^>^^^^C&N> t^^^^^^.I+dl^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 118, 30, 94, 57, 58, 118, 75, 98, 117, 56, 49, 8, 30, 94, 69, 126, 30, 94, 67, 38, 78, 62, 32, 116, 30, 30, 46, 73, 43, 100, 108, 94, 94};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string input = "<bSA9Cp)^^Wj-9M^^*^^8XR ^^Wl-^^|F:^^rbq^^u^^%k7'?Q";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 98, 83, 65, 57, 67, 112, 41, 23, 106, 45, 57, 77, 106, 120, 88, 82, 32, 23, 108, 45, 60, 70, 58, 50, 98, 113, 53, 101, 107, 55, 39, 63, 81};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string input = "iQR^.Vu&qp^^7J%^^^^)K^^Z^^!^^^^^^^^%>qjx:Q^^Mei&^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {105, 81, 82, 94, 46, 86, 117, 38, 113, 112, 119, 74, 37, 30, 94, 41, 75, 26, 97, 30, 30, 101, 62, 113, 106, 120, 58, 81, 13, 101, 105, 38, 94, 94};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string input = "-TJ9X&h;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45, 84, 74, 57, 88, 38, 104, 44, 30, 30, 95, 60, 30, 94, 49, 53, 81, 43, 1, 27, 99, 117, 106, 1, 109, 115, 55, 110, 30, 94, 108, 43, 30, 94};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string input = ";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 4, 111, 30, 94, 67, 127, 117, 75, 120, 47, 77, 80, 50, 124, 80, 47, 99, 74, 55, 105, 71, 16, 108, 47, 35, 77, 43, 82, 35, 90, 19, 94, 94};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string input = "UtMY_:mU^^:Wc<3f^^<^^ii.bI^^D^^&_oL^^'!^^!^^*0^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 116, 77, 89, 95, 58, 109, 85, 122, 87, 99, 60, 51, 102, 124, 41, 105, 46, 98, 73, 4, 102, 95, 111, 76, 103, 33, 97, 106, 48, 30, 94};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string input = "#^^]t{^^^^Z;^^Ih(_'LF^^l38n^^^^ Tw^^O";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 29, 116, 123, 30, 94, 90, 59, 9, 104, 40, 95, 39, 76, 70, 44, 51, 56, 110, 30, 94, 32, 84, 119, 15};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string input = "ar/^^Asm7>p^^.4@|rsL^^lCW^^tM]y^^c^^`6zk]^^=^^*b^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 114, 47, 1, 115, 109, 55, 62, 112, 110, 52, 64, 124, 114, 115, 76, 44, 67, 87, 52, 77, 93, 121, 35, 32, 54, 122, 107, 93, 125, 106, 98, 94, 94};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string input = "^^uJb=7!a^^^^^^4'b^^+^^oU^^^^q1c^^[^^^^^^Q^^'^^%l=";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {53, 74, 98, 61, 55, 33, 97, 30, 30, 52, 39, 98, 107, 47, 85, 30, 94, 113, 49, 99, 27, 30, 30, 81, 103, 101, 108, 61};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string input = "t^^UY!^^v4@A^^^^?]QX;o$r^^^^^^^^2EA@`^^^^W^^_&7^^<";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 21, 89, 33, 54, 52, 64, 65, 30, 94, 63, 93, 81, 88, 59, 111, 36, 114, 30, 30, 114, 69, 65, 64, 96, 30, 94, 87, 31, 38, 55, 124};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string input = "^^(^^RN-n^^IEjzz^^k";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104, 18, 78, 45, 110, 9, 69, 106, 122, 122, 43};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string input = "Dl#Rv^^{uq^^ 1xPV^^Tw^^^^6";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68, 108, 35, 82, 118, 59, 117, 113, 96, 49, 120, 80, 86, 20, 119, 30, 94, 54};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string input = "oL2^^^^aK^^^^A^^^^6WRQqai|^^^^y_:^^gR#F;u^^^^/^^a";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {111, 76, 50, 30, 94, 97, 75, 30, 94, 65, 30, 94, 54, 87, 82, 81, 113, 97, 105, 124, 30, 94, 121, 95, 58, 39, 82, 35, 70, 59, 117, 30, 94, 47, 33};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string input = "kNy^^y3^^$i^^{^^^^P^^S^^^^=PW^^^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107, 78, 121, 57, 51, 100, 105, 59, 30, 94, 80, 19, 30, 94, 61, 80, 87, 30, 30};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string input = "cnkSE1^^>el|.^^6(^^^^!dJE/^^7z[Vo-^^9')NWY^^?:9N6";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 110, 107, 83, 69, 49, 126, 101, 108, 124, 46, 118, 40, 30, 94, 33, 100, 74, 69, 47, 119, 122, 91, 86, 111, 45, 121, 39, 41, 78, 87, 89, 127, 58, 57, 78, 54};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string input = "c^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 94, 94};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string input = "K^^^^^^^^^^^^Q8<4dd/^^^^^^Ga20^^i^^$^^3G[l^^ z*{^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 30, 30, 30, 30, 81, 56, 60, 52, 100, 100, 47, 30, 30, 71, 97, 50, 48, 41, 100, 115, 71, 91, 108, 96, 122, 42, 123, 94, 94};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string input = "hAmL^^C^^^^&GVVDG^^^^QVR^^bmd^^9^^>^^(WPyTY^^a)6^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104, 65, 109, 76, 3, 30, 94, 38, 71, 86, 86, 68, 71, 30, 94, 81, 86, 82, 34, 109, 100, 121, 126, 104, 87, 80, 121, 84, 89, 33, 41, 54, 94, 94};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string input = "^^s<^^o^^l^^n2<L^^^^M^^ZsK^^l^^<Kim0^^^^^^DY0";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 60, 47, 44, 46, 50, 60, 76, 30, 94, 77, 26, 115, 75, 44, 124, 75, 105, 109, 48, 30, 30, 68, 89, 48};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string input = "rBV^^^^^^30eP@K^^^^:z^^d1%r^^.^^^^^^!J0b^^Ei^^'Gvj";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {114, 66, 86, 30, 30, 51, 48, 101, 80, 64, 75, 30, 94, 58, 122, 209, 37, 114, 110, 30, 30, 33, 74, 48, 98, 5, 105, 103, 71, 118, 106};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string input = "W^^Xtl^^u^^0^^)U^^/^^&^^p.{3^^N28ql^^41^^%xr6Ep)t9";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87, 24, 116, 108, 53, 112, 105, 85, 111, 102, 48, 46, 123, 51, 14, 50, 56, 113, 108, 65, 101, 120, 114, 54, 69, 112, 41, 116, 57};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string input = ":;
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 44, 64, 30, 94, 100, 123, 107, 60, 37, 103, 45, 66, 91, 43, 42, 112, 16, 46, 37, 70, 44, 109, 120, 52, 30, 94, 122, 80, 15, 92};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string input = "4F_MWdQ^^uU`)";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 70, 95, 77, 87, 100, 81, 53, 85, 96, 41};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string input = "Ot#D`!^^x^^^^^^*or^^$ol75^^E^^Sf^^P^^^^yz@*gwcA^^1";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {79, 116, 35, 68, 96, 33, 56, 30, 30, 42, 111, 114, 100, 111, 108, 55, 53, 5, 19, 102, 16, 30, 94, 121, 122, 64, 42, 103, 119, 99, 65, 113};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string input = "#[^^^^`^^^^8$fNo%_^^ ^^f4D^^3^^-y=.{c0^^PJE^^Q3Z^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 91, 30, 94, 96, 30, 94, 56, 36, 102, 78, 111, 37, 95, 96, 244, 68, 115, 109, 121, 61, 46, 123, 99, 48, 16, 74, 69, 17, 51, 90, 94, 94};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string input = "q*AQ&^^^^x^^OPU^^^^s]{{8Rf&^^6bK 8^^^^s^^iFH)P$^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {113, 42, 65, 81, 38, 30, 94, 120, 15, 80, 85, 30, 94, 115, 93, 123, 123, 56, 82, 102, 38, 107, 75, 32, 56, 30, 94, 115, 41, 70, 72, 41, 80, 36, 94, 94};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string input = "q`[(NA TCl^^^^B^^U5b2))KTUD+WidTnOi^^^^oX^^:l_Lob.";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {113, 96, 91, 40, 78, 65, 32, 84, 67, 108, 30, 94, 66, 21, 53, 98, 50, 41, 41, 75, 84, 85, 68, 43, 87, 105, 100, 84, 110, 79, 105, 30, 94, 111, 88, 122, 108, 95, 76, 111, 98, 46};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string input = "^^`2^^^^OC^^c^^xJ^^Dq9GQpe^^)^^i_&_Q<^^@>|AL8^^d^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 50, 30, 94, 79, 67, 35, 56, 74, 4, 113, 57, 71, 81, 112, 101, 105, 41, 95, 38, 95, 81, 60, 0, 62, 124, 65, 76, 56, 36, 94, 94};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string input = "F:&uwwW>^^^^5tHU<X^^8A^^^^KGPqngP:+gUS";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 58, 38, 117, 119, 119, 87, 62, 30, 94, 53, 116, 72, 85, 60, 88, 120, 65, 30, 94, 75, 71, 80, 113, 110, 103, 80, 58, 43, 103, 85, 83};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string input = "^^c9b4^^B^^E356a7EB7bb^^^^c^^^^3^^^^74E^^D0e8fDd67";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {201, 98, 52, 2, 5, 51, 53, 54, 97, 55, 69, 66, 55, 98, 98, 30, 94, 99, 30, 94, 51, 30, 94, 55, 52, 69, 4, 48, 101, 56, 102, 68, 100, 54, 55};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string input = "Feff3AB78^^BBBffcB^^eE^^79a65^^C227^^f34047bf2b^^d";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 101, 102, 102, 51, 65, 66, 55, 56, 2, 66, 66, 102, 102, 99, 66, 37, 69, 121, 97, 54, 53, 3, 50, 50, 55, 243, 52, 48, 52, 55, 98, 102, 50, 98, 36};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string input = "aB^^b4A7Cd^^D33b^^c^^^^6B1c0b^^bAb31BD^^bBDC7e^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 66, 180, 65, 55, 67, 100, 4, 51, 51, 98, 35, 30, 94, 54, 66, 49, 99, 48, 98, 34, 65, 98, 51, 49, 66, 68, 34, 66, 68, 67, 55, 101, 30, 94};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string input = "D42A^^c^^f^^^^c^^0eb6d^^874D^^^^F2fCb^^Cf^^d4DA^^4";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68, 52, 50, 65, 35, 38, 30, 94, 99, 14, 98, 54, 100, 135, 52, 68, 30, 94, 70, 50, 102, 67, 98, 3, 102, 212, 68, 65, 116};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string input = "2dB6C8A563E9e7f6fb5Cb9ad^^d4^^2312836Df47f7ad5^^D3";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 100, 66, 54, 67, 56, 65, 53, 54, 51, 69, 57, 101, 55, 102, 54, 102, 98, 53, 67, 98, 57, 97, 100, 212, 35, 49, 50, 56, 51, 54, 68, 102, 52, 55, 102, 55, 97, 100, 53, 4, 51};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string input = "^^8393a^^^^0adf6^^^^^^3^^^^EfdB4FC3^^cFa^^2Eb51e^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {131, 57, 51, 97, 30, 94, 48, 97, 100, 102, 54, 30, 30, 51, 30, 94, 69, 102, 100, 66, 52, 70, 67, 51, 35, 70, 97, 114, 69, 98, 53, 49, 101, 94, 94};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string input = "F^^9b0f^^eB580^^d2d14ffb7^^d5eeC2a^^F19b10^^5^^DE3";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 155, 48, 102, 37, 66, 53, 56, 48, 210, 100, 49, 52, 102, 102, 98, 55, 213, 101, 101, 67, 50, 97, 6, 49, 57, 98, 49, 48, 117, 4, 69, 51};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string input = "eb8fbC794a63847Faa2f^^b^^CCD1ad61C79E1^^^^3c^^C^^C";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 98, 56, 102, 98, 67, 55, 57, 52, 97, 54, 51, 56, 52, 55, 70, 97, 97, 50, 102, 34, 3, 67, 68, 49, 97, 100, 54, 49, 67, 55, 57, 69, 49, 30, 94, 51, 99, 3, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string input = "aB^^a^^AC72DFcD67aeaBDf^^BEc6FdBE^^^^194^^E3A^^^^D";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 66, 33, 1, 67, 55, 50, 68, 70, 99, 68, 54, 55, 97, 101, 97, 66, 68, 102, 2, 69, 99, 54, 70, 100, 66, 69, 30, 94, 49, 57, 52, 5, 51, 65, 30, 94, 68};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string input = "BEB^^Fb6744^^D^^72FCAeed^^4a5^^8^^6A^^9^^A^^d^^e^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66, 69, 66, 6, 98, 54, 55, 52, 52, 4, 114, 70, 67, 65, 101, 101, 100, 74, 53, 120, 118, 65, 121, 1, 36, 37, 94, 94};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string input = "E^^E48742DdeaBc83FAfeF^^^^0^^^^ca0E^^0Ba9cf90fD620";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69, 5, 52, 56, 55, 52, 50, 68, 100, 101, 97, 66, 99, 56, 51, 70, 65, 102, 101, 70, 30, 94, 48, 30, 94, 99, 97, 48, 69, 112, 66, 97, 57, 99, 102, 57, 48, 102, 68, 54, 50, 48};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string input = "^^EbeeFe0^^^^2e6CaAFC295767526b8aafC56^^93FCEb0DBf";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 98, 101, 101, 70, 101, 48, 30, 94, 50, 101, 54, 67, 97, 65, 70, 67, 50, 57, 53, 55, 54, 55, 53, 50, 54, 98, 56, 97, 97, 102, 67, 53, 54, 147, 70, 67, 69, 98, 48, 68, 66, 102};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string input = "D^^CD846D4^^B1966764F^^B75^^a8^^568^^8f2bA45daE0aa";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68, 3, 68, 56, 52, 54, 68, 52, 2, 49, 57, 54, 54, 55, 54, 52, 70, 2, 55, 53, 168, 86, 56, 143, 50, 98, 65, 52, 53, 100, 97, 69, 48, 97, 97};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string input = "bCaCc^^3bB^^b7c7a1^^0a2657817cf3c1^^D0^^Ca^^23C061";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 67, 97, 67, 99, 59, 66, 183, 99, 55, 97, 49, 10, 50, 54, 53, 55, 56, 49, 55, 99, 102, 51, 99, 49, 4, 48, 3, 97, 35, 67, 48, 54, 49};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string input = "3Bc065^^0F55CdCdE39^^1CC^^a79341^^8aeF7183e5fB^^FC";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 66, 99, 48, 54, 53, 112, 70, 53, 53, 67, 100, 67, 100, 69, 51, 57, 113, 67, 67, 167, 57, 51, 52, 49, 138, 101, 70, 55, 49, 56, 51, 101, 53, 102, 66, 6, 67};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string input = "79^^78^^^^5DfC^^EABD7bB^^e^^BcbFa0^^^^ca05D4dB2^^D";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {55, 57, 120, 30, 94, 53, 68, 102, 67, 5, 65, 66, 68, 55, 98, 66, 37, 2, 99, 98, 70, 97, 48, 30, 94, 99, 97, 48, 53, 68, 52, 100, 66, 50, 4};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string input = "b6711EDFAE4F^^^^d8F2a5ED826^^8^^F3886Fc^^ba^^D0577";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 54, 55, 49, 49, 69, 68, 70, 65, 69, 52, 70, 30, 94, 100, 56, 70, 50, 97, 53, 69, 68, 56, 50, 54, 120, 6, 51, 56, 56, 54, 70, 99, 186, 4, 48, 53, 55, 55};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string input = "^^cb^^cb^^8b^^eB9DffEB6c^^Af4eB6be39^^f^^8C^^82b^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {203, 203, 139, 37, 66, 57, 68, 102, 102, 69, 66, 54, 99, 1, 102, 52, 101, 66, 54, 98, 101, 51, 57, 38, 120, 67, 130, 98, 94, 94};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string input = "f^^69e^^ec^^fC^^9E6D3^^^^0E6^^d9^^EBe6cAd04bc0300A";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {102, 105, 101, 236, 38, 67, 121, 69, 54, 68, 51, 30, 94, 48, 69, 54, 217, 5, 66, 101, 54, 99, 65, 100, 48, 52, 98, 99, 48, 51, 48, 48, 65};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string input = "^^eCAD0Ad5^^dcCDd^^34bb1^^^^c185B0C6DBa^^D4^^Af5f4";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37, 67, 65, 68, 48, 65, 100, 53, 220, 67, 68, 100, 52, 98, 98, 49, 30, 94, 99, 49, 56, 53, 66, 48, 67, 54, 68, 66, 97, 4, 52, 1, 102, 53, 102, 52};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string input = "3d^^1D3^^9FD7dfF3dB^^7^^B^^^^72DD^^^^c^^d6c^^FCf^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51, 100, 113, 68, 51, 121, 70, 68, 55, 100, 102, 70, 51, 100, 66, 119, 2, 30, 94, 55, 50, 68, 68, 30, 94, 99, 214, 99, 6, 67, 102, 94, 94};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string input = "^^6bBDe1^^0^^Ea^^d4c^^cB50D^^C^^8^^1B0C^^11FA5465F";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107, 66, 68, 101, 49, 112, 5, 97, 212, 99, 35, 66, 53, 48, 68, 3, 120, 113, 66, 48, 67, 17, 70, 65, 53, 52, 54, 53, 70};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string input = "a1ad5C19DA189AE5^^e1Ce^^92dFC7c9E3Ed519B9f792925ef";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 49, 97, 100, 53, 67, 49, 57, 68, 65, 49, 56, 57, 65, 69, 53, 225, 67, 101, 146, 100, 70, 67, 55, 99, 57, 69, 51, 69, 100, 53, 49, 57, 66, 57, 102, 55, 57, 50, 57, 50, 53, 101, 102};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string input = "^^E^^2^^d^^5BB^^E024c001^^^^Fc5fEC^^6C^^0^^e153218";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 114, 36, 117, 66, 66, 5, 48, 50, 52, 99, 48, 48, 49, 30, 94, 70, 99, 53, 102, 69, 67, 118, 67, 112, 225, 53, 51, 50, 49, 56};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string input = "4f^^B089b8a^^F2aa45d44D68ee6604E49^^14f648dEc^^3^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 102, 2, 48, 56, 57, 98, 56, 97, 6, 50, 97, 97, 52, 53, 100, 52, 52, 68, 54, 56, 101, 101, 54, 54, 48, 52, 69, 52, 57, 20, 102, 54, 52, 56, 100, 69, 99, 115, 94, 94};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string input = "Fd0d85a83bE32^^^^cd3^^a95c1^^E0^^6eBcE32^^^^a47b^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 100, 48, 100, 56, 53, 97, 56, 51, 98, 69, 51, 50, 30, 94, 99, 100, 51, 169, 53, 99, 49, 5, 48, 110, 66, 99, 69, 51, 50, 30, 94, 97, 52, 55, 98, 94, 94};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string input = "e49e62^^^^Cf2^^902^^82^^^^F9f^^A^^^^a^^aC59E4CCD^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 52, 57, 101, 54, 50, 30, 94, 67, 102, 50, 144, 50, 130, 30, 94, 70, 57, 102, 1, 30, 94, 97, 33, 67, 53, 57, 69, 52, 67, 67, 68, 94, 94};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string input = "eE^^8DdEe^^0^^dC0^^1C106E1C^^26d34^^3cec5E05cB0^^e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 69, 120, 68, 100, 69, 101, 112, 36, 67, 48, 113, 67, 49, 48, 54, 69, 49, 67, 38, 100, 51, 52, 60, 101, 99, 53, 69, 48, 53, 99, 66, 48, 37};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string input = "0B^^9dDfEEcbcD5a8bb5a1^^A^^^^eE^^786cC^^DF6CC0aF^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 66, 157, 68, 102, 69, 69, 99, 98, 99, 68, 53, 97, 56, 98, 98, 53, 97, 49, 1, 30, 94, 101, 69, 120, 54, 99, 67, 4, 70, 54, 67, 67, 48, 97, 70, 94, 94};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string input = "^^bdB6abb^^bD39Be064^^6f7Eba4bCd8Fe4C2B9b9^^51^^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {189, 66, 54, 97, 98, 98, 34, 68, 51, 57, 66, 101, 48, 54, 52, 111, 55, 69, 98, 97, 52, 98, 67, 100, 56, 70, 101, 52, 67, 50, 66, 57, 98, 57, 81, 30, 94};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string input = "^^5e^5e^5e^5e^ abASFs&*^@%#";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96, 97, 98, 65, 83, 70, 115, 38, 42, 94, 64, 37, 35};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string input = "^^`2^^^^OC^^c^^xJ^^Dq9GQpe^^)^^i_&_Q<^^@>|AL8^^d^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 50, 30, 94, 79, 67, 35, 56, 74, 4, 113, 57, 71, 81, 112, 101, 105, 41, 95, 38, 95, 81, 60, 0, 62, 124, 65, 76, 56, 36, 94, 94};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string input = "^^aa";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string input = "^^ff^^ef^^`2^^^^OC^^c^^xJ^^Dq9GQpe^^)^^i_&_Q<^>d^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {255, 239, 32, 50, 30, 94, 79, 67, 35, 56, 74, 4, 113, 57, 71, 81, 112, 101, 105, 41, 95, 38, 95, 81, 60, 94, 62, 100, 94, 94};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string input = "^^^^GFT FD fgfdg ^^fffffff YT ^ ^ ^ ^ ^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 94, 71, 70, 84, 32, 70, 68, 32, 102, 103, 102, 100, 103, 32, 255, 102, 102, 102, 102, 102, 32, 89, 84, 32, 94, 32, 94, 32, 94, 32, 94, 32, 94};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string input = "^^00^^aa";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 170};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string input = "aa^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 97, 94, 94};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string input = "^^5e^5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string input = "^^5";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {117};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string input = "^^^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string input = "^^5e^^5e5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 53, 101, 53, 101};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string input = "^^zz";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 122};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string input = "^";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string input = "^a5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94, 97, 53, 101};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string input = "^^5e^^5e";
    TeXLeX* pObj = new TeXLeX();
    clock_t start = clock();
    vector<int> result = pObj->getTokens(input);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 53, 101};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=289706&rd=4710&pm=2271
********************************************************************************
#include <string>
#include <vector>
 
using namespace std;
 
struct TeXLeX {
vector<int> getTokens(string in) {
  vector<int> ret;
  string hex = "0123456789abcdef";
  for(int i = 0; i < in.size(); ++i) {
    if (in[i] == '^') {
      if (ret.size() && ret.back()=='^') {
        if (i+2 < in.size() && hex.find(in[i+1])!=-1 && hex.find(in[i+2])!=-1) {
          ret.back() = hex.find(in[i+1])*16 + hex.find(in[i+2]);
          i += 2;
        }
        else if (i+1 < in.size()) {
          ret.back() = (in[i+1] > 63 ? in[i+1]-64 : in[i+1]+64);
          ++i;
        }
        else ret.push_back(in[i]);
      }
      else ret.push_back(in[i]);
      continue;
    }
    ret.push_back(int(in[i]));
  }
  return ret;
}
};

********************************************************************************
*******************************************************************************/