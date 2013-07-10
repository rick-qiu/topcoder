/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1694
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

class QuipuReader {
public:
    vector<int> readKnots(vector<string> knots);
};

vector<int> QuipuReader::readKnots(vector<string> knots) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> knots = {"-XXXXXXX--XX-----XXXXX---", "---XX----XXX-----XXXX----", "-XXXXX---XXXXX--XXXXXXXX-"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {725, 234, 558};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> knots = {"XX---XXXX", "XXX-----X"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 31};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> knots = {"-XXX---XX----X", "--X----X-XXXXX", "-XX--XXXX---XX"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {321, 115, 242};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> knots = {"-------X--------", "--XXX----XXXX---", "--------------XX"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 3040, 2};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> knots = {"---------X----------------------", "--------------------------------", "---X----------------------------", "-----------X--------------------", "--X-----------------------------", "--------------X-----------------", "------------X-------------------", "------X-------------------------"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000, 0, 100000, 100, 1000000, 1, 10, 10000};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> knots = {"XXXXXXXXX-XXXXXXXXX-XXXXXXXXX-XXXXXXXXX-XXXXXXXX-X", "XXXXXXXX---XXXXXXXX-XXXXXXXX---XXXXXXXX--XXXXXXX--", "------------XXX---------X-------XXXXXXX--XXXXXXX--", "-----XXX--XXXXXXXXX-----XXXX----XXX---------XXX--X"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999981, 888870, 31770, 394331};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> knots = {"-X-X-X-X-", "XX----XXX"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1111, 2003};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> knots = {"--XX--------XXXXXX---X-----XX--------", "--XXXXXXXX--XXXX-----XX----XXXXXXXXX-", "--XXXXXXXX-----------XXX---XXXXXXXXX-", "--XXXXX-----XXXXXXXX-XXX---XX--------", "--XXXXXXXXX-XXX------XXXXX-XXXXXXXXX-"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2612, 8429, 8039, 5832, 9359};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> knots = {"-XXXXXXXXX-XX-------------XXXXXXX---", "-XXXXXX----XXXXXX---XXXX--XXX-------", "-XXXX------XXX------XXX---XXXX------", "-XXXXXXX------------X---------------", "-X---------XXXXX----XXXXX-XXXXXXXX--"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9207, 6643, 4334, 7010, 1558};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> knots = {"-XXX-------XXXX------XXXXXXXX---XX-----", "-X-------------------XX---------X------", "-----------XXXXX-----XXX--------XXXXXX-", "-XX--------XXXXXXXXX-XX---------XXXX---", "-XXXXXXXX--XXXXXX----XXXXXX------------", "-X---------XXX-------XXXXXXXX---X------", "-XXX-----------------XX---------X------", "-XXXX------X---------X----------X------"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3482, 1021, 536, 2924, 8660, 1381, 3021, 4111};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> knots = {"-XXXXX------XXXXXXX---XXXXXXX------XXX---", "-XX---------XXXXX--------XX---------X----", "-XXXX-------XXX------------------XXXXXXX-", "-XXX---------X--------XXXXXX-------------", "-XXXXXXXX--XXXXXXXXX----------------XX---", "-XXXXXX----XXXXXXXXX----------------X----", "-XXXXXX------X----------XXXX-------------", "-XXXXXX-----XXXXX-----XXXXXXXX-XXXXXXXXX-"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5773, 2521, 4307, 3160, 8902, 6901, 6140, 6589};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> knots = {"---XXX---XXXXXXX----XXXXXXXXX-XXXXXXXXX----XXXX---", "-----------XX------------X----XXXXXXXX---XXXXXXX--", "----X-----XXXX---------XXXXXX---XXXXXX------X-----", "-----------XX------------XX------XXXX-------XX----", "--XXXX-----------------XXXXX----XXXXXX------XX----", "----XX-----XXX--------XXXXXXX---------------X-----", "----X----XXXXX------XXXXXXXXX---XXXXX----XXXXXXXX-", "----XX---XXXXXXXXX-------X-------XXXX-----XXXXX---", "----XX-----XX---------XXXXXXX----XX---------XX----", "---------XXXXXX---------------XXXXXXXX---XXXXXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37994, 2187, 14661, 2242, 40562, 23701, 15958, 29145, 22722, 6086};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> knots = {"--XXX-----XXXX----XXXXXXXX--------XXX-----------", "---X--------XX----XXXXXX----------XXXX--XXXXXXX-", "---------XXXXXXXX-------------XXXXXXXXX----X----", "---X--------X------XXXX--------XXXXXXXX--XXXXX--", "---X--------XX------XX---------XXXXXXXX---XXXX--", "--XXX----XXXXX-----XXXXX----------XXXX----------", "---------XXXXX----XXXXXX----------X-------------", "--XXX-------XX----XXXXXXX------------------XXX--", "-XXXX---------------X-------------XXX------XXX--", "---X-----XXXXXXXX-XXXXXXXXX----XXXXXXX-----XXX--"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34830, 12647, 8091, 11485, 12284, 35540, 5610, 32703, 40133, 18973};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> knots = {"--XXX-XXXXXXXX----------XXXXXXXXX--XXXXXXXX-", "--XX----XXXX-----XXXXXX---XXX------XXXXXXXX-", "--------------------X----XXXXXXXX--XXXXXXXX-", "--XX-------X------XXXX----XXX-------XXXXXX--", "--XXX---XXXXX-------X------XX--------X------", "-XXXX--XXXXXXX-----------XXXXXXX----XXXXX---", "-----------X---XXXXXXXX----XX--------XXX----", "-----------X---XXXXXXXX----X----------------", "---X--XXXXXXXX--XXXXXXX---XXX---------------", "--XX---XXXXXXX--XXXXXXX----XX-------XXXXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38098, 24638, 188, 21436, 35121, 47075, 1823, 1810, 18730, 27725};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> knots = {"--XXX--XXXXXXX------------XXX-------", "--XXX---XX-----XXXXXX-----XXXX-XXX--", "-------XXXXXXXX-XXXXX--XXXXXXX-XXXX-", "--XX----XXXX---XXXXXX------XX--XXX--"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37030, 32643, 8574, 24623};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> knots = {"----XXXX-XXXXXXXX----XX-----XXX--XXXXXX---", "----XXXX--XXXXXXX-XXXXXXX----XX-----------", "-----X----XXXXXXX-XXXXXXX---XXX--XXXXXX---", "----XXXX------XX-XXXXXXXX-XXXXXXX-XXXXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48236, 47720, 17736, 42875};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> knots = {"--XXXX---XXX----XXXXXXXXX--XXXX-----XXXX----", "--XXXX--XXXX--------------XXXXXXX-XXXXXXXX--", "XXXXXX-XXXXXXXX-XXXXXXXXX-XXXXX--XXXXXXXXX--", "--XXXX--XXXXX----XXXXXX---XXXXXXX--XXXXXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {43944, 44078, 68959, 45676};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> knots = {"XXX----X----XXXX-------XX------XXXXXXXXX", "X-----XXXX---XXX---XXXXXXXXX------X-----", "XXX----X--XXXXXXXXX---XXX--------XXXXXX-", "XXX---XXX-XXXXXXXX----------------XXXX--"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31429, 14391, 31936, 33804};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> knots = {"-----XX-XXX---------XXX-------XXX---XXXX------", "------X-XXXXX-------XXX-----------------------", "------X-XXXXX----XXXXXXXXX----XXX-XXXXXXXXX---", "---XXXX-XXX------XXXXXXXXX-XX-XXXX--XXXXXXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {233034, 153000, 159039, 439247};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> knots = {"------------XXXXXXX----------XXXXX-", "-X---XXXXXXX--XXX---XXXXXX-XXXXXXXX", "-XX-XXXXXXXX--------XXXX-----XXXX--", "-XXX--XXXXXX-XXXXX---X-------XXX---"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {705, 17368, 28044, 36513};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> knots = {"XX----XXXXXXXXX-XXXXX--XXXXXXXXX----XXXXXXXXX-", "XX-------XXXX--XXXXXXXX-----XX-------XXXXXXX--", "XX-------X--------------XXXXXXXX---------XX---", "-------XXXXXXX------------XXXXXX----XXXXXXXXX-"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29599, 24827, 21082, 7069};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> knots = {"X", "-"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> knots = {"-XXX---XX----X", "--X----X-XXXXX", "-XX--XXXX---XX", "--------------"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {321, 115, 242, 0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> knots = {"X-------------------------------------------------", "-XXXXXX-XXXXXX-XXXXXXX-XXXXXX-XXXXXXXXX-XXXXXXXXX-", "-XXX-------XXX---XX-----X----------XXX----XXXXX---", "-XXXXX---XXXXX--XXX-----XXX--------XX-----XXX-----", "------------------------XXXX---------------XX-----", "--X---------X----X------X----------X-------X------"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 667699, 332135, 553323, 402, 111111};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> knots = {"X-----", "-X----", "--X---", "---X--", "----X-", "-----X"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100000, 10000, 1000, 100, 10, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> knots = {"X--", "XX-", "X-X"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 11};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> knots = {"X-", "-X"};
    QuipuReader* pObj = new QuipuReader();
    clock_t start = clock();
    vector<int> result = pObj->readKnots(knots);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=305142&rd=4580&pm=1694
********************************************************************************
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
typedef vector<int> VI; typedef vector<VI> VVI;
typedef vector<string> VS; typedef vector<VS> VVS;
typedef vector<bool> VB; typedef vector<VB> VVB;
typedef vector<double> VD; typedef vector<VD> VVD;
#define guard(X) for(bool X=1;X;X=0)
#define for_up(X, L) for(int X=0;X<(L);X++)
#define for_down(X, L) for(int X=(L)-1;X>=0;X--)
#define for_range(X, L, H) guard(X##_fi)for(typeof(H)X=(L);X!=(H);++X,X##_fi=0)
#define for_each(X, C) for_range(X,(C).begin(),(C).end())
#define for_tok(X,D,S) guard(X##_fi)for(char*for_tok__s1=strdup((S).c_str()),*for_tok__s3;for_tok__s1;free(for_tok__s1),for_tok__s1=0)for(char*X=strtok_r(for_tok__s1,(D),&for_tok__s3);X;X=strtok_r(0,(D),&for_tok__s3),X##_fi=0)
#define for_tok_ws(X,S) for_tok(X," \n\t",S)
#define for_bool(X) for(bool X=0,__g=1;__g;__g=X=!X)
#define let(X,V) guard(__g)for(typeof(V)X=V;__g;__g=0)
 
struct QuipuReader {
 
vector <int> readKnots(vector <string> knots) {
  const int m = knots.size();
  const int n = knots[0].size();
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      if (knots[i][j] != 'X') knots[i][j] = 0;
  bool f[60], g[60];
  for (int j = 0; j < n; j++) f[j] = g[j] = 0;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (knots[i][j] && knots[i][j-1]) f[j] = true;
      if (knots[i][j]) g[j] = 1;
    }
  }
  for (int j = 0; j < n; j++) if (!g[j]) f[j] = 1;
  VI r(m);
  for (int i = 0; i < m; i++) {
    r[i] = 0;
    for (int j = 0; j < n; j++) {
      if (!f[j]) r[i] *= 10;
      if (knots[i][j]) r[i] += 1;
    }
  }
  return r;
}
 
};
 
 
// vim:ts=4:sw=4

********************************************************************************
*******************************************************************************/