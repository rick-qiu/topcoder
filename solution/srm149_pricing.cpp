/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1600
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

class Pricing {
public:
    int maxSales(vector<int> price);
};

int Pricing::maxSales(vector<int> price) {
    int ret;
    return ret;
}


int test0() {
    vector<int> price = {9, 1, 5, 5, 5, 5, 4, 8, 80};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> price = {17, 50, 2};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> price = {3, 4, 5, 0, 0, 0, 0, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 1, 90, 6};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 267;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> price = {9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1, 9, 1};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> price = {1000};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> price = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 9, 19, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 46, 47, 48, 1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1188;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 9, 18, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 46, 47, 48, 1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1188;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> price = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 7, 9, 18, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 46, 47, 48, 1000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1189;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> price = {130, 110, 90, 17, 6, 5, 4, 3};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 347;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> price = {130, 110, 90, 13, 6, 5, 4, 3, 0};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> price = {130, 110, 90, 4, 6, 5, 4, 3};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> price = {18, 0, 20, 0, 1, 0};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> price = {0, 0};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
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
    vector<int> price = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> price = {19, 99, 34, 78, 67, 75, 77, 36, 23, 3, 3, 9, 66, 34, 34, 34, 34, 34, 34, 66};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 808;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> price = {111, 22};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> price = {130, 110, 90, 13, 6, 5, 4, 3, 0, 130, 110, 90, 15, 15, 15, 13, 6, 5, 4, 3, 0, 130, 110, 90, 13, 6, 5, 4, 3, 0, 130, 110, 90, 13, 6, 5, 4, 3, 0};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 1411;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> price = {130, 110, 90, 13, 6, 5, 4, 3, 0};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 346;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> price = {1, 1, 1};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> price = {1, 1, 3, 3, 3, 4, 4, 5, 6, 1000, 1, 1, 3, 3, 3, 4, 4, 5, 6, 1000, 1, 1, 3, 3, 3, 4, 4, 5, 6, 1000, 1, 1, 3, 3, 3, 4, 4, 5, 6, 1000, 1, 1, 3, 3, 3, 4, 4, 5, 6, 1000};
    Pricing* pObj = new Pricing();
    clock_t start = clock();
    int result = pObj->maxSales(price);
    clock_t end = clock();
    delete pObj;
    int expected = 5135;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=300003&rd=4550&pm=1600
********************************************************************************
#include <string>
#include <vector>
#include <stdlib.h>
using namespace std;
class Pricing {
  public:
  int maxSales(vector <int> price) {
    int maxrev=0;
    sort(price.begin(),price.end());
    for(int x=0;x<price.size();x++)
    for(int i=x;i<price.size();i++)
    for(int j=i;j<price.size();j++)
    for(int k=j;k<price.size();k++)
    maxrev=max(maxrev,int((i-x)*price[x]+(j-i)*price[i]+(k-j)*price[j]+(price.size()-k)*price[k]));  
    return maxrev;
    
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/