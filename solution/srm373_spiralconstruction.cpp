/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6649
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

class SpiralConstruction {
public:
    int longestSpiral(vector<string> points);
};

int SpiralConstruction::longestSpiral(vector<string> points) {
    int ret;
    return ret;
}


int test0() {
    vector<string> points = {"0 1", "1 0"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> points = {"1 1", "2 2", "-1 -1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> points = {"0 1", "2 2", "-2 2", "-2 -2", "2 -2", "1 1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> points = {"0 1", "1 1", "0 2"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> points = {"4 -2", "2 2", "-5 6", "-7 8", "-9 -1", "3 0", "8 8", "-2 -4", "-4 -7", "-4 -1", "-1 -9", "-5 3", "4 9", "2 6", "-2 5"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> points = {"5 1", "0 -6", "8 -8", "-9 4", "-1 0", "9 4", "5 0", "-4 4", "-1 9", "6 6", "2 6", "-1 -4", "-7 1", "4 -3", "-4 -8"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> points = {"7 5", "4 9", "6 7", "-4 8", "7 7", "2 8", "7 8", "-2 3", "-2 -3", "9 6", "-3 5", "4 3", "-1 1", "-2 -1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> points = {"564 564", "952 952", "52 52", "625 625", "881 881", "130 130", "84 84", "715 715", "650 650", "150 150", "451 451", "474 474", "49 49", "572 572", "877 877"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> points = {"1 1", "2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "8 8", "9 9", "10 10", "11 11", "12 12", "13 13", "14 14", "15 15"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> points = {"-9 0", "-8 5", "-3 -8", "7 3", "9 -1", "-1 0", "1 0", "-5 10", "-6 -4"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> points = {"-2 -5", "4 2", "0 3", "-1 -4", "1 0", "-2 2", "4 -1", "5 3", "-2 3", "-2 -4"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> points = {"-5 -4", "0 -4", "4 1", "0 1", "5 4", "2 -5", "0 2"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> points = {"2 5", "-2 -5", "4 -5", "-5 -5", "2 4", "-1 -2"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> points = {"0 1", "-1 0", "0 -1", "1 2", "2 -2", "-2 1", "1 0", "-1 -1", "1 3", "-3 -2"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> points = {"-324 556", "-297 568", "799 -834", "708 793", "34 -181", "267 -44", "-33 757", "867 308", "-674 -103", "-156 -273", "-54 -516", "-396 573", "307 27", "-879 682", "-918 218"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> points = {"-630 776", "358 932", "440 896", "-999 -42", "-985 169", "-418 -908", "-515 856", "-817 -576", "982 181", "-255 -967", "996 65", "908 -417", "10 -999", "-566 -824", "760 -649"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> points = {"1 1", "2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "-1 -1", "-2 -2", "-3 -3", "-4 -4", "-5 -5", "-6 -6", "-7 -7", "-8 -8"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> points = {"1 1", "2 2", "3 3", "4 4", "5 5", "6 6", "7 7", "8 8", "9 9", "10 10", "11 11", "12 12", "13 13", "14 14", "15 15"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> points = {"-10 -10", "10 -10", "0 10", "-20 -20", "20 -20", "0 20", "-30 -30", "30 -30", "0 30", "-40 -40", "40 -40", "0 40", "-50 -50", "50 -50", "0 50"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> points = {"-459 -33", "-166 0", "-331 224", "-22 -142", "462 -36", "205 -355", "-219 327", "461 -9", "495 442", "327 -64", "-109 104", "402 -347", "-208 -118", "-79 216", "218 395"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> points = {"-9 17", "-16 -50", "19 -26", "28 8", "12 14", "-45 -5", "31 -23", "11 41", "45 -8", "-23 -14", "41 -46", "-48 3", "42 32", "-29 -34", "-32 45"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> points = {"-4 2", "-1 -5", "4 -1", "3 3", "-3 -1", "-4 -4", "0 -3", "2 1", "-4 -1", "-3 -2", "-3 -3", "-4 1", "3 0", "-4 3", "4 -3"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> points = {"1 7", "4 0", "9 4", "8 8", "2 4", "5 5", "1 1", "5 2", "7 6", "1 4", "2 3", "2 2", "1 6", "8 5", "1 8"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> points = {"0 1", "0 3", "0 5", "0 2", "0 7"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> points = {"0 1", "0 13", "0 15", "0 2", "0 17", "0 11", "0 3", "0 5", "0 12", "0 7", "0 123", "0 124", "0 231", "0 8", "0 99"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> points = {"0 1", "0 2", "0 3", "0 4", "0 5", "0 6", "0 7", "0 8", "0 9", "0 10", "0 11", "0 12", "0 13", "0 14", "0 15"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> points = {"-669 -542", "160 -513", "473 717", "-51 344", "703 -548", "270 -869", "957 -181", "-6 -509", "-175 937", "-625 434", "901 -403", "-708 -847"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> points = {"-293 413", "886 709", "716 445", "533 -236", "903 869", "-714 655", "890 27", "800 -311"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> points = {"665 -682", "134 -338", "-761 708"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> points = {"631 535", "-259 -354", "-147 -973", "737 -281", "-222 516", "34 -690", "842 -821", "-909 -712", "-62 36", "-363 255", "794 433", "-274 883", "343 -642", "86 -1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> points = {"620 547", "-928 -383", "-253 945", "-36 835"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> points = {"-705 925", "-577 -64", "318 -386", "528 535", "-919 -890", "-467 -82", "100 -169", "644 -363", "926 -307", "-695 971", "-625 658", "-269 19"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> points = {"-733 63", "-236 827", "95 566", "975 -496", "157 284", "-656 -373", "644 -245", "-971 567", "337 -954", "-67 150", "960 714", "92 429", "999 -824", "450 332", "740 -719"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> points = {"-95 -62", "754 -807", "-421 -791", "-66 -581"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> points = {"-595 24", "-100 154", "-247 -425", "402 655", "611 -644", "538 -473", "582 -520", "601 -961", "-714 -662", "370 -179", "-406 15", "335 -991"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> points = {"-528 659", "-268 -723", "999 -947", "925 -595", "787 -103", "-533 -882", "-114 727", "-528 -364", "-580 799", "-386 -697"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> points = {"-698 510", "-74 613", "-410 443", "-489 247", "-213 541", "-779 -712", "842 3", "-18 -407", "194 -314", "92 -525", "-492 -664", "300 587", "445 499", "452 188"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> points = {"787 -430", "274 -209", "-212 580", "144 996"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> points = {"-471 611", "-965 -714", "-819 -833", "955 643", "806 -812", "147 -123", "-806 506", "-740 -367", "-682 -955", "-651 -365", "-134 -116", "855 -581", "833 -868"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> points = {"983 871", "-358 -683", "697 -984", "-538 556", "-623 879", "-293 73", "-491 -401"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> points = {"853 -144", "395 -319", "248 785", "0 -585"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> points = {"-720 -830", "411 75", "746 -397", "-83 828", "-847 -833", "181 709", "314 967", "-322 -633", "-450 415", "-459 433", "508 438"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> points = {"708 -949", "-869 752", "-729 -583", "-321 984", "-462 -477", "857 429", "-807 -57", "296 184", "-728 -594", "-524 -903", "-551 -726"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> points = {"696 -895", "-339 301", "-743 784", "-657 -689", "-957 170", "-197 -88", "-65 832", "743 -689", "549 -693", "969 635"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> points = {"185 -858", "126 -788"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> points = {"-560 533", "-539 168"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> points = {"-721 649", "245 -574", "-859 -986", "-257 496", "180 -361", "-528 -691", "-833 -992", "-222 -989", "950 901", "-803 388", "-536 624", "310 -588", "320 812", "-640 862", "828 -851"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> points = {"-717 484", "-827 515", "-746 765", "-333 763", "979 184", "-524 101"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> points = {"-200 624", "-488 -903", "543 -376", "18 924", "55 958", "-12 -826", "497 419", "-286 580", "-512 25"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> points = {"271 214", "897 58", "-644 178", "-41 -598", "156 -737", "-182 -765", "748 702", "-335 -113"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> points = {"-860 -456", "-306 688", "-995 614", "-437 -876", "-353 684", "363 -711", "-324 -545", "840 -418", "18 472", "109 -550", "-201 141"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> points = {"1 -1", "-3 -3", "1 -2", "2 1", "0 2", "-4 -2", "-3 -4", "1 -3", "3 0", "1 3", "-3 1", "-5 -3", "-3 -5", "4 -2", "3 1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> points = {"0 1", "0 2", "0 3", "1 0", "1 1", "1 2", "1 3", "2 0", "2 1", "2 2", "2 3", "3 0", "3 1", "3 2", "3 3"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> points = {"1 1", "3 3", "4 4", "-1 1", "-2 2", "-3 3", "-4 4", "2 2", "-2 -2", "-3 -3", "1 0", "2 1", "3 2", "4 3", "-1 -1"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> points = {"-8 -8", "8 -6", "8 12", "0 3", "-6 5", "3 11", "-3 1", "4 0", "3 7", "-9 10", "-3 -3", "1 -3", "-5 -5", "6 -4", "-20 10"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> points = {"1 1", "2 1", "2 -2", "-1 -2", "-1 5", "0 5", "0 1", "0 2", "0 3", "0 4"};
    SpiralConstruction* pObj = new SpiralConstruction();
    clock_t start = clock();
    int result = pObj->longestSpiral(points);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22662189&rd=10791&pm=6649
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <functional> 
#include <string> 
#include <vector> 
#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <map> 
#include <set> 
 
using namespace std; 
 
#define fo(a,b,c) for( a = ( b ); a < ( c ); ++ a ) 
#define fr(a,b) fo(a,0,(b)) 
#define fi(a) fr(i,(a)) 
#define fj(a) fr(j,(a)) 
#define fk(a) fr(k,(a)) 
#define fin fi(n) 
#define fij(a) fo( j, i + 1, ( a ) ) 
 
const int maxn = 16; 
const int maxp = 70000; 
 
bool d[maxp][maxn]; 
int cnt[maxp]; 
 
class SpiralConstruction  
{ 
public: 
  int vect( int x1, int y1, int x2, int y2, int x3, int y3 ) 
  { 
    return( x2 - x1 ) * ( y3 - y2 ) - ( x3 - x2 ) * ( y2 - y1 ); 
  } 
  int scalar( int x1, int y1, int x2, int y2, int x3, int y3 ) 
  { 
    return( x2 - x1 ) * ( x3 - x2 ) + ( y2 - y1 ) * ( y3 - y2 ); 
  } 
  int longestSpiral(vector <string> points)  
  { 
    int i, j, k, z; 
    int ans = 0; 
    int n = points.size( ); 
    vector< pair< int, int > > p; 
    p.push_back( make_pair( 0, 0 ) ); 
    fi( n ) 
    { 
      int a, b; 
      sscanf( points[i].c_str( ), "%d %d", &a, &b ); 
      p.push_back( make_pair( a, b ) ); 
    } 
    ++ n; 
    memset( d, 0, sizeof( d ) ); 
    fi( maxp ) if( i ) cnt[i] = cnt[i & ( i - 1 )] + 1; 
    d[1][0] = 1; 
 
    fi( 1 << n ) fj( n ) if( d[i][j] ) 
    { 
      if( cnt[i] > ans ) ans = cnt[i]; 
      fk( n ) if( ( i & ( 1 << k ) ) == 0 ) 
      { 
        bool ok = true; 
        fr( z, n ) if( ( i & ( 1 << z ) ) && z != j ) 
        { 
          int v = vect( p[k].first, p[k].second, p[j].first, p[j].second, p[z].first, p[z].second ); 
          int s = scalar( p[k].first, p[k].second, p[j].first, p[j].second, p[z].first, p[z].second ); 
          if( v > 0 || v == 0 && s < 0 ) 
          { 
            ok = false; 
            break; 
          } 
        } 
        if( ok ) d[i | ( 1 << k )][k] = true; 
      } 
    } 
 
    return ans - 1; 
  } 
   
  
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/