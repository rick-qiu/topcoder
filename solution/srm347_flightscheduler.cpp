/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7584
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

class FlightScheduler {
public:
    double minimizeFuel(int distance, int K, int emptyMass, int takeoffFuel);
};

double FlightScheduler::minimizeFuel(int distance, int K, int emptyMass, int takeoffFuel) {
    double ret;
    return ret;
}


int test0() {
    int distance = 40000;
    int K = 100000;
    int emptyMass = 150000;
    int takeoffFuel = 5000;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 76420.82744805096;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int distance = 40000;
    int K = 55000;
    int emptyMass = 150000;
    int takeoffFuel = 5000;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 138450.61724934017;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int distance = 1000;
    int K = 500;
    int emptyMass = 1000;
    int takeoffFuel = 50;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2664.9853821314487;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int distance = 10000;
    int K = 100;
    int emptyMass = 200;
    int takeoffFuel = 5;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 24635.869665316768;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int distance = 100000;
    int K = 50;
    int emptyMass = 600;
    int takeoffFuel = 2;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1299304.0427867468;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int distance = 150000;
    int K = 1;
    int emptyMass = 150000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2.2582208368425556E10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int distance = 12197;
    int K = 29451;
    int emptyMass = 12718;
    int takeoffFuel = 32501;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 39026.31721326991;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int distance = 20607;
    int K = 28917;
    int emptyMass = 19654;
    int takeoffFuel = 19562;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 39989.17092307296;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int distance = 29736;
    int K = 10528;
    int emptyMass = 25877;
    int takeoffFuel = 16975;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 172324.12469702153;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int distance = 21058;
    int K = 23220;
    int emptyMass = 19183;
    int takeoffFuel = 1591;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 25085.657435445617;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int distance = 30308;
    int K = 11772;
    int emptyMass = 25672;
    int takeoffFuel = 2519;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 97520.36786129391;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int distance = 24768;
    int K = 25205;
    int emptyMass = 29304;
    int takeoffFuel = 18875;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 67858.362827057;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int distance = 6659;
    int K = 8997;
    int emptyMass = 25915;
    int takeoffFuel = 25655;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 54063.5346710648;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int distance = 15997;
    int K = 29998;
    int emptyMass = 24316;
    int takeoffFuel = 7327;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 24457.500644322783;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int distance = 17538;
    int K = 29859;
    int emptyMass = 20051;
    int takeoffFuel = 7866;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 23891.42563843786;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int distance = 528;
    int K = 21402;
    int emptyMass = 16588;
    int takeoffFuel = 5749;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 6163.325586698862;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int distance = 132012;
    int K = 4092;
    int emptyMass = 141596;
    int takeoffFuel = 136500;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2252181131019197E7;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int distance = 31749;
    int K = 113800;
    int emptyMass = 105042;
    int takeoffFuel = 123282;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 157083.82292453357;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int distance = 144012;
    int K = 2;
    int emptyMass = 149866;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0830696881014162E10;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int distance = 105600;
    int K = 53088;
    int emptyMass = 142186;
    int takeoffFuel = 9160;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 390312.21653136547;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int distance = 80300;
    int K = 130743;
    int emptyMass = 140222;
    int takeoffFuel = 138212;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 257140.48138689072;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int distance = 146078;
    int K = 6355;
    int emptyMass = 124698;
    int takeoffFuel = 105111;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 7328605.984328408;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int distance = 84480;
    int K = 133200;
    int emptyMass = 105448;
    int takeoffFuel = 110262;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 203644.394951216;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int distance = 12960;
    int K = 138322;
    int emptyMass = 115084;
    int takeoffFuel = 63960;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 75264.02264476861;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int distance = 125131;
    int K = 56056;
    int emptyMass = 14100;
    int takeoffFuel = 142880;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 260203.46807218198;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int distance = 112156;
    int K = 46368;
    int emptyMass = 24650;
    int takeoffFuel = 1848;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 84157.96997191163;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int distance = 42768;
    int K = 144400;
    int emptyMass = 12298;
    int takeoffFuel = 127280;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 131519.22553615;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int distance = 97539;
    int K = 131104;
    int emptyMass = 19200;
    int takeoffFuel = 97284;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 118486.51986899413;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int distance = 131040;
    int K = 60800;
    int emptyMass = 115350;
    int takeoffFuel = 147130;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 741290.5188633981;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int distance = 20184;
    int K = 12921;
    int emptyMass = 95700;
    int takeoffFuel = 111384;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 449342.1451898261;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int distance = 145000;
    int K = 10980;
    int emptyMass = 103885;
    int takeoffFuel = 95985;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3624819.2190171042;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int distance = 129280;
    int K = 15200;
    int emptyMass = 133950;
    int takeoffFuel = 18624;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1790851.8724892882;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int distance = 146478;
    int K = 1;
    int emptyMass = 103432;
    int takeoffFuel = 4;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5283950796441101E10;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int distance = 147777;
    int K = 1;
    int emptyMass = 100000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4843837124166306E10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int distance = 140000;
    int K = 4;
    int emptyMass = 10000;
    int takeoffFuel = 10;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6576871282155204E8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int distance = 127777;
    int K = 1;
    int emptyMass = 150000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.923657892461537E10;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int distance = 200000;
    int K = 1;
    int emptyMass = 200000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 4.012655775551904E10;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int distance = 99999;
    int K = 99999;
    int emptyMass = 99999;
    int takeoffFuel = 99999;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 271825.4645640761;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int distance = 200000;
    int K = 1;
    int emptyMass = 100000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0089509360950325E10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int distance = 140000;
    int K = 1;
    int emptyMass = 10000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4198456017490478E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int distance = 140000;
    int K = 4;
    int emptyMass = 10000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5496140043726254E8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int distance = 140000;
    int K = 1;
    int emptyMass = 200000;
    int takeoffFuel = 10;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 2.828046627881105E10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int distance = 200000;
    int K = 1;
    int emptyMass = 150000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0109611157900635E10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int distance = 20000;
    int K = 1;
    int emptyMass = 20000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 4.040066611258699E8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int distance = 190000;
    int K = 1;
    int emptyMass = 10000;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 1.926933316659421E9;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int distance = 200000;
    int K = 1;
    int emptyMass = 43243;
    int takeoffFuel = 1;
    FlightScheduler* pObj = new FlightScheduler();
    clock_t start = clock();
    double result = pObj->minimizeFuel(distance, K, emptyMass, takeoffFuel);
    clock_t end = clock();
    delete pObj;
    double expected = 8.707483633296806E9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22628392&rd=10671&pm=7584
********************************************************************************
#ifdef _MSC_VER 
  #define LL __int64 
  #define Ld "%I64d" 
#else 
  #define LL long long 
  #define Ld "%Ld" 
#endif 
 
#include <algorithm> 
#include <string> 
#include <vector> 
#include <math.h> 
using namespace std; 
 
#define FOR(i,a,b) for ( i = (a); i <= (b); ++i ) 
 
typedef long double LD; 
 
LD dist, K, M, fuel; 
 
LD fu(LL n) 
{ 
  LD d = dist / (n + 1); 
  LD res = (expl(d / K) - 1.0) * M + fuel; 
  return res * (n + 1); 
} 
 
class FlightScheduler 
{ 
public: 
  double minimizeFuel(int distance, int K0, int emptyMass, int takeoffFuel) 
  { 
    dist = distance; 
    K = K0; 
    M = emptyMass; 
    fuel = takeoffFuel; 
 
     
    LL a = 0, b, i; 
    b = 1; 
    b <<= 60; 
    while ( b - a > 1234567 ) 
    { 
      LL d = (b - a); 
      LL c0 = a + d / 3; 
      LL c1 = a + d * 2 / 3; 
 
      LD f0 = fu(c0); 
      LD f1 = fu(c1); 
      if ( f0 < f1 ) 
        b = c1; 
      else 
        a = c0; 
    } 
    LD res = fu(a); 
    FOR(i, a, b) 
    { 
      LD f = fu(i); 
      if ( res > f )  
        res = f; 
    }     
    FOR(i, 0, 1234567) 
    { 
      LD f = fu(i); 
      if ( res > f ) 
        res = f; 
    } 
    return res; 
  } 
};

********************************************************************************
*******************************************************************************/