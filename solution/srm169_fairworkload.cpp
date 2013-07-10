/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1901
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

class FairWorkload {
public:
    int getMostWork(vector<int> folders, int workers);
};

int FairWorkload::getMostWork(vector<int> folders, int workers) {
    int ret;
    return ret;
}


int test0() {
    vector<int> folders = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int workers = 3;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> folders = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> folders = {568, 712, 412, 231, 241, 393, 865, 287, 128, 457, 238, 98, 980, 23, 782};
    int workers = 4;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1785;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> folders = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1000};
    int workers = 2;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> folders = {50, 50, 50, 50, 50, 50, 50};
    int workers = 2;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> folders = {1, 1, 1, 1, 100};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> folders = {950, 650, 250, 250, 350, 100, 650, 150, 150, 700};
    int workers = 6;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> folders = {689, 516, 776, 244, 991, 797};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1020;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> folders = {444, 976, 369};
    int workers = 1;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1789;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> folders = {845, 335, 950, 324, 345, 558};
    int workers = 2;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 2130;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> folders = {208, 916, 724, 185, 33, 292, 792, 23, 720};
    int workers = 1;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 3893;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> folders = {961, 37, 126, 508, 247, 572, 286};
    int workers = 3;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 961;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> folders = {496, 477, 832, 670, 367, 231, 36, 741, 648, 259, 773, 557, 784};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1680;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> folders = {962, 400, 598, 497, 873, 671, 465, 372, 922, 965, 645};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1759;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> folders = {646, 321, 347, 684, 273, 718, 429, 842, 559, 893, 717, 971};
    int workers = 2;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 3982;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> folders = {101, 653, 661, 310, 977};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 977;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> folders = {669, 331};
    int workers = 1;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> folders = {64, 498, 364, 970, 901, 352, 289, 76, 67, 805, 471, 787, 983, 649};
    int workers = 8;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1253;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> folders = {613, 723, 680, 518, 727, 60, 495, 322, 707, 94, 582, 755, 410, 340};
    int workers = 7;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1336;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> folders = {759, 746, 460, 92, 283, 739, 502, 501, 980, 86, 212, 276, 306, 571, 940};
    int workers = 8;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1206;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> folders = {30, 142, 706, 67, 303, 474, 930, 959, 325, 14, 995, 103, 113, 433, 564};
    int workers = 8;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 995;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> folders = {320, 543, 187, 87, 710, 653, 333, 135, 674, 54, 739, 528, 930, 807, 503};
    int workers = 8;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1267;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> folders = {261, 575, 597, 217, 623, 620, 11, 946, 912, 575, 8, 728, 244, 248, 802};
    int workers = 7;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1311;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> folders = {722, 235, 642, 251, 105, 860, 532, 980, 483, 256, 226, 256, 799, 761, 200};
    int workers = 9;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 980;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> folders = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int workers = 3;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> folders = {1000, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int workers = 4;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> folders = {100, 1, 1, 1, 1};
    int workers = 5;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> folders = {1, 1, 1, 1, 1, 1, 1, 1000};
    int workers = 3;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> folders = {950, 650, 250, 250, 350, 100, 650, 150, 150, 700, 200, 170, 320, 100};
    int workers = 7;
    FairWorkload* pObj = new FairWorkload();
    clock_t start = clock();
    int result = pObj->getMostWork(folders, workers);
    clock_t end = clock();
    delete pObj;
    int expected = 950;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=275071&rd=4650&pm=1901
********************************************************************************
/*
 *   Don't even try to understand.
 */
 /*
 *    Seriously, my code is _intentionally_ this ugly!
 */
 
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <deque>
#include <stack>
#include <cmath>
#include <cstdio>
#include <cctype>
#include <cstdlib>
#include <climits>
#include <set>
#include <map>
#include <numeric>
#include <ctime>
#include <functional>
#include <regex.h>
#include <queue> 
using namespace std;
 
#define debug(x) cout << #x << " = " << x << endl
#define si size()
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef vector<string> vs;
typedef long long i64;
#define mod(A, B) ((((A) % (B)) + (B)) % (B))
#define b2e(A) (A).begin(), (A).end()
#define e2b(A) (A).rbegin(), (A).rend()
#define rev(A) std::reverse(b2e(A))
#define s(A) std::sort(b2e(A))
#define ss(A) std::stable_sort(b2e(A))
#define un(A) std::unique(b2e(A))
#define er(A) (A).erase(un(A), (A).end())
#define Fill(A,B) std::fill(b2e(A), B)
#define minelt(A) *min_element(b2e(A))
#define maxelt(A) *max_element(b2e(A))
 
string itos (int i) {stringstream s; s << i; return s.str();}
string lltos (long long i) {stringstream s; s << i; return s.str();}
int ipow(int a, int b) {return (int) (std::pow((double) (a), (double) (b)));}
template <class T>
ostream& operator << (ostream& os, vector<T> temp) {
  os << "{";
  for (int i = 0; i < temp.si; i++) {
    if (i) os << ", ";
    os << temp[i];
  }
  os << "}";
  return os;
}
i64 gcd(i64 a, i64 b) {if (a == 0 || b == 0) return max(a,b); if (b % a == 0) return a; return gcd(b%a, a);}
 
//------------------------------------------------------//
 
class FairWorkload {
  public:
  int getMostWork(vector <int> folders, int workers) {
    int best = 1000000000;
    for (int i = 0; i < (1 << (folders.si-1)); i++) {
      int c = 0;
      for (int j = 0; j < folders.si - 1; j++) {
        if (i & (1 << j)) c++;
      }
      if (c != workers - 1) continue;
      debug(i);
      int worst = 0, current = 0;
      for (int j = 0; j < folders.si; j++) {
        current += folders[j];
        if (i & (1 << j)) {
          worst >?= current;
          current = 0;          
        }
      }
      worst >?= current;
      best <?= worst;
    }
    return best;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/