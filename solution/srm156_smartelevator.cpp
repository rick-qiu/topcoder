/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1788
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

class SmartElevator {
public:
    int timeWaiting(vector<int> arrivalTime, vector<int> startingFloor, vector<int> destinationFloor);
};

int SmartElevator::timeWaiting(vector<int> arrivalTime, vector<int> startingFloor, vector<int> destinationFloor) {
    int ret;
    return ret;
}


int test0() {
    vector<int> arrivalTime = {5};
    vector<int> startingFloor = {30};
    vector<int> destinationFloor = {50};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> arrivalTime = {100};
    vector<int> startingFloor = {30};
    vector<int> destinationFloor = {50};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> arrivalTime = {10, 120};
    vector<int> startingFloor = {1, 100};
    vector<int> destinationFloor = {210, 200};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 230;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> arrivalTime = {10, 500};
    vector<int> startingFloor = {1, 100};
    vector<int> destinationFloor = {210, 200};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 600;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> arrivalTime = {1000, 1200, 1600, 2000, 2400};
    vector<int> startingFloor = {500, 500, 500, 500, 500};
    vector<int> destinationFloor = {700, 300, 700, 300, 700};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2600;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> arrivalTime = {503868, 509600, 662448, 251624, 854952};
    vector<int> startingFloor = {337034, 470546, 867834, 645090, 925407};
    vector<int> destinationFloor = {885895, 271701, 874608, 720490, 64409};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1953239;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> arrivalTime = {280588, 194163, 500203, 615750, 391972};
    vector<int> startingFloor = {140458, 766726, 949141, 639618, 53743};
    vector<int> destinationFloor = {317993, 547173, 383765, 955719, 555977};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1865902;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> arrivalTime = {649993, 383798, 165693, 839646, 588106};
    vector<int> startingFloor = {311908, 484055, 118606, 835692, 81221};
    vector<int> destinationFloor = {376794, 315990, 904736, 264080, 980736};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2204277;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> arrivalTime = {618252, 63079, 179886, 999752, 521772};
    vector<int> startingFloor = {580544, 535366, 403881, 334607, 538945};
    vector<int> destinationFloor = {680185, 865721, 180603, 990544, 536660};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1660259;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> arrivalTime = {9745, 474209, 527076, 867645, 664252};
    vector<int> startingFloor = {903910, 650294, 244553, 287290, 488226};
    vector<int> destinationFloor = {9925, 881085, 871089, 408052, 826621};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2321942;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> arrivalTime = {399923, 328162, 596453, 163285, 868557};
    vector<int> startingFloor = {463136, 245611, 268724, 119067, 263689};
    vector<int> destinationFloor = {658075, 712563, 540012, 269193, 511632};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1317431;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> arrivalTime = {757355, 839558, 634456, 343241, 349073};
    vector<int> startingFloor = {588309, 646597, 24909, 491712, 517048};
    vector<int> destinationFloor = {824698, 6540, 483511, 481147, 416068};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2252403;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> arrivalTime = {404948, 820298, 580803, 234161, 698332};
    vector<int> startingFloor = {292622, 129160, 955035, 229400, 292686};
    vector<int> destinationFloor = {919936, 992665, 382525, 600151, 331248};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2293943;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> arrivalTime = {173672, 316489, 391757, 895815, 262559};
    vector<int> startingFloor = {109428, 875479, 994112, 553905, 377356};
    vector<int> destinationFloor = {651117, 875529, 601223, 203208, 856713};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1849260;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> arrivalTime = {649667, 281856, 687356, 27425, 278637};
    vector<int> startingFloor = {430606, 799987, 569474, 983034, 4498};
    vector<int> destinationFloor = {260895, 597101, 438465, 26077, 849192};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2214130;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> arrivalTime = {933662, 808333, 764215, 298169, 450424};
    vector<int> startingFloor = {971527, 335039, 414405, 692034, 642594};
    vector<int> destinationFloor = {414995, 642486, 412148, 536256, 756609};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1915461;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> arrivalTime = {686229, 756395, 265028, 951720, 10771};
    vector<int> startingFloor = {433637, 907582, 743565, 270263, 787994};
    vector<int> destinationFloor = {4010, 217396, 494540, 284416, 985452};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1995199;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> arrivalTime = {848545, 825654, 732235, 193061, 336177};
    vector<int> startingFloor = {378962, 585171, 463231, 447399, 971837};
    vector<int> destinationFloor = {361248, 604183, 120275, 961159, 451487};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1861422;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> arrivalTime = {579805, 650092, 634768, 736714, 91556};
    vector<int> startingFloor = {482198, 331775, 869088, 594113, 421290};
    vector<int> destinationFloor = {288469, 341489, 855859, 564515, 556784};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1426578;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> arrivalTime = {935236, 954985, 640955, 642511, 622686};
    vector<int> startingFloor = {367450, 544485, 984788, 698835, 581282};
    vector<int> destinationFloor = {67912, 37810, 712439, 895936, 517591};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1931765;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> arrivalTime = {51311, 559594, 821138, 461772, 119411};
    vector<int> startingFloor = {100645, 504328, 899360, 851020, 424070};
    vector<int> destinationFloor = {888598, 271274, 503561, 277291, 354857};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1527445;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> arrivalTime = {391387, 546634, 138301, 332921, 8980};
    vector<int> startingFloor = {802850, 317642, 162023, 419643, 880150};
    vector<int> destinationFloor = {796478, 898825, 265844, 121424, 239581};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1905218;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> arrivalTime = {658272, 353350, 325056, 569201, 328083};
    vector<int> startingFloor = {517463, 272110, 425519, 757645, 543346};
    vector<int> destinationFloor = {985375, 67041, 853411, 735867, 475529};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1655943;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> arrivalTime = {348667, 461500, 443331, 53929, 889252};
    vector<int> startingFloor = {669166, 16918, 530780, 369810, 339866};
    vector<int> destinationFloor = {796470, 218529, 851359, 701402, 265893};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1548691;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> arrivalTime = {232388, 921255, 483277, 695101, 248346};
    vector<int> startingFloor = {152943, 854341, 867762, 404024, 376113};
    vector<int> destinationFloor = {952420, 800923, 242708, 234296, 412166};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1749989;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> arrivalTime = {616878, 726831, 901741, 870324, 415578};
    vector<int> startingFloor = {976113, 472225, 72398, 969217, 510984};
    vector<int> destinationFloor = {447322, 253595, 632625, 69957, 400083};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2444936;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> arrivalTime = {734499, 653925, 862064, 227113, 735658};
    vector<int> startingFloor = {378211, 60659, 595387, 592417, 543914};
    vector<int> destinationFloor = {916544, 112996, 427341, 537069, 645708};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1845902;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> arrivalTime = {78770, 511362, 442964, 604443, 185192};
    vector<int> startingFloor = {792866, 360086, 245861, 694107, 839419};
    vector<int> destinationFloor = {295413, 599847, 908045, 898631, 975972};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1853634;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> arrivalTime = {215380, 667555, 524095, 365633, 789191};
    vector<int> startingFloor = {425748, 674924, 650414, 308479, 694268};
    vector<int> destinationFloor = {638073, 267798, 761209, 943103, 857746};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1713331;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> arrivalTime = {20964, 316933, 803639, 856181, 881368};
    vector<int> startingFloor = {952388, 63352, 523484, 885883, 869581};
    vector<int> destinationFloor = {515369, 373889, 392828, 680418, 402925};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1765529;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> arrivalTime = {885593, 243163, 678984, 854150, 184447};
    vector<int> startingFloor = {82909, 216155, 391576, 696021, 177092};
    vector<int> destinationFloor = {39145, 390830, 93395, 892921, 761379};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1885191;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> arrivalTime = {619859, 504425, 2319, 189556, 647448};
    vector<int> startingFloor = {960695, 64919, 952654, 407855, 182602};
    vector<int> destinationFloor = {658966, 400945, 901915, 796838, 830154};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1727270;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> arrivalTime = {775397, 261225, 870141, 287698, 884334};
    vector<int> startingFloor = {82225, 958610, 998971, 413596, 21922};
    vector<int> destinationFloor = {769962, 78706, 477861, 237168, 258488};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2724059;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> arrivalTime = {421449, 574649, 797752, 784920, 336692};
    vector<int> startingFloor = {472305, 959024, 641923, 170345, 499085};
    vector<int> destinationFloor = {792675, 651106, 103930, 475843, 331171};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2186030;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> arrivalTime = {11675, 539539, 174536, 897118, 741756};
    vector<int> startingFloor = {301058, 350067, 583531, 630213, 389612};
    vector<int> destinationFloor = {785568, 217617, 147014, 708908, 916002};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1789035;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> arrivalTime = {374847, 152557, 243998, 566155};
    vector<int> startingFloor = {336998, 837829, 622573, 305177};
    vector<int> destinationFloor = {194612, 543368, 655451, 282975};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1481045;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> arrivalTime = {469472, 799661};
    vector<int> startingFloor = {82768, 730529};
    vector<int> destinationFloor = {911315, 385273};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1824061;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> arrivalTime = {28919, 885249, 253930, 5027, 353757};
    vector<int> startingFloor = {92859, 889331, 148080, 222125, 606689};
    vector<int> destinationFloor = {22203, 3510, 510507, 498462, 744321};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1881002;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> arrivalTime = {426051, 551496};
    vector<int> startingFloor = {963083, 558989};
    vector<int> destinationFloor = {802134, 222209};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1703956;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> arrivalTime = {755400, 896007, 527299};
    vector<int> startingFloor = {512881, 913948, 371655};
    vector<int> destinationFloor = {333906, 338968, 893683};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1649634;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> arrivalTime = {657406, 135491, 512248};
    vector<int> startingFloor = {82036, 472474, 150324};
    vector<int> destinationFloor = {325997, 877677, 579011};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1453047;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> arrivalTime = {489482, 322087, 479484, 999437};
    vector<int> startingFloor = {435335, 419577, 544568, 960976};
    vector<int> destinationFloor = {17414, 653898, 348218, 586072};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1942999;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> arrivalTime = {912745, 982608};
    vector<int> startingFloor = {812441, 926500};
    vector<int> destinationFloor = {895748, 54030};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1899274;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> arrivalTime = {852584, 25602};
    vector<int> startingFloor = {15275, 828491};
    vector<int> destinationFloor = {137978, 695948};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1764409;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> arrivalTime = {269982, 534100};
    vector<int> startingFloor = {334413, 978591};
    vector<int> destinationFloor = {861993, 887338};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1069843;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> arrivalTime = {637816, 812483, 467944, 254882};
    vector<int> startingFloor = {347994, 880466, 760808, 350479};
    vector<int> destinationFloor = {253288, 343166, 51193, 466878};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1709738;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> arrivalTime = {119927};
    vector<int> startingFloor = {556235};
    vector<int> destinationFloor = {940980};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 940979;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> arrivalTime = {967516, 225475, 509009};
    vector<int> startingFloor = {466245, 863441, 446353};
    vector<int> destinationFloor = {360126, 562274, 190979};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1535902;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> arrivalTime = {277195, 702787};
    vector<int> startingFloor = {628524, 307760};
    vector<int> destinationFloor = {470085, 572392};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1181990;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> arrivalTime = {10100, 144577, 471027, 87191};
    vector<int> startingFloor = {134544, 642004, 54929, 102206};
    vector<int> destinationFloor = {78951, 416900, 273668, 45410};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1283206;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> arrivalTime = {300161, 862285, 175480};
    vector<int> startingFloor = {311923, 952845, 103103};
    vector<int> destinationFloor = {488708, 420920, 967581};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1586619;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> arrivalTime = {629244, 739414, 472337, 564743};
    vector<int> startingFloor = {347940, 844293, 460120, 171307};
    vector<int> destinationFloor = {521860, 627473, 581835, 322769};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1454549;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> arrivalTime = {389057, 720342, 485407, 518702, 700022};
    vector<int> startingFloor = {119832, 203932, 8456, 735146, 444926};
    vector<int> destinationFloor = {999170, 213208, 878627, 511508, 482222};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1962856;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> arrivalTime = {907095, 240270, 756453, 460740, 694995};
    vector<int> startingFloor = {686417, 355218, 985186, 3484, 480186};
    vector<int> destinationFloor = {178900, 791990, 388358, 985184, 631271};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2248728;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> arrivalTime = {270050, 62262, 539664, 549663, 2356};
    vector<int> startingFloor = {660551, 326347, 203949, 896704, 600372};
    vector<int> destinationFloor = {445306, 686373, 538408, 656847, 526904};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1683817;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> arrivalTime = {775397, 261225, 870141, 287698, 884334};
    vector<int> startingFloor = {82225, 958610, 998971, 413596, 21922};
    vector<int> destinationFloor = {769962, 78706, 477861, 237168, 258488};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 2724059;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> arrivalTime = {1, 1, 1, 1, 1};
    vector<int> startingFloor = {1, 1, 1, 1, 1};
    vector<int> destinationFloor = {1000, 1000, 1000, 1000, 1000};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> arrivalTime = {1000000, 1000000, 1000000, 1000000, 1000000};
    vector<int> startingFloor = {1, 2, 3, 4, 5};
    vector<int> destinationFloor = {2, 3, 4, 5, 6};
    SmartElevator* pObj = new SmartElevator();
    clock_t start = clock();
    int result = pObj->timeWaiting(arrivalTime, startingFloor, destinationFloor);
    clock_t end = clock();
    delete pObj;
    int expected = 1000005;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4585&pm=1788
********************************************************************************
#line 2 "SmartElevator.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class SmartElevator { 
  public: 
  vector<int> arrivalTime,startFloor,destFloor; 
  int n; 
   
  int go(int pickedleft, int doneleft, int floor, int time) 
  { 
    if (!doneleft) return time;       
    int best=999999999; 
    for(int i=0;i<n;i++) 
      if (((1<<i)&pickedleft)) { 
        // Pick up employee i 
        best<?=go(pickedleft-(1<<i),doneleft,startFloor[i],arrivalTime[i]>?(time+abs(floor-startFloor[i]))); 
      } 
    for(int i=0;i<n;i++) 
      if (!((1<<i)&pickedleft) && ((1<<i)&doneleft)) { 
        // Drop off employee i 
        best<?=go(pickedleft,doneleft-(1<<i),destFloor[i],time+abs(floor-destFloor[i])); 
      } 
    return best; 
  } 
   
  int timeWaiting(vector <int> a, vector <int> b, vector <int> c) { 
    n=a.size(); 
    arrivalTime=a; 
    startFloor=b; 
    destFloor=c; 
    return go((1<<n)-1,(1<<n)-1,1,0); 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/