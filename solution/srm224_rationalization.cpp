/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2347
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

class Rationalization {
public:
    int minTweaks(vector<int> weights, vector<string> scores, int desired);
};

int Rationalization::minTweaks(vector<int> weights, vector<string> scores, int desired) {
    int ret;
    return ret;
}


int test0() {
    vector<int> weights = {3, 2, 1, 1};
    vector<string> scores = {"6354", "5532", "4626"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> weights = {3, 2, 1, 1};
    vector<string> scores = {"6354", "5532", "4626"};
    int desired = 2;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> weights = {3, 2, 1, 1};
    vector<string> scores = {"6354", "5532", "4626"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> weights = {2, 3, 2, 1, 5};
    vector<string> scores = {"12345", "54321", "33333", "32415", "15243", "43215", "51234", "14532"};
    int desired = 7;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> weights = {3, 2, 1};
    vector<string> scores = {"555", "333"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> weights = {1, 2, 3, 3};
    vector<string> scores = {"9234", "1334"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> weights = {8, 2};
    vector<string> scores = {"55", "92"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> weights = {1, 1};
    vector<string> scores = {"11", "11"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> weights = {4, 8, 7, 7, 4, 2};
    vector<string> scores = {"921961", "896416", "151826", "519269", "374165", "627436", "245262", "974685", "374456", "557483"};
    int desired = 7;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> weights = {2, 8, 7, 3, 6, 5, 2, 4, 7, 2};
    vector<string> scores = {"9197287893", "9492555365", "3459972761", "4886112198", "5963616776", "6325897129", "3248793133", "7984474438", "4518544769", "1592681682"};
    int desired = 5;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> weights = {5, 5, 9, 9, 2, 2, 2, 7, 4, 4};
    vector<string> scores = {"3446959682", "6176565698", "2875421926", "4627263127", "3432379859", "9362688749", "6789893163", "6657516458", "4158845661", "2661862316"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> weights = {5, 6, 1, 5, 5, 4, 8, 2, 5, 5};
    vector<string> scores = {"7599175216", "3787782992", "2776166974", "7132523697", "5539346185", "8295358999", "2765989779", "1563646481", "4872499562", "8634217338"};
    int desired = 9;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> weights = {7, 2, 3, 9, 7, 8, 1, 6, 5, 8};
    vector<string> scores = {"3139559725", "3482838459", "1652354923", "3179724198", "6477827997", "9897826118", "2579494275", "3729489369"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
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
    vector<int> weights = {3, 8, 8, 7, 5, 1, 3};
    vector<string> scores = {"6691573", "9479887", "9761697", "1773382", "5435969", "6915663", "6395814", "7376514", "3568592", "2557215"};
    int desired = 3;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> weights = {7, 6, 6, 4, 8};
    vector<string> scores = {"14825", "47164", "25513", "91759", "21837", "48838"};
    int desired = 2;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> weights = {3, 1, 3, 1};
    vector<string> scores = {"5679", "9923", "6113", "9733", "8172"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> weights = {9, 2, 4, 4, 7, 1, 3, 9, 7, 2};
    vector<string> scores = {"3855253319", "6549449728", "6542579932", "9715215356", "7153563354", "3813148624", "5896952988"};
    int desired = 5;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> weights = {8, 3, 7};
    vector<string> scores = {"563", "767", "768", "969", "696", "795"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> weights = {6, 7, 3, 7};
    vector<string> scores = {"6997", "5412", "1197", "4689", "2846"};
    int desired = 3;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> weights = {5, 7, 1, 8, 6, 7, 1, 5};
    vector<string> scores = {"48567251", "43778955", "54559915", "22345261", "36878627", "87166827", "39861672", "34314388", "29446616", "56893958"};
    int desired = 8;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
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
    vector<int> weights = {5, 2};
    vector<string> scores = {"45", "33", "96", "92", "82", "78", "24", "44", "47", "28"};
    int desired = 3;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> weights = {8, 1, 4, 8, 6, 4, 2, 5};
    vector<string> scores = {"46142991", "83822815"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> weights = {2, 3, 3, 5, 1, 7};
    vector<string> scores = {"483392", "779687", "295938"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> weights = {6, 8, 5, 3, 4, 8, 9, 8};
    vector<string> scores = {"98629181", "18246861", "84513971", "55995526", "52326245", "17717737", "71512388"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> weights = {9, 5};
    vector<string> scores = {"75", "43", "96"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> weights = {2, 8, 3, 9, 2, 4, 9, 2, 4, 7};
    vector<string> scores = {"1471889894", "5913874159"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> weights = {3, 1, 1, 3, 9, 5, 6};
    vector<string> scores = {"9495754", "8523868", "7251812"};
    int desired = 2;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> weights = {1, 5, 5, 8, 5, 1, 4, 3, 5};
    vector<string> scores = {"442957226", "743331799", "742347134", "743529394", "459596863", "693686254", "125313322", "565913537", "452492657", "693542823"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> weights = {3, 4, 4, 9, 2, 1, 2, 8, 2};
    vector<string> scores = {"852582151", "117463368"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> weights = {4, 5};
    vector<string> scores = {"67", "97", "11", "57", "65", "99", "26", "61"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> weights = {5, 9, 8, 1, 9, 4};
    vector<string> scores = {"147588", "911146", "258395", "912457", "946138", "917352", "661642", "687218", "859989", "998739"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> weights = {5, 9, 6, 1, 9, 8, 8, 6, 1, 5};
    vector<string> scores = {"4478422853", "2897887124", "8629871664", "4167515979", "2639545938", "9772214736", "1344458515"};
    int desired = 2;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> weights = {9, 5, 5, 4, 3};
    vector<string> scores = {"28765", "72324"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> weights = {9, 5};
    vector<string> scores = {"18", "23"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> weights = {8, 5};
    vector<string> scores = {"95", "98"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> weights = {6, 6, 6, 3, 8, 9, 1, 7, 1, 9};
    vector<string> scores = {"1555676553", "5762144469", "3781699245", "6537359853", "2545367364", "8635462198", "8899863576", "3864726617", "4748491934", "9139367188"};
    int desired = 5;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> weights = {3, 2, 1, 9, 6, 4, 2, 9, 6, 4};
    vector<string> scores = {"8197448655", "7693887585", "8939874259", "8756544567", "7919352319", "5658522462", "1567481381", "8358434747", "2841449495", "6419659635"};
    int desired = 5;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> weights = {1, 8, 5, 1, 4, 4, 9, 3, 4, 8};
    vector<string> scores = {"4642226161", "6258284218", "8527616278", "5859832866", "1138943559", "4675163994", "7736842852", "1342421381", "3625642862", "4916692339"};
    int desired = 8;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> weights = {8, 5, 5, 5, 8, 3, 3, 1, 2, 1};
    vector<string> scores = {"9379611787", "4535841694", "9985783716", "8324717464", "4735474385", "6418977992", "5235275743", "8317829781", "1952182227", "8253153869"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> weights = {6, 1, 4, 2, 7, 1, 9, 3, 8, 5};
    vector<string> scores = {"6653175887", "8684296217", "9771388615", "8555285146", "9276215612", "4261266289", "1421497471", "9227926892", "4978956565", "7799395471"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> weights = {3, 4, 2, 2, 7, 6, 7, 8, 4, 9};
    vector<string> scores = {"9494571689", "9786526717", "2137826273", "6888459526", "8565142875", "1739798593", "9383519114", "7784412844", "4589462674", "1656628452"};
    int desired = 4;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> weights = {9, 5, 3, 4, 1, 3, 5, 1, 2, 5};
    vector<string> scores = {"8778685233", "5467736274", "3426238288", "2945213718", "1945755834", "6185395369", "3598665631", "7775742425", "9717485741", "1865225743"};
    int desired = 2;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> weights = {1, 3, 1, 3, 7, 6, 8, 5, 8, 4};
    vector<string> scores = {"3927159126", "5782687711", "2578248918", "9439939495", "5493434227", "6275259565", "3654354543", "5144986362", "5371215456", "4849447994"};
    int desired = 9;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> weights = {7, 6, 2, 2, 3, 3, 3, 5, 4, 5};
    vector<string> scores = {"1355156453", "5433476233", "2136175215", "2818772938", "2824827143", "7322337582", "4255192597", "8872799779", "6772144256", "1814756626"};
    int desired = 3;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> weights = {8, 8, 7, 1, 3, 1, 1, 4, 3, 3};
    vector<string> scores = {"7628184337", "5294578611", "7413999573", "2233683363", "2491569671", "1483254498", "7621684952", "8465432474", "5165285992", "8448834736"};
    int desired = 7;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 3, 3, 2};
    vector<string> scores = {"5555555554", "8888888882", "8888888882", "8888888882", "8888888882", "8888888882", "8888888882", "8888888882", "8888888882", "8888888882"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> weights = {5, 5, 5, 5, 5, 5, 5, 5, 5, 1};
    vector<string> scores = {"4444444445", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> weights = {3, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<string> scores = {"4444444444", "7666666665", "7666666656", "7666666566", "7666665666", "7666656666", "7666566666", "7665666666", "7656666666", "7566666666"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> weights = {2, 8, 7, 3, 6, 5, 2, 4, 7, 2};
    vector<string> scores = {"9197287893", "9492555365", "3459972761", "4886112198", "5963616776", "6325897129", "3248793133", "7984474438", "4518544769", "1592681682"};
    int desired = 5;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> weights = {2, 3, 5, 3, 6, 7, 9, 1, 6, 9};
    vector<string> scores = {"1111111122", "1111111119", "1111111121", "1111111211", "1111112111", "1111121111", "1111211111", "1121111111", "1211111111", "1111111191"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 8};
    vector<string> scores = {"9976666666", "4444444445", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666", "6666666666"};
    int desired = 1;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> weights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<string> scores = {"1111111111", "2333333333", "2333333333", "2333333333", "2333333333", "2333333333", "2333333333", "2333333333", "2333333333", "2333333333"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> weights = {9, 1, 1, 1};
    vector<string> scores = {"7111", "8222"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> weights = {2, 3, 4, 5, 6, 7, 7, 7, 7, 7};
    vector<string> scores = {"1234567778", "3456789999", "3456789999", "3456789999", "3456789999", "3456789999", "3456789999", "3456789999", "3456789999", "3456789999"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> weights = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<string> scores = {"4444444444", "6665666666", "6656666666", "6566666666", "5666666666", "6666566666", "6666656666", "6666665666", "6666666566", "6666666656"};
    int desired = 0;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> weights = {2, 2, 2, 2, 2, 2, 2, 2, 2, 2};
    vector<string> scores = {"4444444441", "4444444441", "4444444441", "4444444441", "4444444441", "4444444441", "4444444441", "4444444441", "4444444441", "1111111129"};
    int desired = 9;
    Rationalization* pObj = new Rationalization();
    clock_t start = clock();
    int result = pObj->minTweaks(weights, scores, desired);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9927526&rd=5870&pm=2347
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
#include <math.h>
 
using namespace std;
 
#define VI vector <int>
#define VVI vector <VI>
 
#define pb push_back
#define sz size()
#define FOR(i,m) for(i=0;i<m;i++)
 
class Rationalization {
  public:
  VI W1,W,S;
  VVI A,A1;
  int d,H;
  void Check(int q) {
    int i,j,ss;
    FOR(i,A.sz) if ((i != d) && (S[i] >= S[d])) {
      ss = S[i];
      FOR(j,A[i].sz) if ((ss >= S[d]) && (A[i][j] != 1)) { ss -= W[j]; q++; }
      if (ss >= S[d]) return;
    }
    if (q < H) H = q;
    return;
  }
  void Count(int w) {
    int i,j,k,l;
    W = W1;
    A = A1;
    FOR(i,W.sz-1) FOR(j,W.sz-1) if (W[j] < W[j+1]) {
      W[j] += W[j+1]; W[j+1] = W[j] - W[j+1]; W[j] -= W[j+1];
      FOR(k,A.sz) { l = A[k][j+1]; A[k][j+1] = A[k][j]; A[k][j] = l; }
    }
    FOR(i,A.sz) {
      k = 0;
      FOR(j,A[i].sz) k += A[i][j]*W[j];
      S[i] = k;
    }
    k = 0;
    Check(w);
    FOR(i,A[d].sz) if (A[d][i] != 9) {
      k++;
      S[d] += W[i];
      Check(w+k);
    }
  }
  void Rec(int q,int w) {
    if (w >= H) return;
    if (q == W1.sz) { Count(w); return; }
    Rec(q+1,w);
    W1[q]--;
    if (W1[q] != 0) Rec(q+1,w+1);
    W1[q]+=2;
    if (W1[q] != 10) Rec(q+1,w+1);
    W1[q]--;
  }
  int minTweaks(vector <int> weights, vector <string> scores, int desired) {
    W1 = weights;
    d = desired;
    H = 10000;
    int i,j;
    FOR(i,scores.sz) { VI AA; FOR(j,scores[i].sz) AA.pb(scores[i][j] - '0'); A.pb(AA); }
    FOR(i,A.sz) S.pb(0);
    A1 = A;
    Rec(0,0);
    if (H == 10000) H = -1;
    return H;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/