/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10289
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

class WickedTeacher {
public:
    string cheatProbability(vector<string> numbers, int K);
};

string WickedTeacher::cheatProbability(vector<string> numbers, int K) {
    string ret;
    return ret;
}


int test0() {
    vector<string> numbers = {"3", "2", "1"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> numbers = {"10", "100", "1000", "10000", "100000"};
    int K = 10;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> numbers = {"11", "101", "1001", "10001", "100001"};
    int K = 10;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> numbers = {"13", "10129414190271203", "102", "102666818896", "1216", "1217", "1218", "101278001", "1000021412678412681"};
    int K = 21;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5183/36288";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> numbers = {"139012963127893461274126478482"};
    int K = 1;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> numbers = {"139012963127893461274126478482"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> numbers = {"139012963127893461274126478482"};
    int K = 3;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> numbers = {"1390129631278934612741123112125552523126478482"};
    int K = 18;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> numbers = {"1", "3", "5", "7", "9"};
    int K = 5;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/5";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> numbers = {"1", "3", "5", "7", "9"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> numbers = {"28471291", "3125215", "4366435", "7125", "66"};
    int K = 13;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> numbers = {"1428471291", "3125215", "4366435", "7125", "6666"};
    int K = 6;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> numbers = {"4366435", "7125"};
    int K = 5;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> numbers = {"15", "14", "34", "16", "171"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> numbers = {"23944", "617211959", "4723869", "282208", "22555", "63", "967", "324", "7", "4796892"};
    int K = 88;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "16/1575";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> numbers = {"357", "541945", "920187", "35553", "554", "5304087"};
    int K = 49;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7/360";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> numbers = {"153579286", "66283", "7885492", "9884", "806", "58136246"};
    int K = 69;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7/144";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> numbers = {"235306", "148981333", "47855855", "502419", "4938026", "23563035", "49755", "191", "398"};
    int K = 49;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1457/72576";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> numbers = {"720"};
    int K = 40;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> numbers = {"4328548", "60497", "696064", "3631920", "3366019475", "379", "840691856", "3643813"};
    int K = 47;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "167/8064";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> numbers = {"3829", "9548045394", "75853", "4377970706"};
    int K = 26;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/12";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> numbers = {"6", "7630811950", "3282953866", "8133", "27", "425427742", "402965588", "1183793"};
    int K = 50;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/8";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> numbers = {"8723998126", "4", "855", "73", "7926164900", "831789", "29990", "39", "804240494"};
    int K = 92;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "551/72576";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> numbers = {"3", "4", "40", "4259", "173249954", "4120399812"};
    int K = 76;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7/180";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> numbers = {"1", "86704623", "860430361", "62173", "912882"};
    int K = 47;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/20";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> numbers = {"1", "94", "1194960", "906", "135", "3432888", "42301", "62214"};
    int K = 86;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "101/6720";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> numbers = {"26", "651", "892345194", "91", "924076253", "547625", "475"};
    int K = 19;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "239/5040";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> numbers = {"401529", "92", "359", "85", "10884", "29116", "852743296", "8242074", "9213176", "3"};
    int K = 85;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1073/181440";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> numbers = {"492287", "205", "30", "9982295402", "83724481", "8"};
    int K = 35;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/20";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> numbers = {"530884951", "1992", "70464", "75230", "8579", "758041339", "15"};
    int K = 33;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2/15";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> numbers = {"984", "396", "48385", "6", "549468", "4582"};
    int K = 19;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "43/720";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> numbers = {"1350237423", "9732612", "57866700", "8642096235", "7682200907", "6", "20"};
    int K = 17;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/18";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> numbers = {"3", "70", "6", "9900055822", "940563", "26101703", "77868319"};
    int K = 47;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "103/5040";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> numbers = {"99", "9054744070", "551", "213387028", "53230", "820751616", "686259477", "7372"};
    int K = 45;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> numbers = {"830", "69", "75", "762006257", "829177", "5", "412751918", "169933", "9435847694", "5800", "95", "1", "49948", "6020432"};
    int K = 41;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "9483037/389188800";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> numbers = {"7563854", "55", "1", "15577004", "9691590920", "569", "36676347", "9624196", "2852993", "95852523", "9870565", "6441622426"};
    int K = 69;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1487521/34214400";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> numbers = {"709139764", "1", "17423", "84835", "81", "7086721384", "92048642", "42"};
    int K = 8;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/8";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> numbers = {"275537797", "42", "30994", "551559", "69369410", "243011", "6", "70", "5"};
    int K = 91;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "53/5184";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> numbers = {"104", "32234", "561", "596", "2620204", "71488181", "66652", "724", "176228817", "6316", "576", "15198967", "19284", "563439188"};
    int K = 67;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "650577247/43589145600";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> numbers = {"30695", "3656", "35126", "2374748", "4372024965", "77", "53", "871340301", "45134", "52", "4", "11", "948246", "397864", "621"};
    int K = 71;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6139307021/435891456000";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> numbers = {"31105478", "262", "975056", "97525", "9396311397"};
    int K = 91;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/120";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> numbers = {"9642063", "9349126", "2", "95156", "50931851", "32418", "3456989", "14204", "154861", "77014638", "606515952"};
    int K = 59;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4181/246400";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> numbers = {"4955", "951", "169753763", "241", "6639043", "4975036", "308653821"};
    int K = 52;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "11/1008";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> numbers = {"3623555", "75824065", "5", "9993173149", "537248", "98219144", "6838626158", "881849", "610418", "830228587", "1646157", "9002865", "744"};
    int K = 38;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "15757277/778377600";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> numbers = {"181174833", "9818015", "22078586658314", "34992439", "49822", "8254715466", "1434642685", "4910101", "2472512804", "25", "2231146327", "91604", "484", "54274182", "95189465"};
    int K = 91;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "898596781/81729648000";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> numbers = {"407009104", "266552", "3041", "1670028"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "3/4";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> numbers = {"51006", "10453947", "3", "89815063", "97983", "46", "777", "62657", "9402", "6925730221", "28421", "67", "295964", "20765", "5056"};
    int K = 86;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "844734139/108972864000";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> numbers = {"34", "22478018", "665454617", "246", "302476803", "5951201435", "6", "44536111"};
    int K = 5;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/8";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> numbers = {"394", "78241", "553", "755234", "543284", "83"};
    int K = 3;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> numbers = {"4", "82153019", "89718", "294", "726033", "3", "423", "851651", "712789", "9634835440", "269670", "937087146"};
    int K = 64;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/120";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> numbers = {"55878872", "4541771", "3362536", "635501", "13", "44", "290416", "14", "902807", "226426921", "221810"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6/11";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> numbers = {"85", "5", "340", "30", "703812033", "242", "501"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "31/210";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> numbers = {"28", "3", "8132993", "55752630", "85", "537360", "740", "2", "58", "5171837", "30272"};
    int K = 79;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "505093/39916800";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> numbers = {"195", "634531488"};
    int K = 11;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> numbers = {"9024117813595757685542600743751348876347330432567", "1197389737464779456073623171046082573029814737", "78544148475854468430994543175744855737376228339", "272800327876775815470812055184812594083070747598", "5894476784005780030612636667906453662266941775359", "747350905643261798666584543400475849582707960", "2896353837594915669291663667003937638710", "8688418431498102702229298075639431273900929118", "176178519099031799732145093701754584291915", "2309408070004018896242748884829056954545222264", "32078582673571390543283110291647577796861859", "9742565105291537883407784178415600848372020044"};
    int K = 8;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> numbers = {"2344897230915641676531274003837426074115845891", "639362183517537771625268080723478402200422612018", "63707211861855396462999570030845536407445095397", "8832974287132282141338505442652895921402138", "963420496313851717600737122333915476091527832003", "531223667389694322824045304758212216280713251", "51757303573969335925648731162399165581969912", "4172960281752121944598946252853927781460428805718", "4384657537872980311428454716893415381469017460296", "25996505058731498186288911259648649585792136249", "63363849774150869916053947944823805015454928256"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "43177/302400";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> numbers = {"38472330652974487345630375181345113034548811042", "1364008938898028233405466335442348230435912955", "859598371850182836397132439210183402886824", "3000076855445699330494941253616231121785869619", "392527404237248879576677096267620295459603306", "318149714750839561782861050252017955168117273345", "515915953614461329328232830028675171472676416170", "1422994255075919839236287177867429139943", "8304061029805525786010893488142477580430100301652", "86158063145360568365893814561213253672592391606", "91533553942276653857372012286868163518787530", "48914897489101425953667281966992042627469111749", "72865020427986330904864036279024756419628048550", "6343036432689386643400259591101143045002933237399", "8929790798138498419249241508053128589557770"};
    int K = 8;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/15";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> numbers = {"712985740303991962092422447206770351792644220", "473366184444449057389292426289159907179885670306", "2414186064146847577083189612551209171636", "745444217931560383521701918115819543397297314837", "610479415834571479037737228304265813584037553", "1974208433963669542240430670738784591171037710", "987479485653601016336985276681657661243244268", "9641759274315860205930904942941055213211706051985", "4822637224169217321772026147216319736140906", "6328863355416562575072353394629048974242469", "283637745042811504900506128177984519952154861969", "5277807804500208281174260359289139477918183214"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7/12";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> numbers = {"303861612098251554849682845192084124914874240725", "9287663384999770204930177889924111388969864", "7096819068123999896387916344969420062836277729840", "1952660721045190427425548212230302252798388191", "504868820338004155888299862670555017062403972", "36465500494948570755943902530480552613635", "865015054621872172855769330701992548550413920721", "9455951380213021204500790744137584986290211747477", "73846936175052578935757237723130858129995", "7112769975543901888533232114829222411851732066541", "4545977811535973737608175647797479808277973527240", "452543837971349289024474665371952981193322"};
    int K = 6;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5/12";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> numbers = {"393735375036109534283588511315661231708128", "57943842466324080756537179545760169023745", "822086380662228572691187238051837786633537844", "426099545989515149608620827062529466428638", "91940092037062872149132910519064915114813167407", "737533626039614037333703554574769370844930", "9777075827146775303360922445097890889538350830", "8312356788914382167178456280658531022313", "2128246541308044853880470548303465431395", "91543534561273525372149248152269119163104830945", "9733376630456778942553139827023315235355401038", "82345582334182917137497246485306406794560", "357794318851960393967661242291917505908416844", "583085466684340855200078612070997729386231936175", "622053920959780288953120105429779206436510931225"};
    int K = 5;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "8/15";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> numbers = {"90889110132225498910296419988559742756286400", "227245467950672711084940963017765749831709090", "1505360687626649489234052924655744688619", "4562787558955681813230899329493214074613135", "58953977613914740237900871667505610644777", "410961360253311927555829534892711922789604", "6111663368972604544856410227491344743616875660890", "461578913025190262053946857053377533281590213", "23841781986304418776730771661452220041414132110", "3662250269443873146969829179177291642615225183", "4085495607397363958316762795317666020593", "4629685447102843995506412352080417650769686050"};
    int K = 10;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5/12";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> numbers = {"889685223792008158839102388123182167242988590484", "9585194839102543009705724853931870981679722759090", "3909383203767197323517077809013274462314", "4996035150174600631412470095618870264864", "6206775039071259659497469460727335686674", "2703430784548672816903959695844168528233366", "9443794022237090226838708129963183464483962", "2134255265569866812231431894656325730983997", "315273957714882026076511718492734765560405036099", "2759452295404719883906871681802775640668419810", "1734173449185794406897634295386252554332526195"};
    int K = 10;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2/11";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> numbers = {"2326546459631830379044037152374221211241547862", "28901169649352585391207955587521044895305", "58388234735498597756639937132890514387410127039", "7257937848944609271390491778664365835710691496", "8768246250198506032858439693020727702478011", "1187101677469962328562492418446353594986221033867", "37078122192462039953402915192901993623875862", "9626496308266234935821220555256407136871", "314879433361282595889921792636949138409750188", "391943863140558274141772801903736482829583", "50846258644416942181539386191063448271195314923", "1277440298861791415925825270402938847185941588719", "2588133093573703881034624554460260707963"};
    int K = 8;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/13";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> numbers = {"97057769010012559755465224875066025436411", "66415991080962526843754154078528733731299", "77356035335419204015992982061582167503815", "86968922849824037288955997359855136521618584", "87064771981568686528295121243321086008179450637", "206135068853091639910616783796373700148065", "8009200119159412875874300033833200871903142348", "8098226804181838666382504116159126723234203777977", "92405804188943503954441466699661153011365978", "95436425094785471779393585210520596970752801672", "3194131623972977124875736888853062027420807"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4043/28350";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> numbers = {"58638997982496333278746635342536241001568655", "93578039392840572277257107896056878279110", "511443810991112326269055826930322523019483185124", "442731345380718673146387569322607655443864845488", "215245369356727758880814495110279991912828137153", "99788612496537708841016642584819056294555981", "6626784363451377778416504294406903567371097311115", "26641899160148388647862298627968998862448326", "22868579200955579936684466904245796109377", "502210030724833176682181305305179152554720", "1301350408264523575752160947172134381827529", "71661433830048385767986762588913740082157", "59804963237968119568098929189730828751264630737", "9228423696606106764842123952163193114144"};
    int K = 97;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "898746451/87178291200";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> numbers = {"307904871138505730318515215512948113037657", "2156545284127759596223687957674052689275504333", "7775759132431354411447868041177259606425183", "4712390349238793697754143388112998322422532606", "316997234465585810185329812078459692858116", "7448097408606880767209051558649271086195", "8422904215641732449767808687989247436327066537167", "857008154597247394433695885983957103277205112395", "3192765230584796760560255014395567457694424", "2071499781597264429363666280120968003919742", "3685009180804431827259394133260967512217110", "64576339833599284417098544158610965816730337", "45767142092521322382082046387663387526250958", "7465478643726735913747030728465469633427575212502", "648218943007128084826629782600353457421847230"};
    int K = 71;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "18418031623/1307674368000";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> numbers = {"1050668282001487027293593188927657532090", "9253632649521281318550206955438356681782499498", "7233565068222011116246626931090292987276286382", "530694034093510819668373346840767783471850", "1564246893756179147364514599368809305013803", "7711898799156398003470528349601981812532831804078", "2741865026599996614429654982707232703476750", "1654763727428810462966209016122094892990932293", "1114425980875887038015282923165892841714", "78216234343103745594437546271515891685860", "61594654890077444242593894913228934258701327", "158929146171242156457088616807662155608452077", "51819060191879618684456464339121889741848", "62881759331844298297680200561445785444857"};
    int K = 61;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "714582229/43589145600";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> numbers = {"3094181232450146485258822135075588407149227938595", "5622778445136046339313804663826437479223", "91671623463231744810849116526675455720633189", "7908272312131692232221405895895639443013389", "33412594489974301889912356925223133455336317", "514895935404356890437945295183244962674009698", "5457021906069860314351468794491298658010786", "2207362784924285566836027059520088678520", "52293944921514677595529737197791207167349273", "553193284930206584340615857738368574554433169711", "44089571085241180773915073468350605388015162405", "183373552138915283739100179724255329019807635", "76657928779610493510829268910493304418060363990", "6231023799009606951304504556210343596813580864", "21778353254567784543925429457176104750005969923123"};
    int K = 85;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5128215163/261534873600";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> numbers = {"5593197435308260220493073396313504232480889", "240318017941055431005882977960712173055485", "6789851671157563800995467753656099982941297500364", "8799240116153879245993429385280622554679115592933", "806172227449094486769415258215937005216869514", "8874783789268381254207630886788912424155", "3257953962574633982077168109663679079582880707008", "953830354331717915953412003491995683725323", "19317518467204643659519328451891764475534467226", "99594791794317774664474851245791832666228", "5920445378264089042197898839963812382091", "926251280743580811463613053416535091043378", "99243428425522519949759874983893915233963458140", "36835526289839623366527829865345549076077325", "2496410048256100776277186816708433364370419716919"};
    int K = 77;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "27614131/2223936000";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> numbers = {"3930840882424407767842049930433423467436534", "3187868194444379072088458493760177460908", "4059594787657333744021416723359575291970427", "58132098055803617824858107939371023385103299", "26188062479114830086485669101031648811371166914", "71385979849099241058596329711779761061456", "97125881294637065489504247019099975822128", "3247324214251638867878450289493073872810135", "1361238299690856512675375399104741498684", "787672495178281458822997328147911158373422454"};
    int K = 52;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7159/226800";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> numbers = {"37204223658112003704435350335577619232085952908", "5112865444501021762446585109117634160188", "11111605461205167010172341314881490759705152370", "3385579105393354734521314914411347412736748441901", "121758145760119239873323663904016156708591", "5033203276110350581164325261932368530840", "2253919660258149831195056500395017886256", "8177971396636939322169122683498814682789348709", "640204656575027598622849043039908990951340", "46677205285523272308727289091129937041079", "20522492570688866497667050942426482557665105048", "91976902655929917213315804248405603259107", "5388807571486465206962890005398894497049460246", "55582803033148246594948368572852944128856"};
    int K = 74;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "58231/3057600";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> numbers = {"65033124195940727045000162628436023174006897", "794985386923275262086630198905652487658179000", "479689442046965460800999323963165890254633171222", "983820045292547031408286210614967644543326302416", "14697255351838542124890375195624795894949", "3898328326331307094689473725205540345403383860", "943496370986565231600633003206565558841281229027", "10049506735675439995927703705421358353339482423", "9585651076406301182977341035253870131354308082", "4098363479144753942093953058486174902121728691", "8095660829781824872671936794978547523354", "833661133129912896374046334037401425232459", "500433991016372119309373167157831041739332370", "2897787362740286457868965548920355635218920", "33677101589924219927867874016858685404716848554"};
    int K = 82;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "798896617/54486432000";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> numbers = {"706204256789010440883989714886081720590740", "141528466459436173773245890292575311683529", "94787839835973420825698793083892516225221858030", "8441590942960482721105129513194701722784", "2348297184720431029405957597769716955606796", "201590265925922699325947247433039456011981", "8508223712319226085353216938940545662810", "756348129702085143166219870423363187171419", "870257329624644166718702667348933906765793516", "69560440747040291615047989433978475558376625", "73080238483396671454888572320030472815912640", "785152154614395107240442542351690399065284", "3905430130108387085511258148198925989927669", "5716838435089999287208418193122885589601616"};
    int K = 89;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "97957313/8717829120";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> numbers = {"43748946283200409729282100025619621736634007618", "714813770144242463502397492284782920936021690", "468100466425129555457066638331988288204986", "961312313212709750719628511041686115590976", "746576450560846584866385700506958142664188282", "823894995706059408295965154281998859200285879", "7407533523775945749033959957597407260992", "1783797552294348647541308331189974071237983454028", "2744122676476404893707053342190472556011", "4869685249990219904741846433398496774751025877572"};
    int K = 52;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "7079/226800";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> numbers = {"85273893967597002669432307452802017566696654502", "32063856761008922197794873119983659705871753", "8786000494615110279448653688864129871328731144", "241909718777476639405051826504320607111573453", "11734509037977026411304534647928257282440567", "605001618101051335516727888534409615651439033478", "5475392232545289889191789045530435623582173", "692133073597875322115913829519348116334448", "1450122854880963063006341135598506763370", "441540923378651820827409424096584957854986237129", "6786727533482197749526916018390833206597059052", "279413000505634443608240351292797136454195580", "25119638044568498585914068979266709624389185", "52698769602622807779246059796949179060909144077", "9210583360142684359717677476968052974194483811042"};
    int K = 80;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> numbers = {"7014787422435059552134536144375653037540394984", "10209985321910611967144981338446481628310", "42910852683101993123793627074431636365", "8259144953704001089243688554003", "28618095566348581688806499", "548638997982496333278746635342536241001", "68655193578039392840572277257107896056", "78279110841144381099111232626905582693032252301", "4831851248442731345380718673146387569322607655443", "6484548881152453693567277588808144951102799919", "382813715349978861249653770", "841016642584819056294555981966267843634513777", "841650429440690356737109731111541664189916", "2483261128685792009555799366844669042457", "7109377250221003072483317668218130530517915255472"};
    int K = 98;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "10674904843/1307674368000";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> numbers = {"773367710158992421992786787401685868540471684", "5540175228446816506620442690821753500337886728", "4446443051271920433956446674387", "526507211072075719755684375888095", "6003750363780052875345190197", "3085650231429589965339974880314503", "70200207016122005304607733648457176059035009142", "594923237713852283337999576", "2149167264385889622985761638839", "944407446674698600851461675694239315845940142", "71024817281510594405811208892717314816107452522", "117887732715088559553055178159627280619500", "9636794473918395920342693563018163495", "8933227634940432", "229237624486310025985149849571281664886865"};
    int K = 100;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/15";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> numbers = {"9617810542343330699361771866806887486307", "11160728658361161583120531671527", "233491355476098701575583160600", "955084666052288697614218963994169211342200", "6492531148798852204979163238075126771000", "600543662668464244468207734575895313", "9983825389945180795635139191370", "1672548214673272235169099316317107341", "2519692388301654649488547817", "46449906115025431825880405475853454319436900", "1815865692304273280998705524313912434903", "7291455940076612539615431315327161076897590", "2135294610400336207198698278835539654268806803", "68105075450644921332340160402", "207076610475056490319938760621104066112004"};
    int K = 100;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4/15";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> numbers = {"2308774779946980720300316064521", "5467565684563932777457543860324306261205498", "43675597668651596933435200", "6511853252446282945534710846798730619959608615", "6801654930810782718290865957153390", "23698048015987410689476053946421154159887", "126933945430042379689819621250552555867606381", "95222661975904619187982657336", "65646331935802642326522146919731280991795214536", "8069606527271974010135383738942488089294329947086", "751900443875080297583668531", "747571415591801812766340538026282", "5259153740415976537118684802190234151", "14206092503301067398328330890", "3080493457289088016159081104701573887583989319268"};
    int K = 13;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "12572878337/163459296000";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> numbers = {"49860318618333488435448981383056", "3675512279381861725374946591123892374833643", "41917432129966508789820899146135", "60624885380431063596888513184799114459533650", "986424604128906023501540477363873", "429122209488484527726973456527064", "498031902992598606425712853460128680214461624943", "114031806434695776244903724794650783928", "276952721411727823867512146890", "5042383773757146742811109123387207193323", "65496588159066048816553350839292281391", "1741229449354963457934551056491578533120073193", "74791569305227919584859990143677588875447655", "264263350923804706839367854650017316409487", "9732225655468147110122327606750869928009"};
    int K = 24;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/5";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> numbers = {"695484828537883128141970049858", "153220399933367642965845392148420290", "7142183470277020158245284531717586884", "226985866717720940999254681015619", "1494489550191285120174015843326306974117", "534569906152857047116655160080953003206294", "5248971523192174187668998866367804121", "8008597507526704175503581498956426135", "1907950307427983208927237653666351", "89735653034064474602580327116336810279", "201002851213600783235514989156017", "776767917099252779880756021103289283464", "8829309954512421357962442103449", "8446784897100273009344058539754759", "3386453960323808452206822261193611293740281"};
    int K = 33;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "196/2145";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> numbers = {"3864624640196542872058684108", "27559949475672330922366029973413", "8464482766724240169547053005960", "256241395422591567377679", "36963053059246030556740033408372666", "923783790744291721922092356989", "5800883932738872716037727620901", "267306504975366749135767", "96016345739706436194361", "516651574013925257757236281329285", "6771125407419978629302704386008", "990564041633148886435625443765", "67415498374971794905442196786078854973", "986045237210472381949479483494076703954894574", "1069473244079792231274764"};
    int K = 93;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "10545947473/326918592000";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> numbers = {"46015225608091868981819810227136255", "666905197238113866560481730412606", "88739592073665923407197371415", "7169507834093501055990111480150", "607590001969781279611330840740", "82005141745582077680989", "227863686622951881782675365552733", "1114061643664597059571109812", "62872067284638150649932057", "908567441673171781339535764275", "740959518514817613627047744128126", "1379863996269206938699129470558498", "211389013999607938760443517", "2497685331590271351188154472947814", "394748847655699860825914252568648306"};
    int K = 9;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> numbers = {"7112352468224238429409922076", "27352613969485479992489", "3011336078611350743645389718", "6278469788120133912214", "17772001122364847982122", "527545361454189926757560822", "506995224502863919779463279865", "43542983721426552973505", "113669569184981959854560", "583717699906686518981997668325751", "855023285363777771805406", "774283513464718025038431594", "1255679242170974394082150041419290", "756177791242189726033353", "475166424338097541901032170"};
    int K = 79;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "16553154901/1307674368000";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> numbers = {"7112352468224238429409922076", "27352613969485479992489", "3011336078611350743645389718", "6278469788120133912214", "17772001122364847982122", "527545361454189926757560822", "506995224502863919779463279865", "43542983721426552973505", "113669569184981959854560", "583717699906686518981997668325751", "855023285363777771805406", "774283513464718025038431594", "1255679242170974394082150041419290", "756177791242189726033353", "66240156927285384121550495337035566"};
    int K = 79;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "12038653/951035904";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> numbers = {"31082640912240493333404090261941713", "8477153491281313050053634", "4260717196742755829436", "9863358480936094621500628794", "43775389238105586575863385", "20405207910308207201038", "5839572844268906353202", "6638083241186610275682098283354073", "5317506568408309525451", "380716449395547043370281", "8946850561117944306352", "7629139344952000846676674186762", "56705952114269705821513692392825420", "6005942095150806526349037", "19099860226698372270203602978"};
    int K = 85;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "10256312849/1307674368000";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> numbers = {"3108264091224049333340409026194171327477153491", "8131305005363404", "6071719674275582943", "4986335848093609462150062879434377", "48923810558657586338501040520", "91030820720103805839572844268906353202", "663808324118661027568209828335407305317506", "6840830952545112807164493955", "80433702810794685056111794", "4063526762913934495200084667", "674186762856705952114269705821513", "92392825420050059420910806390911340", "7575468116084", "9526349037509099860226", "98372270203602978148106707214955622"};
    int K = 55;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "509/28600";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> numbers = {"3108264091224049333340409026194171327477153491", "8131305005363404", "6071719674275582943", "4986335848093609462150062879434377", "48923810558657586338501040520", "91030820720103805839572844268906353202", "663808324118661027568209828335407305317506", "6840830952545112807164493955", "80433702810794685056111794", "4063526762913934495200084667", "674186762856705952114269705821513", "92392825420050059420910806390911340", "7575468116084", "9526349037509099860226", "98372270203602978148106707214955622"};
    int K = 83;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "3151053089/261534873600";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> numbers = {"406674359451387519375272134", "393022780290948696412114094862256285620883", "284969064764421822424637627203937356", "4974251454934638100774066816763908053266598021", "6714335", "427199", "70982256412809831240081", "39498381434980380226553590502214132", "31433726309342708900495495070094330739272496297850", "713802900679778521869904239858186173504", "87240729967555942267836333021716", "88906615401200096279918995483541504193808119809", "540443381550384532310550462127", "9252559287477006684", "47431183756149949758276943240712520"};
    int K = 4;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "2/5";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> numbers = {"340567256697708650874068480008447503995862", "2757941736001403750575", "1395279504383896", "2859367079091346775006262025288167", "969608682551964138536297341", "477857359289882826774521522677920706831617", "29512701258785294622212890487518474748135963235916", "30309408921617702195113366018229256749767", "6724953", "17088655762055456062922260452877144884798889653284", "9100089165079698848282332578505688181614604", "6469514404239701001089911494207693", "8228559783788698067180", "45277046450194784391768497686115320840973438472480", "2721718455161128878114780699080476320"};
    int K = 6;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "8/15";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> numbers = {"943338246265644725800173692", "7016251066792771456331131872087335063", "15478200170", "2753806383937086149699436373592541140791587710271", "528543149010444828", "8035326707482547988244342968785663867398", "4126439205223505754981656753477", "215906036756924715197", "26232825364541155955242003309041798714013137", "43361847432040799", "97223462834", "802550099012658454516265337", "5607219830418509188974286506592", "936927462297354975635946969991115439080321525"};
    int K = 7;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "47152267/330220800";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> numbers = {"232898848834074972315487893659251", "154008612478315225130719535060874141229239746", "519105", "3174342115795557418164863925351327321506636509", "172116160255047475901148601861051", "848458246369612109028098421116", "26573460821838379649", "42958861124", "9427079423251152015977", "806998034788259727904648619102320228691064", "81226958", "303038843543398115091721", "69375673253110613994205146", "95624312334534300906828869142776387094853153153333", "3635219000452524791506758728381205762136433668"};
    int K = 29;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "22546402091/653837184000";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> numbers = {"232898848834074972315487893659251", "154008612478315225130719535060874141229239746", "519105", "3174342115795557418164863925351327321506636509", "172116160255047475901148601861051", "848458246369612109028098421116", "26573460821838379649", "42958861124", "9427079423251152015977", "806998034788259727904648619102320228691064", "81226958", "303038843543398115091721", "693756732531106399420546", "95624312334534300906828869142776387094853153153333", "299278629000452524791506758728381205762136433668"};
    int K = 30;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> numbers = {"232898848834074972315487893659251", "154008612478315225130719535060874141229239746", "519105", "3174342115795557418164863925351327321506636509", "172116160255047475901148601861051", "848458246369612109028098421116", "26573460821838379649", "42958861124", "9427079423251152015977", "806998034788259727904648619102320228691064", "81226958", "303038843543398115091721", "693756732531106399420546", "95624312334534300906828869142776387094853153153333", "299278629000452524791506758728381205762136433668"};
    int K = 31;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "42182982011/1307674368000";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> numbers = {"9304588208845291678", "8744857770636124057045725", "388563583341358312559231732520609", "3398306008255738277678423818390606", "604820132863086805273205101795855359", "2811692756153542350741455328219030156423", "7202414659298874950658883839163592844196", "2757306351847070", "81504802903928872890146", "54314636343527551", "5727928698152606626151643450168513398", "8756853009178250885203741770", "1699276889596920507546641369"};
    int K = 51;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "73255319/1245404160";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> numbers = {"9262002830492", "50830941897341786409443", "9021317367126019319355", "18452406948427797667852008050284736462686602637", "329162769925554614709524729645317160547650929092", "29686746584014038", "103006133892415132545873121216101249724698", "17717113244667064470628918822159580632709", "1084316518396454576228629056844118159058", "98791280571950007251681722256215061135652505507", "4795988119687466204929495613705407947071753395", "62394362393667072844283072", "763131399353151903521175395257120", "58901516491747014630690039", "657966273756334223227102"};
    int K = 70;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "44473879/4670265600";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> numbers = {"4795988119687466204929495613705407947071753395", "62394362393667072844283072"};
    int K = 15;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/2";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> numbers = {"9853039964767099046848229711021102972577218", "40430370757019136037655673764732185546222", "40726536571808557405217785385"};
    int K = 17;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> numbers = {"788972404703700619573", "2257584920685531038277", "169538543557615", "882028039817056"};
    int K = 66;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/8";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> numbers = {"178611350743645389", "28062784697881201339122", "510777", "1011223648"};
    int K = 16;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/4";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> numbers = {"7112352468224238", "294099220760173", "3613969485479992489", "3011336078611350", "436453897180627846978812013"};
    int K = 46;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/30";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> numbers = {"711235246822423842940", "92207601735261396948547999248942011336078", "21350743645389718062784697881", "113391221410", "772001122364847982122342754536145", "2899267575608225506995"};
    int K = 47;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/48";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> numbers = {"3108264091224049333340409026194171327477153", "9128131305005363404260717", "967427558294", "649863358480936094621", "1062879434377538923810520720103805839572844", "689063532028663808", "341186610275682098283", "6407305317506568408309", "354511280716449395547043370281", "8946850561", "279443063526762", "239344952000846676674186762856705952114269705", "31513692392825420050059420910806390911340", "75754681160843", "52634903750909986022669837227020360297814810"};
    int K = 95;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1966376749/186810624000";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> numbers = {"123412341234123415451345134513455", "1837458907348905789137458134545154", "3485134513045034950349501394059103495045", "1893475983745891739857134541351345", "13908450810923183948569137846545", "190827348906129387469182736498712693874691287346", "1284016238974691287346784123412341234234234", "10892346876129387469128736498712364", "10289734089127349871023894709128730489127034", "120893460126346123908460128936489364", "12908374098127034897012893740981274087", "9823764987362978256978364523452345245", "20938645078926308956029836405896203986045896235", "20938645089162308956102893640981234234", "1029650891623059861029836058635"};
    int K = 34;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "641007001/23351328000";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> numbers = {"3", "2", "1"};
    int K = 2;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> numbers = {"13", "10129414190271203", "102", "102666818896", "1216", "1217", "1218", "101278001", "1000021412678412681"};
    int K = 21;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "5183/36288";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> numbers = {"11", "101", "1001", "10001", "100001"};
    int K = 10;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> numbers = {"70404111977878510001645675574577018815307462894528", "27996547821613825052279175191853827383057003930816", "46864115021536448229789388617887376852146803504208", "93859439197787520647533132638464224905325024260188", "56157120483948525932677523198594400206704630495560", "80884804914499628666049080937963228062645242185515", "40112308739094744183904664777856397876772362047682", "10576282835662378708613628216737469588865860854595", "44589919143592678917544519194198276618006501609902", "35778316031217329522614345158789262460601628074207", "54129385722270033574580200421238709422361088493814", "20344368007745184540899790536405436323465813285954", "11588575753898470105880537399092827552539067988149", "74668989719589264388661912707301101049985212680926", "85912994708642054429829665553158419737431153469600"};
    int K = 97;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "29629049/2874009600";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> numbers = {"4235234569872649876928734569123746987123649945", "6345634563456345897649876239487698234845434555", "2356678567246523452345234534563246356234562345", "2435643576436724512452356345634563456345634566", "1231234243634576467578689790698576346345636345", "8674567356234654357567879789068546734635635634", "5765467456745673563456345634563456345634563453", "6475976298746958726439578269487569238475603450", "9756763463562345234523452345234524523452345234", "7234578692348769287435692873456928374569926345", "5634563456345634563456456453563456685678678857", "2987562987345698726043502345987260498572049587", "5634563456309872093485709284375098720349870923", "2345234523453245234645674573456743754674567454"};
    int K = 97;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "81703987/7925299200";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> numbers = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15"};
    int K = 99;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> numbers = {"5", "123", "21", "451236", "98413", "9879132165", "231656213651650320651968547613247", "65200013", "298132198465198985196849846516549874651684981651", "9846518941163516198465168572", "6516851987461650", "89849819897984984981984987498794989879441", "98416519687961684984196897984", "1321132132132132132163549643168794168498", "984651651901968497435461984964631984984981984"};
    int K = 24;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> numbers = {"1", "29", "97291", "9409", "88529281", "7837433594376961", "61425365346268570446197767595521", "912673", "832972004929", "8587340257", "73742412689492826049", "7153014030880804126753", "693842360995438000295041"};
    int K = 97;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "4903/60060";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> numbers = {"10000000000000000000000000000000000000000000000000", "10000000000000000000000000000000000000000000000001", "10000000000000000000000000000000000000000000000002", "10000000000000000000000000000000000000000000000003", "10000000000000000000000000000000000000000000000004", "10000000000000000000000000000000000000000000000005", "10000000000000000000000000000000000000000000000006", "10000000000000000000000000000000000000000000000007", "10000000000000000000000000000000000000000000000008", "10000000000000000000000000000000000000000000000009", "10000000000000000000000000000000000000000000000010", "10000000000000000000000000000000000000000000000011", "10000000000000000000000000000000000000000000000012", "10000000000000000000000000000000000000000000000013", "10000000000000000000000000000000000000000000000014"};
    int K = 97;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "32097931/3113510400";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> numbers = {"28311274336383644215941967695364832586894742880440", "59419354256203177270870036853962942235659509731131", "93950621045280882864557306505793292519191095671008", "56521736733192358137663353772971298324195851390842", "29751876712597372905370336895441347889693219779492", "91236016016905011102140734270245475476591538409647", "85684623232894153332655626811204386128157216283630", "37122235197616449850738844847524732890607282012780", "21025377773442562455868574038884217046200732186203", "20151232546618575694962638525594515025605043068983", "24923598999990256874104733969187651962501868095554", "42325708145136479502217057783632289531632347843450", "89118426059559050014308492643913519392916341726309", "30459206286864476966770541810119599138660823445153", "28324294379058649790812514407834404754916935261543"};
    int K = 3;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> numbers = {"123123", "12313", "33333", "343434", "4544545", "344334", "34333", "1111", "2222", "211323", "2342324", "12312333", "23421134", "2342234", "2314234"};
    int K = 28;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "284567/29937600";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> numbers = {"4781390412287981354", "6971388200062", "71903903832", "47813903832", "4759490390062", "47813901058", "478139027223051", "475948819758", "4781388222254", "478138822167", "41243903832", "4816903832", "4781390217928", "26681390248077", "47813904116262"};
    int K = 73;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "1/1";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> numbers = {"9", "10", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "27", "23", "24"};
    int K = 11;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "9617/120120";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> numbers = {"91919191", "91", "9191", "9", "1", "9191919191", "9191919191919191919191919191", "191", "92", "919191", "991", "9191919", "131453", "194954161697113"};
    int K = 91;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "25021/9979200";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> numbers = {"99999999999999999999999999999999999999999999", "888837477775777773888888888888283", "9999999983948139241382461837461324124124", "412341234123417669813264798172341637845361481", "41234123748179234136715832647813", "23141236123894612378461237894153763481234", "1234123784137409957234095872039465789234523", "234174183924619783246198234618934689173467891234", "75246523789457189324082361487916783246198", "41348791832461837946189237461783457183413412", "4123740758589613489745324789641237846127893", "413248713874619837413578345347856783214", "1234718905234705627893456198641892346895698415", "31287490137546238795618923469817235689511423421", "8942757892346579132471283689658916345"};
    int K = 58;
    WickedTeacher* pObj = new WickedTeacher();
    clock_t start = clock();
    string result = pObj->cheatProbability(numbers, K);
    clock_t end = clock();
    delete pObj;
    string expected = "6012420581/435891456000";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22774706&rd=13748&pm=10289
********************************************************************************
#include <iostream> 
#include <vector> 
#include <stdio.h> 
#include <math.h> 
#include <algorithm> 
#include <queue> 
#include <map> 
#include <set> 
 
using namespace std; 
 
typedef long long int64; 
typedef pair<int,int> pii; 
#define Vt vector 
#define Pb push_back 
#define Sz size 
const int N = 1005,INF = 1<<28; 
 
inline int min(int a,int b){return a<b?a:b;} 
inline int max(int a,int b){return a>b?a:b;} 
inline void swap(int &a,int &b){int tmp;tmp=a;a=b;b=tmp;} 
#define MP(A,B) make_pair((A),(B)) 
template<class T> void getmin(T&a,T b){a>b?a=b:a;} 
template<class T> void getmax(T&a,T b){a<b?a=b:a;} 
int n,m; 
int64 g[1<<15][101]; 
class WickedTeacher 
{ 
public: 
    Vt<int> f,f2; 
 
    string cheatProbability(vector <string> num, int K) 
    { 
        n=num.Sz(); 
        f.clear();f2.clear(); 
        for(int i=0;i<n;i++) 
        { 
            int tmp = 0,t2=1; 
            int k =num[i].Sz(); 
            for(int j=0;j<k;j++) 
            { 
                tmp=tmp*10+(num[i][j]-'0'),tmp%=K; 
                t2=t2*10; 
                t2%=K; 
            } 
            f.Pb(tmp); 
            f2.Pb(t2); 
        } 
        for(int i=0;i<n;i++) 
            cout<<f[i]<<' '<<f2[i]<<endl; 
        memset(g,0,sizeof(g)); 
        g[0][0]=1; 
        for(int i=0;i<(1<<n);i++) 
        { 
            for(int j=0;j<n;j++) 
                if(!(i&(1<<j))) 
                { 
                    for(int k=0;k<K;k++) 
                    { 
                        g[i|(1<<j)][(k*f2[j]+f[j])%K]+=g[i][k]; 
                        //cout<<i<<' '<<k<<' '<<g[i][k]<<endl; 
                    } 
                } 
        } 
        int64 a1,a2; 
        a1=a2=0; 
        for(int i=0;i<K;i++) 
            a2+=g[(1<<n)-1][i]; 
        a1=g[(1<<n)-1][0]; 
        cout<<a1<<' '<<a2<<endl; 
        int64 a3=gcd(a1,a2); 
        if(a3) 
        { 
            a1/=a3;//cout<<n<<endl; 
            a2/=a3; 
        } 
 
        string ans; 
        ans.clear(); 
        if(a1==0)return "0/1"; 
        if(a2==0LL)ans+='0'; 
        else 
            while(a2)ans+=a2%10+'0',a2/=10; 
 
        ans+='/'; 
        if(a1==0LL)ans+='0'; 
        else 
            while(a1)ans+=a1%10+'0',a1/=10; 
        string res; 
        int ln = ans.Sz(); 
        for(int i=ln-1;i>=0;i--) 
            res+=ans[i]; 
        return res; 
    } 
    int64 gcd(int64 a,int64 b) 
    { 
        if(a==0LL)return b; 
        if(b==0LL)return a; 
        while(b!=0LL) 
        { 
            int64 c = b; 
            b = a%b; 
            a = c; 
        } 
        return a; 
    } 
};

********************************************************************************
*******************************************************************************/