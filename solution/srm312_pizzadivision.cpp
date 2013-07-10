/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6493
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

class PizzaDivision {
public:
    int howMany(vector<string> toppings);
};

int PizzaDivision::howMany(vector<string> toppings) {
    int ret;
    return ret;
}


int test0() {
    vector<string> toppings = {"0 110", "0 70", "-75 20", "75 20", "-25 -50", "25 -50"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
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
    vector<string> toppings = {"0 70", "70 0", "0 -70", "-70 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> toppings = {"0 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> toppings = {"3 -4"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> toppings = {"3 -4", "-3 4"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> toppings = {"1 2", "3 4"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> toppings = {"-300 100", "-200 100", "-100 100", "100 100", "200 100", "300 100", "-300 -100", "-200 -100", "-100 -100", "100 -100", "200 -100", "300 -100"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> toppings = {"5 7", "-7 6", "-6 2", "7 -2", "-5 5", "-4 9", "-9 3", "2 7", "0 -8", "-7 -7"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> toppings = {"2 -9", "-2 4", "-3 -5", "-6 0", "-4 -2", "-4 0", "4 -7", "-8 1", "-1 1", "4 -3", "-8 2", "-9 3", "-8 -3", "-6 -4", "-7 5", "7 -5", "-4 7", "3 -6", "7 4", "-1 2", "9 1", "0 -3", "-5 8", "4 2", "0 -4", "7 0", "-6 6", "-4 -6", "-4 9", "6 1", "-9 -4", "0 6", "1 3", "9 2", "-8 -4", "-6 3", "8 2", "-2 -1", "-3 -3", "-3 1", "3 -1", "3 -8", "-1 -3", "-2 -8", "-6 -6", "5 -3", "-3 -7", "9 0", "-1 9", "-8 -2"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> toppings = {"20 4", "71 43", "26 60", "43 57", "-11 20", "58 -32", "96 -27", "47 -44", "71 -41", "2 94"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> toppings = {"-96 8", "45 -69", "86 -18", "79 43", "-48 55", "77 26", "-21 70", "-34 49", "49 10", "-86 -41", "12 -77", "40 36", "-54 51", "-44 70", "75 27", "-4 -96", "-18 19", "21 91", "-36 10", "-55 -26", "-29 3", "-70 -46", "23 41", "48 51", "-58 74", "39 28", "-74 -63", "-46 -88", "13 -17", "92 -8", "76 33", "45 -73", "-33 -34", "26 -70", "-7 -93", "67 -10", "48 28", "68 22", "-17 67", "-13 15", "9 60", "16 -4", "-31 -29", "7 -4", "-8 17", "16 36", "62 19", "28 87", "-25 -44", "-51 -71"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> toppings = {"130 32", "-158 -65", "308 -86", "-314 -46", "64 438", "291 414", "161 376", "349 253", "238 114", "-364 140"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> toppings = {"-15 -477", "-362 411", "-10 236", "426 -355", "-174 -213", "158 319", "-284 -378", "-90 -2", "-73 176", "383 44", "-36 -470", "-244 -421", "267 -120", "-146 -33", "28 371", "302 1", "-179 347", "-185 -350", "-494 -106", "-230 377", "-58 117", "114 270", "-129 364", "-339 330", "385 -494", "-488 -155", "299 340", "-372 334", "-171 -302", "-279 -8", "147 -386", "-362 328", "-339 40", "316 67", "-429 197", "-377 267", "-465 -178", "97 -19", "407 231", "211 330", "126 -116", "408 -401", "42 407", "284 58", "-445 380", "67 492", "283 -1", "452 -410", "-417 -419", "-384 235"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> toppings = {"8 -2", "-6 1", "4 1", "4 -1", "3 0", "-2 -8", "-2 8", "-6 -1", "8 2"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> toppings = {"-8 14", "-2 -16", "12 5", "4 -7", "18 1", "4 19", "-1 -8", "-14 -8", "-17 7", "1 -18", "-15 -3", "8 -14", "-7 -4", "3 -2", "-7 9", "-14 5", "-17 -6", "-2 10", "8 12", "16 -2", "3 -15", "-11 16", "2 16", "6 9", "10 -11", "-11 -10", "13 -13", "-6 17", "12 -8", "-5 -14", "14 8", "15 -10", "11 -3", "-15 10", "-12 8", "0 13", "16 11", "19 -4", "-8 1", "-16 -11", "-3 2", "-10 11", "5 14", "14 -5", "10 2", "11 10", "-8 -12", "-4 -19", "-10 -15", "-16 2"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> toppings = {"33 11", "-59 -31", "-60 -63", "90 -25", "60 -63", "65 34", "-65 34", "-90 -25", "-33 11", "59 -31"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> toppings = {"-54 -83", "-46 54", "-5 -44", "-1 -31", "-14 47", "7 -5", "-45 -63", "-88 47", "-17 -9", "-26 -66", "40 56", "-67 69", "-49 -2", "2 62", "61 78", "-81 -32", "87 33", "-22 -53", "-43 -38", "57 28", "35 12", "-53 -15", "52 -16", "32 -44", "-73 68", "79 44", "3 56", "-66 26", "-87 41", "4 87", "22 53", "59 16", "-3 55", "3 19", "-26 8", "43 38", "54 46", "-16 22", "-3 -93", "45 63", "0 -37", "-7 5", "-40 -56", "40 19", "-8 -63", "-16 -89", "29 11", "-52 -21", "-58 -22", "4 -61"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> toppings = {"-48 -221", "342 296", "-125 490", "490 125", "171 148", "125 -490", "-490 -125", "-317 -394", "194 467", "-96 -442"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> toppings = {"127 361", "-267 -44", "173 215", "-365 -115", "-321 -382", "365 115", "309 -344", "-198 -263", "21 -194", "19 -315", "-56 -459", "-25 -48", "-121 2", "-190 221", "94 -171", "284 -392", "50 96", "482 -129", "-96 50", "196 142", "-117 244", "48 -25", "244 117", "261 -319", "-265 77", "56 459", "-244 -117", "267 44", "-44 267", "-311 223", "-31 -411", "-246 -238", "-8 -484", "-242 4", "194 21", "29 290", "165 -269", "-171 -94", "338 -54", "313 -102", "6 363", "46 -146", "-213 294", "-286 271", "79 386", "-309 344", "-29 -290", "98 71", "190 -221"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> toppings = {"77 15", "282 14", "-427 186", "209 -52", "49 -167", "107 -324", "350 -432", "246 370", "363 132", "68 -353", "-407 -26", "68 353", "-397 -181", "-70 411", "-397 181", "-494 -98", "246 -370", "-38 -425", "30 101", "189 -337", "-494 98", "-319 -193", "-427 -186", "284 65", "-38 425", "189 337", "314 -359", "249 41", "-367 -449", "30 -101", "-367 449", "500 -36", "107 324", "-319 193", "284 -65", "282 -14", "-70 -411", "363 -132", "355 -355", "500 36", "-447 -252", "249 -41", "355 355", "-407 26", "350 432", "77 -15", "-447 252", "209 52", "314 359", "49 167"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> toppings = {"-2 5", "-3 1", "2 -5", "-3 -1", "2 5", "3 -1", "3 1", "-2 -5"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> toppings = {"-16 11", "-10 2", "-5 -12", "5 12", "7 9", "-11 -16", "-3 11", "2 -16", "14 -8", "5 -14", "16 -11", "-2 -10", "9 6", "1 -8", "-13 0", "9 -7", "-11 -3", "3 15", "-14 8", "-2 16", "-7 -9", "11 16", "-9 -6", "-4 19", "13 0", "10 -15", "-19 -4", "-15 -10", "3 -11", "10 -2", "11 3", "15 -3", "7 -4", "11 -10", "-3 -15", "-7 4", "-15 3", "-10 15", "-1 8", "-11 10", "-5 14", "4 -19", "15 10", "2 10", "19 4", "-9 7"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> toppings = {"-8 -21", "12 -19", "8 21", "82 -12", "-82 12", "-12 19", "-78 -28", "78 28"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> toppings = {"37 12", "97 5", "61 -62", "8 -84", "-52 -77", "-16 79", "-37 -12", "-2 -68", "-12 37", "-85 47", "16 -79", "-30 -41", "44 72", "-27 -28", "-13 92", "82 29", "46 51", "-46 -51", "49 64", "-67 36", "9 -50", "-49 -64", "-82 -29", "-76 -3", "28 62", "-9 50", "76 3", "-28 27", "52 77", "-28 -62", "28 -27", "27 28", "67 -36", "30 41", "2 68", "19 -66", "-61 62", "26 -6", "85 -47", "-44 -72", "-26 6", "-8 84", "12 -37", "-19 66", "-97 -5", "13 -92"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> toppings = {"262 -16", "-256 -58", "189 425", "-255 389", "256 58", "255 -389", "-189 -425", "-262 16"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> toppings = {"-134 102", "254 -278", "-200 57", "-355 48", "49 259", "-46 162", "-305 211", "-250 -106", "85 -361", "-190 -194", "46 -162", "-63 -333", "305 -211", "438 -217", "-166 338", "190 194", "-20 -207", "-49 -259", "-259 49", "366 314", "426 226", "85 348", "283 -226", "-283 226", "250 106", "-370 70", "-42 487", "-85 361", "-438 217", "42 -487", "-333 63", "370 -70", "107 -346", "355 -48", "63 333", "333 -63", "200 -57", "134 -102", "-366 -314", "-254 278", "-107 346", "259 -49", "20 207", "70 370", "-85 -348", "166 -338", "-70 -370", "-426 -226"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> toppings = {"-4 -310", "402 55", "-45 259", "276 52", "-402 -55", "276 -52", "45 259", "-276 -52", "442 -410", "402 -55", "461 -145", "22 145", "-13 -2", "318 -144", "-402 55", "4 -310", "236 -123", "45 -259", "22 -145", "-442 -410", "282 -94", "4 310", "-442 410", "230 460", "13 2", "-236 123", "318 144", "-282 -94", "-318 -144", "-230 -460", "461 145", "236 123", "-461 -145", "-236 -123", "-22 -145", "-22 145", "-4 310", "442 410", "-13 2", "282 94", "-230 460", "-276 52", "-45 -259", "-318 144", "-282 94", "13 -2", "230 -460", "-461 145"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> toppings = {"6 0", "-6 0", "0 6", "0 -6"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> toppings = {"-11 13", "0 -10", "13 -4", "10 -10", "10 0", "2 14", "-11 8", "-10 -10", "11 -8", "-10 10", "-13 9", "-9 -13", "1 -3", "-3 -1", "8 11", "-14 2", "14 -2", "5 15", "13 -9", "-6 8", "7 14", "17 -1", "1 17", "-10 0", "-2 -14", "11 -13", "0 10", "-1 3", "-17 1", "15 -5", "14 -7", "6 -8", "13 11", "4 13", "9 13", "-8 -11", "-14 7", "-15 5", "-7 -14", "8 6", "-1 -17", "-5 -15", "-8 -6", "-13 -11", "3 1", "-4 -13", "-13 4", "10 10"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> toppings = {"-63 -9", "63 9", "-9 63", "9 -63"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> toppings = {"-39 -72", "-47 -18", "85 -15", "33 38", "-61 2", "58 -19", "-38 33", "18 -47", "47 18", "40 28", "28 -40", "19 58", "-16 -41", "-44 -1", "-85 15", "-7 10", "16 41", "-10 -7", "-19 -58", "7 -10", "72 -39", "-81 -12", "-40 -28", "38 -33", "-72 39", "2 61", "44 1", "10 7", "12 -81", "-2 -61", "-28 40", "-15 -85", "41 -16", "61 -2", "-12 81", "15 85", "-33 -38", "-18 47", "81 12", "-1 44", "-41 16", "-58 19", "39 72", "1 -44"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> toppings = {"386 352", "446 -272", "-446 272", "-386 -352", "-272 -446", "352 -386", "272 446", "-352 386"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> toppings = {"-37 -161", "290 -287", "374 -69", "-337 230", "230 337", "-151 -67", "-92 411", "37 161", "-354 -139", "12 421", "-290 287", "421 -12", "69 374", "-139 354", "67 -151", "337 -230", "-12 -421", "-47 -57", "411 92", "151 67", "32 213", "161 -37", "-161 37", "-72 203", "-287 -290", "-57 47", "57 -47", "203 72", "139 -354", "72 -203", "-69 -374", "47 57", "354 139", "-203 -72", "-32 -213", "287 290", "-230 -337", "-213 32", "-67 151", "213 -32", "-421 12", "92 -411", "-374 69", "-411 -92"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> toppings = {"239 274", "415 -458", "-274 -239", "316 241", "211 238", "-211 238", "233 -125", "238 -211", "238 211", "-241 -316", "469 -180", "-125 233", "-125 -233", "-469 180", "-458 415", "458 -415", "-241 316", "233 125", "-458 -415", "-239 -274", "-415 -458", "274 239", "241 -316", "239 -274", "-238 211", "241 316", "458 415", "180 469", "-238 -211", "-415 458", "-233 -125", "-316 -241", "-180 -469", "180 -469", "-274 239", "-233 125", "274 -239", "415 458", "-239 274", "469 180", "-211 -238", "211 -238", "125 233", "125 -233", "-180 469", "-469 -180", "316 -241", "-316 241"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> toppings = {"-245 145", "-205 -11", "100 -390", "245 -145", "17 420", "-98 58", "95 440", "479 -85", "120 -468", "-187 243", "-430 56", "235 -106", "118 -136", "-468 -120", "-451 300", "334 -330", "-18 -254", "470 -212", "86 313", "-176 38", "-450 134", "-186 77", "-412 310", "264 -57", "360 217", "31 -283", "98 -58", "391 -66", "382 -193", "89 -185", "-177 204", "480 -251", "-32 449", "246 -311", "340 295", "320 373", "303 -47", "-263 -109", "233 226", "-353 242", "409 188", "256 -350", "-214 -138", "-246 311", "-390 -100", "-206 155", "173 460", "-391 66", "157 -126", "-305 379"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> toppings = {"-230 -165", "-236 193", "-94 267", "230 165", "227 344", "111 -213", "-335 -310", "426 222", "26 -483", "-270 85", "28 466", "11 412", "94 -267", "392 114", "-26 483", "-392 -114", "-426 -222", "-239 372", "335 310", "-111 213", "-256 318", "-97 446", "213 111", "-409 -168", "-11 -412", "-298 -381", "-244 -398", "-222 426", "270 -85", "-28 -466", "-304 -23", "97 -446", "304 23", "239 -372", "244 398", "236 -193", "-227 -344", "409 168", "-213 -111", "222 -426", "256 -318", "298 381"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> toppings = {"92 -261", "0 0", "-411 -352", "-371 318", "-17 391", "-485 -240", "315 -355", "166 -373", "168 111", "-147 466", "112 74", "485 240", "278 -299", "-278 299", "297 -206", "36 -298", "-297 206", "-260 150", "-204 187", "-447 -54", "-57 -279", "260 -150", "411 352", "204 -187", "-315 355", "371 -318", "185 -280", "-92 261", "-73 354", "57 279", "-168 -111", "-166 373", "-203 429", "279 -57", "-225 -390", "-37 56", "447 54", "353 -169", "-112 -74", "203 -429", "37 -56", "-279 57", "73 -354", "225 390", "17 -391", "-185 280", "-353 169", "147 -466", "-36 298"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> toppings = {"-356 360", "447 -92", "446 -271", "180 178", "270 267", "271 446", "90 89", "-446 271", "448 87", "-445 450", "-360 -356", "179 -1", "-270 -267", "-449 -266", "-177 359", "-358 2", "0 0", "-269 -88", "358 -2", "-359 -177", "449 266", "-266 449", "92 447", "-89 90", "357 -181", "87 -448", "-88 269", "-448 -87", "266 -449", "-179 1", "-267 270", "-271 -446", "-87 448", "360 356", "-447 92", "-92 -447", "445 -450", "268 -91", "-1 -179", "356 -360", "-181 -357", "2 358", "89 -90", "267 -270", "-91 -268", "1 179", "-2 -358"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> toppings = {"86 157", "-168 44", "-186 318", "-44 -168", "-440 205", "37 484", "-80 380", "97 199", "-104 117", "-86 -157", "51 -148", "429 -247", "0 0", "186 -318", "-334 267", "24 263", "-179 2", "144 -307", "-77 -294", "221 -13", "-5 495", "254 113", "69 -422", "-329 -228", "-294 77", "-84 22", "292 -256", "-22 -84", "77 294", "294 -77", "369 38", "-153 444", "-37 -484", "-466 -237", "-497 -184", "-197 276", "241 -108", "-170 -135", "-404 -343", "214 303", "440 -205", "-360 -175", "179 -2", "312 -351", "223 166", "-435 -290", "-201 -82"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
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
    vector<string> toppings = {"-178 -431", "-446 72", "-371 288", "-266 -383", "301 -364", "188 397", "56 469", "431 -178", "232 373", "-469 56", "-364 -301", "288 371", "72 446", "156 443", "469 -56", "-156 -443", "-301 364", "178 431", "266 383", "-336 -302", "-431 178", "-188 -397", "-56 -469", "-288 -371", "364 301", "383 -266", "-72 -446", "373 -232", "-443 156", "302 -336", "397 -188", "-383 266", "-232 -373", "446 -72", "336 302", "371 -288", "-373 232", "-397 188", "443 -156", "-302 336"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> toppings = {"92 201", "-447 -233", "-310 385", "432 94", "184 402", "-186 231", "-124 154", "-263 169", "139 -15", "17 -494", "372 -462", "402 -184", "-62 77", "340 -107", "263 -169", "109 -293", "-94 432", "169 263", "62 -77", "-47 216", "370 171", "216 47", "-107 -340", "-293 -109", "246 325", "494 17", "186 -231", "293 109", "-479 122", "124 -154", "94 -432", "387 -323", "171 -370", "310 -385", "122 479", "-372 462", "231 186", "-169 -263", "-32 355", "248 -308", "-402 184", "-325 246", "-109 293", "15 139", "-248 308", "0 0", "-355 -32", "-233 447", "201 -92", "-323 -387"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> toppings = {"-158 110", "-63 41", "198 -258", "130 -142", "-346 -234", "-254 -145", "-282 162", "282 -162", "-411 -50", "-49 57", "63 -41", "322 -84", "49 -57", "-337 -482", "-74 319", "-186 -374", "326 -31", "158 -110", "-381 -48", "74 -319", "-126 308", "433 398", "186 374", "-409 146", "-130 142", "3 -384", "411 50", "126 -308", "-110 -271", "110 271", "-433 -398", "-326 31", "254 145", "5 -414", "-3 384", "-199 386", "-198 258", "-5 414", "346 234", "409 -146", "337 482", "-322 84", "199 -386", "381 48"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> toppings = {"-313 79", "-24 -227", "-361 -375", "7 -368", "234 -392", "31 -141", "0 0", "-392 -234", "172 -110", "-117 196", "-141 -31", "-227 24", "-189 -485", "227 -24", "-86 55", "423 93", "-375 361", "189 485", "361 375", "-282 -62", "79 313", "-275 -430", "337 148", "-368 -7", "48 454", "-62 282", "117 -196", "454 -48", "-31 141", "-203 251", "93 -423", "275 430", "-148 337", "368 7", "196 117", "148 -337", "-251 -203", "289 -306", "399 -134", "-485 189", "141 31"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> toppings = {"111 -442", "360 335", "117 -389", "-136 -253", "448 164", "382 -419", "-64 383", "-318 36", "82 -224", "213 459", "224 82", "248 294", "-377 -11", "366 388", "-466 -323", "365 -95", "76 -277", "-229 348", "-276 407", "-105 495", "318 -36", "271 23", "-207 -406", "-471 107", "-201 -353", "-130 -200", "419 382", "-200 130", "-400 260", "188 -236", "483 -1", "-176 342", "-259 83", "-323 466", "301 288", "-270 460", "30 265", "148 359", "0 0", "-135 230", "-236 -188", "183 194"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> toppings = {"4 9", "5 -1", "-2 7", "-4 9", "9 2", "-4 -1", "-9 2", "2 7", "6 0", "-6 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
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
    vector<string> toppings = {"4 2", "3 -1", "3 -8", "-4 6", "-3 0", "-4 2", "-4 3", "4 6", "4 3", "-3 -8"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> toppings = {"2 7", "-2 7", "-9 -1", "8 1", "-2 -7", "-9 1", "2 -7", "9 -1"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> toppings = {"5 -4", "-5 -4", "3 0", "5 4", "5 -6", "-5 4", "-5 6", "5 6", "-3 0", "-5 -5"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> toppings = {"4 -5", "-5 5", "-5 -5", "5 5"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> toppings = {"3 -3", "-3 -3", "-3 3", "3 4"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> toppings = {"108 -422", "9 404", "413 -105", "499 297", "202 386", "-413 -105", "-9 404", "-108 -422", "-498 297", "-202 386"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> toppings = {"-242 63", "-475 -432", "-269 -22", "-23 363", "475 -432", "420 340", "231 470", "-104 -38", "174 -131", "104 -38", "242 63", "-420 340", "269 -22", "93 414", "-174 -132", "23 363", "0 247", "-231 470", "-93 414"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> toppings = {"-285 -280", "44 460", "-280 481", "-296 218", "-44 460", "406 -411", "-437 384", "279 -481", "44 -460", "339 127", "406 411", "-406 -411", "437 384", "285 280", "437 -384", "296 218", "-339 -127", "-285 280", "-280 -481", "-296 -218", "280 481", "-437 -384", "-406 411", "285 -280", "-339 127", "339 -127", "-44 -460", "296 -218"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> toppings = {"471 241", "-471 241", "-191 -56", "-336 261", "191 56", "-115 -386", "8 -289", "-471 -241", "-227 149", "-342 78", "471 -241", "491 221", "496 337", "491 -221", "-496 -337", "-491 -221", "494 -123", "-342 -78", "8 289", "336 261", "-494 123", "-336 -261", "342 -78", "-115 386", "336 -261", "-8 289", "342 78", "-491 221", "115 386", "494 123", "227 149", "-227 -149", "115 -386", "-191 56", "-496 337", "-8 -289", "-494 -123", "227 -149", "496 -338", "191 -56"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> toppings = {"95 321", "-198 -201", "-66 213", "95 -404", "153 478", "-404 95", "213 66", "-213 66", "-201 198", "-201 -198", "81 -402", "201 198", "66 213", "66 -213", "-95 -321", "-321 95", "-404 -95", "-213 -66", "198 -201", "478 -153", "-66 -213", "-81 402", "81 402", "321 95", "-321 -95", "404 -95", "-402 -81", "-95 321", "404 95", "201 -198", "-402 81", "321 -95", "95 -321", "198 201", "402 -81", "402 81", "478 153", "213 -66", "-81 -402", "-478 153", "153 -478", "-153 -478", "-95 404", "-198 201", "-479 -153", "95 404", "-95 -404", "-153 478"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> toppings = {"-29 338", "93 480", "311 176", "-93 -480", "223 213", "-195 -205", "-195 205", "-223 213", "195 -205", "-213 223", "338 29", "-29 -338", "-205 -195", "-311 176", "-421 91", "421 -90", "-421 -91", "-311 -176", "-213 -223", "338 -29", "91 -421", "213 223", "205 -195", "-176 311", "-205 195", "311 -176", "176 311", "-91 -421", "176 -311", "480 -93", "213 -223", "-480 -93", "421 91", "480 93", "-91 421", "195 205", "91 421", "93 -480", "-480 93", "-223 -213", "-338 29", "-93 480", "-338 -29", "29 338", "205 195", "-176 -311", "29 -338", "223 -213"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> toppings = {"-362 296", "244 -262", "0 0", "362 -296", "58 -464", "-135 -25", "157 434", "-156 13", "324 -317", "-253 9", "-29 232", "29 -232", "-157 -434", "176 -498", "253 -9", "-93 -101", "96 -443", "328 -414", "-58 464", "92 -346", "-72 -139", "93 101", "127 219", "-181 148", "-451 98", "-176 498", "451 -98", "-92 346", "156 -13", "181 -148", "114 63", "72 139", "-324 317", "-328 414", "-96 443", "-127 -219", "-244 262", "-114 -62", "135 25"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> toppings = {"-302 375", "-223 263", "477 -72", "-459 -85", "117 -468", "-80 -88", "351 -299", "207 73", "-402 265", "-335 405", "-327 -426", "-167 -250", "202 -43", "159 197", "41 465", "233 190", "218 -158", "-270 366", "80 88", "381 -266", "-350 -164", "-53 -213", "356 -404", "-450 168", "-160 -397", "394 124", "331 -321", "-435 295", "-337 -216", "-121 331", "81 -375", "381 -45", "-210 432", "453 432", "130 364", "62 -197", "301 -354", "-283 197", "393 366", "380 197", "-387 -492", "-181 -177", "183 356", "-341 89", "-390 234", "-86 -404"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> toppings = {"226 -43", "-326 188", "48 383", "29 -126", "291 -46", "-21 275", "186 -350", "-212 -262", "-49 82", "-496 106", "238 -294", "304 406", "-165 221", "14 -378", "-1 100", "93 -175", "-142 -181", "-446 -149", "-288 257", "-65 76", "-189 -226", "-75 54", "-375 270", "104 -180", "429 24", "145 246", "-17 94", "-339 -264", "352 278", "-448 -22", "90 -386", "105 450", "22 90", "332 -58", "45 -193", "40 -204", "122 356", "61 -114", "434 181", "-271 90", "-3 8"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> toppings = {"277 -64", "325 -214", "386 26", "-5 221", "-92 -269", "5 -221", "-386 -26", "-273 131", "-277 64", "-252 337", "495 169", "-174 239", "-325 214", "185 -121", "10 -390", "-153 392", "-148 -359", "226 314", "-166 108", "-226 -314", "-405 -331", "405 331", "-383 64", "92 269", "273 -131", "148 359", "-33 -301", "-111 274", "383 -64", "174 -239", "166 -108", "252 -337", "4 -198", "-495 -169", "33 301", "-185 121", "-10 389", "153 -392", "111 -274", "-4 198"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> toppings = {"148 -428", "221 -463", "-284 -218", "-500 -113", "-39 286", "-249 -146", "-148 428", "247 325", "39 -286", "140 288", "-183 356", "428 148", "-393 -76", "103 395", "0 0", "4 -358", "-220 463", "290 -319", "397 -282", "-397 282", "-467 138", "-247 -325", "218 -284", "-430 31", "-103 -395", "-70 -144", "430 -31", "393 76", "-358 -4", "-290 319", "358 4", "-140 -288", "-428 -148", "183 -356", "467 -138", "-4 358", "284 218", "500 113", "-218 284", "249 146", "70 144"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> toppings = {"477 144", "-347 115", "-134 -399", "181 -407", "-432 205", "432 -205", "337 -465", "-103 73", "385 -11", "-182 373", "-406 -111", "-477 -144", "-181 408", "199 222", "171 468", "445 -363", "-397 204", "103 -73", "182 -373", "-95 353", "180 -443", "134 399", "233 186", "-11 -385", "406 111", "11 385", "-362 203", "95 -353", "347 -115", "-171 -468", "-445 363", "-67 107", "-180 443", "-233 -186", "-199 -222", "397 -204", "-337 465", "-385 11", "67 -107", "362 -203"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> toppings = {"285 203", "-241 199", "-37 114", "-207 -294", "83 467", "207 294", "41 244", "265 -40", "-113 384", "113 -384", "-76 -393", "260 65", "-181 265", "118 -268", "221 221", "76 393", "-127 457", "64 -239", "181 -265", "92 278", "-83 -467", "37 -114", "26 117", "-221 -221", "-92 -278", "-260 -65", "-285 -203", "-155 -281", "-234 273", "-26 -117", "234 -273", "241 -199", "-303 175", "303 -175", "127 -457", "-64 239", "155 281", "-265 40", "-82 -488", "-118 268"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> toppings = {"229 183", "-289 -433", "-183 229", "141 257", "493 -39", "-479 -123", "-153 354", "368 -9", "-449 2", "-72 361", "132 -111", "14 -162", "361 72", "-39 -493", "90 375", "-354 -153", "278 -384", "-90 -375", "220 -185", "354 153", "-83 -456", "-134 -338", "257 -141", "-396 333", "-264 222", "9 368", "79 -442", "331 -53", "2 449", "-377 -359", "-123 479", "-109 317", "-296 -352", "396 -333", "-220 185", "-435 -160", "-162 -14", "375 -90", "442 79", "-310 -190", "-426 208"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> toppings = {"284 -198", "328 -391", "-329 343", "-328 391", "-343 -329", "343 329", "-186 292", "391 328", "389 280", "377 -344", "378 -296", "198 284", "186 -292", "329 -343", "296 378", "-391 -328", "-378 296", "49 47", "-292 -186", "-390 -280", "-377 344", "-475 250", "-284 198", "-344 -377", "0 0", "-250 -475", "230 -485", "-49 -47", "47 -49", "485 230", "344 377", "-47 49", "-296 -378", "250 475", "280 -390", "-230 485", "-485 -230", "-280 390", "-198 -284", "292 186", "475 -250"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> toppings = {"385 -355", "-225 65", "-473 -34", "286 -107", "225 -65", "-15 370", "-385 355", "-286 107", "-160 290", "313 324", "191 408", "-64 -225", "-141 187", "-351 -118", "-294 -427", "-469 233", "469 -233", "15 -370", "294 427", "65 225", "-263 271", "141 -187", "-328 46", "187 141", "-191 -408", "-202 229", "347 -149", "160 -290", "328 -46", "-313 -324", "202 -229", "473 34", "-347 149", "351 118", "-187 -141", "-137 454", "137 -454", "263 -271"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> toppings = {"-100 375", "365 -465", "-360 145", "265 -90", "-266 -328", "57 -274", "32 121", "-124 -17", "-400 295", "92 -104", "375 100", "295 400", "-375 -100", "400 -295", "-92 104", "288 -116", "360 -145", "-145 -360", "244 -433", "80 -300", "-101 -43", "433 244", "417 -419", "-433 -244", "-104 -92", "358 224", "-295 -400", "-244 433", "0 0", "100 -375", "104 92", "55 95", "145 360"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> toppings = {"-53 271", "-217 -231", "161 273", "-371 297", "-271 -53", "81 -417", "-177 389", "25 -275", "-389 273", "-423 61", "61 423", "366 438", "-389 -177", "177 -389", "-275 -25", "371 -297", "286 -127", "-318 -474", "-61 -423", "389 177", "469 -158", "275 25", "297 371", "389 -273", "423 -61", "202 -239", "99 -168", "-273 -389", "300 -425", "162 -334", "65 -405", "337 -234", "273 389", "492 -169", "283 -406", "271 53", "-297 -371", "-25 275", "423 39", "319 -258", "53 -271", "407 51", "366 -62", "189 -48"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> toppings = {"-488 -195", "120 275", "311 378", "-311 -378", "-297 462", "-347 -45", "58 156", "-59 61", "473 126", "300 -5", "-473 -126", "-181 497", "166 -12", "-58 -156", "377 -371", "31 -79", "-380 -363", "297 -462", "488 195", "185 297", "347 45", "-166 12", "380 363", "-185 -297"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> toppings = {"131 -105", "300 19", "222 -102", "-153 -333", "-222 102", "247 245", "0 0", "-374 15", "165 -31", "-220 -235", "-181 240", "-131 105", "-421 59", "421 -59", "-319 281", "-136 -296", "153 333", "255 -274", "-300 -19", "136 296", "25 347", "-165 31", "-35 -320", "181 -240", "319 -281"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
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
    vector<string> toppings = {"138 416", "-161 155", "-16 -438", "205 89", "-138 -416", "-205 -89", "-416 138", "-89 205", "-333 249", "-438 16", "438 -16", "89 -205", "155 161", "-131 496", "416 -138", "399 117", "-155 -161", "16 438", "161 -155", "296 419"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> toppings = {"-358 -34", "-47 -456", "-40 231", "-410 -57", "-272 -369", "185 144", "-242 266", "-184 416", "-18 -381", "40 -231", "404 -70", "-145 -375", "416 184", "-398 197", "346 -220", "47 456", "-185 -144", "-404 70", "145 375", "272 369", "265 -318", "242 -266", "-243 -294", "358 34", "427 -122", "-346 220"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> toppings = {"38 184", "-184 38", "-19 -92", "35 -295", "-425 -200", "-35 295", "-352 -311", "-92 19", "92 -19", "200 -425", "-238 241", "-3 -479", "19 92", "-149 -257", "-257 149", "-200 425", "149 257", "-295 -35", "311 -352", "-187 -441", "425 200", "-311 352", "295 35", "257 -149", "352 311", "314 127", "0 0", "184 -38"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> toppings = {"-322 -486", "70 -9", "461 -256", "-88 162", "368 95", "-444 -35", "-173 152", "22 -480", "-90 472", "-368 -95", "-365 26", "0 0", "103 150", "440 69", "218 198", "-135 122", "48 178", "-380 7", "-22 480", "365 -26", "-148 -500", "-349 -110", "-218 -198", "-461 256", "-249 -374", "-389 -356", "349 110", "-258 142", "389 356", "-66 -25", "133 188", "258 -142", "380 -7", "260 -452", "90 -472", "426 -398", "329 -306", "-440 -69", "444 35"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> toppings = {"346 428", "15 -170", "-35 -380", "-123 -4", "-50 -210", "-325 -200", "-4 123", "14 152", "112 51", "245 330", "222 -419", "-419 -222", "230 500", "-222 419", "474 -13", "187 366", "130 80", "4 -123", "-166 -138", "-51 112", "-13 -474", "13 474", "419 222", "-112 -51", "123 4", "-159 -62", "51 -112", "-474 13"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> toppings = {"360 174", "31 89", "-83 478", "91 118", "265 -242", "-2 -149", "-362 -323", "-54 418", "-89 31", "174 -360", "89 -31", "-25 358", "-360 -174", "-174 360", "149 -2", "118 -91", "-265 242", "2 149", "54 -418", "478 83", "83 -478", "-91 -118", "-31 -89", "-294 302", "323 -362", "25 -358", "-149 2", "-478 -83", "294 -302", "-323 362", "-118 91", "362 323"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> toppings = {"344 -377", "497 116", "-497 -116", "-377 -344", "333 -253", "186 341", "252 351", "-42 -77", "-95 -305", "-252 -351", "105 492", "-245 205", "-419 -271", "341 -186", "-499 1", "83 165", "-116 497", "116 -497", "25 183", "-105 -492", "-192 -465", "143 393", "377 344", "-25 -183", "-232 -59", "9 -432", "-83 -165", "-404 -8", "-140 319", "-227 -76", "-9 432", "55 -344", "-337 298", "-344 377", "-122 -433", "192 465", "-77 42", "-344 -212"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> toppings = {"360 -20", "-348 -336", "-124 407", "-175 110", "348 336", "-150 -490", "425 -20", "240 420", "193 74", "150 490", "-108 344", "323 -496", "186 -448", "480 -70", "274 213", "-438 -266", "-480 70", "-240 -420", "124 -407", "108 -344", "74 -193", "-231 487", "-186 448", "-274 -213", "-413 -424", "139 318", "438 266", "-425 20", "-110 -175", "-360 20", "-139 -318", "321 433"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> toppings = {"374 -138", "-341 -336", "-72 243", "255 428", "-67 -124", "-305 325", "-249 -250", "-447 220", "258 -276", "138 374", "72 -243", "341 336", "-345 74", "469 -96", "-114 382", "-374 138", "-258 276", "67 124", "-59 128", "-124 67", "305 -325", "128 59", "-138 -374", "-325 -305", "382 114", "325 305", "345 -74", "-128 -59", "249 250", "-382 -114", "-255 -428", "66 372", "-66 -372", "-469 96", "59 -128", "447 -220", "114 -382", "124 -67"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> toppings = {"107 326", "499 243", "-356 -308", "147 -396", "-337 441", "-147 396", "356 308", "-441 -337", "-309 -288", "-338 -59", "-415 30", "288 -309", "-499 -243", "396 147", "154 -178", "-288 309", "243 -499", "441 337", "255 65", "30 415", "337 -441", "-243 499", "-396 -147", "309 288", "-101 -243"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> toppings = {"313 246", "389 407", "-179 -370", "14 231", "231 -14", "-451 -337", "-231 14", "349 -77", "407 -389", "-14 -231", "-281 282", "282 281", "-313 -246", "-246 313", "-196 470", "19 493", "-29 -410", "281 -282", "-282 -281", "-341 107", "229 437", "-389 -407", "-337 451", "451 337", "404 310", "337 -451", "-407 389", "246 -313"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> toppings = {"232 -71", "424 -218", "-195 -275", "-103 321", "80 -470", "275 -195", "298 -399", "-232 71", "218 424", "-494 63", "470 80", "-424 218", "494 -63", "-298 46", "321 103", "46 298", "-470 -80", "-321 -103", "176 -167", "195 275", "-275 195", "-46 -298", "-298 399", "-80 470", "298 -46", "-218 -424", "103 -321", "-176 167"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> toppings = {"-179 -288", "179 288", "-347 162", "243 -422", "-39 473", "288 -179", "-95 -465", "378 307", "-162 -347", "-27 382", "-307 378", "130 -75", "-422 -243", "-333 -64", "307 -378", "27 -382", "95 465", "0 0", "333 64", "382 27", "-138 -59", "64 -333", "347 -162", "-378 -307", "-243 422", "-382 -27", "138 59", "-288 179", "422 243", "-130 75", "162 347", "39 -473", "-64 333"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> toppings = {"279 233", "-233 279", "-255 68", "332 131", "-180 -193", "211 249", "57 -359", "186 -234", "-164 317", "164 -317", "-311 99", "-317 -164", "54 -294", "-294 -54", "-131 332", "180 193", "359 57", "-54 294", "294 54", "233 -279", "131 -332", "255 -68", "234 186", "-359 -57", "-279 -233", "-57 359", "-211 -249", "317 164", "-332 -131", "-234 -186", "311 -99", "-186 234"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> toppings = {"-180 445", "-40 299", "-181 194", "445 180", "387 284", "110 -75", "283 226", "393 110", "-218 -345", "-13 -375", "13 375", "-363 95", "-6 133", "341 122", "-370 -239", "-98 475", "218 345", "363 -95", "40 -299", "335 286", "134 -229", "249 -202", "-480 5", "181 -194", "-247 -257", "18 -399", "275 -124", "-335 -286", "370 239", "98 191", "214 -17", "-393 -110", "427 -230", "-317 -163", "98 -475", "284 -387", "-248 -411", "-275 124", "317 163", "-330 225", "-41 318", "247 257", "-427 230", "-134 229"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> toppings = {"-33 -446", "89 198", "-114 187", "63 -259", "33 446", "322 -196", "2 219", "257 -366", "-322 196", "259 63", "135 170", "-257 366", "446 -33", "-47 -129", "114 -187", "-93 -101", "219 -2", "-259 -63", "366 257", "-2 -219", "-135 -170", "-446 33", "-219 2", "47 129", "187 114", "-89 -198", "-366 -257", "93 101", "-187 -114", "-63 259"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> toppings = {"-4 12", "-86 258", "-48 144", "-18 54", "-54 162", "-26 78", "-8 24", "-62 186", "-82 246", "-74 222", "-32 96", "-88 264", "-38 114", "-70 210", "-24 72", "-28 84", "-14 42", "-84 252", "-80 240", "-68 204", "-42 126", "-66 198", "-6 18", "-10 30", "-34 102", "-30 90", "-78 234", "-56 168", "-90 270", "-46 138", "-20 60", "-2 6", "-60 180", "-72 216", "-22 66", "-16 48", "-52 156", "-36 108", "-58 174", "-12 36", "-40 120", "-76 228", "-50 150", "-44 132", "-64 192"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
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
    vector<string> toppings = {"-153 0", "0 216", "-99 0", "-90 0", "-63 0", "0 90", "0 126", "-135 0", "-198 0", "0 108", "-81 0", "0 54", "-108 0", "-126 0", "0 72", "0 144", "-36 0", "-207 0", "-216 0", "0 81", "-171 0", "-45 0", "0 207", "0 162", "-162 0", "-117 0", "-54 0", "-180 0", "-225 0", "-189 0", "0 117", "0 45", "0 36", "-144 0", "0 9", "-27 0", "0 135", "-72 0", "-18 0", "-9 0", "0 153", "0 18", "0 225", "0 27", "0 99", "0 189", "0 171", "0 198", "0 63", "0 180"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> toppings = {"96 12", "32 4", "72 9", "56 7", "-136 -17", "-48 -6", "-112 -14", "-152 -19", "128 16", "120 15", "24 3", "-128 -16", "-56 -7", "-8 -1", "80 10", "-16 -2", "-144 -18", "40 5", "-88 -11", "160 20", "-192 -24", "-104 -13", "168 21", "-96 -12", "-184 -23", "-72 -9", "64 8", "152 19", "144 18", "112 14", "-168 -21", "192 24", "8 1", "176 22", "104 13", "-160 -20", "16 2", "-176 -22", "-32 -4", "-120 -15", "88 11", "-80 -10", "136 17", "-40 -5", "184 23", "-24 -3", "-64 -8", "48 6"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> toppings = {"33 11", "7 -21", "3 1", "36 12", "5 -15", "27 9", "-9 27", "-12 36", "6 2", "-7 21", "24 8", "-15 -5", "21 7", "-1 3", "-3 9", "30 10", "12 4", "-10 30", "9 -27", "9 3", "2 -6", "18 6", "4 -12", "-33 -11", "12 -36", "-18 -6", "-24 -8", "-2 6", "-4 12", "-9 -3", "-12 -4", "-5 15", "-3 -1", "-27 -9", "-6 -2", "8 -24", "3 -9", "1 -3", "15 5", "-36 -12", "-6 18", "10 -30", "-21 -7", "6 -18", "-30 -10", "11 -33", "-11 33", "-8 24"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> toppings = {"0 0", "481 0", "480 31", "-481 0", "-480 -31"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> toppings = {"-31 480", "0 481", "31 -480", "0 -481", "0 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> toppings = {"348 359", "0 0", "-359 348"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> toppings = {"348 359", "359 -348", "0 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> toppings = {"499 -500", "-500 -499", "0 0", "500 499", "-499 500"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> toppings = {"500 499", "-500 -499", "-499 500", "499 -500", "0 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> toppings = {"-54 -83", "-46 54", "-5 -44", "-1 -31", "-14 47", "7 -5", "-45 -63", "-88 47", "-17 -9", "-26 -66", "40 56", "-67 69", "-49 -2", "2 62", "61 78", "-81 -32", "87 33", "-22 -53", "-43 -38", "57 28", "35 12", "-53 -15", "52 -16", "32 -44", "-73 68", "79 44", "3 56", "-66 26", "-87 41", "4 87", "22 53", "59 16", "-3 55", "3 19", "-26 8", "43 38", "54 46", "-16 22", "-3 -93", "45 63", "0 -37", "-7 5", "-40 -56", "40 19", "-8 -63", "-16 -89", "29 11", "-52 -21", "-58 -22", "4 -61"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> toppings = {"1 2", "3 4"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> toppings = {"0 0", "2 0", "0 2", "-2 0", "0 -2", "5 -5", "-5 5"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> toppings = {"0 110", "0 70", "-75 20", "75 20", "-25 -50", "25 -50"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> toppings = {"-300 100", "-200 100", "-100 100", "100 100", "200 100", "300 100", "-300 -100", "-200 -100", "-100 -100", "100 -100", "200 -100", "300 -100"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> toppings = {"0 0"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> toppings = {"0 1"};
    PizzaDivision* pObj = new PizzaDivision();
    clock_t start = clock();
    int result = pObj->howMany(toppings);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22628829&rd=9992&pm=6493
********************************************************************************
/** Solution template by user Dyatlov **/ 
/** BEGIN PRE-WRITTEN CODE **/ 
#include <stdio.h> 
#include <string.h> 
#include <math.h> 
 
#include <algorithm> 
#include <set> 
#include <string> 
#include <vector> 
 
#define FUP(i,l,r) for (int i=(l);i<=(r);i++) 
#define FOR(i,n) for (int i=0;i<(n);i++) 
 
#define SORT(a) stable_sort((a).begin(), (a).end()) 
 
using namespace std; 
/** END PRE-WRITTEN CODE **/ 
 
const double EPS = 1e-9; 
 
struct Point 
{ 
  double x, y; 
  bool operator<(const Point &a) const 
  { 
    return x + EPS < a.x || (x - EPS < a.x && y + EPS < a.y); 
  } 
  bool operator!=(const Point &a) const 
  { 
    return fabs(x - a.x) + fabs(y - a.y) > EPS; 
  } 
  void norm() 
  { 
    if (x < - EPS || (x < EPS && y < -EPS)) 
    { 
      x = -x; 
      y = -y; 
    } 
  } 
}; 
 
double sqr(double a) {return a * a;} 
 
class PizzaDivision 
{ 
  int n, x[50], y[50], res; 
  vector<Point> v1, v2, P; 
  void check(Point p) 
  { 
    v2.clear(); 
    FOR(i,n) 
    { 
      Point q; 
      double t = p.x * x[i] + p.y * y[i]; 
      q.x = x[i] - 2 * t * p.x; 
      q.y = y[i] - 2 * t * p.y; 
      v2.push_back(q); 
    } 
    SORT(v2); 
    FOR(i,n) 
      if (v1[i] != v2[i]) 
        return; 
    printf("%lf %lf\n", p.x, p.y); 
    ++res; 
  } 
public: 
  int howMany(vector <string> toppings)   
  { 
    n = toppings.size(); 
    FOR(i,n) 
      sscanf(toppings[i].c_str(), "%d%d", &x[i], &y[i]); 
    if (n == 1) 
    { 
      if (!x[0] && !y[0]) 
        return -1; 
      return 1; 
    } 
    res = 0; 
    v1.clear(); 
    FOR(i,n) 
    { 
      Point p; 
      p.x = x[i]; 
      p.y = y[i]; 
      v1.push_back(p); 
    } 
    SORT(v1); 
    int k = (x[0] || y[0]) ? 0 : 1; 
     
    P.clear(); 
    FOR(i,n) 
      if (i == k) 
      { 
        double l = sqrt(sqr(x[i]) + sqr(y[i])); 
        Point z; 
        z.x = y[i] / l; 
        z.y = - x[i] / l; 
        z.norm(); 
        P.push_back(z); 
      } 
      else 
      { 
        double l = sqrt(sqr(x[i] - x[k]) + sqr(y[i] - y[k])); 
        Point z; 
        z.x = (x[i] - x[k]) / l; 
        z.y = (y[i] - y[k]) / l; 
        z.norm(); 
        P.push_back(z); 
      } 
    SORT(P); 
    FOR(i,P.size()) 
      if (!i || P[i] != P[i - 1]) 
        check(P[i]); 
    return res; 
  } 
}; 
 
/** END SOLUTION **/

********************************************************************************
*******************************************************************************/