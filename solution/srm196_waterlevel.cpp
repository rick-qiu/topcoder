/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2263
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

class WaterLevel {
public:
    double netAmt(int evapNormal, int evapFlood, vector<int> rain);
};

double WaterLevel::netAmt(int evapNormal, int evapFlood, vector<int> rain) {
    double ret;
    return ret;
}


int test0() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {0, 60, 0, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -35.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int evapNormal = 20;
    int evapFlood = 39;
    vector<int> rain = {0, 60};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 10.5;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -20.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {1};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -19.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int evapNormal = 287;
    int evapFlood = 912;
    vector<int> rain = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -14125.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {30, 40, 20, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -20.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int evapNormal = 200;
    int evapFlood = 800;
    vector<int> rain = {0, 600};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int evapNormal = 100;
    int evapFlood = 212;
    vector<int> rain = {0, 230, 0, 0, 0, 0, 0, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -598.0406386066763;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int evapNormal = 100;
    int evapFlood = 212;
    vector<int> rain = {0, 200, 200, 200, 200, 213};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int evapNormal = 150;
    int evapFlood = 150;
    vector<int> rain = {150, 150, 150, 150, 140, 162, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -148.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int evapNormal = 100;
    int evapFlood = 900;
    vector<int> rain = {0, 800, 3, 1000};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 89.22222222222223;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int evapNormal = 300;
    int evapFlood = 379;
    vector<int> rain = {0, 800, 0, 800, 512, 555, 1000};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 1210.6370448548812;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int evapNormal = 200;
    int evapFlood = 300;
    vector<int> rain = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -2880.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int evapNormal = 300;
    int evapFlood = 400;
    vector<int> rain = {322, 389, 400, 400};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int evapNormal = 0;
    int evapFlood = 3;
    vector<int> rain = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int evapNormal = 0;
    int evapFlood = 37;
    vector<int> rain = {0, 0, 0, 50, 0, 0, 0, 0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int evapNormal = 200;
    int evapFlood = 800;
    vector<int> rain = {0, 600};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int evapNormal = 17;
    int evapFlood = 35;
    vector<int> rain = {0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 577.0584174737277;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int evapNormal = 1;
    int evapFlood = 2;
    vector<int> rain = {3};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {30, 0, 60, 0, 0, 13, 43, 21, 19};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -19.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int evapNormal = 0;
    int evapFlood = 10;
    vector<int> rain = {5};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int evapNormal = 0;
    int evapFlood = 200;
    vector<int> rain = {1};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int evapNormal = 100;
    int evapFlood = 200;
    vector<int> rain = {1, 2, 3, 4};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -390.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int evapNormal = 123;
    int evapFlood = 689;
    vector<int> rain = {0, 600, 600, 0, 0, 0, 0, 687, 364, 357, 0, 0, 0, 0, 453, 876, 754, 243, 159, 955, 466, 955, 955, 957, 0, 0, 0, 0, 0, 0, 0, 345, 786, 921, 783};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 351.5289980232352;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int evapNormal = 10;
    int evapFlood = 100;
    vector<int> rain = {10, 100, 100, 100, 1000, 10, 1, 0, 1, 1, 21, 100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 10, 100, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 32644.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int evapNormal = 10;
    int evapFlood = 100;
    vector<int> rain = {10, 100, 100, 10, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1, 1000, 1000, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1, 1, 1, 1, 1, 1, 1, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = 32409.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int evapNormal = 20;
    int evapFlood = 40;
    vector<int> rain = {0};
    WaterLevel* pObj = new WaterLevel();
    clock_t start = clock();
    double result = pObj->netAmt(evapNormal, evapFlood, rain);
    clock_t end = clock();
    delete pObj;
    double expected = -20.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9972947&rd=5071&pm=2263
********************************************************************************
#include <string> 
#include <vector> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <queue> 
#include <cstdlib> 
#include <iostream> 
#include <sstream> 
using namespace std; 
 
typedef vector<string> VS; 
typedef vector<string>::iterator VSt; 
typedef vector<int> VI; 
typedef vector<int>::iterator VIt; 
 
class WaterLevel { 
  public: 
  double netAmt(int evapNormal, int evapFlood, vector <int> rain) { 
    double q = 0.0; 
    for (int i = 0; i < rain.size(); ++i) 
    { 
      int r = rain[i]; 
      double t = 0.0; 
      bool bFlood = q > 0; 
      for (int j = 0; j < 3 && t < 1.0; ++j) // stages 
      { 
        if (bFlood) 
        { 
          if (evapFlood > r) 
          { 
            double rt = q/(evapFlood - r); 
            double nt = min (1.0, t + rt); 
            double dt = nt - t; 
            q -= dt*(evapFlood - r); 
            t += dt; 
            bFlood = !bFlood; 
          } 
          else 
          { 
            q += (1.0-t)*(r-evapFlood); 
            break; 
          } 
        } 
        else 
        { 
          if (evapNormal < r) 
          { 
            double rt = -q/(r - evapNormal); 
            double nt = min (1.0, t + rt); 
            double dt = nt - t; 
            q += dt*(r - evapNormal); 
            t += dt; 
            bFlood = !bFlood; 
          } 
          else 
          { 
            q -= (1.0-t)*(evapNormal - r); 
            break; 
          } 
        } 
      } 
    } 
    return q; 
  } 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/