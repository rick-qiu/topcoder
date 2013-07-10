/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4634
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

class TestingCar {
public:
    double maximalSpeed(vector<string> restrictions, int duration, int acceleration);
};

double TestingCar::maximalSpeed(vector<string> restrictions, int duration, int acceleration) {
    double ret;
    return ret;
}


int test0() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 100;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> restrictions = {"50 30 10", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 175.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> restrictions = {"50 30 10", "50 60 50"};
    int duration = 100;
    int acceleration = 14;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 235.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> restrictions = {"0 5 100"};
    int duration = 100;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 32.5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24975.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> restrictions = {};
    int duration = 998;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 998.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> restrictions = {};
    int duration = 137;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 411.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> restrictions = {};
    int duration = 13;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 325.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> restrictions = {"0 0 100", "0 200 100", "0 400 100", "0 600 100", "0 800 100"};
    int duration = 1000;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> restrictions = {"0 0 100", "0 200 100", "0 400 100", "0 600 100", "0 800 100", "0 1000 100"};
    int duration = 1000;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 1000.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> restrictions = {"81 886 536", "16 871 128", "61 296 655", "10 139 692", "47 527 41", "15 761 49", "37 470 50", "20 542 306", "5 236 770", "18 205 688", "80 127 474", "11 442 908", "61 82 702", "5 469 145", "67 713 450", "13 886 18", "71 294 927", "88 123 878", "16 752 750", "51 356 998", "55 738 697", "25 528 824", "38 247 326", "77 144 952", "61 407 123", "62 604 226", "26 277 714", "88 227 351", "16 271 222", "12 318 837", "43 57 540", "47 676 514"};
    int duration = 931;
    int acceleration = 16;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 477.5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> restrictions = {"78 22 326", "34 104 592", "66 103 879", "98 139 988", "81 110 798", "54 31 95", "31 95 495", "33 93 393", "57 161 555", "97 40 449", "93 76 141", "3 164 665", "59 56 436", "57 120 965", "32 128 453", "98 119 733"};
    int duration = 177;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 94.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> restrictions = {"1 233 664", "87 39 322", "72 35 333", "89 289 348", "58 328 369", "26 81 255", "50 32 264", "74 129 5", "80 244 221"};
    int duration = 333;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 73.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> restrictions = {"69 133 642", "51 19 25", "19 92 928", "87 226 650", "71 288 403", "54 239 328", "75 21 633", "92 74 430", "65 74 319", "74 192 525", "69 246 182", "4 98 724", "0 222 965", "68 74 563", "80 17 418", "77 13 783", "48 163 906", "16 121 945", "90 26 731", "50 180 720", "57 243 5", "43 155 538", "45 38 944", "15 182 4", "91 16 291", "47 186 598", "89 196 226", "55 178 898", "29 283 128", "86 205 113", "60 34 929", "11 153 162", "84 242 275"};
    int duration = 288;
    int acceleration = 12;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 116.5;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> restrictions = {"52 172 682", "0 297 353", "89 506 353", "59 56 799", "64 540 221", "47 590 134", "15 413 979", "89 119 498", "80 400 116", "81 481 695", "12 60 189", "53 215 403", "78 372 451", "61 240 915", "42 601 548", "65 729 755", "54 504 798", "42 432 83", "11 567 384", "43 804 89", "41 659 812"};
    int duration = 907;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 216.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> restrictions = {"0 0 500", "0 500 1000"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> restrictions = {"0 0 500", "0 300 400", "0 650 1000"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> restrictions = {"14 287 789", "73 195 772", "100 932 565", "4 849 752", "89 383 6", "47 452 356", "61 887 316", "51 987 341", "6 928 524", "49 563 891", "77 96 153", "53 243 882", "33 254 815", "83 752 334", "12 72 967", "56 356 381", "19 355 622", "74 952 474", "74 254 2", "12 381 277", "26 69 84", "37 162 475", "32 560 647", "13 181 636", "11 183 755", "85 679 625", "27 559 550", "67 635 32", "28 909 944", "77 76 192", "28 336 4", "9 705 166", "92 213 487", "89 357 877", "8 443 155", "52 772 982", "7 889 429", "12 408 778", "31 603 207", "8 747 247", "83 312 231", "41 669 502"};
    int duration = 996;
    int acceleration = 21;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 737.5;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> restrictions = {"78 174 688", "88 74 511", "44 11 856", "80 159 499", "15 41 508", "66 13 420", "90 129 936", "14 128 829", "79 29 774", "7 170 451"};
    int duration = 243;
    int acceleration = 17;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 115.5;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> restrictions = {"37 3 789", "96 168 345", "75 206 677", "89 155 725", "47 1 269"};
    int duration = 272;
    int acceleration = 18;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 45.5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> restrictions = {"90 121 661", "68 80 167", "22 63 949", "74 26 827", "78 104 948", "8 118 711", "34 216 206", "30 118 383", "49 223 184", "16 24 589", "16 215 112", "63 167 129", "58 45 220", "55 42 460", "0 39 474", "3 99 375", "65 66 187", "74 136 665", "95 1 153", "36 152 347", "83 177 420", "27 236 601", "96 25 316", "70 240 891", "44 29 571", "60 114 409", "100 26 562", "78 3 491", "96 111 628", "7 129 265", "9 113 388", "17 60 796", "52 55 689", "80 108 352", "50 144 992", "52 126 636", "29 233 855"};
    int duration = 247;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 19.5;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> restrictions = {"3 433 165", "76 428 804", "78 420 616", "14 553 161", "8 522 846", "84 141 14", "61 500 716", "55 399 485", "0 84 921", "10 37 286", "83 70 931", "30 194 733", "76 143 801", "88 523 757", "54 492 650", "49 203 106", "90 204 527", "59 140 655", "79 187 877", "31 394 842", "65 144 791", "47 360 584", "88 491 984", "38 449 898", "27 288 885", "45 491 621", "67 472 739", "73 78 776", "4 310 972", "30 84 908", "29 311 392", "77 552 336", "22 288 692", "50 110 230", "60 222 597", "48 150 232", "48 380 155", "48 415 647", "37 462 357", "91 319 414", "60 299 8", "16 107 515", "31 97 803", "0 468 713", "36 371 698", "73 224 925", "4 431 602", "44 307 985", "100 166 266"};
    int duration = 570;
    int acceleration = 22;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 412.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> restrictions = {"67 120 858", "7 117 757", "15 168 639", "37 235 181", "20 55 469", "11 327 399", "41 193 482", "86 306 481", "57 257 277", "84 98 54", "31 103 781", "86 370 329", "39 23 804", "92 331 98", "73 323 721", "35 363 212", "19 63 712", "56 24 119", "29 270 214", "99 195 396", "11 248 253", "66 122 638", "91 120 755", "34 219 259", "9 116 999", "42 327 387", "24 60 640"};
    int duration = 379;
    int acceleration = 8;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 111.5;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> restrictions = {"15 9 66", "54 12 994", "72 32 923", "1 45 608", "43 24 666", "80 5 274", "73 17 816", "87 36 49", "32 12 637", "90 17 508", "94 17 22", "45 41 729", "78 42 760", "31 31 663", "12 1 324", "89 2 529", "74 45 956", "51 2 110", "25 24 359", "21 18 934", "12 31 479", "42 50 5"};
    int duration = 51;
    int acceleration = 21;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 16.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> restrictions = {"36 68 157", "35 55 871", "74 38 567", "80 193 293", "9 195 290", "34 7 647", "35 47 457", "11 78 376", "21 125 226", "51 11 662", "75 165 710", "71 213 998", "17 6 841", "13 199 652", "79 167 636", "95 87 716", "14 34 896", "76 83 808", "53 125 516", "54 57 195", "9 31 293", "49 138 517", "17 204 999", "22 1 991"};
    int duration = 228;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 22.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> restrictions = {"75 30 218", "91 297 727", "34 190 35", "16 28 624", "13 71 285", "51 394 97", "92 295 300", "44 12 240", "80 194 623", "30 184 179", "50 227 364", "43 254 849", "93 369 801", "10 301 879", "20 62 610", "52 127 377", "51 277 630", "73 16 514", "21 202 772", "12 50 1000", "21 299 435", "52 289 248", "45 61 941", "9 107 278", "31 35 329", "46 287 774", "64 21 624", "76 379 297", "6 95 836", "28 279 189", "41 172 559", "15 127 112", "34 316 11", "55 216 483", "13 119 664", "16 360 700", "78 281 80", "38 86 808", "39 205 574", "39 193 697"};
    int duration = 406;
    int acceleration = 24;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 166.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> restrictions = {"7 718 968", "66 79 174", "40 112 527", "66 28 13", "59 419 231", "46 227 914", "11 410 947", "6 37 984", "97 423 578", "25 326 449", "88 173 479", "56 492 887", "46 48 408", "59 606 815", "57 615 771", "98 924 715", "75 632 656"};
    int duration = 959;
    int acceleration = 8;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 145.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> restrictions = {"1 53 13", "36 170 614", "96 174 357", "7 45 701", "69 116 618", "58 113 787", "11 108 887", "98 188 525", "10 97 187", "47 52 937", "79 174 491", "69 92 545", "10 214 277", "85 201 608", "35 141 937", "70 230 121", "72 63 477", "25 131 929", "41 19 538", "54 141 517", "62 269 573", "37 166 581", "0 129 38", "1 58 912", "23 8 572", "73 197 453", "80 42 37", "48 84 363", "29 93 591", "45 294 748", "95 294 565", "84 141 382", "31 104 586", "64 160 207", "87 122 407", "30 304 884", "98 278 860", "25 77 684"};
    int duration = 305;
    int acceleration = 14;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 67.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> restrictions = {"86 295 791", "11 218 601", "41 185 338", "12 313 712", "81 97 883", "40 7 641", "74 366 491", "47 136 130", "62 36 637", "52 359 917", "91 146 984", "50 146 383", "21 61 498", "70 135 129", "92 147 103", "71 55 88", "73 169 199", "98 366 362", "49 246 986", "20 162 112", "71 306 77", "1 181 907", "35 206 714", "52 83 227", "10 28 827", "6 163 511", "52 151 648", "34 317 61", "73 241 404", "18 343 326", "1 195 484", "35 357 131", "25 319 9", "22 260 57", "34 203 474", "11 57 30", "98 30 705", "80 19 888"};
    int duration = 379;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.5;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> restrictions = {"54 28 315", "79 117 473", "10 19 220", "38 9 568", "74 76 206", "78 83 151", "59 89 743", "42 62 811", "11 32 880", "62 69 599", "9 114 885", "76 102 108", "94 88 873", "77 12 215", "24 80 950", "26 1 461", "44 27 794", "86 20 289", "11 87 696", "93 83 260", "29 118 830", "82 73 427", "54 64 895", "40 36 7", "69 64 530", "95 107 725", "90 69 211"};
    int duration = 119;
    int acceleration = 14;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 26.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> restrictions = {"67 65 7", "92 6 975", "80 21 653", "74 47 827", "23 83 250", "84 115 101", "100 50 707", "79 72 122", "77 104 450", "49 108 832", "99 40 329", "10 106 208", "29 69 285", "21 55 44", "88 55 195", "74 124 151", "2 111 695", "5 112 864", "89 60 177", "57 78 302", "91 53 299", "18 68 996", "70 92 423", "25 119 173", "0 126 329", "53 107 471", "31 100 975", "48 51 325", "75 24 405", "54 117 765", "55 75 13", "41 3 873", "69 20 103", "91 123 154", "100 36 361", "12 32 25", "84 124 252", "0 23 333", "51 23 870", "46 36 767", "60 77 331", "46 118 699", "62 28 175", "98 46 924", "18 11 542"};
    int duration = 127;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> restrictions = {"100 0 300", "0 0 90", "7 109 100"};
    int duration = 200;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 70.0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> restrictions = {"100 0 300", "0 0 90", "7 109 100"};
    int duration = 200;
    int acceleration = 6;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 60.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> restrictions = {"100 0 300", "0 0 90", "7 109 100"};
    int duration = 200;
    int acceleration = 8;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 79.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> restrictions = {"69 845 807", "48 442 592", "82 559 62", "11 465 35", "98 505 163", "78 644 580", "69 300 842", "41 419 91", "66 381 384", "96 511 469", "91 379 635", "57 439 761", "34 7 8", "18 193 808", "25 477 203", "22 392 785", "75 620 583", "58 462 137", "18 814 465", "94 700 383", "34 73 186", "9 78 14", "79 384 722", "83 224 79", "72 409 24", "90 306 17", "80 351 680", "69 256 349", "19 697 127", "55 514 19", "50 442 117", "94 745 382", "49 634 719", "22 666 415", "25 523 135", "55 207 100", "61 839 981", "76 381 692", "61 213 819", "59 531 514", "94 593 217", "81 818 119", "41 252 736", "28 459 180"};
    int duration = 862;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 116.0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> restrictions = {"57 797 739", "26 249 348", "40 712 719", "84 661 419", "58 42 6", "1 792 811", "78 822 942", "70 447 846", "40 259 811", "41 804 598"};
    int duration = 840;
    int acceleration = 11;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 1147.5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> restrictions = {"24 883 418", "21 578 565", "54 504 12", "35 515 856", "60 658 959", "31 319 970", "64 506 713", "20 117 508", "2 724 281", "80 756 619", "88 521 483", "74 44 37", "99 864 695", "20 736 77", "14 552 17", "36 166 993", "48 888 14", "11 159 846", "55 580 417", "65 221 237", "89 239 418", "48 517 383", "91 658 828", "69 207 942", "99 118 654", "58 685 561", "56 358 234"};
    int duration = 890;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 83.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> restrictions = {"46 21 43", "71 3 10"};
    int duration = 22;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 158.5;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> restrictions = {"9 4 5", "10 0 2"};
    int duration = 5;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 19.5;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> restrictions = {"16 1 1", "11 15 3"};
    int duration = 18;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 98.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> restrictions = {"1 9 15", "1 17 18", "14 0 2"};
    int duration = 19;
    int acceleration = 16;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 63.5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> restrictions = {"14 9 16", "18 1 2", "13 4 5"};
    int duration = 11;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> restrictions = {"18 0 6", "10 8 0", "20 0 3", "18 8 9"};
    int duration = 9;
    int acceleration = 22;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> restrictions = {"15 2 8", "8 15 0", "8 5 4"};
    int duration = 15;
    int acceleration = 11;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 39.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> restrictions = {"13 14 10", "13 1 2", "5 4 16"};
    int duration = 17;
    int acceleration = 9;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> restrictions = {"7 127 525", "54 35 49", "4 83 987", "70 5 18"};
    int duration = 131;
    int acceleration = 14;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 146.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> restrictions = {"68 207 975", "24 198 149", "67 11 131"};
    int duration = 381;
    int acceleration = 16;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 493.5;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> restrictions = {"33 548 566", "36 42 9", "34 614 925", "12 104 981", "26 289 996"};
    int duration = 924;
    int acceleration = 8;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 236.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> restrictions = {"10 104 899", "54 18 27", "18 415 787", "5 684 208"};
    int duration = 705;
    int acceleration = 21;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 651.5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> restrictions = {"47 555 963", "4 526 479", "43 43 350"};
    int duration = 562;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 888.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> restrictions = {"44 145 640", "11 662 356", "71 274 633", "98 426 290", "18 171 451", "50 29 27", "3 97 297", "46 728 963", "8 770 981", "46 585 324", "90 680 866", "58 276 305", "73 264 108", "20 314 746", "29 125 559", "57 172 549", "20 171 92"};
    int duration = 881;
    int acceleration = 24;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 518.5;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> restrictions = {"0 207 993", "46 199 549", "68 347 620", "85 258 536", "8 249 676", "31 344 646", "9 47 509", "45 43 436", "28 40 798", "64 83 839", "81 368 623", "33 388 852", "91 107 891", "6 224 266", "52 383 520", "35 162 263", "14 17 224", "5 239 774", "73 23 910", "50 345 185", "29 6 1", "26 56 283", "10 389 895", "9 60 946", "68 299 568", "84 67 25", "12 353 244", "75 59 611", "74 299 318", "12 335 436", "58 251 471", "46 407 58", "1 111 280", "7 298 540", "41 354 733", "85 333 376", "68 148 695", "31 117 711"};
    int duration = 421;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 56.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> restrictions = {"53 93 143", "24 108 59", "19 102 267", "71 51 242", "0 175 518", "44 15 862", "31 197 720", "42 94 296", "70 52 670", "88 191 296", "53 5 2", "16 116 598", "37 220 942", "33 39 613", "68 96 860", "2 213 870", "42 231 692", "45 21 729", "40 53 999"};
    int duration = 281;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> restrictions = {"69 229 486", "71 141 181", "31 143 996", "24 123 471", "83 19 34", "63 189 791", "73 257 829", "69 118 869", "64 171 332", "18 200 448", "45 282 328"};
    int duration = 283;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 726.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> restrictions = {"58 3 13", "30 521 736", "34 568 676", "49 576 813", "48 243 44", "22 237 995", "29 671 915", "47 382 817", "97 660 988", "56 109 369", "40 279 16", "24 657 425", "54 612 925", "30 360 321", "79 678 699", "15 132 590", "52 151 577", "21 426 609", "93 448 120", "76 507 70", "4 465 905", "58 514 734", "1 311 693", "65 405 994", "56 512 617", "89 544 324", "85 270 557", "40 431 970", "3 474 931", "87 683 254", "30 255 4", "92 284 294"};
    int duration = 689;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 987.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> restrictions = {"41 539 403", "1 433 794", "31 714 851", "67 804 450", "15 636 454", "52 275 74", "81 373 821", "86 16 156", "91 324 273", "63 379 389", "9 332 66", "90 793 146"};
    int duration = 826;
    int acceleration = 4;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 275.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> restrictions = {"54 254 120", "65 317 950", "14 151 201", "71 78 838", "0 42 865", "71 208 534", "39 216 113", "97 19 761", "37 337 438", "63 472 575", "65 78 896", "66 243 69", "88 153 306", "1 337 822", "62 346 414", "61 140 514", "64 28 522", "29 207 883", "96 227 679", "61 136 211", "82 4 22", "5 41 251", "15 169 109", "33 32 131", "93 464 294", "17 32 435"};
    int duration = 496;
    int acceleration = 19;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 92.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> restrictions = {"53 93 0", "24 108 0", "19 102 0", "71 51 0", "0 175 0", "44 15 0", "31 197 0", "42 94 0", "70 52 0", "88 191 0", "53 5 2", "16 116 598", "37 220 0", "33 39 613", "68 96 860", "2 213 870", "42 231 692", "45 21 729", "40 53 999"};
    int duration = 1000;
    int acceleration = 17;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 116.5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> restrictions = {"1 1 0"};
    int duration = 2;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> restrictions = {"1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> restrictions = {"3 0 0", "3 1 0", "3 2 0", "3 3 0", "3 4 0", "3 5 0", "3 6 0", "3 7 0", "3 8 0", "3 9 0"};
    int duration = 10;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 28.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> restrictions = {"3 0 0", "3 1 0", "3 2 0", "3 3 0", "3 4 0", "3 5 0", "3 6 0", "3 7 0", "3 8 0", "3 9 0"};
    int duration = 9;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 9.5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 462;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<string> restrictions = {"0 1000 10", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<string> restrictions = {"0 0 0", "20 1 1", "30 2 0", "29 3 100"};
    int duration = 30;
    int acceleration = 23;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 36.0;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<string> restrictions = {"10 10 20", "20 20 22"};
    int duration = 24;
    int acceleration = 1;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<string> restrictions = {"50 0 40", "50 60 50"};
    int duration = 100;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 150.0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<string> restrictions = {"30 0 200"};
    int duration = 4;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 20.0;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<string> restrictions = {"50 0 100", "40 101 100", "55 50 100"};
    int duration = 200;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 55.0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<string> restrictions = {"2 1 2", "6 4 3", "4 7 1", "5 10 1", "1 12 1"};
    int duration = 12;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<string> restrictions = {"0 1000 0"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12500.0;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<string> restrictions = {"50 0 10", "20 15 100"};
    int duration = 100;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<string> restrictions = {"1 1 1"};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 24951.0;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<string> restrictions = {"3 0 3", "1 0 1", "1 2 1"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<string> restrictions = {"0 1 0"};
    int duration = 4;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<string> restrictions = {"1 4 3"};
    int duration = 5;
    int acceleration = 3;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 6.5;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<string> restrictions = {"5 0 5", "5 6 5"};
    int duration = 8;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 11.5;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<string> restrictions = {"100 0 100", "50 50 100", "10 60 100"};
    int duration = 99;
    int acceleration = 7;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<string> restrictions = {};
    int duration = 1000;
    int acceleration = 25;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25000.0;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<string> restrictions = {"0 0 0", "0 1 0", "0 2 0", "0 3 0"};
    int duration = 3;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<string> restrictions = {"0 5 0"};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 12.5;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<string> restrictions = {"25 8 8"};
    int duration = 20;
    int acceleration = 15;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 85.0;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<string> restrictions = {};
    int duration = 5;
    int acceleration = 5;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<string> restrictions = {"44 422 129", "45 1 29", "72 290 80", "2 1 331", "76 445 16", "76 204 429", "8 372 737", "21 159 538", "71 266 707", "99 73 933", "38 457 879", "42 24 299", "54 349 882", "6 352 909", "26 419 428", "51 327 311", "10 52 898", "75 10 702", "54 263 762", "75 404 223", "43 383 127", "86 433 521", "58 394 306", "33 379 514", "58 239 973", "89 301 765", "47 235 777", "75 355 190", "52 425 38", "59 140 347", "89 220 810", "47 72 724", "3 398 283", "0 224 266", "88 222 615", "25 149 85", "59 221 838", "14 87 86", "44 227 252", "73 330 936", "71 198 138", "54 186 141", "6 128 454", "5 123 719", "7 442 930", "59 174 505", "37 0 581", "9 198 168", "40 391 692", "49 320 419"};
    int duration = 894;
    int acceleration = 13;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 7.5;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<string> restrictions = {"3 1 0", "3 2 0", "3 3 0"};
    int duration = 3;
    int acceleration = 20;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<string> restrictions = {"100 50 10", "1 61 930"};
    int duration = 1000;
    int acceleration = 2;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 61.5;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<string> restrictions = {"0 1000 1000", "50 998 10", "100 993 20", "30 1 2", "40 2 3", "50 6 8", "70 9 10", "30 1 2", "40 11 5", "50 16 8", "70 19 10", "30 111 2", "40 222 3", "50 6 8", "70 9 10"};
    int duration = 1000;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 3895.0;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<string> restrictions = {"1 0 0", "1 1 0"};
    int duration = 1;
    int acceleration = 10;
    TestingCar* pObj = new TestingCar();
    clock_t start = clock();
    double result = pObj->maximalSpeed(restrictions, duration, acceleration);
    clock_t end = clock();
    delete pObj;
    double expected = 5.5;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10526732&rd=8073&pm=4634
********************************************************************************
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
#define mmin(x, y) (((x)<(y))?(x):(y))
class TestingCar{
public:
int c;
double getx(double x1, double x2) {
  double x = (double )fabs(x1 - x2);
  return (c - x) /2 + x + mmin(x1, x2);
}
double maximalSpeed(vector<string> b,int d,int _c){
  c = _c;
  double ret = 0;
  int e[200][3];
  int n = b.size();
  for (int i = 0; i < b.size(); ++i) {
    istringstream is(b[i]);
    is >> e[i][0] >> e[i][1] >> e[i][2];
    e[i][2] += e[i][1];
  }
  double a[1010];
  for (int i = 0; i < 1010; ++i) a[i] = 1e100;
  a[0] = 0;
  for (int i = 1; i <= d; ++i) {
    double h = 1e100;
    for (int j = 0; j < n; ++j) {
      if (i >= e[j][1] && i <= e[j][2]) {
        h = mmin(h, e[j][0]);
      } else if (i > e[j][2]) {
        h = mmin(h, (i - e[j][2]) * c + e[j][0]);
      } else if (i < e[j][1]) {
        h = mmin(h, (e[j][1] - i) * c + e[j][0]);
      }
    }
    h = mmin(h, c * i);
    for (int j = 0; j < i; ++j) {
      h = mmin(h, a[j] + (i - j) * c);
    }
    a[i] = h;
  }
  for (int i = d; i > 0; --i) {
    a[i-1] = mmin(a[i-1], a[i] + c);
  }
  for (int i = 0; i < d; ++i) {
    a[i+1] = mmin(a[i+1], a[i] + c);
  }
  for (int i = 0; i <= d; ++i) {
    if (ret < a[i]) ret = a[i];
    if (i != d) {
      double xx = getx(a[i], a[i+1]);
      for (int j = 0; j < n; ++j) {
        if (e[j][1] <= i && e[j][2] >= i + 1) {
          xx = mmin(xx, e[j][0]);
        }
      }
      if (xx > ret) ret = xx;
    }
  }
  return ret;
}
};

********************************************************************************
*******************************************************************************/