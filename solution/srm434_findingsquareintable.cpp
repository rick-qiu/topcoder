/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10268
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

class FindingSquareInTable {
public:
    int findMaximalSquare(vector<string> table);
};

int FindingSquareInTable::findMaximalSquare(vector<string> table) {
    int ret;
    return ret;
}


int test0() {
    vector<string> table = {"123", "456"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> table = {"00000", "00000", "00200", "00000", "00000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
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
    vector<string> table = {"123456789"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> table = {"3791178", "1283252", "4103617", "8233494", "8725572", "2937261"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 320356;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> table = {"135791357", "357913579", "579135791", "791357913", "913579135"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> table = {"400000009"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9000000;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> table = {"3", "3", "1", "8", "7", "7", "3", "1", "6"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 31877316;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> table = {"12121", "21212", "12121", "21212", "12121", "21212"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> table = {"22344529", "45667698", "55554495", "35419246", "22363441", "55790446", "22287841", "18252016"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 22363441;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> table = {"1111111", "1222221", "1233321", "1234321", "1233321", "1222221", "1111111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1234321;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> table = {"1999111", "1922221", "9233321", "9234321", "9233321", "1922221", "1111111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 12321;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> table = {"572402810", "975101461", "143754012", "305625757", "749356320", "658659337", "846847875", "689346593", "874938676"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 456976;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> table = {"572402810", "975101461", "143754012", "305625757", "749356320", "658659337", "846848875", "689346593", "874938676"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 7884864;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> table = {"553333733", "775337775", "777537775", "777357333", "755553557", "355533335", "373773573", "337373777", "775557777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> table = {"257240281", "197510846", "014345401", "035562575", "974935632", "865865933", "684684987", "768934659", "287493867"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 95481;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> table = {"155555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555558"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> table = {"855555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555551"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> table = {"655555558", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "155555554"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> table = {"655555551", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "555555555", "855555554"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> table = {"844059007", "062846384", "503361052", "925295756", "774556341", "129146646", "221674051", "734719717", "699726092"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 5184;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> table = {"844059007", "062846386", "503361092", "925295956", "774558341", "129186646", "221274051", "731719717", "629726092"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 21288996;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> table = {"844059007", "062846386", "503361092", "925295956", "774558341", "129186646", "221274051", "731719717", "698661312"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 21316689;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> table = {"844059007", "062846386", "503361091", "925295957", "774558349", "129186645", "221274056", "731719711", "698661312"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 21659716;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> table = {"844059007", "062846386", "503361253", "925295957", "774558349", "129186645", "221274056", "731719711", "698663312"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9409;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> table = {"894059007", "062846386", "503661253", "925295957", "774550349", "129186645", "221274046", "731719711", "698663312"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 60516;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> table = {"010496840", "383933626", "862842380", "847923348", "307068727", "467163882", "584002517", "975809449", "583816034"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 45369;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> table = {"555563363", "556536633", "565555355", "353665656", "363553623", "633563333", "335346365", "535355533", "333565663"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> table = {"555573373", "557537733", "575555355", "353775757", "373553793", "733573333", "335323375", "535355533", "373575773"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> table = {"913511", "264296", "793669"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> table = {"300000002", "000000000", "000000000", "000000000", "000000000", "000040000", "000000090", "000000000", "500000000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9000000;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> table = {"0"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> table = {"7"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> table = {"9"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> table = {"00000", "12000", "34500", "67890"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 6400;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> table = {"177777777", "111120000", "777777771"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> table = {"135", "357", "753", "327", "753", "357", "531"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> table = {"593423"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> table = {"380", "119", "444", "646"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> table = {"0", "1"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> table = {"7683", "7707", "7925", "5741", "4826"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 529;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> table = {"47796"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> table = {"8322953"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> table = {"2", "8", "5", "3", "8", "0", "6", "8"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> table = {"3", "4", "9"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> table = {"207866"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> table = {"9", "9", "8"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> table = {"512", "506"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> table = {"6797161"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 196;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> table = {"897", "776", "417", "609", "000", "290", "634", "069", "927"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9604;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> table = {"756045", "046718", "327361", "852649", "316858", "715396", "240035", "228843"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 85264;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> table = {"453799069", "998632401", "853731699", "517424073", "800100202", "611877566"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 804609;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> table = {"964785927", "528810021", "518251269", "884525119", "451710900", "926554375", "138297666"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1382976;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> table = {"136563753", "146162455", "705266900", "832717791", "031674537", "772726784", "109758465"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 72726784;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> table = {"453720859", "835753862", "170200788", "146458404", "611363268", "405191114", "910154614", "727821015"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 404854641;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> table = {"2738"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
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
    vector<string> table = {"98708", "93018", "98104", "85244", "32959", "33214", "68497", "91461"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> table = {"808025440", "544311395", "054192331", "304325682", "889742445", "863581357", "244765195", "772142846"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 6561;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> table = {"58", "39", "24", "17", "69", "32"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> table = {"217", "840", "336", "809", "112", "132", "638", "458", "220"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> table = {"92842148", "40206861", "58667881", "07909076", "59800902"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> table = {"1941295", "3316365", "9454929", "5442134"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> table = {"3085", "0220", "1701", "2647", "4290"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> table = {"5", "5", "6", "1"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> table = {"197986329", "997942136", "123963183", "073193864", "722494285", "970621753", "275147856", "875177963", "878677648"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 7569;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> table = {"8894220", "8380866", "2749058", "9864333", "4039217", "7226702", "0973115"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> table = {"980525037"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> table = {"764436", "786743", "898982", "877836"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 289;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> table = {"9121007", "5630078", "2160523", "0638906"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 12100;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> table = {"6063554", "6968194", "6638264"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> table = {"95354", "35417", "17945"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> table = {"23997976", "61061703", "12129664", "73026026", "96270202", "55619872", "96202471", "68001711"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 3600;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> table = {"196765216", "661013687", "530799461", "038128242", "003297097"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 8649;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> table = {"270", "929", "087", "461"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> table = {"488398316", "338111160", "553525233", "649266174", "356104171", "624962479", "097307609", "725699881"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 59049;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> table = {"093187582", "703181640", "925715694", "080185884", "098482986", "162469721", "908700789", "699934565", "970522038"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 6889;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> table = {"03786", "42398", "15234", "73845", "49164", "75132", "19269", "81174", "93271"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 841;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> table = {"489125639", "807943645", "202057210", "004568507", "317377899", "900524003", "611226506"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 5776;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> table = {"972295178", "485240801", "421415863", "608612596", "409521588", "153330423", "047981405", "802660339"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 8836;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> table = {"427", "846", "992", "651"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> table = {"3147061", "8119914", "0109250", "9176800", "7842588", "0088515", "9787622"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> table = {"44134325", "15736221", "23153321", "51178553", "59167310", "37346665", "41633757", "67266016"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 784;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> table = {"4595913", "4974305", "3995955", "4339555", "9375345", "5544573", "3589554"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> table = {"5705200"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> table = {"0455", "5756"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> table = {"761221217", "116649219", "214667727", "776771107", "167291771", "316771174"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 11664;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> table = {"25101558", "84190526", "50428920", "99171251", "08414460", "01115248", "48588194", "96098619"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1521;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> table = {"3791178", "1283252", "4103617", "8233494", "8725572", "2937261"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 320356;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> table = {"123", "456"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> table = {"111", "191", "114"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> table = {"000000000", "000000000", "000001000", "000000000", "000000000", "000000600", "000000000", "000000000", "000000090"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 900000000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> table = {"1"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> table = {"999999999", "999999999", "999999999", "190909999", "999999999", "999999999", "999999999", "999999999", "999999999"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> table = {"00000", "00000", "00200", "00000", "00000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> table = {"0000", "0300", "0060", "0000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> table = {"122222222", "222222222", "220222222", "222222222", "222202222", "222222222", "222222222", "222222222", "222222222"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> table = {"9"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> table = {"7643"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> table = {"250"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> table = {"6020501"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 625;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> table = {"254"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> table = {"812"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> table = {"1111", "1611", "1141", "1111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> table = {"061"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> table = {"641"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> table = {"52"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> table = {"553333733", "775337775", "777537775", "777357333", "755553557", "355533335", "373773573", "337373777", "775557777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> table = {"800", "010", "000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> table = {"3814"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> table = {"257240281", "197510846", "014345401", "035562575", "974935632", "865865933", "684684987", "768934659", "287493867"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 95481;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> table = {"999800010"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 99980001;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> table = {"169081311"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 318096;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> table = {"111", "161", "111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> table = {"3333", "3643", "3333"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> table = {"2812"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> table = {"0"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> table = {"0000", "0200", "0050", "0000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> table = {"00000", "01210", "00000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> table = {"167"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> table = {"604"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> table = {"112421", "454212", "662461", "774691", "786899", "812689"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 8464;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> table = {"640"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> table = {"623", "140", "111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> table = {"164"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> table = {"645"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> table = {"0000", "0810", "0000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> table = {"777", "718"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> table = {"000000000", "060400000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000", "000000000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 4000000;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> table = {"161"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> table = {"777777", "717777", "772777", "777177", "777777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> table = {"00000", "00010", "00200", "01000", "00000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> table = {"26", "42"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> table = {"819"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> table = {"00001"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> table = {"257240281", "001110000", "014345401", "035562575", "974935632", "865865933", "684684987", "768934659", "287493867"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 94864;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> table = {"60403"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> table = {"1", "0", "0", "0", "0", "0", "0", "0", "0"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> table = {"810"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> table = {"677", "747", "777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> table = {"123456"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> table = {"1111", "1411", "1191", "1111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> table = {"411", "191", "111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> table = {"128"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> table = {"257240281", "000011100", "014345401", "035562575", "974935632", "865865933", "684684987", "768934659", "287493867"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 94864;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> table = {"542352377"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 324;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> table = {"35", "65"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> table = {"4"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> table = {"77777", "77877", "77717", "77777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> table = {"256"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> table = {"333", "363", "334"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> table = {"250", "000", "000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> table = {"2222", "2162", "2222", "2222"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> table = {"7777777", "7000007", "7000007", "7001007", "7000007", "7000007", "7777777"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> table = {"2819"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> table = {"11111", "16111", "11411", "11111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> table = {"00000", "00000", "00250", "00000", "00000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> table = {"22222", "22122", "22222", "22122", "22222"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> table = {"1641"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> table = {"2000", "0410", "0190", "0000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> table = {"000625000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 62500;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> table = {"813"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> table = {"9999", "9699", "9949", "9999"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> table = {"999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999", "999999999"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> table = {"999950884"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 999950884;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> table = {"633", "343", "333"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> table = {"135791357", "357913579", "579135791", "791357913", "913579135"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> table = {"457240281", "187510816", "018345211", "035069275", "974959632", "865169933", "684684987", "738934610", "287493800"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 23415921;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> table = {"1000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> table = {"06", "40"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> table = {"0000", "0640", "0000"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> table = {"100220121"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 121022001;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> table = {"162"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> table = {"91449"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 441;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> table = {"11110", "11101", "11011", "10111", "11111"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> table = {"6411"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> table = {"000202021"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 10000;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> table = {"1912"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> table = {"7291"};
    FindingSquareInTable* pObj = new FindingSquareInTable();
    clock_t start = clock();
    int result = pObj->findMaximalSquare(table);
    clock_t end = clock();
    delete pObj;
    int expected = 729;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20315020&rd=13696&pm=10268
********************************************************************************
#include <string> 
#include <vector> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <algorithm> 
#include <queue> 
#include <map> 
#include <set> 
#include <iostream> 
#include <sstream> 
#include <numeric> 
using namespace std; 
typedef long long ll; 
typedef pair<int,int> pii; 
#define F0(i,n) for (i = 0; i < n; i++) 
#define F1(i,n) for (i = 1; i <= n; i++) 
#define SZ(x) ((int)x.size()) 
const double pi = acos(-1.0); 
const int inf = 1000000009; 
int i, j, k, m, n, l; 
int ans; 
int a[10][10]; 
 
int isp(int x) { 
  int r = sqrt(1.0*x); 
  for (int d = r-2; d <= r+2; d++) 
    if (d * d == x) return 1; 
  return 0; 
} 
 
struct FindingSquareInTable {  
int findMaximalSquare(vector <string> t) {  
  ans = -1;  
  m = SZ(t); n = SZ(t[0]); F0(i,m) F0(j,n) a[i][j] = t[i][j]-'0'; 
 
  F0(i,m) F0(j,n) 
    for (int di = -10; di <= 10; di++) 
      for (int dj = -10; dj <= 10; dj++) 
        if (di != 0 || dj != 0) { 
          int x = i; 
          int y = j; 
          int s = 0; 
          while (x>=0 && x<m && y>=0 && y<n) { 
            s = s * 10 + a[x][y]; 
            x += di; 
            y += dj; 
            if (isp(s) && s > ans) ans = s; 
          } 
        } 
   
 
  return ans; 
}   
  
};  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/