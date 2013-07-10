/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8062
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

class PowerPlants {
public:
    int minCost(vector<string> connectionCost, string plantList, int numPlants);
};

int PowerPlants::minCost(vector<string> connectionCost, string plantList, int numPlants) {
    int ret;
    return ret;
}


int test0() {
    vector<string> connectionCost = {"024", "203", "430"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> connectionCost = {"0AB", "A0C", "CD0"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> connectionCost = {"1ABCD", "35HF8", "FDM31", "AME93", "01390"};
    string plantList = "NYNNN";
    int numPlants = 5;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> connectionCost = {"012", "123", "234"};
    string plantList = "NNY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    string plantList = "NNNNYNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> connectionCost = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    string plantList = "NNNNYNNNNNNNNNNN";
    int numPlants = 10;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> connectionCost = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    string plantList = "NNNNYNNNNNNNNNNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> connectionCost = {"00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA", "ZZZZZAAAAAAAAAAA"};
    string plantList = "NNNNNNNNNNYNNNNY";
    int numPlants = 7;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> connectionCost = {"00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "00000ZZZZZZZZZZZ", "ZZZZZBACBACBADDD", "ZZZZZBACBACBADDD", "ZZZZZBACBACBADDD", "ZZZZZBACBACBADDD", "ZZZZZBACBACBADZZ", "ZZZZZBACBACBADZZ", "ZZZZZBACBACBADZZ", "ZZZZZBACBACBADZZ", "DDDDDDDDDDD11111", "DDDDDDDDDDD11111", "DDDDDDDDDDD11111", "DDDDDDDDDDD11111"};
    string plantList = "NNNNNNNYNNNNNNNN";
    int numPlants = 6;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> connectionCost = {"1309328", "DS2389U", "92EJFAN", "928FJNS", "FJS0DJF", "9FWJW0E", "23JFNFS"};
    string plantList = "YYNYYNY";
    int numPlants = 4;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"123", "456", "789"};
    string plantList = "YYN";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"28FJ0J203", "20JF230J0", "S09JFWEFF", "29FHSOFND", "0JWEEWFJN", "SJ09WEFIW", "SODIFNNWE", "DNLKSNWE9", "AWNE23NSS"};
    string plantList = "YNNNNNNNN";
    int numPlants = 7;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"5"};
    string plantList = "Y";
    int numPlants = 1;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"Y4", "HS"};
    string plantList = "YY";
    int numPlants = 1;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> connectionCost = {"KHT", "PFP", "N7Q"};
    string plantList = "NYN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> connectionCost = {"E94Y", "XWQN", "BIBI", "X4ZJ"};
    string plantList = "NYNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> connectionCost = {"LXKL7", "TSNWA", "XL7BL", "PM4BE", "60A4E"};
    string plantList = "NNNNY";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> connectionCost = {"XYEUXL", "K9N0A0", "WYWZSO", "32JTAQ", "UXH9BV", "UOU92T"};
    string plantList = "YNNNNY";
    int numPlants = 4;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> connectionCost = {"TLLOA6H", "OZZ3MZS", "QYLGYA3", "N7XDBXF", "5HP2TCE", "Y2YX80B", "6ZMNCHK"};
    string plantList = "NNNNNNY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> connectionCost = {"E4O9OFC4", "1IHJU2O8", "JZKPOJN9", "ITPAHKZR", "8TVKARWS", "CTDER1XF", "V3AZW0UU", "OW2H5Q1D"};
    string plantList = "YYNNNNNN";
    int numPlants = 7;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> connectionCost = {"ZFS4R2683", "O2AQBTPIC", "CTUQ3DBT0", "SHZK8QFD5", "09XR7Y1QP", "GYXX48TUH", "HW9S057EP", "P8DOA9B37", "4J1DDUPDB"};
    string plantList = "NNNNNNNYY";
    int numPlants = 7;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> connectionCost = {"W7QNTJ91C8", "WTT0PAUAD4", "CQ11R2DQKN", "CF98IQTLAX", "AE8EV5UBEP", "HMQCUQ0ZPQ", "Z1U5PEZ4KH", "6KHVEVZXVG", "7KTX709H9Z", "WYE2WGZ8LE"};
    string plantList = "NNNNNNNNNY";
    int numPlants = 10;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> connectionCost = {"WEVOB18MEMJ", "2YLJWAON4SF", "SIA5MB0NJ60", "XYM9VL2XVDW", "78QMF8TD7H4", "GAGQMVR3NLS", "IKKJ87E5C1M", "ADBTCUVZGPK", "XWHJ1QO0XO1", "O7CJSOAVD0W", "6XU1XF1L8QP"};
    string plantList = "NNYNNNNNNNN";
    int numPlants = 11;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> connectionCost = {"BT6KYUG15WBF", "ZB7NOVER2UVP", "F35HE62DVIAV", "LPQH2CDO1E05", "CD9JF2EZPCQO", "B01WPBK2Y9SW", "NTZOSTALXYPL", "I3SCQBBW9SDR", "DFGOLH01JNLT", "SLE9TJ75GCLS", "R64JGVUIMNFO", "ZHJINAVLOWIN"};
    string plantList = "NNNYNYNNNNNN";
    int numPlants = 4;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> connectionCost = {"C4J8HNHKEU5YN", "HTWL0PKM6PR0S", "8VMRL3NZ85BLS", "F30R1H39142WK", "HU28Y6TRAOSV0", "BZ6TIPXSGFB1Y", "CFQ2V1F5DS8B0", "EBLEKOGEQ1L49", "Y47X5GCHYICSW", "MYNRFEL9VLAYU", "AYLLWO4QLIV2N", "040511G4K6A2Z", "50N4FHYXD0M92"};
    string plantList = "YNNNNNNYNNNNN";
    int numPlants = 11;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> connectionCost = {"8X529EYT2X6GPZ", "D3XPXMC3KXF336", "F8K2ATA46S7VP7", "NAEXW1O4XD0HMV", "FSKA0VDERT7H3K", "HS5U6XD6K09RG3", "G9H6CS6AZXK8Y9", "YXG53ATO1LAJRI", "SUMB7944QUPGCE", "H8SA1KW3WJIN2Q", "4B8XRMZIUJQASA", "TQYUW51RAERU2O", "K6RS0M0J3ERG1Q", "PGRW2L5AD4W4RY"};
    string plantList = "NNYNNYNNYNNNNN";
    int numPlants = 12;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> connectionCost = {"17R8M65W9IDWL96", "RI5T29SDI946CJ5", "JLHWTV8YC4LT8DW", "MCUSCLOER7VXLVL", "PPGMVHCM9I9O3X1", "LW4Y3OMYIUVM86B", "F4AWYVW6O1MNDX9", "RIUZYX483086R0N", "0FNAK2ZM5MUGRG7", "KSERHVER0ZKFIMG", "47YOEX46LLFAHO0", "VC7GNEV58JBW14L", "Y9J11U0NYXWETXX", "Z1TMKK6P2THUI0D", "U35VVZ9NIQU66JE"};
    string plantList = "NNNNNNNYYNYNNYN";
    int numPlants = 15;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> connectionCost = {"PU95YUMIXZWZADVT", "ZQIL8AK08D8Y7A7T", "4EKCTWEK0J8V8O5N", "1JL98CCJFUDBKIIT", "NW670SNZPNU41SRC", "U4XDP4DR0YDEFBP1", "X052SQU6Z6TFT00C", "8VKXZYRCE6BBX42N", "F0O05M9ISGNW7C0I", "WN44PEUPIDV69TVO", "GIQ721635X7EGXJC", "DX0GBDQGFVXUGZ6K", "U5LD06NPGALJNL1C", "OKJJEAZZ6C55TT9E", "IUS3FXQNPITL5227", "04NAMM1VR9ZLMV7G"};
    string plantList = "NNNNNYNNYNYNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> connectionCost = {"M1MQDLM9LA34JS", "LC53OQBKDUHZEM", "2B6M1WX3BQE9S7", "EA1ZWGB1DYHXYL", "BKWODZFMUSYFRX", "UQV6WH8Y0Y14OP", "98ED0NDNL3POOK", "KZDU83OCAEA0XE", "W5SJJLKX0MM3L3", "FXBQ8UTLKTX1W8", "9B6P5H2OR3PEBN", "IHOY1GFKQ479NU", "GT97CLWYNF11T4", "4VD4I8SDCHKRDP"};
    string plantList = "NYYNNYNYNNNNNN";
    int numPlants = 13;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> connectionCost = {"L6ISY3D4KO0OMN", "DUTW4IPTEMPLAZ", "L14PBUQDR4G5WB", "O2QSNYDYZD1TQ9", "SIHZYHCBV4L3UT", "FGWLD6IYVMV2CC", "5GP5B8PPSAPTI0", "Y9WX9KSWECJO0C", "8ZC7KYKBMD69UG", "0FMPYF27RQO6GP", "U7FQMEYV6FIYIE", "NSA398OWDQQCS1", "SK74PJZ82S72ZV", "0VPF1PFMV0596L"};
    string plantList = "NNNNNNNNNNNYNN";
    int numPlants = 8;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> connectionCost = {"7TEKCCJ9", "577FR82O", "GFTY5JU1", "7AP458PJ", "UQF7Z86N", "9OK60DGG", "UOP51LIJ", "6SIS0IT8"};
    string plantList = "NYNNNNNN";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> connectionCost = {"R7VCL0", "Z80552", "YN6SHY", "LRC5AT", "GT21AH", "Q871JO"};
    string plantList = "NNYNNY";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> connectionCost = {"SYZSLGCHE22USOQH", "MM4GTXU62192ELRC", "M3WPZX0HMOTJNTPL", "N1G8PPRMJ13YC5FD", "WIJQ6AFBTA0AEMXS", "P649ESAKARGIUI0D", "FNJL7IC7BG5WPL9C", "ZAA35JRGOWSG7D95", "BBW41HJCZ32HRI0V", "Q44UDXEPCI39WP51", "793XLV071AUSWBWU", "28SP7EJKVKUAPEY1", "3MUEZD3H2HWFQY0D", "MJ12QAYXSZJSHC7X", "LOERQYCS6PY06ESB", "UW6B7U7G01NUSKG5"};
    string plantList = "NNNYNNYYNNNNNNYN";
    int numPlants = 8;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> connectionCost = {"1HM9", "NHR8", "IIRP", "XODD"};
    string plantList = "YNNY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> connectionCost = {"3892J2FJ0", "98JF92JF9", "F0JF092JF", "0392JFNAJ", "9FJ093J39", "W0NWFWE09", "09J20JF2N", "232ON4NIN", "143097490"};
    string plantList = "YYYYYYYYY";
    int numPlants = 9;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> connectionCost = {"RM", "9L"};
    string plantList = "NY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "YYYYYYYYYYYYYYYY", "XXXXXXXXXXXXXXXX", "WWWWWWWWWWWWWWWW", "UUUUUUUUUUUUUUUU", "SSSSSSSSSSSSSSSS", "QQQQQQQQQQQQQQQQ", "PPPPPPPPPPPPPPPP", "OOOOOOOOOOOOOOOO", "MMMMMMMMMMMMMMMM", "LLLLLLLLLLLLLLLL", "KKKKKKKKKKKKKKKK", "JJJJJJJJJJJJJJJJ", "IIIIIIIIIIIIIIII", "HHHHHHHHHHHHHHHH", "GGGGGGGGGGGGGGGG"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> connectionCost = {"01", "20"};
    string plantList = "YN";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"011", "202", "330"};
    string plantList = "NNY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ"};
    string plantList = "NNNNNNNNNNNNNNNY";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> connectionCost = {"ZZZZZYZZ", "ZZZZZYZZ", "ZZZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZ", "ZZZZZZZZ"};
    string plantList = "NNNNNNYN";
    int numPlants = 7;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> connectionCost = {"ZZAAZZZ", "RRRRRZR", "GOJIMZQ", "ZNVZOZP", "POJPOZU", "Z0Z00Z0", "ZZZZZZZ"};
    string plantList = "YNNNNNN";
    int numPlants = 4;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> connectionCost = {"1ABCD", "35HF8", "FDM31", "AME93", "01390"};
    string plantList = "NYNNN";
    int numPlants = 5;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> connectionCost = {"0AB", "A0C", "CD0"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ"};
    string plantList = "NNNYNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> connectionCost = {"0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZ333ZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFKKKZZZZZZ", "0ABCCCCZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ", "0ABCDEFZZZZZZZZZ"};
    string plantList = "NNNNNYNNNYNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 258;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> connectionCost = {"4WKNS01AWMNWY7FI", "BWUVLWPYPSVC5C27", "N4OWJU23CNS5QVLM", "YHD8LQJGGEYGUQC4", "G1YJ147X3KPSC6TL", "TV9B14IHJVGRRB3B", "3CP7JLJMJS851OJY", "LUL8BAH5HAJJVDMH", "PKANXGG3VEMONHXI", "KWE272JSSLGTOLLC", "37IWL7A1H7XRI3FN", "8O4NVXHGY68TTGMJ", "7P7HSACNPXMGN7DR", "RQBNTO7R0T3K2XKQ", "BXPIBJ9MW49HSEH7", "3P3M89H208S4CXWD"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> connectionCost = {"1ABCE", "Q5HF8", "F1M3F", "AMED3", "01390"};
    string plantList = "NYNYN";
    int numPlants = 4;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> connectionCost = {"024", "203", "430"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> connectionCost = {"046PDKSUIPUAGFC6", "D05TAC4TQ3QE7W2P", "940FXK7UMAT5USJD", "G4Q06VZMOILB8JY5", "86VR0BRYDVJ3Y1C6", "UBTZ70VWC1DYNOO7", "4TBSQS0RG7AHXJL7", "DDDXI4C0RMIUA2UT", "IO1SSOBK0QOJYZEC", "S77GWV2HQ0544AQ2", "LSTTD427JJ02RR8A", "D766XOBFB2M0ER19", "MAGVDO2EP9FS09RT", "F9URV7D5ISK470GI", "BCESCS9RWDG7PF0H", "GP2MM7X2CYRLW3M0"};
    string plantList = "NNNNYNNNNNNNYNNY";
    int numPlants = 15;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> connectionCost = {"1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ"};
    string plantList = "NNNNNNNNNNNNNNNY";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> connectionCost = {"123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG", "123456789ABCDEFG"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> connectionCost = {"AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> connectionCost = {"0ABCDEABCDE", "A0BCDEABCDE", "AB0CDEABCDE", "ABC0DEABCDE", "ABCD0EABCDE", "ABCDE0ABCDE", "ABCDEA0BCDE", "ABCDEAB0CDE", "ABCDEABC0DE", "ABCDEABCD0E", "ABCDEABCDE0"};
    string plantList = "NNNNNNYNNNN";
    int numPlants = 11;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> connectionCost = {"ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890", "ABCDEF1234567890"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> connectionCost = {"0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF"};
    string plantList = "NYNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 119;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> connectionCost = {"0996743796449420", "3019830466581936", "5000815977758154", "0690145561276406", "8894079663528737", "2879207624889083", "1182490377200774", "6235127030618205", "9269668400938415", "5792974630147815", "9763757629068432", "9515103753005539", "2040695654000973", "8850086044265003", "6242077250670802", "1989937989057480"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> connectionCost = {"0999999999999999", "9099999999999999", "9909999999999999", "9990999999999999", "9999099999999999", "9999909999999999", "9999990999999999", "9999999099999999", "9999999909999999", "9999999990999999", "9999999999099999", "9999999999909999", "9999999999990999", "9999999999999099", "9999999999999909", "9999999999999990"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> connectionCost = {"0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000", "0000000000000000"};
    string plantList = "NNYNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"65GY5YQHAMV3KTSS", "4EW7O348SECMFJ1I", "J1W07HGAHQ30BXDN", "WVX9AYPHGIEGO42A", "OH9HL1WIEKKNQ3I1", "JQ1C5CCFSJPBHEBR", "LKII5IIA296URUI8", "BH24GQGUKJG0L4MK", "R7EDG8R5VPEF58U4", "TBKAC2P5VCDDTD4T", "3X885NFAROC8JE63", "69NKVGW7CI09QIV7", "S90COLBCYLT5JU83", "V68RYEXHUFELW6DU", "MBE0H4GI4RA3ODWJ", "RKPNHJXWSACBR81J"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> connectionCost = {"011", "101", "110"};
    string plantList = "YYN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 14;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 455;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> connectionCost = {"0CCIBHDIJ2GGDCEE", "J0CH9ABDEBE2JEBB", "HD0BE79IFAIDGGIA", "DAG0EFDAFIHEGGCC", "AHCB0I9IBJDBGEAC", "EGCCA0IJFGGDG8JG", "BCFAAI0EEBEFGGCF", "GAFADD20CAIJIF2D", "IBHDCD0H0AF0GECG", "E0HEBHGDA0GBBJDH", "JFHJJJCIEE0HBCHA", "HGJBDBHBF6J08ADB", "HGDGCIHCFADD0JAD", "GJCIDCEAABCCD0HA", "BAFE1JIF9FEIBC0C", "ADEBHAIHFB0EHAH0"};
    string plantList = "YNNNNNNNNNNNNNYN";
    int numPlants = 14;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> connectionCost = {"0A", "A0"};
    string plantList = "YY";
    int numPlants = 2;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"Z3Z3Z", "ZZ2ZZ", "ZZZZZ", "ZZZZ1", "ZZZZZ"};
    string plantList = "YNNNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> connectionCost = {"0111111111111111", "1011111111111111", "1101111111111111", "1110111111111111", "1111011111111111", "1111101111111111", "1111110111111111", "1111111011111111", "1111111101111111", "1111111110111111", "1111111111011111", "1111111111101111", "1111111111110111", "1111111111111011", "1111111111111101", "1111111111111110"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> connectionCost = {"01", "10"};
    string plantList = "YN";
    int numPlants = 1;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> connectionCost = {"89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567", "89ABCDEF01234567"};
    string plantList = "NNNNNNNNNNYNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 118;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> connectionCost = {"F0FFFFFFFFFFFFFF", "FF0FFFFFFFFFFFFF", "FFF0FFFFFFFFFFFF", "FFFF0FFFFFFFFFFF", "FFFFF0FFFFFFFFFF", "FFFFFF0FFFFFFFFF", "FFFFFFF0FFFFFFFF", "FFFFFFFF0FFFFFFF", "FFFFFFFFF0FFFFFF", "FFFFFFFFFF0FFFFF", "FFFFFFFFFFF0FFFF", "FFFFFFFFFFFF0FFF", "FFFFFFFFFFFFF0FF", "FFFFFFFFFFFFFF0F", "FFFFFFFFFFFFFFF0", "FFFFFFFFFFFFFFFF"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> connectionCost = {"0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF", "0123456789ABCDEF"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> connectionCost = {"ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ", "ZZZZZZZZZZZZZZZZ"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 525;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> connectionCost = {"130932813093280F", "DS2389U928FJNS6F", "92EJFANFJS0DJF3F", "928FJNS928FJNS2F", "FJS0DJF9FWJW0ERF", "9FWJW0E928FJNS6F", "DS2389U928FJNS6F", "92EJFANFJS0DJF3F", "928FJNS928FJNS2F", "FJS0DJF9FWJW0ERF", "9FWJW0E928FJNS6F", "DS2389U928FJNS6F", "92EJFANFJS0DJF3F", "928FJNS928FJNS2F", "FJS0DJF9FWJW0ERF", "23JFNFS23JFNFSEF"};
    string plantList = "NNNNNNYNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> connectionCost = {"1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111", "1111111111111111"};
    string plantList = "NNNNNNYNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> connectionCost = {"02Y", "Z0Z", "Z10"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> connectionCost = {"047", "904", "900"};
    string plantList = "YNN";
    int numPlants = 3;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> connectionCost = {"PHQGHUMEAYLNLFDX", "FIRCVSCXGGBWKFNQ", "DUXWFNFOZVSRTKJP", "REPGGXRPNRVYSTMW", "CYSYYCQPEVIKEFFM", "ZNIMKKASVWSRENZK", "YCXFXTLSGYPSFADP", "OOEFXZBCOEJUVPVA", "BOYGPOEYLFPBNPLJ", "VRVIPYAMYEHWQNQR", "QPMXUJJLOOVAOWUX", "WHMSNCBXCOKSFZKV", "ATXDKNLYJYHFIXJS", "WNKKUFNUXXZRZBMN", "MGQOOKETLYHNKOAU", "GZQRCDDIUTEIOJWA"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> connectionCost = {"11", "11"};
    string plantList = "YY";
    int numPlants = 1;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
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
    vector<string> connectionCost = {"0ZZZZZZZZZZZZZZZ", "90ZZZZZZZZZZZZZZ", "990ZZZZZZZZZZZZZ", "9990ZZZZZZZZZZZZ", "99990ZZZZZZZZZZZ", "999990ZZZZZZZZZZ", "9999990ZZZZZZZZZ", "99999990ZZZZZZZZ", "999999990ZZZZZZZ", "9999999990ZZZZZZ", "99999999990ZZZZZ", "999999999990ZZZZ", "9999999999990ZZZ", "99999999999990ZZ", "999999999999990Z", "9999999999999990"};
    string plantList = "YNNNNNNNNNNNNNNN";
    int numPlants = 16;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> connectionCost = {"0ZZZZZZZZZZZZZZZ", "Z0ZZZZZZZZZZZZZZ", "ZZ0ZZZZZZZZZZZZZ", "ZZZ0ZZZZZZZZZZZZ", "ZZZZ0ZZZZZZZZZZZ", "ZZZZZ0ZZZZZZZZZZ", "ZZZZZZ0ZZZZZZZZZ", "ZZZZZZZ0ZZZZZZZZ", "ZZZZZ1ZZ0ZZZZZZZ", "ZZZZ1ZZZZ0ZZZZZZ", "ZZZ1ZZZZZZ0ZZZZZ", "ZZ1ZZZZZZZZ0ZZZZ", "Z1ZZZZZZZZZZ0ZZZ", "1ZZZZZZZZZZZZ0ZZ", "555555555555550Z", "AAAAAAAAAAAAAAA0"};
    string plantList = "NNNNNNNNNNNNNNNY";
    int numPlants = 14;
    PowerPlants* pObj = new PowerPlants();
    clock_t start = clock();
    int result = pObj->minCost(connectionCost, plantList, numPlants);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=10778&pm=8062
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define two(X) (1<<(X))
#define contain(S,X) (((S)&two(X))!=0)
template<class T> inline void checkmin(T &a,T b){if(b<a) a=b;}
template<class T> inline int countbit(T n){return (n==0)?0:(1+countbit(n&(n-1)));}
 
class PowerPlants
{
public:
  int n;
  int G[16][16];
  int f[two(16)];
  int m;
  int solve(int set)
  {
    if (countbit(set)>=m) return 0;
    int &ret=f[set];
    if (ret!=-1) return ret;
    ret=100000000;
    for (int i=0;i<n;i++) if (!contain(set,i))
      for (int k=0;k<n;k++) if (contain(set,k))
        checkmin(ret,solve(set+two(i))+G[k][i]);
    return ret;
  }
  int minCost(vector <string> vs, string plantList, int numPlants)
  {
    m=numPlants;
    memset(f,255,sizeof(f));
    n=vs.size();
    for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
        G[i][j]=(vs[i][j]>='0' && vs[i][j]<='9')?(vs[i][j]-'0'):(vs[i][j]-'A'+10);
    int set=0;
    for (int i=0;i<n;i++) if (plantList[i]=='Y') set|=two(i);
    int ret=solve(set);
    return ret;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/