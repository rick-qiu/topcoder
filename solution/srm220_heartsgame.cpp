/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3073
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

class HeartsGame {
public:
    vector<string> score(vector<string> tricks);
};

vector<string> HeartsGame::score(vector<string> tricks) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> tricks = {"C2 CA DA C9", "S9 S8 S7 S5", "ST S6 S3 S4", "C6 HK C3 CK", "DQ HQ D9 D5", "D3 H7 D4 D2", "D6 SK DJ H8", "H5 H2 H6 H3", "H9 H4 HT CQ", "D8 CJ DT SA", "HJ C7 SQ CT", "HA C5 D7 C8", "S2 SJ DK C4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "0", "20", "0"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tricks = {"C2 D2 S2 H2", "C3 D3 S3 H3", "C4 D4 S4 H4", "C5 D5 S5 H5", "C6 D6 S6 H6", "C7 D7 S7 H7", "C8 D8 S8 H8", "C9 D9 S9 H9", "CT DT ST HT", "CJ DJ SJ HJ", "CQ DQ SQ HQ", "CK DK SK HK", "CA DA SA HA"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "26", "26", "26"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tricks = {"C2 C3 CK SA", "DA DK DT D8", "SJ ST S3 SK", "S5 S6 S2 CQ", "C6 DQ CT HK", "H3 H6 H2 H4", "S4 S9 S8 HQ", "C4 HA CJ HT", "C7 HJ C5 H9", "C8 D9 C9 CA", "H5 H7 D7 H8", "D2 D6 D4 D5", "D3 S7 SQ DJ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "4", "17", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tricks = {"C2 C9 CA CT", "D4 D2 D3 DJ", "S9 S2 S7 SA", "C4 C7 D5 CJ", "D6 C6 DK DT", "CK H7 C8 CQ", "HA HJ H8 H6", "ST HK S3 S4", "SK H5 SJ S6", "S8 H9 D8 HQ", "SQ HT DA C3", "C5 D9 H2 H3", "S5 D7 DQ H4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "0", "26", "26"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tricks = {"C2 CQ HK D7", "H9 H7 HJ H4", "S2 S8 S5 D2", "C9 DA CT CK", "DT C8 D9 D4", "DK S3 H6 C6", "CJ D6 C5 S9", "D8 SA H8 DJ", "S7 S6 ST CA", "HA H5 H3 D5", "DQ C7 SK D3", "HQ H2 SJ C3", "SQ C4 HT S4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tricks = {"C2 CA CQ S4", "C9 CJ C5 C3", "D8 D4 DK D9", "D5 DA D6 D7", "S8 S3 H4 S6", "H7 H3 S7 HT", "HK HQ H8 HA", "CT HJ C4 CK", "H9 DT H2 SK", "H6 C6 H5 S5", "SA SQ SJ ST", "S2 C8 D2 C7", "S9 D3 DJ DQ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "1", "18", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tricks = {"C2 CJ C4 CK", "DJ H7 D5 D6", "CA CQ C7 C5", "S9 H9 ST S5", "H4 H3 H6 HT", "D3 D8 D4 SQ", "H2 DQ HJ HK", "SK S3 SJ SA", "C3 CT S2 C9", "S7 DA S8 C6", "DT D2 H8 D9", "S6 HQ HA S4", "C8 DK H5 D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "4", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tricks = {"C2 C7 C6 CJ", "DT D9 D4 D6", "S7 S2 S9 S3", "D8 D3 D7 DQ", "SK HQ S8 SJ", "SA H3 S5 H2", "S4 HA SQ H6", "CA CQ CK C4", "C3 CT H4 DJ", "C9 HJ D2 DK", "C5 D5 H8 S6", "H9 H5 HT H7", "HK ST C8 DA"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "5", "15", "3"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tricks = {"C2 C5 C9 CQ", "DQ DT D3 D4", "D5 DJ H9 DA", "HT H2 HK H6", "C8 CK CA C3", "HJ HA ST H5", "D7 D9 S8 D8", "SQ S4 S5 SA", "D6 S9 H7 DK", "H8 H4 SK H3", "HQ C4 S3 S7", "C7 CJ CT C6", "SJ S6 S2 D2"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "0", "6", "16"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tricks = {"C2 C5 C9 CQ", "DQ DT D3 D4", "D5 DJ H9 DA", "HT H2 HK H6", "C8 CK CA C3", "HJ HA ST H5", "D7 D9 S8 D8", "SQ S4 S5 SA", "D6 S9 H7 DK", "H8 H4 SK H3", "HQ C4 S3 S7", "C7 CJ CT C6", "SJ S6 S2 D2"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "0", "6", "16"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tricks = {"C2 C6 H5 D9", "D6 DT D7 D4", "DK S3 D2 DQ", "D5 D8 H2 DJ", "CJ C7 C5 CQ", "H6 H8 HT H3", "S7 SQ SA SK", "H4 HJ C4 HA", "S5 S9 SJ S2", "C3 DA CA HK", "C8 H7 CK C9", "H9 S8 ST HQ", "S4 D3 CT S6"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"15", "3", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tricks = {"C2 CK C5 C6", "C4 C9 D2 C7", "DA DQ DT D8", "DK D5 C8 D4", "SJ S8 ST S7", "S4 SK SA HT", "H3 H6 H8 H2", "D6 HQ D9 D3", "CT CQ CA HA", "DJ H5 C3 HJ", "D7 S5 H9 H4", "S9 S3 S2 HK", "SQ S6 CJ H7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "0", "24", "0"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tricks = {"C2 C9 C7 C4", "SJ S8 S7 S9", "DT DA DQ D3", "D5 D9 D8 H3", "C6 C5 CJ C3", "SA HA SK S2", "SQ H5 S3 H4", "ST H2 S4 CT", "H9 HT H7 HK", "CA C8 H8 D6", "HJ HQ H6 D7", "S5 DK D4 CQ", "S6 D2 DJ CK"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "20", "0", "1"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tricks = {"C2 CK C9 CT", "DQ DA D3 DT", "S6 SJ SA S2", "CQ CJ C6 CA", "S3 S7 H7 S9", "HA H2 HT H4", "DJ S4 D4 D2", "D5 S8 SQ DK", "H9 H6 HK C3", "H8 C7 HQ SK", "C8 C5 HJ C4", "D6 D9 H5 ST", "D8 H3 S5 D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "16", "7", "3"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tricks = {"C2 CJ S2 CK", "D9 DT D7 DJ", "DA D2 D5 D4", "S8 SJ ST S4", "S5 HJ SQ S7", "H6 H5 H3 H2", "C7 CQ C3 CA", "D3 C8 DQ HA", "DK HT D8 C9", "S3 S9 D6 H9", "SK H4 C4 SA", "S6 H7 HQ C5", "CT H8 C6 HK"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "18", "CHEATER!", "1"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tricks = {"C2 C3 C7 SJ", "DQ D8 D2 DA", "CK H9 C9 CJ", "H6 H3 S4 H4", "H2 HJ S6 HK", "D4 H8 D3 D9", "S3 DJ SK SA", "S5 SQ D6 ST", "C6 C4 C8 S7", "CQ CA CT DK", "H5 S9 HT HA", "HQ H7 S8 D5", "C5 S2 DT D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "9", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tricks = {"C2 CA HA CQ", "C3 HK C9 C5", "ST SJ SA SQ", "C4 HQ C6 CJ", "S9 DA HJ S7", "H2 DT HT SK", "H3 DQ H4 CK", "S4 CT H9 S6", "S5 S3 C8 H8", "D6 D4 D5 D3", "D8 DK D7 H7", "S2 C7 H6 DJ", "S8 D2 H5 D9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "14", "CHEATER!", "3"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tricks = {"C2 SQ C9 C8", "C6 CA CQ HA", "S4 SJ HK SK", "ST SA S9 HQ", "DA DK D7 DQ", "D2 D4 HJ DJ", "H4 DT H2 H3", "D9 D5 D3 HT", "S5 CK S8 H9", "CJ H8 D8 CT", "C5 H7 D6 C4", "S2 H6 S7 C7", "S6 C3 S3 H5"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3", "CHEATER!", "21", "2"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tricks = {"C2 CK C5 C3", "SA ST HJ S9", "S2 S7 H4 C6", "DT D9 D7 D4", "H8 HT H2 H9", "S3 DK SJ S6", "SK H6 S4 C7", "C9 C8 CA CQ", "S5 D3 S8 DA", "SQ H7 D6 CJ", "CT H5 DJ D8", "HQ HK HA D2", "D5 DQ C4 H3"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "17", "1", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tricks = {"C2 CT SQ C7", "D2 D7 DA D9", "S2 S6 S3 S9", "CK C9 CA CJ", "DT DQ D6 DJ", "SJ ST S4 SK", "C3 H7 C4 H2", "HT HK H8 H9", "SA C6 S7 S8", "S5 HQ DK H6", "H5 H4 HJ HA", "D4 D5 C5 D3", "H3 C8 D8 CQ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "13", "CHEATER!", "7"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tricks = {"C2 C6 CT C3", "SA SJ S8 SQ", "ST S9 S2 S4", "CQ CJ C8 DA", "D7 DJ D3 D6", "DK D2 D4 D9", "S3 S6 SK D5", "DT D8 H9 C4", "H7 DQ H4 HA", "CA H5 S5 CK", "C5 HK HT C7", "H6 H3 HJ H2", "HQ S7 H8 C9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "7", "CHEATER!", "2"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tricks = {"C2 CQ C5 CT", "D9 DK D8 D6", "C9 C3 CJ DQ", "SK S4 ST S9", "S5 S2 S7 SA", "D2 DA D7 H9", "HA H7 HT H3", "S8 S3 SJ CA", "H2 HQ H6 HK", "DT C4 DJ D5", "HJ SQ H5 H8", "C8 CK S6 C7", "C6 D3 H4 D4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "4", "0", "16"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tricks = {"C2 S5 C5 CT", "DJ D2 D4 D8", "D5 D9 DT HT", "HK H2 H6 H5", "ST SQ SK C6", "DK DQ D3 C3", "SA CJ S6 S4", "DA D6 S9 H3", "S7 CA S8 S3", "H9 HA H4 H7", "CK C9 C4 H8", "CQ D7 C7 HQ", "C8 SJ HJ S2"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "5", "7", "14"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tricks = {"C2 CJ CT CK", "D4 S9 D2 D7", "SA SK S3 C8", "D9 DT DA D5", "DJ D6 D8 H4", "HK H8 H6 H5", "HT HA H7 HJ", "C7 CQ C3 C4", "H3 C6 H2 DK", "S7 ST SJ S4", "H9 S6 S2 SQ", "HQ D3 DQ C9", "CA C5 S8 S5"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "2", "0"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tricks = {"C2 C9 C6 C4", "S3 S5 ST SQ", "D9 D3 D2 D4", "CT C3 CQ CK", "S4 S2 S7 SK", "DJ DA D8 D5", "D6 H4 DT DQ", "H3 H5 HA HT", "CJ C5 C8 H8", "CA H2 C7 HQ", "HK H9 H6 SA", "HJ SJ S8 S9", "H7 S6 DK D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"25", "0", "1", "0"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tricks = {"C2 CJ CQ C4", "S8 S2 SJ S6", "S5 DJ S9 S7", "S3 H4 SK H6", "D8 D6 D7 D2", "H5 H2 H3 HA", "CK C7 CT CA", "SA C9 S4 D3", "H9 HQ HK C6", "D4 DT D9 DK", "H7 D5 DQ HT", "ST C8 SQ C3", "DA C5 HJ H8"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"20", "0", "2", "4"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tricks = {"C2 CJ C3 C8", "C5 C6 CA CT", "S9 S3 SK SJ", "C7 HQ CQ DT", "S6 SA H9 S7", "D2 D6 D9 D3", "DK D4 D7 C4", "H7 H6 HK H8", "HT HJ DA HA", "DQ DJ H3 S2", "S5 SQ C9 S4", "H5 H2 ST D8", "H4 CK S8 D5"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"21", "0", "0", "5"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tricks = {"C2 C3 C8 C6", "S6 H5 H8 ST", "DT D2 D4 D6", "CJ C5 C7 C4", "CQ CK S2 H4", "S7 S9 D9 SK", "C9 CT HA CA", "D7 HT SQ HQ", "SJ HK S4 S3", "H7 H2 D5 H6", "DA DK DQ HJ", "S8 D3 SA H3", "S5 H9 D8 DJ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tricks = {"C2 C7 C9 C8", "D3 D4 DJ D7", "S4 SQ SJ C3", "S2 C5 SK ST", "CT C4 CJ CK", "S8 S5 S6 SA", "C6 DQ H5 CA", "D2 D6 D5 S3", "HJ HK HT H8", "CQ H7 DA H9", "H6 H2 DK HA", "HQ S9 DT H4", "H3 D9 S7 D8"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "19", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tricks = {"C2 C5 C3 CA", "D5 D6 DJ DA", "SA SJ S2 S5", "D9 D4 D8 D2", "DK DQ DT D7", "C9 H8 CT CK", "HA HT HJ HQ", "S4 S7 ST CJ", "S3 CQ SK S8", "H9 C6 H2 H7", "S9 SQ S6 H3", "C7 H6 H5 C8", "HK C4 D3 H4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "12", "14", "0"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tricks = {"C2 C4 CA CK", "D3 D2 DA D7", "D9 D6 D4 SQ", "CJ CQ C8 C5", "S5 SJ S7 ST", "SA S9 HQ SK", "S2 S8 H4 S4", "HJ H3 H7 HT", "CT C6 C9 C3", "HA H9 H6 S6", "H5 H8 DQ DJ", "DK DT D8 HK", "D5 C7 S3 H2"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17", "0", "1", "8"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tricks = {"C2 C5 C6 CQ", "DJ D3 DT DA", "SJ S2 S6 S3", "S8 S5 H3 S9", "C9 CK C7 CJ", "HJ H4 H6 H8", "H2 HK HT H9", "D5 D9 D2 D4", "HQ CT HA C4", "ST D6 DK S4", "SA CA H7 SK", "SQ C3 D8 C8", "S7 D7 H5 DQ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "1", "21", "4"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tricks = {"C2 C4 C5 SQ", "S6 SK S8 SA", "DK D9 DQ D7", "C6 CK C9 CA", "S3 S2 S7 D5", "CQ CJ ST CT", "SJ S9 S4 H6", "HJ H2 D3 H9", "HQ H8 C8 H4", "HK H7 DT H3", "H5 D8 C3 D6", "C7 DJ S5 DA", "HA HT D2 D4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "26", "0", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tricks = {"C2 HA CQ C5", "DQ D3 D4 DA", "HJ H2 HT H4", "H3 H5 H9 C9", "SA SJ S8 S3", "S9 S5 CA SK", "C6 HK CJ C3", "C7 C8 CT ST", "D6 H6 DT D5", "CK D2 D7 S4", "S2 DK SQ S7", "D9 H8 S6 DJ", "H7 D8 HQ C4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2", "CHEATER!", "14", "5"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tricks = {"C2 S8 C9 D9", "DT D3 H7 DK", "SJ S7 C6 S2", "S5 CK S3 D4", "H3 H4 H8 HA", "C7 C8 CA CQ", "D2 DJ D6 DA", "DQ D5 D8 C3", "HJ HQ H9 HK", "C4 CJ H2 ST", "S9 HT S6 H5", "S4 H6 SQ SK", "CT SA C5 D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tricks = {"C2 C4 CA C6", "D7 DJ DA D9", "DQ DK D6 DT", "S6 SQ SK SJ", "S2 S9 S8 S3", "CK C7 CQ CT", "D4 D8 D2 D3", "S7 S5 ST HK", "H2 H8 HT HA", "C8 HQ CJ C9", "C3 H9 H4 H3", "H7 H5 D5 HJ", "SA C5 H6 S4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "0", "4", "18"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tricks = {"C2 C7 C3 CK", "S5 ST SJ S3", "SK SA S8 S2", "C8 H4 CJ CA", "HA HK H9 DQ", "D9 D7 D8 DT", "C6 C5 C9 HQ", "S6 H6 S4 S7", "SQ CT D3 D6", "H5 HT H2 DA", "D2 DK D4 C4", "H7 DJ H8 HJ", "H3 D5 CQ S9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "18", "8", "0"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tricks = {"C2 C9 C3 CK", "HK HQ CJ SJ", "S5 CA H9 S9", "DJ DQ DA D6", "ST S2 S4 S7", "S3 H2 SQ S6", "DK CQ D5 HJ", "CT C8 HA C7", "H3 HT C6 H7", "H4 C5 H5 H8", "D8 SK D7 D2", "D4 S8 D3 DT", "H6 C4 SA D9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tricks = {"C2 CT D4 CJ", "S9 S2 ST S5", "DT D3 DK D8", "SQ SJ S3 S4", "SK D9 S8 S6", "DJ D5 DA D2", "C5 C4 C3 CK", "D6 D7 DQ H7", "CA HK HT C9", "CQ H3 H5 C6", "H9 H2 H4 HQ", "C7 C8 S7 HA", "H6 SA H8 HJ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "7", "CHEATER!", "13"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tricks = {"C2 CJ C7 CT", "D6 D7 DK DT", "C3 CQ C8 SA", "C4 CA S5 CK", "DA D5 D8 DJ", "DQ H7 D2 H3", "HT H2 HQ HA", "S7 S8 S2 SJ", "SK S9 D9 S3", "S4 S6 H9 H8", "C9 D4 H5 C6", "C5 HK HJ SQ", "H6 D3 H4 ST"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"24", "2", "0", "0"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tricks = {"C2 S9 C7 C3", "D2 D7 D3 DJ", "S4 SQ SJ S2", "CK C6 CT H6", "D8 D4 DT D9", "HK H2 HJ H3", "H8 H4 DA H9", "C5 CQ HA C8", "H5 HT S7 H7", "S5 SK SA ST", "C4 CA S8 C9", "D5 S3 DQ D6", "DK CJ S6 HQ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5", "3", "15", "3"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tricks = {"C2 C8 CK C7", "C4 C5 CT C6", "D6 D8 D3 D4", "SK S4 SA DA", "S8 S5 S9 S3", "DK D7 DJ D5", "CJ CQ H6 C9", "H8 HT H7 HQ", "H3 H4 H5 HJ", "S2 S7 SJ SQ", "D9 S6 DQ HK", "CA C3 H9 D2", "ST H2 HA DT"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "8", "1", "13"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tricks = {"C2 C5 CK C3", "C9 CA CT CQ", "D9 D6 D5 C8", "ST S4 S6 SK", "DA D7 DQ D8", "DJ HJ DK DT", "HK H7 HA H8", "C7 HT CJ S2", "S9 S5 SJ SA", "H4 HQ H5 H9", "S8 S7 D4 SQ", "H3 H2 D3 C6", "H6 S3 D2 C4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "0", "CHEATER!", "16"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tricks = {"C2 CJ CT C6", "SA S9 ST SQ", "S3 SJ HK S2", "H3 C3 H7 HA", "H6 H4 HT CA", "CQ C9 C8 C5", "D6 DT DQ D4", "DK DJ D8 D3", "DA S7 D9 D5", "HQ H2 S8 H5", "H9 HJ C4 H8", "SK S5 S4 S6", "C7 D2 D7 CK"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "19", "4", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tricks = {"C2 CT C5 C9", "S9 S6 S4 HQ", "S5 SJ CA S2", "HA H9 H8 H4", "HT DA C8 H2", "S3 S7 SK SA", "CQ CJ C6 CK", "D4 D3 DK D8", "ST H5 D7 C3", "S8 D6 HJ C4", "SQ H3 D5 C7", "HK DJ H6 D2", "H7 D9 DQ DT"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "1", "25", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tricks = {"C2 C8 C7 CQ", "C5 CA CJ C6", "DT D4 D9 D5", "ST SQ S2 S9", "S3 S6 SK S5", "D7 DQ D3 DJ", "DK CK D6 DA", "C9 C4 C3 SA", "CT HK H9 S7", "H8 HJ HT H6", "H4 HQ H7 H2", "S8 SJ S4 H5", "D8 HA D2 H3"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "17", "3", "2"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tricks = {"C2 C5 C6 CJ", "D9 DK D4 D7", "DT S8 S3 DQ", "CQ C4 C9 C7", "C3 CA CK H6", "S6 S9 S5 S4", "DA D6 D5 HJ", "H3 H5 H7 HT", "SJ H4 S7 H9", "ST D2 SK D8", "D3 CT HQ DJ", "H2 S2 HA HK", "C8 SA H8 SQ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "CHEATER!", "CHEATER!", "17"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tricks = {"C2 CT CQ CJ", "C9 C3 C4 CA", "DK D6 D8 DQ", "D2 S4 DA SA", "D4 S9 DT HT", "D7 C7 D5 C6", "S5 S3 S2 S6", "HK HQ H3 H2", "H5 DJ H6 HJ", "D9 C5 D3 H8", "HA H4 SQ C8", "S8 H7 SK SJ", "S7 H9 ST CK"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "2", "CHEATER!", "20"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tricks = {"C2 C6 C8 CK", "DT D8 D5 D3", "S5 ST S2 S3", "C3 C7 C5 HA", "D9 DQ D7 SQ", "CQ SA H3 DK", "C9 H2 CJ D6", "SK H6 S6 S7", "D2 H5 DJ S9", "H7 H9 HJ HK", "H4 HT S4 CT", "C4 SJ D4 HQ", "CA S8 DA H8"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CHEATER!", "5", "19", "0"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tricks = {"C2 CK C7 C8", "C5 C3 CJ CT", "D9 DK DJ D7", "S7 S9 SJ SK", "ST S4 S8 S2", "S6 HT C4 H9", "CA HQ DQ C9", "S5 H8 S3 D8", "H6 HK H2 H3", "D5 DA DT HJ", "HA H5 H4 D6", "SQ SA H7 D3", "CQ D2 D4 C6"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tricks = {"C2 CT C6 C7", "DA D9 D5 D8", "S4 S3 S2 SJ", "CK C5 C4 CQ", "D6 DK D3 DJ", "S5 S6 SK S7", "C8 H8 H5 CJ", "DT D2 H6 D4", "HQ H3 HA HK", "ST SQ H9 SA", "D7 S9 H7 DQ", "CA C9 HT H4", "H2 C3 HJ S8"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "0", "6", "14"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tricks = {"C2 D3 C8 C9", "H6 H9 H5 H8", "DT D6 D8 D4", "C3 CA CJ C7", "D2 DJ DQ DK", "C6 C5 CK CQ", "ST S3 S8 SJ", "H7 HJ H2 H4", "D9 SK HQ S5", "DA SA CT HK", "D5 SQ C4 S6", "S4 S7 H3 S2", "S9 HA HT D7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "CHEATER!", "19", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tricks = {"C2 C7 CT C3", "D7 DQ DA D5", "CA S5 C5 S7", "C6 H5 S8 CQ", "SK SA S2 ST", "H2 H3 H7 D2", "D3 HK DT D8", "D6 D9 DJ C9", "H6 HT S9 HQ", "S4 H4 C8 SQ", "CK HA S6 CJ", "D4 S3 DK H9", "H8 HJ C4 SJ"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"16", "3", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tricks = {"C2 CQ CT C3", "DA D9 D4 D7", "D8 D3 DT DK", "C7 CJ C6 CK", "ST S8 S2 S9", "S3 S4 SA SQ", "S6 SJ HJ S5", "H7 H2 H4 H6", "HT H3 HQ HK", "D2 D6 DJ D5", "C5 C4 C8 H8", "SK S7 H9 CA", "HA H5 DQ C9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "21", "5", "0"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tricks = {"C2 CA C9 CQ", "SJ S2 SQ S3", "D5 DA DK DQ", "C8 CT CK H8", "D8 D6 D7 DT", "H4 H6 H9 HT", "C4 C6 C3 S6", "H5 H7 HJ H2", "SA S5 S4 SK", "S7 ST S8 D3", "HQ H3 HK D2", "DJ D9 CJ S9", "C7 D4 C5 HA"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"4", "0", "5", "17"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tricks = {"C2 C9 CQ S5", "D3 D2 DJ D8", "C8 H3 C5 C6", "S7 SJ HJ SA", "H9 H4 HT H6", "H8 HQ S9 C4", "DA D7 DT D6", "DQ D5 CK CJ", "DK H5 CA S8", "D4 H2 ST CT", "D9 S4 S3 S2", "H7 HA SK HK", "SQ S6 C3 C7"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1", "CHEATER!", "4", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tricks = {"C2 S2 CJ CK", "D9 D4 DJ D8", "S4 SK S9 SA", "C4 C6 C5 C7", "ST DA SQ S6", "S7 S5 H4 H2", "H5 HT C3 H6", "D6 DK D3 D7", "H3 HA HK H9", "D2 HJ DQ H7", "CQ HQ CA SJ", "CT S3 C8 S8", "DT D5 C9 H8"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6", "CHEATER!", "5", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tricks = {"C2 C3 C6 C9", "S5 SQ S9 DK", "D5 DA H5 DQ", "S2 S4 H8 ST", "HK HJ H9 H4", "CK C8 CA CQ", "D4 D6 D2 DJ", "H2 HA H6 H3", "S3 CT S6 SA", "D3 D9 D8 C7", "S8 DT SJ SK", "D7 HT HQ C5", "S7 H7 CJ C4"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"18", "4", "CHEATER!", "0"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tricks = {"C2 CJ C6 DK", "H7 S2 DQ H6", "H2 S6 DJ CK", "H3 S8 D2 S4", "HK ST H5 CA", "H8 SA D3 C7", "DA D4 DT C8", "HQ S9 D8 C4", "HJ S7 D9 CT", "HT SK SQ S5", "H4 SJ D5 C9", "HA S3 D6 C5", "H9 CQ D7 C3"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "CHEATER!", "26", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tricks = {"C2 CJ C6 DK", "H7 S2 H5 H6", "H2 S6 DJ CK", "H3 S8 D2 S4", "HK ST DQ CA", "H8 SA D3 C7", "DA D4 DT C8", "HQ S9 D8 C4", "HJ S7 D9 CT", "HT SK SQ S5", "H4 SJ D5 C9", "HA S3 D6 C5", "H9 CQ D7 C3"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "CHEATER!", "26", "26"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tricks = {"C2 CA HA CQ", "C3 HK C9 C5", "ST SJ SA SQ", "C4 HQ C6 CJ", "S9 DA HJ S7", "H2 DT HT SK", "H3 DQ H4 CK", "S4 CT H9 S6", "S5 S3 C8 H8", "D6 D4 D5 D3", "D8 DK D7 H7", "S2 C7 H6 DJ", "S8 D2 H5 D9"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7", "14", "CHEATER!", "3"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tricks = {"C2 C3 C4 CA", "H3 H2 C5 C6", "H4 C7 C8 C9", "H5 CT CJ CQ", "H6 CK D2 D3", "H7 D4 D5 D6", "H8 D7 D8 D9", "H9 DT DJ DQ", "HT DK DA S2", "HJ S3 S4 S5", "HQ S6 S7 S8", "HK S9 ST SJ", "HA SQ SK SA"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"26", "26", "26", "0"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tricks = {"C2 D2 S2 H2", "C3 D3 S3 H3", "C4 D4 S4 H4", "C5 D5 S5 H5", "C6 D6 S6 H6", "C7 D7 S7 H7", "C8 D8 S8 H8", "C9 D9 S9 H9", "CT DT ST HT", "CJ CQ HJ HQ", "DJ DQ SJ SQ", "CK DK SK HK", "CA DA SA HA"};
    HeartsGame* pObj = new HeartsGame();
    clock_t start = clock();
    vector<string> result = pObj->score(tricks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9", "CHEATER!", "CHEATER!", "CHEATER!"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9906197&rd=5866&pm=3073
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
 
#define INF 0x7fffffff 
#define FOR(i,a,b) for(int i=(a),_i=(b);i<_i;++i) 
#define FORD(i,a,b) for(int i=(a);i>=(b);--i) 
#define REP(i,n) FOR(i,0,n) 
#define REPD(i,n) FORD(i,n,0) 
#define REPSZ(i,v) REP(i,(v).SZ) 
#define VAR(a,b) __typeof(b) a=b 
#define IT(a,v) VAR(a,v.end()) 
#define FORIT(it,v) for(VAR(it,(v).begin());it!=(v).end();++(it)) 
#define FORITREM(it,v,rem) for(VAR(it,(v).begin());it!=(v).end();(rem)?(v).erase(it++):++it) 
#define ALL(x) (x).begin(),(x).end() 
#define MAX(a,b) ((a)>(b)?(a):(b)) 
#define MIN(a,b) ((a)<(b)?(a):(b)) 
#define ABS(a) MAX((a),-(a)) 
#define DIST(a,b) ABS((a)-(b)) 
#define SQR(x) ((x)*(x)) 
#define NORM(x,y) sqrt(SQR(x)+SQR(y)) 
#define FIND(a,v) find(ALL(v),(a)) 
#define FOUND(a,v) (FIND(a,v)!=(v).end()) 
#define INDEX(a,v) (FOUND(a,v)?(FIND(a,v)-(v).begin()):-1) 
#define MP(a,b) make_pair(a,b) 
#define FST(a) (a).first 
#define SCD(a) (a).second 
#define KEY(a) FST(*a) 
#define VAL(a) SCD(*a) 
#define PB push_back 
#define SZ size() 
#define EOL printf("\n") 
 
typedef string str; typedef double dbl; typedef long long ll; 
typedef unsigned int uint; typedef unsigned long long ull; 
typedef vector<str> VS; typedef vector<VS> VVS; 
typedef vector<int> VI; typedef vector<VI> VVI; 
typedef vector<dbl> VD; typedef vector<VD> VVD; 
typedef vector<ll> VLL; typedef vector<VLL> VVLL; 
typedef pair<int,int> PII; typedef vector<PII> VPII; 
 
inline ll fac(int n) { ll ret=1; while(n>1) ret*=n--; return ret; } 
inline ll gcd(ll a,ll b) { if(b==0) return a; return gcd(b,a%b); } 
inline ll lcm(ll a,ll b) { return a*b/gcd(a,b); } 
inline ll choose(int n,int k) { 
  int x=n,y=1; ll ret; 
  if(k<0||k>n) return 0; 
  if(k==0||k==n) return 1; 
  while(x!=n-k) { ret*=x; --x; while(y!=k+1&&(ret%y)==0) { ret/=y; ++y; } } 
  return ret; 
} 
 
template<class T> string tostr(T a) { ostringstream s; s<<a; return s.str(); } 
 
template <class T1, class T2> T1 cast (T2 x) { T1 y; ostringstream oss; oss<<x; istringstream iss(oss.str()); iss>>y; return y; } 
 
template<class T> vector<T> split(const string& s,const string& delim=" ") { 
    vector<T> ret; str cur; 
    REPSZ(i,s) if(FOUND(s[i],delim)) { if(cur.SZ) ret.PB(cast<T>(cur)); cur=str(""); } else cur+=s[i]; 
    if(cur.SZ) ret.PB(cast<T>(cur)); 
    return ret; 
} 
 
class HeartsGame { 
public: 
    vector <string> score(vector <string> tricks) { 
      VI onlyPoints(4,0); 
      VVI nietbekend(4,VI(4,0)); 
      VI onlyhearts(4,0); 
      int player=0; 
      VI points(4,0); 
      VI valid(4,1); 
      bool heartsplayed=false; 
      REPSZ(i,tricks) { 
        int card,suit,leadcard,leadsuit,win,p=0; 
        REP(j,4) { 
          switch(tricks[i][j*3]) { 
            case 'C': suit=0; break; 
            case 'D': suit=1; break; 
            case 'H': suit=2; break; 
            case 'S': suit=3; break; 
          } 
          switch(tricks[i][j*3+1]) { 
            case '2': card=0; break; 
            case '3': card=1; break; 
            case '4': card=2; break; 
            case '5': card=3; break; 
            case '6': card=4; break; 
            case '7': card=5; break; 
            case '8': card=6; break; 
            case '9': card=7; break; 
            case 'T': card=8; break; 
            case 'J': card=9; break; 
            case 'Q': card=10; break; 
            case 'K': card=11; break; 
            case 'A': card=12; break; 
          } 
          if(j==0) { 
            leadcard=card; leadsuit=suit; win=player; 
            if(!heartsplayed&&suit==2) onlyhearts[player]=1; 
          } else { 
            if(suit!=leadsuit) nietbekend[(player+j)%4][leadsuit]=1; 
            else if(card>leadcard) { win=(player+j)%4; leadcard=card; } 
            if(suit==2) heartsplayed=true; 
          } 
          if(suit==2) p++; if(suit==3&&card==10) p+=13; 
           if(i==0) if(suit==2||suit==3&&card==10) onlyPoints[(player+j)%4]=1; 
        if(onlyhearts[(player+j)%4]&&suit!=2) valid[(player+j)%4]=false; 
        if(nietbekend[(player+j)%4][suit]) valid[(player+j)%4]=false; 
        if(onlyPoints[(player+j)%4]&&suit!=2&&(suit!=3||card!=10)) valid[(player+j)%4]=false; 
        } 
        player=win; 
        points[win]+=p; 
      } 
      bool mars=points[0]==26||points[1]==26||points[2]==26||points[3]==26; 
      VS ret; 
      REP(i,4) if(valid[i]) ret.PB(tostr(mars?26-points[i]:points[i])); else ret.PB(str("CHEATER!")); 
      return ret; 
       
    } 
 
}; 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/