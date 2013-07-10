/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11295
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

class MysteriousRestaurant {
public:
    int maxDays(vector<string> prices, int budget);
};

int MysteriousRestaurant::maxDays(vector<string> prices, int budget) {
    int ret;
    return ret;
}


int test0() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06"};
    int budget = 13;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
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
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "91"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> prices = {"SRM", "512"};
    int budget = 4;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> prices = {"Dear", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngeP", "hase", "andb", "ecar", "eful"};
    int budget = 256;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> prices = {"0"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> prices = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> prices = {"00000000000000000000000000000000000000000000000000"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> prices = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> prices = {"z"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> prices = {"z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z", "z"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> prices = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
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
    vector<string> prices = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> prices = {"97", "97", "97", "97", "97", "97", "97", "19", "19", "19", "19", "19", "19", "19"};
    int budget = 15;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> prices = {"49", "49", "49", "49", "49", "49", "49", "97"};
    int budget = 35;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> prices = {"abc"};
    int budget = 11;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> prices = {"ABC", "DEF"};
    int budget = 37;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> prices = {"X"};
    int budget = 33;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> prices = {"MnW1hd5FzcpY8RRmmgODVhT", "PKNlwgIX0311kd40agn8nEX", "Z0DvBjce6v1prf5Pf8Ohr1l", "pbQchBpEknSez9EdD9f21I8", "OyEmf5mOuLoV3zKHi7hM6oY", "i1iL4hdA3bOnESZdMvRrwRB", "B7HtTLhz3hfMjM0tPZFDohk", "R4dqtZH3lMKcnfHnjyS5hn3", "aCdqNPV6qZjgRJwU2Ioe6Tv", "rAuJEZ6HAHsycHTi51SmSjg", "wjwiL0BErK89WiFnqUem7vF", "nzGDjguPcdJKyKUD9mJIIzW", "3n0hZ5bpta36Jk1gKczfZH7", "mPt3hB1BEoAuOFVB65EBMwA", "2HmzuLH15gu9L3AVFwf9Ksc", "TzfgA1cK3t41nQImTweaFhi", "kvfP4xGfRFK7NMhhNZjOM7e", "9banBoTuYMXwQUC3tPOymig", "R5FASZI6grfS2TtuzFRtdw3", "hnS5mEnQdqdoIC4Nrv2JxTC", "qQRHK4BNlxqoj2Z7gQkSiwW", "5lP54KYGAzfQJibeRYSGFVp", "M9F4Zwz3zkS5pmd3xahLrPw", "UqTw4gPu1W7553481pa6eNh", "fIGMd7lXbcyWgfvYgSelXfq", "ggfEmHZSwpiJQp2yPcuvHZq", "pDGTxo9nSpQeafE2Z3kqUXt", "QwTKpksea5u10gAl6y9lYox", "YMyICQp3qkX9ZHzDp28r3mz", "otvyeRkZz6XFHy3ImnptK5s", "YsvehwQfkHagv2RSzV0FkwG", "3i3saNvStmLVTFu8yBhe5h3"};
    int budget = 2957;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> prices = {"VtJR9K8ABiW68NsStKhlSfw9Izq", "LVVs0MAQUUYefE8kKWamNuS8L52", "SN0HhVmZT6htaCPDpdLZwp8iC28", "INEJqbH7ImrqDvX7WhUjX6242sC", "k2DrJY5cMgtRxdInoEIti0OPVUR", "XWHkEIv5bTABqp2FkdWVRinLQlj", "nGBEmhUWtmPxLq5WeuWuc9Q5a8t", "tWcaJrlVdQz7KjWH4MMY1F4vpBJ", "vkRmdxOEGFzlqQjxiSRxVmJ1nW4", "gMFzHzO3bJPnXdmITAzPqQqntc5", "uNby1vCyA9MBkdbXACIRdQQ2Hqr", "4jT9cpjYqcknnu7yclX8vhOMLon", "N3bE8JgFvVwTJZC6K4EGgxomsVA", "DozyC0ZO8q4MlXIDppPt9T5O72A", "uvd26Sz4e0b26S5SBcjMRWlLeCQ", "2IRCAKpCQHCUvA3wGV1jfbQ13wn", "MaxkaFBmNVcattkLnuPhAsirXJH", "ZKCKekFPLTY5q2hQvZ8FK2e1BWh", "22yIbJSvxA8KVbrZStEqmlz151d", "4C8lDAkTl1vew5mFZO68oxMeh8d", "jBdKEnSx0cfTLgMxbSkqz6w5srR", "WYX8FhlavY0sXbY0wCLunlcbkgX", "pYME4vkCAPviKUjA1KgzErK8e3i", "GnOlau8px1X9Bw3sEXbMWt3T7sm", "EUpukdHUBBa08bVGkRJcdqB0K41", "nAtZONPG60XYBj8Arhf7R5O4iCD", "gWIhISYrowE40CcYOJeWALBGkEc", "mvp0bLIHbipTUjfYhs8DERrkaAt", "ov6Qh1FhaZxrAdfb7MFg27mFJE7", "1mHuaAy0szEXYnTNv62XENmsPre", "eAqj9cz1A90BzxPVVAyt52taGGK", "6dBjGJXzSAwUK4ST3PqYv0Um6Xf", "eluzqV8ZlQ6jqEfIXjk0lApH3pm", "ntHQY0KXqqdNZ3UIugyCBfxAQ5z", "i6oStihJEhcjYQMtzQNGK2CUDrR", "NGUMwa9ORr3j3kJmGj8AgYVuqX6", "Ljyk4CFP8nYUDNXwQHDCWuKgar9", "VffZyOVjQhwpphNHuioo841Iavb", "EUSNx52W4O2npjhcXO0oJgb7nf9", "5D2gRW6mTCp0EB0z0hgdC4bzLFa", "R2Da8Qamp7rbY1QWFaWEYCu9Owi", "NIyvj08H6WrtLwkxVlL10tWCSi6", "b40KSIILzGUENy4GKyyFThYTfSz", "rufvVjvn9C3V9KxOhvQvDOrQqYz", "JDRG2Jvxmcsam2dFCxAYc5yXHMO", "hCueT75j9Mc49DvjzxKC9IMfsPd", "QgymM8h0am4JuQuyX7rE4pZGwpa", "chzD5e9qyIVysH099P16u6x9Aki"};
    int budget = 6708;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> prices = {"yJCwUIYe6WubSkqRr0qt", "4kz1t8mZUR4RiHNCXvqd", "PkErS4IK26D6pA6gGqGl", "HICzZZB4S0frirgBuzVw", "3g1so7Z5xnqE52BdZMhz", "KLo3CUC6Rf1TL2L97sC2", "f2Gj2PMZl1Y4MK5ZnHdE", "wehFe1MltZnXZ1GaQc9A", "dgCy0HVnW80QlffPgz9Y", "Wu36wJeKtnSUTeSStxFP", "4FnpvQEZQN5uG8yARcUI", "QvnrXDJPBZmFma4h0GFO", "cKJsTH2suUBINw9t9TIK", "04XmeZSdofzQzIGQYGHQ", "iSi6OpxXGFqEJL1wtRXh", "4W51nJSLZjjH9PLVEI0T", "VqhnAgj37Ei9knBV6dod", "KXsRwCw9Uwc0lJnvyUw3", "geDOPOuTzi6HEwi88cFd", "YpbH9MA5o68UiLs7jkYg"};
    int budget = 9395;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> prices = {"dbd", "ljF", "zKm", "ot1", "vDC", "0zI", "9Tz", "UK6", "C2f", "qTH", "m6q", "PqY", "dpq", "Ndi", "OZv", "aXv", "rgM", "o9e", "sJh", "X98", "nvD", "bJ3"};
    int budget = 7634;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> prices = {"yHRgfybEWU3CrrJTjcAFmH2fUbyVlsLh9kNnjw1FR2P", "GtjjcJsp59pjdRf6AYRrf9EQs8P5ZRTnKAVvTLkXUaG", "5zvB9Ra05jCVaIvdsM6dfG6YiRIFtqVwpO5wodutL4O", "vNHWDcdqHrvpZM5oEuHAheEeSrYLCdh5yxcBZDzq4ud", "cHgOVagdIIrwkhS3t3ix1fZAEmA2o4fQJMpmuTQClF6", "TwZWoaElasIk64u9szmJG6631ZTBIgIldpFPNRAxJSi", "QUaXKXHboMhrLEIWWymHZZWyxy6uFWad098JgQuSkcH", "5qZZLWKc3t70q36jIbJuZQ2s5QnXANpDBMnWq79uyEs", "pFyYVXpP7GSzLskq17dEJyzpo4wg3AYsPVOv0DI7Rk5", "kbpbcxEqGCo3zs0dt8AlWd7PdJhlkSqV3f6daIRoTFs", "Q6s3zyBjUoqtS9bBs1zN2cRfDh61AKtYQjaNgl6Aav4", "02dBseAFgmeJxMPzUjq37YbVEMZOwSQwT15LfFZJ0Dc", "xX2u0jl1rHcKTyrrtKGnnHt6v8fE6rr4MryMYhLNwxh", "PuXFnrVackRifYOseFhiZWfw4KHSHD7g5evqTOO59qo", "mOAe2NJjwpMqug6KvJPcM2VCTuaZ1QLnoTQpqjYkZsb"};
    int budget = 4413;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> prices = {"jUy64K8XWcP69QVUCJva6lJeVqW4F3lyVh5X1B4Vl", "Uaus5M4MHeT0w5WkcaydKw61zd19hUu94n2994UPh", "xPb0tJcUHDmCJl9wmIcHDjJ0jR7ovWTqw4qpNRHde", "1pwnyqXFQoQA8QrZVfS06IuA8hWZz9Cyw8lswJ7N5"};
    int budget = 7461;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> prices = {"vMkP0CP6SJHb0l8xsIwmOheLykg4FB", "FBXyYV8xcbGrAEcGCSX6EvlqEkaumq", "5zzbvX64SgdgXlu7z4XWAlSwaeeAZQ", "ycNvBJQGLqwwWSfPZeT59cqbWOFAXm", "YVPtPaCnqVenPAD4Zmj1rsbgR74eHZ", "Rn3ogSOrFDMtym2BoZvXanN9RmGTPV", "3oI6czWyojBAb9udIhCEElzauOK9rj", "esXxw9uQ6iAHqjPjMfQWtcFsA8EVH6", "EvwkqrriFxQPDF6awQFMx9wAz7GEaX", "IoRCWF3OyJJMgWZn6VBMp8TmHQrXeR", "3wDS7ifA6bRPw6uVryz2Im9lWOCNvo", "mwjyMqg0ymbO9XU11J0yLIiS2FqCak", "0NgjJ1Xz1Wjauq6Ms5fq3y8lR8yHKZ", "1Jug2DfYCe4tEwjKIbPvRQtYAIe8Yz", "fXGZDGkqouUsnhmX128PxYnp6x5k6d", "hlBxJME3D2yftlMfGMiPjdxWQ1UWjY", "7RJIMadacobaTSJo7a8nxrPsNntpJa", "NP1fhMFIur6VPYvhM3FUoCJB4gzvWG", "VtfVWLpmdjbkD1I8ic9v6w7N79362X", "LVP00vLpfzXHhkGzqwb0rfwy215367"};
    int budget = 5387;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> prices = {"yRbtlOXivoPd4MU0xSpaOnaPqdVxCwX8M6", "07VXpOLC0NYSLVuA3IvdflEBgP5BXPIXUl", "4J7NV7k3Z5WTDXj88PtNYXkbjH11nVkrnr", "DGzxIW1m0EKhNQ6EnemVETnFSaiCPT3ck0", "Y0XZmVl4C8VJLGv5m9YXM075CUWD7GEfEl", "C1Gx3S4WjPnfSXmy49y9C8diLkxXNBIZAW", "XCzZiiyVLO28M4FKDPQr5jZ0HvAXSK4zW1", "YDjUi3sj9ClMUzluoocLptGzOhHSgmTDzB", "ffCWMLi8hD5Q5tEhC3YR2x8INm4rx30biC", "55VlBCwGa27ohJqGiqBo8YbCNWFN7wXA12", "wCCsQmuXbaoPoVFzJOVsarPqEUmkflmZvz", "RLjKqIuehg7xfRL8JvzgjC9TwmEgL7dkSN", "4GfwtNc0IFRdOjWNNEXWhTIuAb1nMS8Qio", "LZ9vaRBz2ZgWu4kSYQtpK3QJpmjxBQjUzq", "PZFaZF7Dm0HUSouJdCL1WAmD5xdnPddoAr", "Nj6SvsSCNs0FCbSVdwfP9iKlTjO5VYwqG2", "HBtjLEaKTkvtFWnsvvaDg2u27OY1Em1Vvu", "DH6nZYVSPkxDcs8A4mCyoHMMIZ9K22CFHH", "0qnTHCDEPn4Vw8H655OPQeyXwzZ7EpMDf9", "guLs8jfBCZJUgMX4mvgiSdh0iup45SDlNW", "bTFFeQowuUIPW2LDlloSlWKaYP1l9OFkpT", "xUtmQlGgAljVyUHku0GDZmcaXjwmSlDPF6", "BdrQK2B1V7VkrNl5aKrBsMuo6MXKmnQxOI", "LgIWhlbCWSYHX8ZMJPiEBnYi7KTVGslbY1", "6EnhOJAwYf350KUgYfT5LYPp4ffnHDpLRc", "2qtAkRonUm8ySebujwS9jUmOI1c5M1hNpY", "XYzJLT5RPW6yQnssucLh0bgag3aLQPtvvq", "DHHGggmkeCYW3S6M77xohbpHwDfn6adJpu", "aWYMGCXmgaDlwKsr6ZSvpO8U9F2mWsg6OE", "RcOyP2WcnQudH1Dju251UEGWymOcrkoILC", "EiCiIy8CbNBm44m75GLJlH37tushABrMt1"};
    int budget = 3838;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> prices = {"ALZXVLbZ8icM1v7IyF9r5q1GfO7hQIebbD86XidfQF", "zS85i7IqyNgxbKLizkydLZrReO9H1aVy0d3giLWggB", "eFTxvSft50RuS5IZKH7pG5RJm9dGoHPSXsNSK3KO1l", "IRoZz8q6w6CNOwUzAIGailQ6Ej7W76HPW5yVBnb7rl", "SFhxCqFROyCo2OX7ucD92hEyCQjmVbXyoDv13ASR6c", "D81lDtNP3N6HKJf35Bca9Rn2SoCsFHURPTCbNX0Qt6", "fDNLEQUr1dImfibpao42FSWP3tv3Ho9wzVFBvj2wKI", "hxyGlY4pbIH5hKycNFOV9N0PZt8ZoTqVQolBLn1u5G", "zlbvLwAkPJ5NgcHpC5I2YgoJq96p3A50tgvEb3w0L2", "O1efqoi6oGldXbkbQolVmeAirllnl6n78QkwES31gm", "eDNMpnAYGvBQd2BMnvTZ2ZznVBDWAsGo5dBsOJRdEa", "3pcDCN8dw8Cttf35ADxQ022BtQSI3fs5SSIepOFkUR", "dO5eTDsQdsQf1H4TZ56RAZrQBfmRPHq0dvf46VSkNs", "NOAPphVw7dTy2ebo303uzgnciu7AcS1zq9NfqsZxT2", "uVfVIgULaR0M1iG8tqYsnO1A3r0bnUdhxGAFxebV3b", "r4H5A8vi0j61t8rsjeMKJJZTZW6819hrEywM7q55ZB", "7QHyI0acJrwsKTOObNWGCiE94Jx9PUJUuaQBb0nsrh", "k986WhR0xeiClmTiuqCDK4niFMi1EXiyfr49YU9U8r", "etb7ZVwliGnUz1qf25Bi1oX4x4Y6YgvCXWH40DpgSa", "ARb14d4FK53r7yvf4TJzdqUvuU6hAYGLxrK2TMFnRH", "eZFYCIzWFdKjWDBcsMB8f8yx8RJOEidqFsOS8OwOzG", "5TRH5IbEQENMBTnSrzASoOLAqRWkpVytyQA2ijG6xb", "T65EWuEeN02gAs7havCZo9zw9ffPlazCe2RAudoFdr", "vlh1SIwdpkmmevRJIArFLVHkfANRPyGJjyKCEEp3wZ", "naSEtiMkyhDDRqNmHliY4SUOcgaPhWyU6Ogx62f2is", "G7ibuxKcVO2xkebK3IqzkuNQrSRWU9OiG4I82clVzn", "TjQ22RLqR5lmUaEv7h4TPIYfRYIC3FxUwNXypqnEvW", "0P6DIBuMdHf9x4hDGiQBDMZiJMY6aRcYpgl7qdUTt7", "cqBH1PzRaCl7u4RQ81siYhPJoFvGioNIcWZbtY2Sjl", "Zbq12y0uhYb4qPJlezZ1F9WmkNKkp1VPbJOdIMVxv4", "zjRGU5F15SAbEuyWemY797RXkhtDemHbVirxo4yrW6", "Sk0OEcAkkJr9oZqgmSQ13wiutUyqLSwnAv9OVI7FZy", "MMWC2GeSIfM0XGUT4pv0a3vhSPxZeXVzt1BtIoLYRi", "Yzw0S0nOyLRs2rH0OtVusOt2F9oahFGDEADh8y37JS", "xMKCKg5pYwBSyQbkyHzFUCNgtWeubyMYIeicLnPtha", "Jd0vNwANBeZXKQ3zKcxe8DJqpedEVJopwmiKgsfqWC", "NpaQms2hWAunyjPZxvsjkpTQ79ImzmwKZWkLMk2qsw", "eqd3QYyGHg5i4AqMwn7q8gKq2gZ2XPz9EcCeB9sQny", "7s8xC3iJrqyAfyqE0LdzSrafTlmKBXIGNODaPurFkn", "PNlDZmXBlz0LcS4OmEu2UHQgpoah1IUQgEdF0AOjAP", "5mr79dL3foI3U8p4nqKFG0TuET2cDA1GvsN4Th58VN", "AzVz1IqLW6KzyWTz8e98u4yF6SwBYPXiM2iNJWhpc1", "mZXFWdrflliizo8t0eJXNfX31oZib9jOgEbCrTsbCa", "JBMP5M3MrQ1NR2B0il8R7ofgzX9p6KNPTjmW6psvEs", "IfsSebBk2IWgwVB6KHOferPQOTFEOR6f7x5jYGTYWz", "ESTNWleuRGkqg6JuKfLPKQMP7ufaS9Yfc128mf1Dvl", "1arKS90lYIAugHoJqFTOs5PsB9XCLRvMzmfPwfASvI", "Nba9vQOOmER97cIcnd1iyyTdNNGWpBoClMMgki2WxT"};
    int budget = 4964;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> prices = {"yesZgZVe280PMWEYIPHfjxNPxuM", "QXMTT1K3ftWHvfHIzlWX2tmfcj2", "2guM4SjYviqwLjTac6qu5bObbIN", "Gs5JslDFofwMZcCVvtyVT4LNAvj", "jWz6nqB4ivFvjtr3SRDxM6wsZyB", "u66bpbbuOR5Q70f3hYuk0Kxyg1s", "WYoiQvm2iNbcj0g97gpAON36ML4", "I13AWcwE2ry2YMdA5bqFhV2prNq", "xjBz1B39hf6tfvriTBJcHvSUcvW", "RmtGibRhackiHNoA3h0l9B2lQxB", "uX7OxrGDZrcHPDz7UNtdQbd9km9", "VD7e7clUXbkkAbLP0YP82m1dAaG", "HK1QnEVQJ6BndmXMv6hK5FjBFTA", "tbj7q38FpKkFcoONS9vo4zTM2g4", "BtXMm75sx6yCtHv6tjTG9c9ve7O", "y922LwYfgfiYaoVngmgmfPFtZp3", "URArQHtScp0FUfx0GmV1QHhCu4Q", "obDp6fxv5EoXpcW46926NmaOCp3", "Mk6kWhyJldGggUTBH5hM9rMDC8n", "ZIdccLgNrOJ89wOoaqHl8KTUTIq", "eUwS1E3cqOIBDgULoOjcyZrkfBB", "7cRxGtriv3lXu9n3KSYfGwOqvwf", "dZqmhSBcg4UPxX8SPGETag1Guvc", "iqWNR6DBldMNJPrgKNnlm3zDbfE", "pZ8SHyweO0pZlQu7hJwMdJ9O4AL", "Hl0UbXc1oYvQuwDUfdMmJfjfG0o", "d4wyKhxmIUMHJuDhn9vFmWbXpGE", "SUEE5HA4Zs1L8VhQmZdUMkNZUtA", "1hOF9tSMyjW0IMzbVTGtFnUhAE2", "hiwsibGxk7N446b4Mx2vQVBJizn", "O7zQogKgOvvJe2hi6lJ98FB1deD", "vMAgiHg93KTiiPdz1dgjiS1rYG0", "ZrekmyuTh97oDRHt7eW6f7lNpBO", "ehccETGzEDrhszmgABv3GYXKDe5", "aSEw6vYjA2x7G8wv0vfe5qa646d", "OJGUsggokcLTkNPpbVjUUd98ixg"};
    int budget = 122;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> prices = {"OP4eruKYg58zWqMtdv", "NMNrzWxgRcTQMroQUd", "Im9xpHwK5HBiAY3YP2", "2LgUx9sJzgiRKyBTv1", "jqJm7UVH3WnQYqlDIg", "KA0Jpii7euYatHQC2V", "gVkh1Y8XMrkeY5mWMb", "C5gqxFQqUo0WHe12M2", "YSauHKYpPIJmuVpaMm", "nkaIXYooCqoWsMyQGE", "lm185LsxqhVARJtzbQ", "VPCiDzC6LBWaNFMOOP", "jEMYusiLBZJkxo78UL", "7hPQqtyD9LbViJj5rd", "vXx47Eo40vCVEHAdi0", "XgBgzm9i5qluSgSNkZ", "bWbbPm4e3EHlEmQPQP", "AZ5DQq8qUaDC7oggN6", "SSiUgxDtkdGA1Oi4c6", "tkwNI9YNvE3IKUi0yN", "yBEinUqmtYqVejDa5V", "hdscrttANbAJw6TAoE", "df0WBqzqYAQdf6GVi5"};
    int budget = 876;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> prices = {"iBM15SSG", "FgtsgN3V", "Kt3UIe7O", "uc6xwgBe", "pVgsx88C", "nz2RM6wg", "zxAFbFdT", "piRmMaQ9", "5410B8By", "7DPUJK8H", "FHWrW8IM", "qh6AFWJK", "ZKJkQUgY", "h30zL8Gb", "NkQsqiCg", "QIqfm7yL", "QH3qjjOQ", "lMN6Vbhq", "M7iCosrC", "AfrxnnGB", "2K1l3OCm", "kXtD9Y4T", "gkfSdUel", "8TivHz4J", "H55IRF5C", "kyPtWRMA", "A0anUEWa", "iFTxCXGT", "bJj2WoEH", "kcAF3VNB", "VywxCTYs", "g1pqZ6J8", "N0AspP9Z", "zHo0mACF", "88BKZjDF", "i05F6MNS"};
    int budget = 8604;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> prices = {"CvRjsiWsTg4goBr", "6kYH0HI3WMQsonO", "6xJXgBEC1fq4LeF", "Bjxj0v0GzVdNNPA", "jU521lBDwCskECP", "TN6P44K5LHYwetJ", "mcnrcnbn0XxrHC1", "edMi2QnLT6a12Fu", "L1U7r6uSrsxnhCz", "ira4XbTKuwQUwQj", "okjJraPj2FZz2HB", "zx0Z0Y8Tq2NHXJh", "E8RvRGTozT1XS3o", "c2laaj6iCvjYCEr", "rQzHMOVpDTJE0jG", "oJGXsoFwXPrEx1S", "prqo6CBb0O4Ha4y", "oqG5M8tZ2Oyucwt", "2litXo3iQ34SIdV", "HRLXWfdOEfmDXN7", "PNq7ENwI4KJ6maj", "HrBbMfEz1TcmeA7", "jXUZehuaxyuG3fq", "mwfvV1ZkyaBbMnj", "TWGw3sdxTauLoxy", "dhtGdOGA6EkHn52", "UWWiQZb3X2bPNOM", "K13DHebXogkXvVa", "y06UiX2JYZLAyhW", "I1XJEmwnIkT0FNV", "pLVunCRpVxMp5IU", "bYV8qhtmSBUu9kH", "eXaARLMq9poTctm", "6VIZb8ESuhbNbk7", "qPcQX4lrusegMHa", "6L3OvcX95PogmPR", "rFoUdLWNCOFq5b5", "dhRe6KGbRJyGylf", "PatB2WWYtgv9Uyi", "aZQzDUJR3kj1yhk", "e4LVFL1lstPn0tj", "iTI6QTajudSbdQI", "N2MgXb2XKuOjfOd", "O64gBV9lC1Ncd03", "vL3G2Zp44AwStbq", "UzuZd52mpElCrMA", "sGVvWXSLZWVVyN6", "op3hOgmQQZdAjUW", "tMmNFIsicSE5vBQ"};
    int budget = 7045;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> prices = {"3eckR18yeIi8pbSZwhqpNSFaXAlwAiCENoymp4kRNSZA2z", "jyfZl2z0cV9LRJ4dXRPTBDYvetOC3OBkKoI6rF4RkDnBXp", "m2EAWPN4Kzxg9y4JgP7wTyCVOwj96EyqGC0mbLotJjaSfc", "lKztGSpSwDNfKRrIF7SEs3XgxqOVJ372N7vcXj2TwP6Fov", "X430Gt1nXyevRvxZxKeru9axbUKfj9bHBcFRVGC2Dqwelt", "BhBnY6x81WcLBMUkbdMq2p4FqH5mupd3Wmr2qmArGkDP6f", "AfJUVLKYaApeuhRVlvFax4M5vcp61ukBZ1e3Mybv6OXy4y", "RprgPokjreLeiKYSU6T87o4ghA4C688XvzBIlu1cYKEGfl", "h9rAHwwLcbTenXlv4guDxd7yDdJSswDZ52hKyedYF4C1bx", "wdcpqZSyXgbo6TiJ0nJi5HKipXmzYNxTyZIp8ildMKQSm8", "jmu2SzHkg4IS4oozFmYVZeEKFaff1RmkDgned2OJ7ek9RY", "8gIeAsIOCXwpBxGxgSbR4ETSYY5IhWonA4RKuhg5FduQY9", "LEZwfdA95gf8wLei8nlY5fFmkSNfsvmB8L7nyGu1uaApvm", "V1XGZdwnPgFkJ6f5HnONZMbTMV1UIuGowo4TP0GofWWwc9", "2rvOEUlpv5JxZZppNjbQD0QRm3vG0VQ0NLOZp7PiCgdjFT", "XbC61N7PnrTi8REYRZrn8etVM3B0nPRK0bQzxVMkLnQTEe", "zdBqPKUIpoLzm8MDQKppJkIfUdTu6fX3Jiri0Lyq8JnuQ9", "8oTvdkfwP7Zq1eWWfnFXTDqR3yiot8xzxOsY8VSWc2Mbeq", "8JbLo4YfTadCOUIKTDiLkpqCLQCf2qUA83Tu61ZZbBjyf0", "G7DyQxlF84fKif9ApFDG9JIjtrsapXa5cm23jlIpoxAWdH", "gQWrfdBxM2mCcaiBdKxdNePfUDbchCtLaNCF0LALNxXyXF", "78a4mxg9b8KAk1MdKuyUAzqKKBFr7k5EtfGdaxm954Jo3d", "PNWOrgNfyhrCWywbBnEPQpMAyQEGCHrbcNxU1K9yzyAWv4", "56qKVE7qN5EbJOr9zTWvvWF3UDzchuemyS4ShBI4FUdWqS", "fpuCingyqA9okqiMahpf7UqNY3r9ahaFUUPDH596DIuv6a"};
    int budget = 3949;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> prices = {"7LMbAj7DYElDo1gIOrYSyefGWbK6r0MyKgXSQ", "cdwqPAfOqvmhREf5stZRDgIB0EVelx4Lb1By9", "oMzi6e9LHDD8meJQuUO8y3rt5CS4LQDAkAqrm", "zC1CN9xzSNtvk1tnqmq2DvNd6VOFJFzJP1TmA", "QjdmcYWbPHP95RM0m05GMIZZHqyIKiTiR4S1a", "yazDz8JOVH8TMMncuMukKC20flRhDQHAyELxN", "eJquPHEm4rgQlQixTibC7INXYXVmtQ7VhvP6C", "esETWeEvK9O2kY91veXR9HIXPnEIBLVnBhGiK", "UdebzhKXoLQTqrc77AUtMn4hGptx5ZHXCu89b", "SgPl4sbuTh1bBuxwydCnU8q3PLDHSMsu0Ge26", "DwZuyA4s60pjBaBJPEgkPyCjq5j4jlBwgipet", "rUxrJe2upJJ101QyE9mJqr2Z2wFkjrbaMWQfA", "QXxkoykqOi4VSLJJLtJH62zybZI8xvGOTE8FC", "q5ZW72ySMInDZ3Hb2DDZVJXRZvsl17wpDTLKV", "JlpZW09ZIibVvB1CgQkbIVaPPPasktM1eBZAC", "iiSQHxKQwW6MGfckD29ca0KTMK7XtGhbw9zD7", "Je1oiM2OymbyuCZuU2Go8lhMRGIaGTfX5hJo1", "MAx6jw0vTsQV6CbsuxH8DrMhVumADYBZi8gS2", "eLVXl1byaRqYiyjYLQ3DBDOjOyQUcsXED2jx1", "Ltckh8Tfr1yG4BRFa8bWY56OaIcd2XcLOE55K", "WkAXhQZqpoOvPuUTys3HSeHxHcLTfQoC9whoM", "He9334TvWusNx9naOlr04IdT4pa0XOKm0Tp3Y", "Gx2ApP6wDgKwVI0lvRqj1qENB0OcnP84MBC9a", "I5lwPhRhgDb51K7pWSyWqbHEjJasWiRmnCjDs"};
    int budget = 1253;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> prices = {"JTbKlgAH98l", "xh3BPMkHsSi", "fDtMQjUHFok", "o8WTGlaNXX4", "ahTuPlnrRQ4", "KmT3EiG2S59", "wWPg6kDdpnI", "Ifh1QYTqbla", "2nnk1pA4w5a", "Klg4wIthaAM", "IBnocdNMCN7", "z58mGDhJl12", "S3ykvfI51YE", "oNpQiBa6GXB", "OJPZyiLzil1", "gTwJlzJKD7f", "2VNB5TPadou", "2LqjgqRPp6s", "lPckiwvoZwH", "w5LOVvzJn1c", "ekHSCgHIZ0f", "9iM3dAcZPWd", "ks8grPTt17d", "IZnzo3WojfW", "5i8DIhcoINh", "Q1WpSPpa157", "m4uqYiXBDar", "Ln90NyJidjj", "9XCXKkYPpKS", "j80SfAfF1y0", "ByO7H4kzotU", "yOogwDVFdFL", "cfzmIEnGDwE", "Z3UdnRPfvL3", "h1yuXBWmW8P"};
    int budget = 2652;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> prices = {"ifxtc", "9Sfd3", "R4T4x", "o5eq3", "XLC37", "jBUC3", "Bsg8l", "GFDur", "FLviP", "rUUVI", "W2di3", "iPCCc", "DNSuT", "EAjP4", "YeNRK", "kIpDo", "7jojP", "qRp0e", "PEzr6", "R3G8T", "Jg5e7", "QPQDc", "CIJy1", "imRXn", "5u12k", "7TnLb", "EcHKH", "Pient", "GzBXv", "BFicl"};
    int budget = 562;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> prices = {"WhNbBBumPX2jmPPQCIeBUB4dOm", "F7HullZ8KkJFVjkVQWuqu68YFa", "hJD36QBLKw7u4RcOg55OaTuUJo", "aQKpyz7A3DaEYt8dlC5NYjTb81", "50WOn4m5sl5zv6CTIiMQM7aPT9", "8wiEvnDRA0Uw5Mf8LYCV2UDMuZ", "UTwxa3rIHm6SCESgAW2ocLKpqK", "J1hCbBdX6DavVqfZIrnjVwDVip", "q2eeNwg46FDjkHwJCP9rxPhk6A", "eJgM7UNj7kfnmj2xSkEM3QkAFh", "YwPe72wlM3FjmKRQ7B978asMut", "ke40JcujEzlAk5DypyIEOOQXTY", "5Jv0DdeFdyrWf3VOEETPAGNQVl", "mvHGTKZMKk0xzbtq7Ysbu6nNVv", "erL9c62rKVCtqWeqRdRKSXsK8m", "Ot8roki7rJDtAXMMPCr30IeSd4", "xTM5EkwKak4Irvb3oka84zLv0L", "CdlpfiG2lUkhoKPqbHlAKXssgx", "qzsoI4R2r7i67UYr9LAXBjovt6", "Smw6jm5ZbMc0OR56XAY42gPADa", "tzVk3wUz2Dm6lLSLJomPuIZTMZ", "7jjKJaHnLKjpJl13pkOF5i3p5y", "5ePPCW8tqSU7DnPwaifZmVJ8kM", "qmAvkFY7dkdldRB5WOqvIPbyyN", "RGW9cKvkEdymkbULK5mW9GszBB", "On7L8WbcfBvZw9CstvTNGlQ1HZ", "H8XTHtEMEKsnvVzq4txFjqAABO", "vZPB9hJe8YXKukckXXFULILGX4", "4fCF18nRJw6aYE83W0n6kJczlx", "F5Cm7GPKURSHqjBwJj8PmeNYk7"};
    int budget = 1916;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> prices = {"aIKdS4liS3CtVTjCcdVLls6NFc5KRQOzggd8j", "MqBP12sSj45MXO5PUSc4VwVvITZx4hgQWrnXr", "fzaj2wGR1dtRDyw7RqPuNKy50MZp94go1GV4A", "lVBMMaXKXemL2giMdlNzKA9OpxQ5TSECvPXH0", "4cVjOol2U5fGSfYbmvQjJTAlhLg7sv5uXYbtK", "KwoQZ2qEZR0UrinLqW2BA735AwdgXU0sQnG0p", "6CMYBqNrbgh5jtFouLxqwdMOcEpNUnAYxX66N", "Uxx8d2rWIeObbDVCZtmng9FRInNpsTAKP7S2A", "IWQwuzV7SfgJSRyZePrQmeIEpadw2d4I9SE1P", "h7pLn9lD7IpUAFFmVTb54W6hYOqzbrOGyEbkL", "MvQfkuny9ZTa9XefbLDz9AY1ZpxlOf4jaUMJM", "9HUgi4pDhSo2gmCqIBN786UmADMcZfzguTMbV", "AoCcbFGNP5dYQleXDQfQnGxQFdLgxuB5iOiHb", "wcy1GWSzAxCZacMqXk3A3j5xtBeFrvonYmnoG", "DnO8zxiZHX42aC5IH3BQhQHcE38yqwE1hc9eY", "rBpOFrxRxFhyQ7foNF0QMwEGAFykOaIDk6azx", "XPsk6q8BTuYhuw3q8HyNDgjoxvY3TV0yuriyf", "qA9kgocdpSl6O7K4o61jc4C53AysqwXg4eOlQ", "yOFO7KmEcr3gqkItvLu5JmwGJaKwx3MvRaKXs", "6lUvmAkXQdSlXV5HPJaybUvfpo4P8bHDLj67r", "qcHT20yW3FvKorwIkZ5ZdUfFjsYSxdJnGYFGX"};
    int budget = 951;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> prices = {"Rgt", "FXn", "VIM", "bpz", "3UC", "nLi", "DIM", "X5a", "3Iq", "YUb", "7vF", "08m", "lb2", "7Ap", "4EK", "Fzf", "xCx", "Jh0", "rlJ", "iJn", "HOi", "WOo", "G9P", "HEa", "6Jo", "QWl", "3Tx"};
    int budget = 3128;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> prices = {"A"};
    int budget = 9;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> prices = {"B"};
    int budget = 11;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> prices = {"C"};
    int budget = 13;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> prices = {"a"};
    int budget = 35;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> prices = {"b"};
    int budget = 37;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> prices = {"Dear", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngeP", "hase", "andb", "ecar", "eful"};
    int budget = 256;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> prices = {"jVFtB9WxMCnBGt5lr74sT8DfLPu0INbf4Dfu30QIxbWkhQCT54", "qQ2vrxcR5Kb0ZwR0ScwLWDDQjaNSw5gV1qGEdBevYH0fgsUxzK", "WuKQH5AEfrQJdVDqECKC3z4vMA80ACHrCLSVFf9vfhYa7sAYHG", "gf6X9wUAMJPWkKndHZa0lMZ9usJ3LVoJiK76Oz65dNY89zMan2", "YkgAQUNLiCR5OOI3NV5g0krvAMbnDVEj9FLUphDBuo1YR6Onpl", "diPruDGNVBs52TdjWXX6QLBQ7vsnGUvhJEembz48F7B0n04j0O", "n5IDB5PZN28sttZXgzTOUv66O0Rmy12vmeZbv3l3OcsojHhpHm", "y1RgP8jN2ouFBX5LmrIZPB7Cs9YfBP26d9XLmtp0cAyVa5iPr3", "wb0i28FaRw7Uk0ys8UeiVJogyR3Opy2CtUDi16gFXfYe9jyYEC", "efS7PJK07H3X0HDtLF9iOvNFVQB6j16uDeMPiz6omUoDLWTztH", "l4HU1aCAhbPWRnZNx2v037JUqEyGPsQhLgkVIlgO4VKcsp57Hs", "PTFPb7TKUMwXh7KwfEeyEdnfOKHg2Ux32qTgHDHCsL5SYYGedj", "Jb7aVFcq3WAAwYtwKv8qs1VNDFosIEbjAevj4AHNZ6DXIyBZSG", "3eydxNv64zSsCHQoymqX0H10vJ01dj7AL59tZZXyBlfk6jOnpJ", "9RZvZlJ05sKnTz9NI7tzmOM1RpSXiOgqkrg95mm0OsIPRJIvan", "I17S4scEyolrVH0YnX6tkkqeI6yrGETuGXNHqqzSJbHpDeiUUl", "vVwgOyH1EXfUtmhNAtHwLfbNxNPmDupIxJEqbb4P2Q6ja3LdYZ", "YAKoeMSHWtzOZSYitEV7F0d4HyT7PVVFjOc8yTHUSSOX1QScOj", "KNU0pAneKloc3S8CYcymZE5sBaI1VkKripbrytSEWRyb6Ce935", "d6a4wYAmxhDDC0D9EbamsoKOSVcMdGGvzx0UHENZLvVAYQg12F", "J72kb2TwqC3QDSOPsqKURFYKtUPJnSSgIzOBg50YZ76XUJCTX0", "Zg01TjsKPJKrc9nnCCVuVS9HWwtCeE5NaCvYHIUJOVAqe1ABbS", "Dn7fFV4iiX4lO3pdcBAk6xKDankz9tinrfxAbAXEnYCWHWIh63", "hSF6NyswzoHfomktHBQeQJ4ZvdFSm7JP9u5RbsgW4CMYL8waQ9", "Ifi8fbVZ1JeP1fLqNoPT54lHJyGIJxR4EkafyDhQTrhTLM1ViJ", "k6ukAHkfliF8mKZT7OwDnziwCJ3QGiyiIvrSXDbZE3dIVDUf5T", "bj7l9OhZUKn6tR0RZH0cyPaw64qAAs6dyMWrD4vuvAxLEJqavb", "2atzChAjm3orsoPKoqV77gU06qKROX3ln5UBINhYljV3fSgljb", "OtFodbeuy1baT8iHxYpQ6ToRXh0cHOJowSpdrLKZHCNTWwldh6", "js34Yea7cpDD1jZ0E2iGdHiq91vdaCAYmFMnBklcpI5DBM3pOK", "pbYjhRr0WTdrWGnB9VYl5Q0W5r2JNZDFnLK671S12gJuKOOsbm", "35ByFNvVEj9Qqkqj87a6vLEZH7rE572IBOQv3lIrG3qFC3I7vi", "OaFdtWCugS7tcn8HOT7ZLUs3GEWypQx1U9YqW1GP1DkXp2ZzFx", "2IezIENg67d7NBzMMrptxZILFJlrCuTiOQBgcs2wezuXxd4wDs", "pMprpbQijtOPs8OfcA4mJFoaXaxAqh8BjLgoWlImAhZmnVuaht", "0z0HBUqEJ98jhV4RUUj5I5J6pAlJmXoU8DyiDFuiiO6CGsK6Op", "21IvAhiBPii92WRTf76sMpCALPBlf6PBhrWOlcapvISiOaUMzu", "BatnU0B5iyqOLsXoudXHqdTHI6pqyZ7ctt1R3f3DPDd5dO0ZCv", "tjtcf4SAwQYc0zJHiFtdlheJbJITxYjEgR10eES4aDUOlFF1oh", "38Wf80swyn0AXln2kxHc8ghlrD5xcMJHgFxiHuH1CZwCpPxT8w", "erwPJ6mnCuKGLbNB4GM3Ds4dmIWGXwWiQR9p6L9t1RUyiRJCmt", "KgS1BUJAu7sk1Yq5a9eEaBSgoFbb4FvCXlACsnsoOc712C0VBC", "SljKMUOlzwzHKLnVadbvtanCxIYL5Hd0KnI6G1t5wbvr9dW7t3", "XWZJChIQXi0RjCBOLaa0XXta0jjbSeoNYkyWKRFHNc69iNDpIX", "TwurV7V8zB76Hwl4Z1mbEiYHn6C0dEqB8GZKaXMa8CWwsMmHtL", "pGJIW1bSK9MkKrmAzZtl4Cwe3jPMdG8OFymnENMKXlEoe3NoHn", "4wLoiTXRaOECg5wDdqxw97c62R8qX0SnKih54jfQZeEtNNfMZw", "E8w5cMx6mCsZRtW1fP9PCnyZKeCJvwav1ZPrd1kkTQvahLQvAo", "TwNcNhlz2H6Kb8r9VMwrj8FK5iugW0FGnxDS7Fnq1zSgv63yER", "rvDsel8LdvLMRmyAI4Nl89LqN3Gdua2eXbuTzaEqNAsCO6WfcG"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> prices = {"222222222222222222222222222222222222222222222222", "222222222222222222222222222222222222222222222222", "222222222222222222222222222222222222222222222222", "222222222222222222222222222222222222222222222222", "333333333333333333333333333333333333333333333333", "888888888888888888888888888888888888888888888888", "121212345678987000000000000000000000000000000000", "212134567876553333333333333333333333333333333311", "222229999999999999999999999999999999999999999999", "999999999999999999999999991111111111111111111111", "000000000000000000000000000000000000000000000001", "222222222222222222222222221111111111111111111111", "000000000000000000000000000000000001111111111111", "222222222222244444444444445655555555555555555555", "111111111111111111111111111111111111111111111111", "222222222222222222222222222222222222222222222222", "100000011999999999999999999998888888333333222221"};
    int budget = 13;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> prices = {"111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777", "111222333444555666777888999111222333444555666777"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> prices = {"12", "11", "11", "11", "11", "11", "11", "21"};
    int budget = 8;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> prices = {"HRtZoel5cD61bCn48sRNcx8S39G3rYinFAJXcHfPZBF9kdhs8V", "6Jou3w9UrQw4sHhwfl0vkSK1pIef3LyWvE5DFfd708IqBp53ng", "QhF2rZtFPfQrkgQ7CVULd8hGNItN3oIc84q1SakdPo2Ulj2mDc", "qkT9j6t7cVdL5C0iknyIxzzDYfQxrFMYAHiPpskBBmDduSwocB", "eZs9bZF3M9Jv4aGOa74W9VtwsS1Im1saS8r2oEgIZouJTSo2cs", "yyonKtMdQ5pH9BiSdZDxqjVqqKbD9qSHAYA0SdFegtpgXwjOSd", "e5voGcImCv13vBELRORPxHUZs2o0z8QzH4nBdiwN6MJArrmoK1", "zoXxAgCcwpqkA7VIQYLTTnkuzyNwzavSkBwJ859rumU0lr8oX9", "mFy9zuvfutbUKv89NWKiNVo0ZWBImcIz83EaUvMSxWd2FDo1Aq", "PPhHxAIqmX2KtFIT86DCXOYsZDOUEkziMZRxcOJ8KqhkHwKgBO", "p7sSu714UHqkfZG3suCmBoOTiNK4Gdc2nWrpoMjXv7U5sEczWr", "UP7HIgHRisRwEpJZVb14LEDhx3RWivcW0mQnD8R5G9nxIXoYHn", "2MYqn4HDOyOP6gyUWDxtKforkwKrkGPknQp5bSu9RZpu6SlAHI", "cocuERkaXPqZFvl1RtzglMlfg0Ncu8PTgdDsruKoETiOsf0SAQ", "GLugYkBDgDMLipVw8FYO13bKhL3cfBzGqbRzYE7483OQngY0kI", "fizyipQQHIghUBe8NG6yXB4Q4P0NEcXq0M2SJrdqOoXmcirhAb", "Cy004kyhxtvzSeB6r4smgzNCSg8BkA6bFdQQYAKxLnM6o6P77k", "zkoIGhjoIgdwgzz1rXqNKJhbRKzy3cT9eLQdUu1pLR9Xuhonvq", "z939sVgiZOntOccsvF7nZSXhXE71oeKHoPUQKrcP0gF7pi7zUf", "87RdFibPb39I5T7qKB4WSPDNANki1vF7b3lIce2dDZYRwmJ8s1", "HfV7nmAstxe2BMhx1TWhenpWmwqR2ARsbADv4fwxXMmwuxYvt6", "3hk00oZq604gaEoASiMPli3zR35l1nhkf5ruIbbnusHGN3FN4c", "u5yQl41tr5YRhbXwWgA5lUP9jlvaQ0kbx8PuLToQaYhLbdtHJS", "f3ktdEBksbzU2EddQhmqMbI2dnLOsRKMKrYEkkP40ILBgiOk4J", "xbfb1RGUfCBRIaOWXJYyBTWFngJQjyswy0Uw3bRCu4vPa8wJme", "wDcUO8h0Eg0pAMHlK1eRFEU85M3g7GyEi4PDgEMrXfW7fkmUG7", "ijFXShcvN1TZOnuNjqaTPaeFtNEr2yVm4q7gfXEG3MVvGCKdb6", "1G5zbNsKoYcwcxCJL5TWjCD1RfY1YSvt1vfwUnpgNKu3aQyUCc", "Mu6x5RU0aNgvyfrSmsZtFQAxXC1f8NT4CsFKo589EEai7ehAde", "Yj0qvI7JC0m7QEpnpynId2O6vmM3aZtIhtEBAln9T2dyCAiHjo", "QXSNjG0jgxmHjIme6OR9VJT3A1c57ApohJF0fnA2dZgtEpU52e", "cohLbI5VGBDNrgi81a08xbKxvDYUIA6EHVhqypPXb8jmXsDHgn", "fcLQhgl5bY0A0YzOeiPWZiow5hjb4Y1ZmZP8ywLwzgrDlpHp20", "Gh6SmmTvV4Kqbs8TVT4h9vsdi919nwszXSKsxfKv09quEr6bxu", "BFg09raQWXpzDDKViOjS0iKQSqxgL4E9nY1YFkMU14OnDUzVCO", "tURix1x5JnfPLdXCwqkMCI9KBqk8KKf2FIsQa30sSXyyw2f8WZ", "2PcvQB1AIEghlip826a1WmuObLP97NkN3RbyHd20CuStlmzlE4", "rI2IWhlEPZeAWSIKGeCWfuwS2mBKescuhW1SDE9DQKnqPNIWTB", "hP9CEVPo0e8bkmIAFzXOQxFQS3qyha33j9NVV7EZBH8g1G48Aa", "DxFkZbSsW7WrJmCpPDMExRXllO2VzwYb9UJCaA0walBjnd8ipS", "27nhn9tVRX44ruQCEmVUOU4Jshl0eQxJPkHgc4eup9R2vVOkvl", "aySPKhnN8g0JWAeWpb6Funal9BrVfDsD91ca7wW0oT3zQejhGd", "DwJNCQyvfs3ErdBNeIu3JZTK7F1R4b3fA1FTzohFdrJCZqZ5V6", "NrEB2y56G1dfHtrzdG3b797kKg3rWDGLiQZuW88qUM3KwjmnA7", "JlEWUcWRqc9CV54qjecIatbZIsBswhlv11MSIvmbdktqhqfdst", "6TYzEYlenlHZK2O0pgKKmte9dUckyVP4pt6yZTKSENpKz9ehlc", "QwaVbvC5MuHjLW2Ep4NUHANQKue34ojeKjqGLnLZbvuyxFz59j", "sBQzPNMBsNiqwcufvsk55hKNNDytUXq1GzOdg5UMhU4CjhFZ4C", "L76dqxVNZCQzk2HHFbXoLUx3CoYlungJO3VhFNaT7QZzG1EcQ7", "41PokFZPZ1nEEsMyboYIg2tHjACMoowDBJw1y6ADWeL6L4Tx0G"};
    int budget = 759;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> prices = {"SRM", "512"};
    int budget = 4;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> prices = {"AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int budget = 500;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> prices = {"00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111", "00000111110000011111000001111100000111110000011111"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> prices = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> prices = {"2"};
    int budget = 10;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> prices = {"a"};
    int budget = 35;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> prices = {"00", "00", "00"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> prices = {"az", "z2"};
    int budget = 37;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> prices = {"A"};
    int budget = 10;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> prices = {"00", "00", "00", "00", "00", "00", "00", "21", "00", "00", "00", "00", "00", "00", "68"};
    int budget = 7;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> prices = {"0"};
    int budget = 1;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> prices = {"tzsgkhsqizanozrvmmhhdgnquwqnrrxlishmpwtbildlnlfhkw", "icksplttmwcjfrcuhmzzxtvtjyiucklqjczpnapbjqadassatz", "jiywoarwofrxjhvfbtewopxdaxdkfioyyfwrogmleomjvywnbg", "juqglbzvwoaywhctcytpejxmeiltgaykspcsngooqyywfoifwj", "vkcufelwuobcnagcbpbfuzmmmocudroxneuclwhsryhypjdixk", "frcaylysmbeoqejqgdyeqedarrcyteuafsxyksfxhhsfcqupid", "ltcmjtkkvruxzgtwvsjjamcjukstldqatexjwfgvfmqpsbjshg", "snsizlvokunuoyjcpbplqovqysgxbsrwzhunwxrkpclziiwtrt", "oooswagerupoqprkbxtsbkbvppjvgffnswuvrqfqtxxgybwour", "mvrilnatbdkmitwxexxtsvffkzzwqowijclrxmgrtauunalsmh", "aifragoqputkqbehaectfdojvxaqicnfrzykitlzrcnaebdcdk", "hvcviebfhzklpumthclnlavxqfneznquciqlvvpqpmqalwypke", "kqgjzvsfoiebfecykrddeqdvjmkbtfigprnfzqrykscfxkvlra", "qsqhhyiukauylgdjdkkkumszlbgrvrllbgcxoqhgtpwdbhnymq", "xengtpfzxwpxglimoqcttgzyrelwgfzfdstxghamfdfousdahf", "tohdyccbpzjiqdpkrbhwmwzddmwlabrthvuofsfhkgmodnjtpe", "paodqzjxgqpltqmipqwllndeyksmxdbtsrsclzruagioatkquh", "ibqwehvsbjotscywlrpkahqgdjplbtksbyxakpadieoioxuuhm", "mdaoeykwvymkxvuyxwpejlmlykozrgbgzuoorrzuwjpnoxdfob", "wltbxpjckghdjmyhijhjxbderqxdusfdftnkweshhikvumdrlk", "tnghyqrefnsfofskqfksscdqnqmgjvthkaqlnmbxxqdmmjhofq", "pwrjckwjoyxmcqiqtlnqbbikontwqtklnmciswipoajxwgtsnl", "jzmhzwifqkpwimeajocbgmnfrcohvjwnkajjaptmiielglwddw", "qkrjfmiturufsyfzwtihkagzeelqqwyxlfijqdaxplrdotycsc", "nxsxbztsgkytdlwssuuyyfsdmcwklifkhmkdwnbiactyrexsix", "ziptzfgqebwojchqlxmeegobffssnruretqyksdbubabcuswhs", "vdoorppnyfjfryejqldzjqocdkskhjdhkyfqgefosjiazdrdas", "cylscapplbzrjiyfdmplaucmxnnlsndmcvkwmsiotfqbllaxaw", "pnoivuiijgfxxwozmdgocyxdgzrlnfdujlqqmzczbmegjgiwdt", "cgicpnpwdoclseypwxgspobolnnvtsuupbgqidyllskgywdtjn", "kqhhkbiorznvzpxerpvefmpqwxcqllfohuotsupdkpaonnomyq", "cqoctoqsocnpedqmcfsznqfkwdboapqlnxxjpxdiospvyymkfe", "dvsreqzcwnlnwlbcdwofpcdfiffolrnedftlbczmjzfgrhznqy", "ekkiimmxrhggidirzdngtshmkwybfudvfvbtfoerovgpfuwekd", "cbtslqbeumiscqditadvgunzitqrtokdvqesbakwxzuciyqjen", "avfzajzdmyawyarndlqyfguydikvuzvymlkfjpmooikwnkvrsl", "ewyexdlafgxfwktklwqukizxajfhipzylgplibmcciiiqgtfjz", "rmfjceuetmdfzgaxymutaiujpcjhgaoywhmardvrbxluhcmxxp", "ecjuaeshuovdqlrwdwbuwdxeyxzthnwckmgoqrdzqdeaqikkqq", "nymhlaxeydzujlilfnldcutwkdooedembfuarycwsyfrttbvpo", "cvjxneguszdjkhgfwutyjpnshekcpkhkmhmezespuxswavyzxd", "hqvcfggrhktkdnietzrsmjnhsuqbbujyzobwopfgngqjrvrkii", "apuzhcujdkjwicumjrsnzdpuvbspsawupqytbwztxmbphtylrm", "tolombfmzywfjprrnbrkphxuvlbgrumprymvacveibcblvpork", "kwhypokyhsnlmdxalsmgqhseanamkefaptopvtxbgdioebjisx", "yxedvhxqaynljphocutogfaswwltjsqpfxuhbyeiiktleohliw", "xplynmpvwiddrvtalaypgcjrsesvsrmpadkmcpypcthbdchmgo", "uzivbefvbgdbqnrllflmfdeehpbuexqyvdgjtpzioqmoyncvie", "fidxvirlgdklmbfmxqxwhyllsylbwgrixnihpqgvqwgvzxnbzf", "nmigbowfvfzrxhazlyfekqfokkmvdmvrjztprrjotpxcelldal"};
    int budget = 2124;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> prices = {"12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890", "12345678901234567890123456789012345678901234567890"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> prices = {"11", "zz", "22"};
    int budget = 4;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
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
    vector<string> prices = {"aqbC8wSA1XvpFVjCRG", "ryWtIIZS2TRqf69aZb", "LAX3cf3ednHM3SOlbp", "H71yEXUIEAOeIiGXix", "4A2DreBBsQwY6YHkid", "cDjoYAPNXRPmcarcR4", "ZDgC81TbdkSmLAztxc", "1o8yfogkJXrRjbDt3H", "voFOAmEaJswFCHOzyf", "yz5b6KZmcK8r6beUzm", "Rf6Ci6nx8dyDd3OJXs", "NQptgFrYILoygXLsxp", "TljBOh8s4KWiGtXsL1", "c00goZolmRBaYFkuut", "SgcOrBLSAQV6uPDVni", "SnRMWuLn5U9T3TGJ2T", "USzbAUfKRfcjcMzfoV", "1qdiixjnzi95HfqR77", "bieLYCT4aJ6pkNzPZr", "IkyPzGNsokLQ8aZRhQ", "dOgl4rhYQYx3G5aYY6", "1LEdyt3cew8k69RKLp", "gTFur2iz2Mb1s7nlT2", "NqFJ3sl3xbYiMCIqtQ", "vAauNjVuMhvqgStMVh", "EUsebmspH2q6DqaJY4", "kJSFsxf4yp8ARf3sll", "NY30kkZIhTrBoe2U8Q", "Vjp3b6uIU1Gj03oHMw", "VN7miR9Odutox7nyeK", "zGZuNY1SWoBDyseVwr", "blZz02H67yRLVbNDN4", "CxpAOAkK5LqN33HFnw", "pGR881Np7vXee4fDGC", "l9FopYC98Bi89QtpfT", "YSl1q4gtopWd7KKQpQ", "q5pneeFUtLch9wPiyA", "phwFutJLtosJ3Ih7jt", "rSByh133tYwlib4g3S", "v0YKpDS7hx27kBnccY", "Tjr8cU6xfPTeip68V8", "zDv60gxapzhad2VqKw"};
    int budget = 9500;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> prices = {"011", "011", "011", "011", "011", "011", "011", "500", "500", "500", "500", "500", "500"};
    int budget = 5;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> prices = {"9"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
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
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "91"};
    int budget = 18;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> prices = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int budget = 50;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> prices = {"YpqqUCkYgx50vVt14j532vxMnizxZ4AOYkSoqk1yBO987MKxEh", "fwsbhuWSDcIXiauRfbdpXP1JJtoU9SzY7NymDbQvUzBULDI5ma", "7X5kwY7loqLC881MZaVKBOPwneye8gEs2WML2IjRxQGqE7BYQj", "SOjRBUintHc5aEg2yxc0vo4Gdwc1SLpTrYGvhsWnmPhxa8ptMr", "HVBz0Ya4NAvoZhM1H7TZqajJ7o5lmUtkrvYGfVfiLhkkypWUUY", "fCKCCDLx61NoqjTkn7tRmJBeGdrso4u74cah3HeYkVvPLSXlFH", "cjEIFnufaRZMn17uHIYe3aLUIOQxf6vflqizioJlzh0MgosJ7D", "KPLqHyrV1knEUMEKJiUADUROGaNM5HloPa409gU0xm6uCh0nWj", "G8VBrqKwwr5VvUDAXVd0anwU2F1B2wBGUsCpex8qhpsrKia5qd", "b33IYiJiUYIYZTNLT8hFS8F76Nj5hGqX2dKWInt3pimUKUvKcW", "Tjz7Sv3NrE9X993GN5XV2MtoWgVMrQ66v5JWRkeJUrwh8Gv9cB", "Z3F3BAW7X9h6VgVVsYcQQrPnQVwT4E4XX9JtnIqvDokcYoDn2t", "b7cvQuOfUD17CVUuFyXyXEmI037hYK3cMK2bL9zqTkU910NuOg"};
    int budget = 200;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> prices = {"8nSrF03AGj0N2P9U9m5FZF8wR3Q85x2SbK3K47bMLf5Z5l57pR", "0DFianlnibR7wz927DER9DY2055801L4csKrLy9FVNQ9H9E0F6", "993eVlI0foeEaQ8v2e0Lb1mpxH9xv42ean4CiJE4uW5I0Ma324", "WaZDe7K5J4itU6TBNwi4Cx6ZlPvvucRCL5n88o5wfA6N06ElqM", "22T63QX0qgbylkgAfYtvJcwkc8blL9Vlu24mvS25dZd9qBBCxP", "W5twQnYVx5sAF30owz0F50KE9Uv4KW84Fim5SdS58ERK1GNTc7", "5ngsmnihG570107g0dy0kDN8jZs8ry02a3N6X681smCV32b2Rc", "5v6Qt4RTgaamOT5D0aPVC0fnm38OutWd1ONxGnI8ixe7AJUL9E", "B04d1Xy52ko3vlG7ecn9i57o285399iX134D3h0JOe8g5x43iN", "FQj5dwh2gS678y1QUo49agyrA9ms7djt1BRsjcCgR92U2Lqrxx", "Edmb34ja3k5GiD16z759JAI1HzMty0k20bxBc8I3jb2yk1nbf4", "ye6Fw92AttuvOyQ90Y4gAo3ghznY835cKpmnw2E54IUu5z9eth", "Qr71s9Jph2rQP5VwVRc87GbJPr150PQ2xauTyVSS2hv258Paj2", "6l66QEymGBY1PIQ3XMJcIpN4Fs97eRv1OEXgO5Wv5Dow51K2Wa", "30vuoSd80PSf416WubEhbhSeap3K3Fp2WYG0qm0fIr364r0G5y", "JvUjgVvWxnD8W9h4K848n8o5Rcu32W957lxkd5X27wYc70rXl1", "3GyO54aw3fIP3033Cxj9f5Fw9wVs0MI769r0ph98oWnu8r6y6D", "rzlfOX6e7sC8a1riNKT3ZN7Bn1v7ZH4J284K98IxV6uz4FQ7ZM", "HFYyC86e9TL66UR4or00C82yo588dTvAc3MYGQ4L1VXNJY1163", "2404leDV9nCO0ZzT8dL845fWSIuuO96iPO8Pwk7RUg8qVo9V10", "q9496lZ07piZQrRZS3spwP9buMpMDtl3O4GZKg39m27T69H3FL", "5sn7t14o8DsXLM6SU8JFP7ZyCO0rn3NFpEe7lHhy3o6oeue3Ud", "A4KI3x3S232nR94ivi3Ou4U49WO1TV5dm14XQBNc3Rc5xHA5hL", "65p7W8t3ab7C74Bj64V70KyYBF2aukYi8165OLD8u4kmjF778P", "LD108K48ka0lb53Xp0yTinHmufkix5zDeAprHvWftN3Cas9u6y", "bGpuTBnrdU05tF0xfP9ke9945Su58qjh0S13c97rFCQ98zMVoD", "B32wCQnvE53do6aAS4deXVvDp3XTCG8XeOmqy279VDN7Xbr3pm", "ui80Z8n44t06IOnq4pyi53vB3ZHcdKJ3V7q2S59309X1j49GgZ", "zs6fJv9y197j6o7096dDI3MyefgF82R1SWaL03cJayf5Z985ph", "TpWhdhPD33AP6l89goK281zcaw5Mx7M39Dm9a8XP7tM743JhIg", "TsWTTcXTVNY8i96ltQtea6RfgS36w08CvAza1C6V2jhJm1879p", "51SUi2u2FbNhLFK876aHsv81i53z9ljUdTkgjwik5A5tsIghGG", "Y7r84fJ3n97fn1lp7GeYIikHPg2Q5A8gr3u164594PCrZ3299L", "454n001M6E1VDL9Y3L8ElM2w7OAY5e1yfS03x8yi1W2y632kU5", "219y35T19hpfcFlUcfY3fMua5TDUQuPeH9NG9rFD0ziKEb2V60", "t2Vb28HY9oPP4fM6Ub72B2s49h2Mgyn07fE7zJe452VF62Z2C5", "37WvKHlqv375FRk6g5j8MyobTd9088A1Ibi02u6p4V7I78rvHf", "Dk9Ma0jQwT11onYX5P02jlSw5i6573Sd21d24SUyUL841r69uf", "954ekkb43SJUhU3zhs3COu9lU1G3eD3rXL5ncZrl4y54A45J9L", "0U9M5SXdpwr8Sf9x7TE36A1j0ecjbk9X7YKrWuH2ysxJ924oaY", "9P72l40QWV8DtHdSH8YKpg76e3nh88XUpwPhKV5Xzp6gp73SxK", "5u64q2Jx0w9fzH6cN833D559z1hmq25fs9058lVImj7iUPB5mt", "34gYmwx0Pv64lxm4t7071MsH0Ht0W9qV06s466niIy7YP5tM08", "GZ3OVgIW5WbMlQ5UpTC9knZ8Xw9H3HQx7193QF43aNBcu8SRE3", "y87Nf6e0Aa070M5W5ViFpb80q0cSxWMazzc0G2O3wjJ6To3u35", "J3A6s670w1I3yYW3B5nY9QsF4skW3kvzGH6QZ0I473K25PY9u7", "Ulk8cDFQHr2k32oo4i60XPP0arZ79wR1SbfLb3hypz8O88G51P", "0v00yTRR1BgNzlDq4s3F67vDlnIca9SJXC0Eew05wQ7n21mp6x", "7990D1G0YqZFp214R7s5EM4nZ3su5aafQG3FjG1FlXORnvn9LJ", "1FF2AIIVP9ubYzB2F4358dlm8h3dTOM31YXEQ30pX9azOWf5E8"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> prices = {"0"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> prices = {"99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999", "99999999999999999999999999999999999999999999999999"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> prices = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> prices = {"12", "12", "12", "12", "12", "12", "12", "A1", "A1", "A1", "A1", "A1", "A1", "A1"};
    int budget = 14;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> prices = {"YpqqUCkYgx50vVt14j532vxMnizxZ4AOYkSoqk1yBO987MKxEh", "fwsbhuWSDcIXiauRfbdpXP1JJtoU9SzY7NymDbQvUzBULDI5ma", "7X5kwY7loqLC881MZaVKBOPwneye8gEs2WML2IjRxQGqE7BYQj", "SOjRBUintHc5aEg2yxc0vo4Gdwc1SLpTrYGvhsWnmPhxa8ptMr", "HVBz0Ya4NAvoZhM1H7TZqajJ7o5lmUtkrvYGfVfiLhkkypWUUY", "fCKCCDLx61NoqjTkn7tRmJBeGdrso4u74cah3HeYkVvPLSXlFH", "cjEIFnufaRZMn17uHIYe3aLUIOQxf6vflqizioJlzh0MgosJ7D", "KPLqHyrV1knEUMEKJiUADUROGaNM5HloPa409gU0xm6uCh0nWj", "G8VBrqKwwr5VvUDAXVd0anwU2F1B2wBGUsCpex8qhpsrKia5qd", "b33IYiJiUYIYZTNLT8hFS8F76Nj5hGqX2dKWInt3pimUKUvKcW", "Tjz7Sv3NrE9X993GN5XV2MtoWgVMrQ66v5JWRkeJUrwh8Gv9cB", "Z3F3BAW7X9h6VgVVsYcQQrPnQVwT4E4XX9JtnIqvDokcYoDn2t", "b7cvQuOfUD17CVUuFyXyXEmI037hYK3cMK2bL9zqTkU910NuOg", "8LxFxIm55gWYfT9XvFdS8Ej7gV7mJ1AxWxB8Ojt1JbSBhNNEKD", "58wSP8RCqB8Hkg1inLtaczrjy8tJgGVsetPWoikFmTwfLSecQh", "XIx89lp9InQA1EqxmIPYEIrTCalzARyEOkdDTkbFgWy9oepQzE", "cYqJyqvAHMU7T3gm6C64VQmUd9xGDCozWWIyF0bB2mKcZg0eZd"};
    int budget = 200;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> prices = {"29", "14", "72", "39", "32", "85", "06", "93"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> prices = {"aa", "bb"};
    int budget = 27;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> prices = {"9Bn32n7yc06wCZUEb8L9GuwYd5Vm8i7iiN6265UHl7Ya91Oj4j", "85uQONQpXDNkGOa06g32GzrAsOQghykwDrsC6Fwbu45NyH3H29", "XnCqdrfNXwDEJIDs2PjDeANU5k9rFqKuEEqKqkHLIiS7ayDK23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "2PKK7p7DPogdnRSU7mq05KAiqLicDIPlGyJID1ordVUBVpff23", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "iEqckf06wKA3yvR07bbycARP6aRdTdwBUSvZB2QAa3ztmD5XcS", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "BLNKBSfDXfv8JAXsjVYHwcy3d1wLLWHkb4sFPpWfWKyVWKheHR", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5", "kJe4newAPCysc2yN1qE9oqkWPSLhpniSntfBhoOGgDLyPHIoz5"};
    int budget = 500;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> prices = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int budget = 120;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "91"};
    int budget = 10;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> prices = {"Dea0", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngez", "hase", "andb", "ecar", "eful"};
    int budget = 100;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> prices = {"21", "00", "00", "00", "00", "00", "00", "13"};
    int budget = 1;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> prices = {"AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAshajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasdE26724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "QhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "WhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "0hAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhAShajhsASuas1821287asjhasdjkjdassadgasd126724111", "AhASDajhsASuas1821287asjhasdjkjdassadgasd126724111"};
    int budget = 9999;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> prices = {"A"};
    int budget = 1;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> prices = {"SDFGSGFZZZsadfsdfksdfZklsdjf435345435jljdfgljljfgl", "wesdfk0000SDFFRGRSGSDFGfgertgertertertretrtttttttt", "wesdfk0000SDFFRGRSGSDFGfgertgertertertretrtttttttt", "wesdfk0000SDFFRGRSGSDFGfgertgertertertretrtttttttt", "wesdfk0000SDFFRGRSGSDFGfgertgertertertretrtttttttt", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "00000000000000000000000000000000000000000000000076", "00000000000000000000000000000000000000000000000076", "00000000000000000000000000000000000000000000000076", "00000000000000000000000000000000000000000000000076", "00000000000000000000000000000000000000000000000076", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "ertertyergdfghdfghretyrthfghfyryfthfchbfghfhfghfgh", "KSDJFLSDJFLSDJFLDSJFLEKJRLKEJRLEJRLJDFLJDLFDJLDJLF", "KSDJFLSDJFLSDJFLDSJFLEKJRLKEJRLEJRLJDFLJDLFDJLDJLF", "KSDJFLSDJFLSDJFLDSJFLEKJRLKEJRLEJRLJDFLJDLFDJLDJLF", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "gfdgdfgdfgdfg0000000004545354850345000000000000000", "DSGJLDSKJGLSKDJLKSDJFLSDKJFLSDKJFLSDJFLJELRJERJELJ"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> prices = {"123", "123", "123", "123", "123", "123", "123", "123"};
    int budget = 8;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> prices = {"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa", "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> prices = {"yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "yzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "z0zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int budget = 427;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> prices = {"112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas", "112312093109283109283asdfajsdlfjasldjfASKLJALSDas"};
    int budget = 9999;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> prices = {"12", "12", "12", "12", "12", "12", "12", "92", "99"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> prices = {"26", "41", "72", "39", "32", "85", "06", "91"};
    int budget = 23;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "91", "41", "14"};
    int budget = 22;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> prices = {"91", "99", "99", "99", "99", "99", "99", "0a"};
    int budget = 1;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> prices = {"12"};
    int budget = 1;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> prices = {"12", "00", "00", "00", "00", "00", "00", "12", "00", "00", "00", "00", "00", "00", "21", "00", "00", "00", "00", "00", "00", "21", "00", "00", "00", "00", "00", "00"};
    int budget = 4;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> prices = {"99", "99", "99"};
    int budget = 19;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> prices = {"01", "01", "01", "01", "01", "01", "01", "01", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0", "z0"};
    int budget = 8;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> prices = {"0123", "0123", "0123", "1234", "1234", "1234", "2345", "6zxy", "4wxy", "5mno", "9xyz", "mno7", "oij6", "opq5", "rs5e", "m4rs", "mr5s", "rtu6", "4ret", "stu3", "m5dr", "5erd", "uz6y"};
    int budget = 226;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> prices = {"ASDF4A5SDF43ASD4F35ASD4F35ASD4ASD35F43ASD54FASD34", "ASDF4444544DF44V4DVBHJMFHM435SD4F6B4SD6F1B65DF4BN", "1SDFG54SDFG65SDF4G6SDFG65GH16ETYU413654JSGHNJYGV1", "D64JHTGDGJ42DRJ46ETY4U641G6T4Y4G32SDF4HRTHDFGB6TJ", "NSD1GH46TJH53RTSDFH3FGJ64S6FV4S6DF5H1G354DFGHSDF6", "H4WDF6G4SDF4GSDF5GSDF65GSFG4SDF64G6SDF4G6DF4G6DF4", "GFG7WERF6GV154ER65H1KL4I16RY4HN6TY4J64THJN4RT6M4U", "65MK4RTUK4MUM3J654TJ646JKY64JK6U4KUJK6R4RJH65YU4T", "YHT4Y65TH4T4Y65WY54TTYHT4H6ET4H65WHVBY1WEC4QC10AF", "498FG654F5GD65G4SDF4DF65H41FGB4ETGHDH4T984GH3AS5E", "RHG98RF65G4SER98G4ASD6GH74T4HSE98G765R4G798SH5E7R", "G54SER98G7ER654G98AE7RG465987ER4GH74ER987G49S8H76", "SDF5H4SD4F8H74SD6RFH4RF4S65D4GH4ERH65SERH74S65E4R", "H68SDR46H74TJH74T5JHSD687HD6T4S8DFG6S5D365FGASD3G", "7DF8AH4541S3TGJ7DSF4GH1AE7T4DS4GH4S46SDF5H74T65U4", "TYK4UIP4IO1M65J4MDF654GH9AS8E7TR4U6546OPUI65K4H65", "W4ER65Y4TH6SWRY78A4WE65T4WERG463ER43GD78YH465RTY4", "SG4ER78Y4H65AR4TG78R4F5GSDG85J4TY654I74FGSDFGH4TA", "65EF165G74QA1F65GER4AGS1DF4G63A54F34ASDFGD1B3SDR4", "HASD1F6ASD54GSDF65GDGSG4S3FDG1ASDG4ASAEG4D43SD5G4", "A3SD5G3ASDG4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3S", "D5G3ASDG4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G", "3ASDG4S65G4ASD5GASD4GAS8E7TR4U6546OPUI65K4H65W4ER", "65Y4TH6SWRY78A4WE65T4WERG463ER43GD78YH465RTY4SG4E", "R78Y4H65AR4TG78R4F5GSDG85J4TY654I74FGSDFGH4TA65EF", "165G74QA1F65GER4AGS1DF4G63A54F34ASDFGD1B3SDR4HASD", "1F6ASD54GSDF65GDGSG4S3FDG1ASDG4ASAEG4D43SD5G4A3SD", "5G3ASDG4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3", "ASDG4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3ASD", "G4S65G4ASD5GASD4GAS8E7TR4U6546OPUI65K4H65W4ER65Y4", "TH6SWRY78A4WE65T4WERG463ER43GD78YH465RTY4SG4ER78Y", "4H65AR4TG78R4F5GSDG85J4TY654I74FGSDFGH4TA65EF165G", "74QA1F65GER4AGS1DF4G63A54F34ASDFGD1B3SDR4HASD1F6A", "SD54GSDF65GDGSG4S3FDG1ASDG4ASAEG4D43SD5G4A3SD5G3A", "SDG4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3ASDG", "4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3ASDG4SA", "65G4ASD5GASD4GAS8E7TR4U6546OPUI65K4H65W4ER65Y4THA", "6SWRY78A4WE65T4WERG463ER43GD78YH465RTY4SG4ER78Y4H", "65AR4TG78R4F5GSDG85J4TY654I74FGSDFGH4TA65EF165G74", "QA1F65GER4AGS1DF4G63A54F34ASDFGD1B3SDR4HASD1F6ASD", "54GSDF65GDGSG4S3FDG1ASDG4ASAEG4D43SD5G4A3SD5G3ASD", "G4S65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3ASDG4S", "65G4ASD5GASD4GASDG4ASAEG4D43SD5G4A3SD5G3ASDG4SAAA", "65G4ASD5GASD4GAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> prices = {"9", "2"};
    int budget = 3;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> prices = {"01", "01", "01", "01", "01", "01", "01", "10"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> prices = {"20", "00", "00", "00", "00", "00", "00", "15"};
    int budget = 2;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> prices = {"01", "01", "01", "01", "01", "01", "01", "dZ"};
    int budget = 35;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> prices = {"12222222", "11111111", "11111111", "11111111", "11111111", "11111111", "11111111", "a1111111"};
    int budget = 9;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> prices = {"FLyEt4iimI", "551r1bT2rA", "Po2xQmlUCz", "L6bi9QLjTS", "nP2xxIlvRs", "LImVVjnlNW", "gzOGMKE24s", "qJO9aO6lx8", "9noyAkKUbs", "oDqHhWCG9F"};
    int budget = 50;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> prices = {"1jawe", "fwj3S", "5zzwr", "j224q", "DQE10", "QQ321", "QOR43", "QCCX1", "Q9421", "QE23I", "ZZZZZ", "00000"};
    int budget = 99;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> prices = {"sdafd", "asdff", "sadff", "aer32", "23423", "asdff", "asfe3", "sdff2", "sdf23", "sdf32", "sdfaa", "asfaw", "qweee", "aaew2", "21233", "12321", "12311", "sdfa2", "23aaA", "DSFSE", "sdfse", "3234s", "asdf3", "sdf32", "2fdgg", "AAAw2", "33456", "67565", "65788", "56745", "23456", "fds45", "fdgsr", "45367", "dfgs4", "sfdg4", "34536", "dfg56", "dfg56", "fgf45", "fdgs4"};
    int budget = 9000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> prices = {"1"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> prices = {"9"};
    int budget = 9;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> prices = {"0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000", "0000000000000000000000000000000000000000"};
    int budget = 1000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> prices = {"5155555511", "5555555511", "5555555511", "55555555z1", "5555555511", "5555555511", "5555555511", "915555551z", "555555555z", "555555555z", "555555555z", "555555555z", "555555555z", "555555555z", "1z555555zz"};
    int budget = 59;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> prices = {"frAQBc8Wsa1xVPfvJcrgRYwTiizs2trQF69AzBlax3CF3EDNhm", "3soLBPh71YexuieaoEiIgxIX4a2dREbbSqWy6yhKIDCdJOyapn", "xrpMCARCr4zdGc81tBDKsMlaZTXC1O8YFOGKjxRrJBdT3hVOfo", "aMeAjSWfchoZYFYZ5B6kzMCk8R6BEuZMrF6cI6NX8DYdD3ojxS", "nqPTGfRyilOYGxlSXPtLJboH8S4kwIgTxSl1C00GOzOLMrbAyf", "KUUTsGCoRblsaqv6UpdvNIsNrmwUlN5u9t3tgj2tusZBauFkrF", "CJCmZFOv1QDIIXJNZI95hFQr77BIElyct4Aj6PKnZpzRiKYpZg", "nSOKlq8AzrHqDoGL4RHyqyX3g5Ayy61leDYT3CEW8K69rklPGt", "fUR2IZ2mB1S7NLt2nQfj3SL3XByImciQTqVaAUnJvUmHVQGsTm", "vHeuSEBMSPh2Q6dQAjy4KjsfSXF4YP8arF3SLLny30KKziHtRb", "OE2u8qvJP3B6Uiu1gJ03OhmWvn7MIr9oDUTOX7NYEkZgzUny1s", "wObdYSEvWRBLzZ02h67YrlvBndn4cXPaoaKk5lQn33hfNWPgr8", "81nP7VxEE4FdgcL9fOPyc98bI89qTPFtysL1Q4GTOPwD7kkqPq", "Q5PNEEfuTlCH9WpIYaPHWfUTjlTOSj3iH7JTRsbYH133TyWLIB", "4G3sV0ykPds7HX27KbNCCytJR8Cu6XFptEIP68v8ZdV60GXAPZ", "HAD2vQkWrpqiwdo3Hrdt6z3lSTpgTpRpRVcwo6HM8uA8D9eE4Z", "ADtmvWvN20LBHSkD6qr7J1hAkTkUFvMA0OSa91e9gqVNBeg10g", "AI4OMrxF2ltRPWacKwhzQyw8byxIFwOQfxFYy0quubpCzI71MR", "VOgDko8fnPYlapdvxlUsBH29Cm3ORYkfrjRZDdw6LcpX33e1IO", "wWR2uaAtZVB5yi9ijSAjBQjgnZSCe8nPQHnppZqt456uNhaAAZ", "7eJqXZMwECM9T0ci76RojHkpC99IR3WsIMd3jKuWwPswERoC0n", "E0pAli9Mk6pyZdABIGpASsMZ6uUeHJj8Ut6sSUOT0ouihnKJGj", "kvaPWolzchUSmJqhTmfAUKYckdKB9Ppfr6SkbeR8PKPlKtGBly", "LUlctAOGXldP7MVJKo22zHcL8AII08n8YXDzJFnlNLYG35SqTG", "tifPRHmoGrgKq6MbYsSXvy60MjweSbK31tz14EbA1KG3aMSFgD", "mnfMwafStMicLMPCqabztw5K1eD28Kin4mMxkcNZnWrc6hIXQd", "czX4fr0RMtivVlvkI3S1WSxzzthFYqGEdkVpeKgHaJ5P1fJXE0", "YMq1we9QL2rKEs8yKDAVn3QLJwWy0vNKb4LTfLMMLq080gXW8z", "W5v6qCQNwWaErAnGePtx5v3gYKbBkp7iE8TLmAZusXVJpKqtgP", "AOg1vriJN04X29XdBh8j0SCA0zKFZdSKQc5eTRuvykKPltKud5", "EUWDutAgMVsvmUM03YmjIqtYFpEFljgwsA1AnevjPJC0d543tU", "YLjC0XVLuq9CaGJhxWkhVYO3dJfBuCov1eETvOmdRXXNsyE4NH", "RkTZCBldIkbSUz2k4XdH9VxSffSaITvgEsjieOpxcfBn4tzYAB", "ythRDUSLUcbCkFeXVwVQZaOA2jb1NDCX3vP20n39X6hhgnz4Mf", "1it18OLKdtm9WgMaF0mJKATWd43OflAQsoC7WO95efK2h3B98k", "TDHqyzKXoJMFchjR1wTYI67ekrUydLRJBUDZXXFyxfRWIz9RwJ", "akyvPmMoLBCRyp0qZbXHjtanzWWpCmfLf8hgMcVOxm7E0c9GUa", "8m6xqqEZ1ENaQPFKnSJuhqhH2WlcvyL4MAeQXggMnn79XAVJRr", "z1uBdbraRvC4iU1b6GvS1TiZMqvUrwcY7RJCXTNIfkulpeHgd1", "xYctR9RF3YxVeBJKYQu7A0XTaehlb8tRbhXVz9Az1I6BDvjwRg", "w6eX3aKWTSqZTqOpaZDAqyRvJykTwFn3VsamFkqU1BcDuG07mj", "jq873tLM70Rm3tBHYf2FpMSsvHgod6GX3LkY8vbduFDFDHnZw3", "L1gm3H3VlGaUSvXonVZYjXaRgVNcJNzs08I7m4baYXjmxEHysO", "ozZhzLj2hXyhlbqHeXKIYpOhzGZdGTzkPJe5AhAzvRdS9AaopP", "bPCxcxwTJIK38Dwmj69IK6KVxSN2yF0SCl9nTdejMgZRlccTGX", "8vuKrACuTi9DM5uXp9fEKZABTNEQDgsYmP69ydQsKCjSE1FtVo", "sqEsoZncwBZWwjV3ZoDNJq8VJQUEOLJ8jECD92Bxch5N00ZEPd", "i8nfR9Od6xmldTHodT9cZ93mGppF3l9bgtUaYhSJcgVSEe4d3m", "bHE3wyiGOft3KmuvFnijwndit6Bb5rW1ssFwxwZrptnzsTGlZH", "vojWNZSlQiFqDMeb4hgxaWXxsxi3ACh0XXdea2vQfNw0Kkibxe"};
    int budget = 65;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> prices = {"Wear", "Code", "rsHa", "veFu", "nInT", "heCh", "alle", "ngeP", "hase", "andb", "ecar", "eful"};
    int budget = 256;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> prices = {"aaa", "aaa"};
    int budget = 5;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> prices = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int budget = 1000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> prices = {"00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> prices = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> prices = {"2A", "14", "72", "39", "32", "85", "06", "91"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "92"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> prices = {"z", "z", "z", "z", "z", "z", "z", "z"};
    int budget = 470;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> prices = {"09", "00", "00", "00", "00", "00", "00", "09"};
    int budget = 5;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> prices = {"08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy", "08w7890ddy08w7890ddy08w7890ddy08w7890ddy08w7890ddy"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> prices = {"A"};
    int budget = 9;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> prices = {"12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578", "12334512334512334512334512334512334512334512334578"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> prices = {"12", "12", "12", "12", "12", "12", "12", "12", "12", "12", "12", "12", "12", "12", "91", "91", "91", "91", "91", "91", "91"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> prices = {"000A", "yyyy", "yyyy", "yyyy", "3333", "0000", "0000", "zzz0", "hase", "andb", "ecar", "eful"};
    int budget = 256;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> prices = {"5"};
    int budget = 5;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> prices = {"13", "11", "11", "11", "11", "11", "11", "31"};
    int budget = 9;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> prices = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> prices = {"12", "11", "11", "11", "11", "11", "11", "72", "11", "11", "11", "11", "11", "11", "19"};
    int budget = 15;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> prices = {"01", "01", "01", "01", "01", "01", "01", "31", "01", "01", "01", "01", "01", "01", "09"};
    int budget = 2;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> prices = {"12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA", "12345678901234567889qwertyuiopasdfghjklzQWERTYUIOA"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> prices = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    int budget = 45;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> prices = {"12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "12345612311234561231123456123112345612311234561231", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "abcdefohkrabcdefohkrabcdefohkrabcdefohkrabcdefohkr", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH", "75485DEFTH75485DEFTH75485DEFTH75485DEFTH75485DEFTH"};
    int budget = 10000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> prices = {"10", "11", "11", "11", "11", "11", "11", "10", "11", "11", "11", "11", "11", "11", "15", "11", "11", "11", "11", "11", "11", "A3", "11", "11", "11", "11", "11", "11", "11", "11", "11", "zz"};
    int budget = 27;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06"};
    int budget = 1300;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> prices = {"asdasd112", "sad213121", "ASD213weq", "ASD132252", "sad21323a", "sfdfsopwe", "12323dfsv", "dadasaadq", "213423555", "344223445", "4543sffsf", "234fsfggs", "2342sdffs", "asdasdfgg", "sdadasddd", "sadasdasd"};
    int budget = 167;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> prices = {"DearDear", "CodeDear", "rsDearHa", "vDeareFu", "nDearInT", "heCDearh", "aDearlle", "ngDeareP", "hDearase", "anDeardb", "ecaDearr", "efuDearl"};
    int budget = 256;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> prices = {"zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz", "zzzz"};
    int budget = 1000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> prices = {"01", "01", "01", "01", "01", "01", "01", "z1", "z1", "z1", "z1", "z1", "z1", "z1"};
    int budget = 10;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> prices = {"00", "00"};
    int budget = 0;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> prices = {"zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz", "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz"};
    int budget = 2000;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> prices = {"26", "14", "72", "39", "32", "85", "06", "91"};
    int budget = 20;
    MysteriousRestaurant* pObj = new MysteriousRestaurant();
    clock_t start = clock();
    int result = pObj->maxDays(prices, budget);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14537&pm=11295
********************************************************************************
//  SRM 512 (A)
 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
 
using namespace std;
 
typedef unsigned uint;
typedef long long Int;
typedef vector<int> vint;
typedef pair<int,int> pint;
#define mp make_pair
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
template<class T> void chmin(T &t, T f) { if (t > f) t = f; }
template<class T> void chmax(T &t, T f) { if (t < f) t = f; }
 
const int INF = 1001001;
 
struct MysteriousRestaurant {
  
  int tr(char c) {
    if (isdigit(c)) return  0 + (c - '0');
    if (isupper(c)) return 10 + (c - 'A');
    if (islower(c)) return 36 + (c - 'a');
    return INF;
  }
  
  int maxDays(vector <string> prices, int budget) {
    int M = prices.size(), N = prices[0].size();
    int ans = 0;
    int days;
    int i, j, x;
    
    for (days = 1; days <= M; ++days) {
      int sum = 0;
      for (i = 0; i < 7; ++i) {
        int sho = INF;
        for (x = 0; x < N; ++x) {
          int tmp = 0;
          for (j = i; j < days; j += 7) {
            tmp += tr(prices[j][x]);
          }
          chmin(sho, tmp);
        }
        sum += sho;
      }
      if (sum <= budget) {
        chmax(ans, days);
      }
    }
    
    return ans;
    
  }
  
};

********************************************************************************
*******************************************************************************/