/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1716
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

class LeaguePicks {
public:
    vector<int> returnPicks(int position, int friends, int picks);
};

vector<int> LeaguePicks::returnPicks(int position, int friends, int picks) {
    vector<int> ret;
    return ret;
}


int test0() {
    int position = 3;
    int friends = 6;
    int picks = 15;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 10, 15};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int position = 1;
    int friends = 1;
    int picks = 10;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int position = 1;
    int friends = 2;
    int picks = 39;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 4, 5, 8, 9, 12, 13, 16, 17, 20, 21, 24, 25, 28, 29, 32, 33, 36, 37};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int position = 5;
    int friends = 11;
    int picks = 100;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 18, 27, 40, 49, 62, 71, 84, 93};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int position = 17;
    int friends = 40;
    int picks = 1600;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 64, 97, 144, 177, 224, 257, 304, 337, 384, 417, 464, 497, 544, 577, 624, 657, 704, 737, 784, 817, 864, 897, 944, 977, 1024, 1057, 1104, 1137, 1184, 1217, 1264, 1297, 1344, 1377, 1424, 1457, 1504, 1537, 1584};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int position = 3;
    int friends = 4;
    int picks = 100;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 6, 11, 14, 19, 22, 27, 30, 35, 38, 43, 46, 51, 54, 59, 62, 67, 70, 75, 78, 83, 86, 91, 94, 99};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int position = 2;
    int friends = 4;
    int picks = 100;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 7, 10, 15, 18, 23, 26, 31, 34, 39, 42, 47, 50, 55, 58, 63, 66, 71, 74, 79, 82, 87, 90, 95, 98};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int position = 1;
    int friends = 4;
    int picks = 100;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 8, 9, 16, 17, 24, 25, 32, 33, 40, 41, 48, 49, 56, 57, 64, 65, 72, 73, 80, 81, 88, 89, 96, 97};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int position = 4;
    int friends = 4;
    int picks = 100;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 5, 12, 13, 20, 21, 28, 29, 36, 37, 44, 45, 52, 53, 60, 61, 68, 69, 76, 77, 84, 85, 92, 93, 100};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int position = 1;
    int friends = 1;
    int picks = 20;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int position = 1;
    int friends = 1;
    int picks = 1;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int position = 2;
    int friends = 2;
    int picks = 4;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int position = 3;
    int friends = 5;
    int picks = 20;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 8, 13, 18};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int position = 17;
    int friends = 40;
    int picks = 1600;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 64, 97, 144, 177, 224, 257, 304, 337, 384, 417, 464, 497, 544, 577, 624, 657, 704, 737, 784, 817, 864, 897, 944, 977, 1024, 1057, 1104, 1137, 1184, 1217, 1264, 1297, 1344, 1377, 1424, 1457, 1504, 1537, 1584};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int position = 9;
    int friends = 30;
    int picks = 1024;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 52, 69, 112, 129, 172, 189, 232, 249, 292, 309, 352, 369, 412, 429, 472, 489, 532, 549, 592, 609, 652, 669, 712, 729, 772, 789, 832, 849, 892, 909, 952, 969, 1012};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int position = 15;
    int friends = 17;
    int picks = 23;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 20};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int position = 39;
    int friends = 40;
    int picks = 42;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 42};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int position = 7;
    int friends = 9;
    int picks = 11;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int position = 5;
    int friends = 10;
    int picks = 45;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 16, 25, 36, 45};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int position = 18;
    int friends = 37;
    int picks = 979;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 57, 92, 131, 166, 205, 240, 279, 314, 353, 388, 427, 462, 501, 536, 575, 610, 649, 684, 723, 758, 797, 832, 871, 906, 945};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int position = 6;
    int friends = 6;
    int picks = 35;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 7, 18, 19, 30, 31};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int position = 5;
    int friends = 10;
    int picks = 1;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int position = 4;
    int friends = 5;
    int picks = 9;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 7};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int position = 40;
    int friends = 40;
    int picks = 1600;
    LeaguePicks* pObj = new LeaguePicks();
    clock_t start = clock();
    vector<int> result = pObj->returnPicks(position, friends, picks);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 41, 120, 121, 200, 201, 280, 281, 360, 361, 440, 441, 520, 521, 600, 601, 680, 681, 760, 761, 840, 841, 920, 921, 1000, 1001, 1080, 1081, 1160, 1161, 1240, 1241, 1320, 1321, 1400, 1401, 1480, 1481, 1560, 1561};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4565&pm=1716
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
class LeaguePicks { 
public: 
vector <int> returnPicks(int position, int friends, int picks) { 
  int i, j, k, x, y, z, n; 
  vector <int> ret; 
 
  for( i = 0; i < picks; i++ ) { 
    x = i%(friends*2); 
    if( x == position-1 ) ret.push_back(i+1); 
    if( x == friends + friends - position ) ret.push_back(i+1); 
  } 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/