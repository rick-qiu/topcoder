/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8401
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

class TVGameWinnings {
public:
    vector<int> getMinMax(vector<string> board);
};

vector<int> TVGameWinnings::getMinMax(vector<string> board) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> board = {"35", "44"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-12, 20};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"00200", "0B000", "00020", "10000", "00001"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, 0};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"12A", "A12", "2A1"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 8};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"AAAA", "BBBB", "CCCC", "DDDD"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-24, 24};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"243214", "985321", "414584", "457241", "184934", "134567"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-68040, 127008};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> board = {"000000", "000000", "000000", "000000", "000000", "000000"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"0"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"24I324", "77H4C5", "7D57D9", "I6HEF6", "4GD30I", "DD3EEG"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-129654, 178605};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"HDC531", "BGAD8I", "HB0F34", "8A7270", "0I9I2F", "9F915H"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-244944, 163296};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"97C347", "4A3277", "5BFBD3", "GEE564", "6I7475", "C3DF27"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-122472, 119070};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"7GIF21", "G6GD38", "8DE48F", "5BA7FG", "G73EFG", "1E33B4"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-141120, 120960};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"H5E0B1", "0D530B", "8C3802", "719332", "95C8DC", "A6D4I2"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-62208, 51840};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"3BB2GA", "6D8EFG", "185733", "AGIFH1", "0DD199", "IAA29E"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-217728, 222264};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> board = {"DD0784", "254HB1", "3E9410", "C5H1GA", "I6GD59", "85GB03"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-207360, 184320};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"344242", "C3D484", "HI4I3D", "6IA31A", "8G8B61", "HEI34B"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-93312, 93312};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"664GDG", "18B144", "IIH2BF", "I2AF2H", "3CC9CC", "23BBDG"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-145152, 145152};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"1A1A28", "3BFB5A", "135211", "57HCB2", "G49G5E", "8GAFG1"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-78400, 35280};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"AH3DF9", "1I964E", "GEEAD9", "144CIE", "58CE00", "1EDD2H"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-181440, 108864};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"E12HI4", "FHI6I9", "5EBG3E", "I60DEF", "4F2B78", "20IE71"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-275562, 326592};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"324F52", "A41446", "IG754H", "ID9CBG", "85A7G9", "A879AF"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-163296, 136080};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"GB9DF6", "396F3I", "BAA801", "6443CF", "76E9C8", "B0ECA9"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-122472, 116640};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"9DD4G8", "I99C01", "HCE6EH", "D0HD48", "E90I01", "4F4C44"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-186624, 217728};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"4993HH", "FB35E7", "1H483E", "4AD303", "I41I50", "81A192"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-163296, 163296};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"BDG3D5", "7BAF44", "521GFA", "D174I5", "I6H397", "627E1A"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-63504, 92610};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"F82129", "198A65", "D7675G", "D7IG5E", "F6D467", "52HEG5"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-214326, 166698};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"2FDE8B", "H6I739", "D1CA1H", "B29GIA", "HEBHHA", "EGD9EC"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-279936, 258048};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"D915IG", "HDED10", "I80AF7", "GC3EE9", "EB1CG2", "B7C952"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-229635, 138915};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"DB9H6A", "95DHAA", "462BC1", "7FD009", "BG4023", "79CA02"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-95256, 62208};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"47D532", "00DE57", "ADF41B", "DHGE3D", "A59695", "606454"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-79380, 90720};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"74FF02", "1IIFEF", "A645DI", "DI123B", "E5B0HE", "HEIIG8"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-367416, 244944};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"D99G37", "EAGI66", "AIBED0", "30A144", "36G55C", "E035D6"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-79380, 72900};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"H89760", "H6F011", "I6D36B", "19FG6D", "4AFC63", "4IHE05"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-90720, 102060};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> board = {"F62IGI", "18I35F", "G69EI3", "49069A", "1D0GAC", "8BC4HF"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-367416, 204120};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"4HDC84", "463EG7", "E7B60G", "CGE60H", "EDDH59", "ED28G2"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-86400, 100800};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"27FE6B", "1HHB3E", "2CG800", "160377", "IE9F06", "2265GI"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-197568, 254016};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"BCH5GG", "ICIA4C", "56632E", "113EH5", "CD5A2D", "D97I49"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-97200, 136080};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"HEB148", "038H6I", "EG6I06", "610I98", "312673", "CH4459"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-258048, 217728};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"24I32", "477H4", "C57D5", "7D9I6", "HEF64"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-22680, 13230};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"GD30I", "DD3EE", "GHDC5", "31BGA", "D8IHB"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-17640, 18144};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"0F348", "A7270", "0I9I2", "F9F91", "5H97C"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-27216, 27216};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"3474A", "32775", "BFBD3", "GEE56", "46I74"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8232, 10290};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"12A", "A12", "2A1"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, 8};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"12A444", "213456", "2A1321", "123456", "234567", "ABCDEF"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2160, 2160};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"121", "112", "211"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-2, 8};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"23690A", "786GFD", "DD9E31", "225541", "HGFDA0", "0034BC"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-62208, 47628};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"211", "112", "121"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-8, 2};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"15ABC", "38534", "ABD32", "34567", "ABCDE"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1800, 1680};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"AA", "1A"};
    TVGameWinnings* pObj = new TVGameWinnings();
    clock_t start = clock();
    vector<int> result = pObj->getMinMax(board);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {-1, -1};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22706770&rd=10800&pm=8401
********************************************************************************
#include<iostream>
#include<sstream>
#include<cstdio>
#include<cmath>
#include<vector>
#include<map>
#include<queue>
#include<algorithm>
 
using namespace std;
 
int val(char c) {
  if(isdigit(c)) {
    return c - '0';
  } else {
    return -1 - (c - 'A');
  }
}
 
class TVGameWinnings {
public:
  vector <int> getMinMax(vector <string> board) {
    int perm[6] = { 0, 1, 2, 3, 4, 5 };
    bool visited[6];
    int _min = (1 << 31) - 1, _max = -1 - ((1 << 31) - 1), earnings, len, j, sz = board.size();
    
    do {
      memset(visited, 0, sizeof(visited));
      earnings = 1;
      len = 0;
      for(int i = 0; i < sz; i++) {
        if(visited[i]) continue;
 
        j = i;
        while(!visited[j]) {
          earnings *= val(board[j][perm[j]]);
          visited[j] = true;
          j = perm[j];
        }
        len++;
      }
      if(len % 2 == 0) earnings *= -1;
      
      // cout << "\t" << earnings << endl;
      
      if(earnings > _max) _max = earnings;
      if(earnings < _min) _min = earnings;
    } while(next_permutation(perm, perm + sz));
    
    vector<int> ans;
    ans.push_back(_min);
    ans.push_back(_max);
    
    return ans;
  }
};

********************************************************************************
*******************************************************************************/