/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8045
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

class MarbleMachine {
public:
    long maxMarbles(vector<string> layout, vector<string> actions, int t);
};

long MarbleMachine::maxMarbles(vector<string> layout, vector<string> actions, int t) {
    long ret;
    return ret;
}


int test0() {
    vector<string> layout = {"0101", "1010", "0101"};
    vector<string> actions = {"4", "5353"};
    int t = 5;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> layout = {"011112"};
    vector<string> actions = {"1E", "E", "0"};
    int t = 1000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 498;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> layout = {"01", "32"};
    vector<string> actions = {"1E", "SSDSS", "W", "00000W"};
    int t = 23;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> layout = {"0101"};
    vector<string> actions = {"4", "5353"};
    int t = 5;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> layout = {"102"};
    vector<string> actions = {"1E1W", "D", "0"};
    int t = 20;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> layout = {"40001", "03222"};
    vector<string> actions = {"EEE", "SS", "W", "NNNND", "11E"};
    int t = 2000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> layout = {"51111112", "11111122", "41111222", "44112222", "44403222", "44433322", "44333332", "43333333"};
    vector<string> actions = {"000000", "00000E", "00000S", "00000W", "00000N", "10000E"};
    int t = 390;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> layout = {"51111112", "11111122", "41111222", "44112222", "44403222", "44433322", "44333332", "43333333"};
    vector<string> actions = {"000000", "00000E", "00000S", "00000W", "00000N", "10000E"};
    int t = 38400000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 6399938;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> layout = {"51111112", "11111122", "41111222", "44112222", "44403222", "44433322", "44333332", "43333333"};
    vector<string> actions = {"000000", "00000E", "00000S", "00000W", "00000N", "99999E"};
    int t = 38399999;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 287997165;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> layout = {"51111112", "11111122", "41111222", "44112222", "44403222", "44433322", "44333332", "43333333"};
    vector<string> actions = {"000000", "00000E", "00000S", "00000W", "00000N", "10000E"};
    int t = 389;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> layout = {"30000001", "03333330", "06222240", "07219240", "06281240", "06222240", "05555540", "20000004"};
    vector<string> actions = {"0", "1ESENW", "S2WEE", "WE3NS", "N4SW", "DWE6SN", "N5SWW", "ESW7W", "N8S", "9NEW"};
    int t = 6000005;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 37399929;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> layout = {"30000001", "03333330", "06222240", "07219240", "06281240", "06222240", "05555540", "20000004"};
    vector<string> actions = {"1", "DW6WN", "N5SDW", "ESN7W", "3WSENW", "S2WEE", "WE3NS", "N4SS", "E8SW", "9NW"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 403333321;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> layout = {"12000000", "71120120", "13020320", "00011320", "00000020", "06544440", "00000000", "00000000"};
    vector<string> actions = {"D", "EEE", "SSS", "NNNNN", "W", "DWD", "0", "1N2S"};
    int t = 60;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> layout = {"75633808", "87049849", "19458165", "36633886", "92725170", "61183034", "39432264", "59384396"};
    vector<string> actions = {"11SS", "564N", "76W", "7N9W0", "N2DS", "3SS", "628E", "9S1N", "31NN6", "NS"};
    int t = 987273;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 25685297;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> layout = {"43973731", "03832533", "05296793", "51641963", "15210359", "54887735", "47245854", "31526495"};
    vector<string> actions = {"S99", "SEE", "WW4S", "EE2N", "8S6", "S83", "WN14", "718D3", "0DW", "SNS"};
    int t = 77738377;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 285040712;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> layout = {"27768282", "91184511", "20756257", "74971670", "44916312", "14955244", "35156974", "71775223"};
    vector<string> actions = {"NWW0E", "S21", "93", "WN6", "526", "E", "N", "E1", "16NE", "DWE4"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 799999998;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> layout = {"83879245", "42661168", "64258455", "44747523", "13638382", "31546031", "38685629", "36687783"};
    vector<string> actions = {"0N5WD", "EWN", "E8N", "S75", "3S", "N", "6S", "0S", "N0", "72"};
    int t = 6000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 42997;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> layout = {"78415614", "54932535", "43164594", "64111183", "10785851", "63374429", "14657130", "89329244"};
    vector<string> actions = {"8W1N", "W9N8", "WE0", "EN", "18", "W76", "4W0W", "EW16", "W0S", "038"};
    int t = 606060;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 10151433;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> layout = {"39165948", "81658417", "77582739", "74161731", "65689217", "56833932", "22254372", "73093744"};
    vector<string> actions = {"SS", "0E", "W7D", "45", "5E6", "9N", "6", "DNN", "N4", "1ED"};
    int t = 2520;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 40721;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> layout = {"57398512", "59081678", "48293136", "29249548", "72278643", "82762987", "15178505", "69336456"};
    vector<string> actions = {"5W85", "3", "DWS6", "W5SW", "9N3", "NE", "D", "109EW", "S0E", "918"};
    int t = 2521;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 44696;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> layout = {"62798913", "73998929", "18795925", "46037121", "82885731", "32436485", "54673983", "95295083"};
    vector<string> actions = {"D4N5", "0EES", "N056", "96", "87WN", "64WEE", "WNS", "70E8", "S5", "DS"};
    int t = 4000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 70914;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> layout = {"00", "01"};
    vector<string> actions = {"0", "1"};
    int t = 6065;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 6065;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> layout = {"00", "00"};
    vector<string> actions = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    int t = 99886772;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> layout = {"0", "0", "0", "0", "0", "0", "0", "0"};
    vector<string> actions = {"1S"};
    int t = 18;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> layout = {"0", "0", "0", "0", "0", "0", "0", "0"};
    vector<string> actions = {"1S"};
    int t = 19;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> layout = {"0", "0", "0", "0", "0", "0", "0", "0"};
    vector<string> actions = {"1S"};
    int t = 99778991;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> layout = {"01", "01", "01", "21", "01", "01", "01"};
    vector<string> actions = {"0", "NNNSSS", "1E11E", "D0WN", "W0NDE4"};
    int t = 1001003;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 200202;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> layout = {"012345"};
    vector<string> actions = {"1", "01", "001", "0001", "00001", "000001"};
    int t = 60;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 60;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> layout = {"012345"};
    vector<string> actions = {"1", "02", "003", "0004", "00005", "000006"};
    int t = 99999959;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 99999959;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> layout = {"01", "32"};
    vector<string> actions = {"1E", "S", "W", "00000W"};
    int t = 66666623;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> layout = {"00000001", "00000001", "00000001", "00000001", "00000001", "00000002"};
    vector<string> actions = {"99999E", "99999S", "999999"};
    int t = 6;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 144;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> layout = {"00000001", "00000001", "00000001", "00000001", "00000001", "00000001", "00000001", "00000002"};
    vector<string> actions = {"99999E", "99999S", "999999"};
    int t = 99999996;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 48149980749;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> layout = {"01111111", "22222222", "22222222", "22222222", "22222222", "22222222", "22222222", "22222222"};
    vector<string> actions = {"9", "9W", "9S"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 4049999811;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> layout = {"13983779", "56620380", "91254988", "20656288", "43363525", "67824559", "93351733", "15817451"};
    vector<string> actions = {"5EE8", "7", "37S", "S4", "85N5S", "D", "5DD1", "7E9N8S", "5E0", "9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 2184999955;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> layout = {"01", "32"};
    vector<string> actions = {"1E", "SSDSS", "W", "00000W"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> layout = {"055556", "189996", "289996", "389996", "487777"};
    vector<string> actions = {"1E", "2E1E", "3EE4", "9EEEE1", "E5E6E", "E", "S", "W", "N", "1D"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 63750000;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> layout = {"01111112", "23333333", "11111112", "23333333", "11111112", "23333333", "11111112", "43333333"};
    vector<string> actions = {"0000E1", "E0EW0W", "N0NSS0", "0EW0WE", "0000E0"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 16666666;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> layout = {"12311114", "12311114", "12311114", "12311114", "12311114", "12311114", "12311114", "12311110"};
    vector<string> actions = {"9", "99999E", "9999E", "999E", "99999S"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 47309982228;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> layout = {"011112"};
    vector<string> actions = {"1E", "E", "0"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 49999998;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> layout = {"01111112", "01111112", "01111112", "01111112", "01111112", "01111112", "01111112", "01111112"};
    vector<string> actions = {"1E", "E", "0"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 49999997;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> layout = {"0001", "3001", "3001", "3222"};
    vector<string> actions = {"1EEE", "1SSS", "1WWW", "1NNN"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 37500000;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> layout = {"10000002", "10000002", "10000002", "10000002", "10000002", "10000002", "10000002", "10000003"};
    vector<string> actions = {"E", "9E", "S", "9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 4499999640;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> layout = {"01010101", "10101010", "01010101", "01010101", "10101010", "01010201", "10101010", "01010101"};
    vector<string> actions = {"4NWD", "5353S", "9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1299999980;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> layout = {"0101", "1010", "0101"};
    vector<string> actions = {"4", "5353"};
    int t = 31231231;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 124924925;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> layout = {"01234567", "80124567", "11124567", "11124567", "89014567", "88884567", "99012367", "90123407"};
    vector<string> actions = {"1E", "SSDSS", "W", "00W", "98SS65", "923D3", "9NNN1", "8S1", "7E374", "45456"};
    int t = 98765431;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 888888860;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> layout = {"01234567", "90123456", "89012345", "78901234", "67890123", "56789012", "45678901", "34567890"};
    vector<string> actions = {"9E9E9E", "9W9W9W", "9S9S9S", "9N9N9", "9E9E9E", "9W9W9W", "9S9S9S", "9N9N9", "9E9E9E", "9W9W9W"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 945000000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> layout = {"01234568", "76503210", "56549214", "26563210", "76043212", "46529910", "70343210", "16749610"};
    vector<string> actions = {"99WWN9", "77", "WWN99", "999999", "NWSE", "E", "000123", "887EE9", "9", "WWN9N"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1799999937;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> layout = {"00100010", "00010000", "10000100", "00100001", "00010000", "00001000", "01000100", "00010010"};
    vector<string> actions = {"95S9WD", "8E7N9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 141;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> layout = {"00000001", "00000001", "00000001", "00020001", "00000001", "00000001", "00000001", "00000002"};
    vector<string> actions = {"9E", "0000S", "0"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 23399995284;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> layout = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000"};
    vector<string> actions = {"9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> layout = {"01"};
    vector<string> actions = {"1E", "0E"};
    int t = 100000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> layout = {"035872", "179234", "235872", "239583", "238957", "328953", "238957", "892370"};
    vector<string> actions = {"DNEWE5", "23NEE7", "SSWW39", "927NE", "23", "3253NE", "237", "3256NE", "235WN", "4"};
    int t = 99999999;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 2026666513;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> layout = {"01111111", "04444442", "04444442", "04444442", "04444442", "04444442", "04444442", "33333332"};
    vector<string> actions = {"9E99E9", "8S98S", "9W", "8N99", "5NESW8"};
    int t = 98765443;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 2423045223;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> layout = {"0"};
    vector<string> actions = {"D7"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> layout = {"0101", "1010", "0101"};
    vector<string> actions = {"4", "5353"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> layout = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000"};
    vector<string> actions = {"999999"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> layout = {"21212121", "01010101", "01010101", "01010101", "01010101", "01010101", "01010101", "42020203"};
    vector<string> actions = {"8N", "8S", "8E", "8", "9N"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 26049984314;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> layout = {"011111", "000003", "004003", "000003", "222223"};
    vector<string> actions = {"SSSSS", "WW", "EEE", "NNNN", "12N39W"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 83333340;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> layout = {"01234567", "98765432", "01234567", "98765432", "01234567", "98765432", "01234567", "98765432"};
    vector<string> actions = {"978", "47W", "9E8", "6DE", "9", "87N", "978", "9EE", "97S", "97E"};
    int t = 99999998;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 2233333212;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> layout = {"012345", "543210", "010203", "302020", "102020", "120203"};
    vector<string> actions = {"423315", "ENNS12", "ENS2", "999", "9999", "119SEW", "WN90", "00"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 974999997;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> layout = {"00200", "00200", "11533", "00400", "00400"};
    vector<string> actions = {"9N9E9S", "9E", "9S", "9W", "9N", "9"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 8099999748;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> layout = {"4000001", "3222222"};
    vector<string> actions = {"E", "S", "W", "N", "1E"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 7142858;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> layout = {"0"};
    vector<string> actions = {"D1"};
    int t = 5040;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> layout = {"01"};
    vector<string> actions = {"1E", "E"};
    int t = 80640;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> layout = {"00000001", "00000001", "00000001", "00000001", "00000001", "00000001", "00000001", "22222223"};
    vector<string> actions = {"99999W", "99999S", "99999W", "9999"};
    int t = 99999999;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 6149998836;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> layout = {"46298429", "53329479", "49219310", "34912321", "42131221", "41234125", "32409401", "21349401"};
    vector<string> actions = {"E", "D0", "SED", "5321", "9WW78", "040123", "219312", "NSEWSE", "243213", "NEWSSE"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 914999969;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> layout = {"010101", "010101", "212102", "324324", "010101"};
    vector<string> actions = {"1EE3W", "2E", "3W4", "4NE2", "2"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 796666630;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> layout = {"0111"};
    vector<string> actions = {"1E", "E"};
    int t = 72000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> layout = {"29298511", "70673258", "59922002", "63633048", "32740689", "41912685", "77960880", "91136945"};
    vector<string> actions = {"SWSDWS", "EDDDSD", "DDEWWS", "ESDEWS", "EWSWWW", "WESSWD", "EENEDS", "SWDWSE", "DWSNEN", "DWEWDS"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> layout = {"0"};
    vector<string> actions = {"12345"};
    int t = 37;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 108;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> layout = {"40000001", "31222222", "30001000", "32222000"};
    vector<string> actions = {"E", "S", "W", "N", "1E"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3846154;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> layout = {"00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000000", "00000001"};
    vector<string> actions = {"9D", "9D"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> layout = {"67293572", "02959182", "59591914", "19293911", "90123456", "19201001", "11929317", "95919291"};
    vector<string> actions = {"987651", "S1ENW9", "451W2", "91WN99", "765432", "582858", "NEWSD9", "85818", "9", "9591EW"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 1599999927;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> layout = {"32321", "32312", "13434"};
    vector<string> actions = {"ED987W", "3D40SN", "12D", "18DES", "E", "0", "1234", "WWWEEE", "EWS", "3477"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> layout = {"40000001", "31222222", "30001005", "32222006", "40000031", "31222222", "30000001", "32222222"};
    vector<string> actions = {"E", "S", "W", "N", "1E", "10000E", "SSSSSN"};
    int t = 100000000;
    MarbleMachine* pObj = new MarbleMachine();
    clock_t start = clock();
    long result = pObj->maxMarbles(layout, actions, t);
    clock_t end = clock();
    delete pObj;
    long expected = 3846154;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22663468&rd=10796&pm=8045
********************************************************************************
#include <string> 
#include <vector> 
using namespace std; 
 
struct State 
{ 
  long long n[8][8]; 
  int t; 
  State() 
  { 
    memset(n, 0, sizeof(n)); 
  } 
}; 
int L[8][8]; 
string act[10]; 
int R, C; 
 
int move[8][8]; 
 
State advance(State cur, int t) 
{ 
  State next; 
  for(int i = 0; i<R; i++) 
  { 
    for(int j = 0; j<C; j++) 
    { 
      char a = act[L[i][j]][t%act[L[i][j]].length()]; 
      if(a=='D') 
        continue; 
      else if(a>='0' && a<='9') 
      { 
        next.n[i][j]+=a-'0'; 
      } 
      int r = i; 
      int c = j; 
          if(a=='N') 
          { 
            r--; 
          } 
          else if(a=='S') 
          { 
            r++; 
          } 
          else if(a=='E') 
          { 
            c++; 
          } 
          else if(a=='W') 
          { 
            c--; 
          }     
          if(r<0 || r>=R || c<0 || c>=C) 
          { 
            continue; 
          } 
      next.n[r][c]+=cur.n[i][j];             
    } 
  } 
  return next; 
} 
 
 
 
class MarbleMachine 
{ 
public: 
  long long maxMarbles(vector<string> layout, vector<string> actions, int T) 
  { 
    for(int i = 0; i<actions.size(); i++) 
      act[i] = actions[i]; 
    R = layout.size(); 
    C = layout[0].length(); 
    for(int i = 0; i<R; i++) 
      for(int j= 0; j<C; j++) 
        L[i][j] = layout[i][j]-'0'; 
    for(int i = 0; i<R; i++) 
    { 
      for(int j = 0; j<C; j++) 
      { 
        int r = i; 
        int c = j; 
        for(int a = 0; a<60; a++) 
        { 
          char step = act[L[r][c]][a%act[L[r][c]].length()]; 
          if(step=='D') 
          { 
            r = -1; 
            c = -1; 
            break; 
          } 
          else if(step=='N') 
          { 
            r--; 
          } 
          else if(step=='S') 
          { 
            r++; 
          } 
          else if(step=='E') 
          { 
            c++; 
          } 
          else if(step=='W') 
          { 
            c--; 
          }     
          if(r<0 || r>=R || c<0 || c>=C) 
          { 
            r = -1; 
            c = -1; 
            break; 
          }                           
        } 
        if(r==-1) 
          move[i][j] = -1; 
        else 
          move[i][j] = r*100+c; 
      } 
    } 
    State change; 
    for(int i = 0; i<60; i++) 
      change = advance(change, i); 
    State start; 
    int time = 0; 
    while(T!=0) 
    { 
      if(T>=60) 
      { 
        State next; 
        for(int i = 0; i<R; i++) 
        { 
          for(int j = 0; j<C; j++) 
          { 
            if(move[i][j]==-1) 
              continue; 
            int r = move[i][j]/100; 
            int c = move[i][j]%100; 
            next.n[r][c]+=start.n[i][j]; 
          } 
        } 
        for(int i = 0; i<R; i++) 
        { 
          for(int j = 0; j<C; j++) 
          { 
            next.n[i][j]+=change.n[i][j]; 
          } 
        } 
        start = next; 
        time+=60; 
        T-=60; 
      } 
      else 
      { 
        start = advance(start, time); 
        time++; 
        T--; 
      } 
    } 
    long long max = 0; 
    for(int i = 0; i<R; i++) 
      for(int j= 0; j<C; j++) 
        if(start.n[i][j]>max) 
          max = start.n[i][j]; 
    return max; 
  } 
};

********************************************************************************
*******************************************************************************/