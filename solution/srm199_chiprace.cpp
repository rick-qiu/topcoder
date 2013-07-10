/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2436
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

class ChipRace {
public:
    vector<double> chances(vector<int> chips);
};

vector<double> ChipRace::chances(vector<int> chips) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<int> chips = {1, 1};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> chips = {1, 2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3333333333333333, 0.6666666666666666};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> chips = {3, 2, 3};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.725, 0.55, 0.725};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> chips = {0, 1, 2, 3, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.23452380952380952, 0.4412698412698413, 0.6083333333333334, 0.7158730158730159};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> chips = {0, 1, 1, 0, 0, 0, 0, 1, 1, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.25, 0.25, 0.0, 0.0, 0.0, 0.0, 0.25, 0.25, 0.0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> chips = {0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> chips = {1};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> chips = {2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> chips = {3};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> chips = {4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> chips = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> chips = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> chips = {4, 4, 4, 4, 4, 4, 4, 4, 4, 3};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.7113181545454373};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> chips = {3, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7113181545454373, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402, 0.8098535383838402};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> chips = {2, 0, 1, 4, 3, 2, 3, 4, 1, 2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3975378165006648, 0.0, 0.2174042503763866, 0.6467565114623939, 0.5395325134102223, 0.3975378165006648, 0.5395325134102223, 0.6467565114623939, 0.2174042503763866, 0.3975378165006648};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> chips = {4, 0, 2, 4, 1, 2, 4, 2, 3, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7030558798226049, 0.0, 0.44743931678916204, 0.7030558798226049, 0.24918667055563, 0.44743931678916204, 0.7030558798226049, 0.44743931678916204, 0.5962718597864648, 0.7030558798226049};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> chips = {0, 1, 0, 0, 0, 0, 0, 0, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> chips = {0, 0, 1, 0, 0, 1, 0, 0, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> chips = {0, 0, 0, 1, 1, 0, 1, 0, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.3333333333333333, 0.3333333333333333, 0.0, 0.3333333333333333, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> chips = {0, 0, 0, 0, 0, 0, 0, 2, 0};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> chips = {0, 0, 0, 0, 0, 1, 0, 1, 1};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 0.0, 0.0, 0.3333333333333333, 0.0, 0.3333333333333333, 0.3333333333333333};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> chips = {2, 2, 2, 2, 2, 2, 2, 3, 2, 2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3861713106295151, 0.3861713106295151, 0.3861713106295151, 0.3861713106295151, 0.3861713106295151, 0.3861713106295151, 0.3861713106295151, 0.5244582043343653, 0.3861713106295151, 0.3861713106295151};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> chips = {2, 3, 4, 4, 4, 4, 4, 4, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.47856455442662343, 0.630282831995987, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738, 0.7363940766971738};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> chips = {4, 4, 4, 4, 4, 4, 4, 4, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999, 0.7999999999999999};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> chips = {3, 4, 4, 2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7485181485181485, 0.8377067377067378, 0.8377067377067378, 0.576068376068376};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> chips = {1, 1};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> chips = {4, 4, 4, 4, 4, 4, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7500000000000001, 0.7500000000000001, 0.7500000000000001, 0.7500000000000001, 0.7500000000000001, 0.7500000000000001, 0.7500000000000001, 0.7500000000000001};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> chips = {4, 4, 4, 4, 4, 4, 3, 3, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.819316754203792, 0.819316754203792, 0.819316754203792, 0.819316754203792, 0.819316754203792, 0.819316754203792, 0.7227329831848304, 0.7227329831848304, 0.819316754203792, 0.819316754203792};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> chips = {4, 3, 2, 1, 0, 1, 2, 3, 4, 4};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.739294914116559, 0.6351605813309945, 0.4833672168306709, 0.272529830663496, 0.0, 0.272529830663496, 0.4833672168306709, 0.6351605813309945, 0.739294914116559, 0.739294914116559};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> chips = {4, 3, 4, 2};
    ChipRace* pObj = new ChipRace();
    clock_t start = clock();
    vector<double> result = pObj->chances(chips);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.8377067377067378, 0.7485181485181485, 0.8377067377067378, 0.576068376068376};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=261567&rd=5074&pm=2436
********************************************************************************
#include <algorithm> 
#include <cctype> 
#include <climits> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <utility> 
#include <vector> 
using namespace std; 
typedef vector<string> VS;typedef vector<int> VI; 
typedef set<string> SS; typedef set<int> SI; 
typedef set<string>::iterator iSS; typedef set<int>::iterator iSI; 
typedef pair<int,int> PII; typedef pair<string,string> PSS; 
typedef signed long long LL;typedef unsigned long long ULL; 
template<class T> inline int size(const T&c){ return c.size(); } 
#define FOR(i,n) for(int i=0;i<(n);++i) 
#define FORD(i,n) for(int i=(n)-1;i>=0;--i) 
#define FOR2(i,a,b) for(int i=(a);i<(b);++i) 
#define FORD2(i,a,b) for(int i=(b)-1;i>=a;--i) 
#define PB push_back 
#define MP make_pair 
#define min3(a,b,c) (min((a),min((b),(c)))) 
#define min4(a,b,c,d) (min((a),min3((b),(c),(d)))) 
#define max3(a,b,c) (max((a),max((b),(c)))) 
#define max4(a,b,c,d) (max((a),max3((b),(c),(d)))) 
LL gcd(LL a,LL b){for(LL c;b;c=a,a=b,b=c%b);return a;} 
LL lcm(LL a,LL b){return a/gcd(a,b)*b;} 
 
vector<double> P; 
int n; 
 
void Go(int c, int tot, vector<int> C, double p){ 
  int i; 
  vector<int> nextC; 
  if(c == 0) return; 
  for(i = 0; i < n; i++){ 
    if(C[i]){ 
      P[i] += (p*C[i])/(1.0*tot); 
      nextC = C; 
      nextC[i] = 0; 
      Go(c-1, tot-C[i], nextC, p*(C[i]/(1.0*tot))); 
    } 
  } 
} 
 
class ChipRace {  
public: vector <double> chances(vector <int> chips){  
  int tot = 0, i, c; 
  n = size(chips); 
  P.clear(); 
  for(i = 0; i < n; i++){ 
    tot += chips[i]; 
    P.push_back(0); 
  } 
  c = tot / 5 + (tot % 5 > 2 ? 1 : 0); 
  Go(c, tot, chips, 1); 
  return P; 
}  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
  
};  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/