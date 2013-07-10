/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4708
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

class Recipe {
public:
    vector<string> fix(vector<string> recipe, vector<string> mixingBowl);
};

vector<string> Recipe::fix(vector<string> recipe, vector<string> mixingBowl) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> recipe = {"4 cups FLOUR", "1 Tbsp SALT", "1 cups SUGAR", "1 tsp VANILLA"};
    vector<string> mixingBowl = {"4 cups FLOUR", "1 Tbsp SALT", "1 Tbsp SUGAR", "1 Tbsp VANILLA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8 cups FLOUR", "2 Tbsp SALT", "2 cups 15 Tbsp SUGAR"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> recipe = {"3 cups FLOUR", "1 tsp SALT"};
    vector<string> mixingBowl = {"3 cups FLOUR", "2 tsp SALT"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3 cups FLOUR"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> recipe = {"1 cups FLOUR", "1 cups SUGAR", "1 cups MILK"};
    vector<string> mixingBowl = {"2 cups FLOUR", "32 Tbsp SUGAR", "96 tsp MILK"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> recipe = {"2 cups FLOUR", "2 tsp SALT"};
    vector<string> mixingBowl = {"1 cups FLOUR", "1 tsp SALT"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups FLOUR", "1 tsp SALT"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> recipe = {"3 cups FLOUR"};
    vector<string> mixingBowl = {"2 cups FLOUR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups FLOUR"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> recipe = {"1 tsp MILK", "7 Tbsp SUGAR"};
    vector<string> mixingBowl = {"1 tsp MILK", "11 Tbsp SUGAR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 tsp MILK", "3 Tbsp SUGAR"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> recipe = {"71 tsp CINNAMON"};
    vector<string> mixingBowl = {};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups 7 Tbsp 2 tsp CINNAMON"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> recipe = {"2 cups A", "3 cups B", "5 cups C", "7 cups D", "11 cups E", "13 cups F", "17 cups G", "19 cups H", "23 cups I", "29 cups J", "31 cups K", "37 cups L", "41 cups M", "43 cups N", "47 cups O", "49 cups P", "51 cups Q", "53 cups R", "59 cups S", "61 cups T"};
    vector<string> mixingBowl = {"99 cups A", "3 cups B", "5 cups C", "7 cups D", "11 cups E", "13 cups F", "17 cups G", "19 cups H", "23 cups I", "29 cups J", "31 cups K", "37 cups L", "41 cups M", "43 cups N", "47 cups O", "49 cups P", "51 cups Q", "53 cups R", "59 cups S", "61 cups T"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"145 cups 8 Tbsp B", "242 cups 8 Tbsp C", "339 cups 8 Tbsp D", "533 cups 8 Tbsp E", "630 cups 8 Tbsp F", "824 cups 8 Tbsp G", "921 cups 8 Tbsp H", "1115 cups 8 Tbsp I", "1406 cups 8 Tbsp J", "1503 cups 8 Tbsp K", "1794 cups 8 Tbsp L", "1988 cups 8 Tbsp M", "2085 cups 8 Tbsp N", "2279 cups 8 Tbsp O", "2376 cups 8 Tbsp P", "2473 cups 8 Tbsp Q", "2570 cups 8 Tbsp R", "2861 cups 8 Tbsp S", "2958 cups 8 Tbsp T"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> recipe = {"2 cups A", "3 cups B", "5 cups C", "7 cups D", "11 cups E", "13 cups F", "17 cups G", "19 cups H", "23 cups I", "29 cups J", "31 cups K", "37 cups L", "41 cups M", "43 cups N", "47 cups O", "49 cups P", "51 cups Q", "53 cups R", "59 cups S", "99 cups T"};
    vector<string> mixingBowl = {"3 cups A", "4 cups B", "6 cups C", "8 cups D", "12 cups E", "14 cups F", "18 cups G", "20 cups H", "24 cups I", "30 cups J", "32 cups K", "38 cups L", "42 cups M", "44 cups N", "48 cups O", "50 cups P", "52 cups Q", "54 cups R", "60 cups S", "1 cups T"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8 Tbsp B", "1 cups 8 Tbsp C", "2 cups 8 Tbsp D", "4 cups 8 Tbsp E", "5 cups 8 Tbsp F", "7 cups 8 Tbsp G", "8 cups 8 Tbsp H", "10 cups 8 Tbsp I", "13 cups 8 Tbsp J", "14 cups 8 Tbsp K", "17 cups 8 Tbsp L", "19 cups 8 Tbsp M", "20 cups 8 Tbsp N", "22 cups 8 Tbsp O", "23 cups 8 Tbsp P", "24 cups 8 Tbsp Q", "25 cups 8 Tbsp R", "28 cups 8 Tbsp S", "147 cups 8 Tbsp T"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> recipe = {"1 tsp A", "99 cups B", "2 tsp C"};
    vector<string> mixingBowl = {"99 cups A", "1 tsp B", "99 cups C"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"470447 cups 15 Tbsp 2 tsp B", "99 cups C"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> recipe = {"4 cups A", "8 cups B"};
    vector<string> mixingBowl = {"7 cups A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"14 cups B"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> recipe = {"1 tsp A", "99 cups B", "99 cups C", "99 cups D", "99 cups E", "99 cups F", "99 cups G", "99 cups H", "99 cups I", "99 cups J", "99 cups K", "99 cups L", "99 cups M", "99 cups N", "99 cups O", "99 cups P", "99 cups Q", "99 cups R", "99 cups S", "99 cups T", "99 cups U", "99 cups V", "99 cups W", "99 cups X", "99 cups Y", "99 cups Z", "99 cups BB", "99 cups CC", "99 cups DD", "99 cups EE", "99 cups FF", "99 cups GG", "99 cups HH", "99 cups II", "99 cups JJ", "99 cups KK", "99 cups LL", "99 cups MM", "99 cups NN", "99 cups OO", "99 cups PP", "99 cups QQ", "99 cups RR", "99 cups SS", "99 cups TT", "99 cups UU", "99 cups VV", "99 cups WW", "99 cups XX", "99 cups YY"};
    vector<string> mixingBowl = {"1 tsp B", "1 tsp C", "1 tsp D", "1 tsp E", "1 tsp F", "1 tsp G", "1 tsp H", "1 tsp I", "1 tsp J", "1 tsp K", "1 tsp L", "1 tsp M", "1 tsp N", "1 tsp O", "1 tsp P", "1 tsp Q", "1 tsp R", "1 tsp S", "1 tsp T", "1 tsp U", "1 tsp V", "1 tsp W", "1 tsp X", "1 tsp Y", "1 tsp Z", "1 tsp BB", "1 tsp CC", "1 tsp DD", "1 tsp EE", "1 tsp FF", "1 tsp GG", "1 tsp HH", "1 tsp II", "1 tsp JJ", "1 tsp KK", "1 tsp LL", "1 tsp MM", "1 tsp NN", "1 tsp OO", "1 tsp PP", "1 tsp QQ", "1 tsp RR", "1 tsp SS", "1 tsp TT", "1 tsp UU", "1 tsp VV", "1 tsp WW", "1 tsp XX", "1 tsp YY", "99 cups A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"470447 cups 15 Tbsp 2 tsp B", "470447 cups 15 Tbsp 2 tsp C", "470447 cups 15 Tbsp 2 tsp D", "470447 cups 15 Tbsp 2 tsp E", "470447 cups 15 Tbsp 2 tsp F", "470447 cups 15 Tbsp 2 tsp G", "470447 cups 15 Tbsp 2 tsp H", "470447 cups 15 Tbsp 2 tsp I", "470447 cups 15 Tbsp 2 tsp J", "470447 cups 15 Tbsp 2 tsp K", "470447 cups 15 Tbsp 2 tsp L", "470447 cups 15 Tbsp 2 tsp M", "470447 cups 15 Tbsp 2 tsp N", "470447 cups 15 Tbsp 2 tsp O", "470447 cups 15 Tbsp 2 tsp P", "470447 cups 15 Tbsp 2 tsp Q", "470447 cups 15 Tbsp 2 tsp R", "470447 cups 15 Tbsp 2 tsp S", "470447 cups 15 Tbsp 2 tsp T", "470447 cups 15 Tbsp 2 tsp U", "470447 cups 15 Tbsp 2 tsp V", "470447 cups 15 Tbsp 2 tsp W", "470447 cups 15 Tbsp 2 tsp X", "470447 cups 15 Tbsp 2 tsp Y", "470447 cups 15 Tbsp 2 tsp Z", "470447 cups 15 Tbsp 2 tsp BB", "470447 cups 15 Tbsp 2 tsp CC", "470447 cups 15 Tbsp 2 tsp DD", "470447 cups 15 Tbsp 2 tsp EE", "470447 cups 15 Tbsp 2 tsp FF", "470447 cups 15 Tbsp 2 tsp GG", "470447 cups 15 Tbsp 2 tsp HH", "470447 cups 15 Tbsp 2 tsp II", "470447 cups 15 Tbsp 2 tsp JJ", "470447 cups 15 Tbsp 2 tsp KK", "470447 cups 15 Tbsp 2 tsp LL", "470447 cups 15 Tbsp 2 tsp MM", "470447 cups 15 Tbsp 2 tsp NN", "470447 cups 15 Tbsp 2 tsp OO", "470447 cups 15 Tbsp 2 tsp PP", "470447 cups 15 Tbsp 2 tsp QQ", "470447 cups 15 Tbsp 2 tsp RR", "470447 cups 15 Tbsp 2 tsp SS", "470447 cups 15 Tbsp 2 tsp TT", "470447 cups 15 Tbsp 2 tsp UU", "470447 cups 15 Tbsp 2 tsp VV", "470447 cups 15 Tbsp 2 tsp WW", "470447 cups 15 Tbsp 2 tsp XX", "470447 cups 15 Tbsp 2 tsp YY"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> recipe = {"3 cups FLOUR", "1 cups SUGAR", "9 tsp SALT", "9 Tbsp GINGER", "2 cups MILK", "21 tsp CINNAMON", "5 Tbsp VANILLA"};
    vector<string> mixingBowl = {"1 Tbsp SUGAR", "8 tsp SALT", "5 Tbsp CINNAMON", "21 tsp VANILLA", "44 tsp GINGER", "3 cups FLOUR", "3 cups MILK"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 cups FLOUR", "1 cups 9 Tbsp 2 tsp SUGAR", "2 Tbsp 1 tsp SALT", "1 tsp GINGER", "5 Tbsp 1 tsp MILK", "6 Tbsp 2 tsp CINNAMON", "1 Tbsp 1 tsp VANILLA"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> recipe = {"1 tsp A", "99 cups B", "99 cups C", "99 cups D", "99 cups E", "99 cups F", "99 cups G", "99 cups H", "99 cups I", "99 cups J", "99 cups K", "99 cups L", "99 cups M", "99 cups N", "99 cups O", "99 cups P", "99 cups Q", "99 cups R", "99 cups S", "99 cups T", "99 cups U", "99 cups V", "99 cups W", "99 cups X", "99 cups Y", "99 cups Z", "99 cups BB", "99 cups CC", "99 cups DD", "99 cups EE", "99 cups FF", "99 cups GG", "99 cups HH", "99 cups II", "99 cups JJ", "99 cups KK", "99 cups LL", "99 cups MM", "99 cups NN", "99 cups OO", "99 cups PP", "99 cups QQ", "99 cups RR", "99 cups SS", "99 cups TT", "99 cups UU", "99 cups VV", "99 cups WW", "99 cups XX", "99 cups YY"};
    vector<string> mixingBowl = {"1 tsp B", "1 tsp C", "1 tsp D", "1 tsp E", "1 tsp F", "1 tsp G", "1 tsp H", "1 tsp I", "1 tsp J", "1 tsp K", "1 tsp L", "1 tsp M", "1 tsp N", "1 tsp O", "1 tsp P", "1 tsp Q", "1 tsp R", "1 tsp S", "1 tsp T", "1 tsp U", "1 tsp V", "1 tsp W", "1 tsp X", "1 tsp Y", "1 tsp Z", "1 tsp BB", "1 tsp CC", "1 tsp DD", "1 tsp EE", "1 tsp FF", "1 tsp GG", "1 tsp HH", "1 tsp II", "1 tsp JJ", "1 tsp KK", "1 tsp LL", "1 tsp MM", "1 tsp NN", "1 tsp OO", "1 tsp PP", "1 tsp QQ", "1 tsp RR", "1 tsp SS", "1 tsp TT", "1 tsp UU", "1 tsp VV", "1 tsp WW", "1 tsp XX"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 tsp A", "98 cups 15 Tbsp 2 tsp B", "98 cups 15 Tbsp 2 tsp C", "98 cups 15 Tbsp 2 tsp D", "98 cups 15 Tbsp 2 tsp E", "98 cups 15 Tbsp 2 tsp F", "98 cups 15 Tbsp 2 tsp G", "98 cups 15 Tbsp 2 tsp H", "98 cups 15 Tbsp 2 tsp I", "98 cups 15 Tbsp 2 tsp J", "98 cups 15 Tbsp 2 tsp K", "98 cups 15 Tbsp 2 tsp L", "98 cups 15 Tbsp 2 tsp M", "98 cups 15 Tbsp 2 tsp N", "98 cups 15 Tbsp 2 tsp O", "98 cups 15 Tbsp 2 tsp P", "98 cups 15 Tbsp 2 tsp Q", "98 cups 15 Tbsp 2 tsp R", "98 cups 15 Tbsp 2 tsp S", "98 cups 15 Tbsp 2 tsp T", "98 cups 15 Tbsp 2 tsp U", "98 cups 15 Tbsp 2 tsp V", "98 cups 15 Tbsp 2 tsp W", "98 cups 15 Tbsp 2 tsp X", "98 cups 15 Tbsp 2 tsp Y", "98 cups 15 Tbsp 2 tsp Z", "98 cups 15 Tbsp 2 tsp BB", "98 cups 15 Tbsp 2 tsp CC", "98 cups 15 Tbsp 2 tsp DD", "98 cups 15 Tbsp 2 tsp EE", "98 cups 15 Tbsp 2 tsp FF", "98 cups 15 Tbsp 2 tsp GG", "98 cups 15 Tbsp 2 tsp HH", "98 cups 15 Tbsp 2 tsp II", "98 cups 15 Tbsp 2 tsp JJ", "98 cups 15 Tbsp 2 tsp KK", "98 cups 15 Tbsp 2 tsp LL", "98 cups 15 Tbsp 2 tsp MM", "98 cups 15 Tbsp 2 tsp NN", "98 cups 15 Tbsp 2 tsp OO", "98 cups 15 Tbsp 2 tsp PP", "98 cups 15 Tbsp 2 tsp QQ", "98 cups 15 Tbsp 2 tsp RR", "98 cups 15 Tbsp 2 tsp SS", "98 cups 15 Tbsp 2 tsp TT", "98 cups 15 Tbsp 2 tsp UU", "98 cups 15 Tbsp 2 tsp VV", "98 cups 15 Tbsp 2 tsp WW", "98 cups 15 Tbsp 2 tsp XX", "99 cups YY"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> recipe = {"1 tsp A", "99 cups B", "99 cups C", "99 cups D", "99 cups E", "99 cups F", "99 cups G", "99 cups H", "99 cups I", "99 cups J", "99 cups K", "99 cups L", "99 cups M", "99 cups N", "99 cups O", "99 cups P", "99 cups Q", "99 cups R", "99 cups S", "99 cups T", "99 cups U", "99 cups V", "99 cups W", "99 cups X", "99 cups Y", "99 cups Z", "99 cups BB", "99 cups CC", "99 cups DD", "99 cups EE", "99 cups FF", "99 cups GG", "99 cups HH", "99 cups II", "99 cups JJ", "99 cups KK", "99 cups LL", "99 cups MM", "99 cups NN", "99 cups OO", "99 cups PP", "99 cups QQ", "99 cups RR", "99 cups SS", "99 cups TT", "99 cups UU", "99 cups VV", "99 cups WW", "99 cups XX", "99 cups YY"};
    vector<string> mixingBowl = {"99 cups A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"470448 cups B", "470448 cups C", "470448 cups D", "470448 cups E", "470448 cups F", "470448 cups G", "470448 cups H", "470448 cups I", "470448 cups J", "470448 cups K", "470448 cups L", "470448 cups M", "470448 cups N", "470448 cups O", "470448 cups P", "470448 cups Q", "470448 cups R", "470448 cups S", "470448 cups T", "470448 cups U", "470448 cups V", "470448 cups W", "470448 cups X", "470448 cups Y", "470448 cups Z", "470448 cups BB", "470448 cups CC", "470448 cups DD", "470448 cups EE", "470448 cups FF", "470448 cups GG", "470448 cups HH", "470448 cups II", "470448 cups JJ", "470448 cups KK", "470448 cups LL", "470448 cups MM", "470448 cups NN", "470448 cups OO", "470448 cups PP", "470448 cups QQ", "470448 cups RR", "470448 cups SS", "470448 cups TT", "470448 cups UU", "470448 cups VV", "470448 cups WW", "470448 cups XX", "470448 cups YY"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> recipe = {"22 Tbsp SAGE", "29 Tbsp CORNFLOUR", "86 cups SPINACH", "78 Tbsp SOURCREAM", "81 Tbsp SALT", "26 Tbsp CLOVES", "5 tsp BAKINGPOWDER", "42 Tbsp WALNUTS", "2 cups ONION", "60 cups PAPRIKA", "40 cups SOYSAUCE", "46 Tbsp CORNMEAL", "55 cups FLOUR", "26 Tbsp CREAMCHEESE", "16 tsp GARLIC", "23 Tbsp MUSTARD", "17 tsp ROSEMARY", "62 cups SUGAR", "34 cups CHESTNUTS", "65 tsp CORN", "68 cups THYME", "24 Tbsp BAKINGSODA"};
    vector<string> mixingBowl = {"20 cups CORNMEAL", "36 tsp CORN", "95 Tbsp SAGE", "22 tsp SPINACH", "2 tsp BAKINGSODA", "39 tsp ROSEMARY", "49 Tbsp GARLIC", "71 tsp MUSTARD"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7 cups 13 Tbsp SAGE", "18 cups 2 Tbsp CORNFLOUR", "859 cups 8 Tbsp 2 tsp SPINACH", "48 cups 12 Tbsp SOURCREAM", "50 cups 10 Tbsp SALT", "16 cups 4 Tbsp CLOVES", "1 cups 2 tsp BAKINGPOWDER", "26 cups 4 Tbsp WALNUTS", "20 cups ONION", "600 cups PAPRIKA", "400 cups SOYSAUCE", "8 cups 12 Tbsp CORNMEAL", "550 cups FLOUR", "16 cups 4 Tbsp CREAMCHEESE", "4 Tbsp 1 tsp GARLIC", "12 cups 14 Tbsp 1 tsp MUSTARD", "2 cups 11 Tbsp 2 tsp ROSEMARY", "620 cups SUGAR", "340 cups CHESTNUTS", "12 cups 12 Tbsp 2 tsp CORN", "680 cups THYME", "14 cups 15 Tbsp 1 tsp BAKINGSODA"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> recipe = {"53 Tbsp THYME", "9 tsp CORN", "42 Tbsp RICE", "28 cups PEPPER", "26 tsp GINGER", "62 Tbsp PARSLEY", "92 cups PEAS", "59 cups PECANS", "71 Tbsp BAYLEAVES", "95 Tbsp CORNMEAL", "3 tsp BUTTER", "82 cups CORNSTARCH", "53 Tbsp MILK", "53 Tbsp MAYONAISE", "13 cups NUTMEG", "22 cups CHIVES", "85 cups CORNSYRUP", "73 tsp BAKINGSODA", "40 cups WATER", "40 Tbsp EGGS", "17 Tbsp SOYSAUCE", "60 Tbsp SALT", "8 cups CLOVES", "78 tsp SAGE", "2 tsp FLOUR", "78 Tbsp SPINACH", "49 tsp CORNFLOUR", "39 cups GARLIC", "88 tsp YEAST", "31 Tbsp CHESTNUTS", "27 tsp CELERY", "87 tsp CHEESE", "17 cups MUSTARD", "98 tsp VINEGAR", "7 Tbsp OATS", "69 Tbsp ALMONDS", "59 cups KETCHUP", "30 cups WALNUTS", "33 Tbsp CINNAMON"};
    vector<string> mixingBowl = {"19 tsp BAYLEAVES", "55 tsp MILK", "45 Tbsp SPINACH", "8 tsp CHIVES", "99 Tbsp MAYONAISE", "66 Tbsp EGGS", "31 cups PEPPER", "48 cups GINGER", "35 Tbsp VINEGAR", "31 Tbsp GARLIC", "41 tsp CORNSTARCH", "24 tsp THYME", "3 Tbsp RICE", "61 Tbsp MUSTARD", "35 cups CHESTNUTS", "92 Tbsp CHEESE", "15 tsp WATER", "94 Tbsp CELERY", "66 tsp NUTMEG", "46 tsp KETCHUP", "7 cups WALNUTS", "82 tsp SOYSAUCE", "58 Tbsp CORNFLOUR", "89 cups SAGE", "13 cups SALT", "96 cups YEAST", "61 cups CORN", "69 tsp FLOUR", "45 tsp PECANS", "16 tsp CORNMEAL", "59 tsp BUTTER", "19 Tbsp CLOVES", "64 Tbsp CORNSYRUP"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1079 cups 6 Tbsp THYME", "2 Tbsp CORN", "855 cups 9 Tbsp RICE", "9097 cups PEPPER", "128 cups 9 Tbsp 1 tsp GINGER", "1263 cups 4 Tbsp PARSLEY", "29992 cups PEAS", "19233 cups 1 Tbsp PECANS", "1446 cups 3 Tbsp 2 tsp BAYLEAVES", "1935 cups 4 Tbsp 2 tsp CORNMEAL", "19 cups 2 Tbsp 1 tsp BUTTER", "26731 cups 2 Tbsp 1 tsp CORNSTARCH", "1078 cups 11 Tbsp 2 tsp MILK", "1073 cups 11 Tbsp MAYONAISE", "4236 cups 10 Tbsp NUTMEG", "7171 cups 13 Tbsp 1 tsp CHIVES", "27706 cups CORNSYRUP", "495 cups 12 Tbsp 2 tsp BAKINGSODA", "13039 cups 11 Tbsp WATER", "810 cups 14 Tbsp EGGS", "344 cups 10 Tbsp 2 tsp SOYSAUCE", "1209 cups 8 Tbsp SALT", "2606 cups 13 Tbsp CLOVES", "440 cups 12 Tbsp SAGE", "12 cups 2 Tbsp 1 tsp FLOUR", "1586 cups 7 Tbsp SPINACH", "329 cups 2 Tbsp 2 tsp CORNFLOUR", "12712 cups 1 Tbsp GARLIC", "501 cups 10 Tbsp 2 tsp YEAST", "596 cups 10 Tbsp CHESTNUTS", "177 cups 8 Tbsp CELERY", "585 cups 2 Tbsp CHEESE", "5538 cups 3 Tbsp MUSTARD", "663 cups 6 Tbsp 1 tsp VINEGAR", "142 cups 10 Tbsp OATS", "1405 cups 14 Tbsp ALMONDS", "19233 cups 2 tsp KETCHUP", "9773 cups WALNUTS", "672 cups 6 Tbsp CINNAMON"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> recipe = {"20 Tbsp CORNMEAL", "55 cups ALMONDS", "40 tsp OATS", "50 Tbsp GINGER", "8 Tbsp VINEGAR", "69 tsp TOMATO", "50 tsp PARSLEY", "68 tsp CREAMCHEESE", "30 Tbsp MUSTARD", "92 cups MILK", "77 tsp PEPPER", "12 Tbsp CINNAMON", "20 tsp CLOVES", "69 tsp SAGE", "23 tsp PAPRIKA", "70 cups FLOUR", "84 Tbsp SUGAR", "23 tsp CHOCOLATE", "16 tsp NUTMEG", "1 cups CORNSYRUP", "81 cups CHEESE", "7 cups SOYSAUCE", "39 cups SOURCREAM", "13 Tbsp BUTTER", "39 cups BAKINGSODA", "34 cups CORNSTARCH", "40 Tbsp BASIL", "23 tsp BAYLEAVES", "6 Tbsp CELERY", "87 tsp CORN", "89 tsp PEAS", "38 cups WALNUTS", "50 Tbsp KETCHUP", "79 Tbsp ROSEMARY", "89 Tbsp BAKINGPOWDER", "43 Tbsp VANILLA", "24 Tbsp WATER", "53 Tbsp RICE", "15 cups THYME", "91 tsp MAYONAISE", "45 tsp CHIVES"};
    vector<string> mixingBowl = {"66 Tbsp BAKINGPOWDER", "59 cups SAGE", "97 tsp CLOVES", "20 cups BASIL", "50 cups MUSTARD", "60 tsp PARSLEY", "25 tsp RICE", "8 Tbsp SOURCREAM", "22 Tbsp FLOUR", "3 cups SUGAR", "14 tsp BAKINGSODA", "22 cups VANILLA", "64 cups THYME", "17 Tbsp KETCHUP", "27 cups TOMATO", "86 cups WATER", "61 Tbsp NUTMEG", "65 tsp GINGER", "84 cups CORN", "80 Tbsp CINNAMON", "17 tsp CORNMEAL", "39 cups CREAMCHEESE", "41 cups MILK", "72 Tbsp CHOCOLATE", "51 tsp CELERY", "9 cups PEAS", "15 cups ALMONDS", "24 cups CORNSTARCH", "12 cups WALNUTS", "78 tsp VINEGAR", "49 cups MAYONAISE", "45 cups ROSEMARY"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"72 cups 2 Tbsp 1 tsp CORNMEAL", "3175 cups ALMONDS", "48 cups 5 Tbsp 1 tsp OATS", "179 cups 14 Tbsp 1 tsp GINGER", "27 cups 6 Tbsp VINEGAR", "56 cups 6 Tbsp TOMATO", "59 cups 2 Tbsp 2 tsp PARSLEY", "43 cups 2 Tbsp 2 tsp CREAMCHEESE", "58 cups 12 Tbsp MUSTARD", "5295 cups MILK", "93 cups 2 tsp PEPPER", "38 cups 8 Tbsp CINNAMON", "22 cups 2 Tbsp 1 tsp CLOVES", "24 cups 6 Tbsp SAGE", "27 cups 12 Tbsp 2 tsp PAPRIKA", "4058 cups 10 Tbsp FLOUR", "301 cups 8 Tbsp SUGAR", "23 cups 4 Tbsp 2 tsp CHOCOLATE", "15 cups 8 Tbsp 1 tsp NUTMEG", "58 cups CORNSYRUP", "4698 cups CHEESE", "406 cups SOYSAUCE", "2261 cups 8 Tbsp SOURCREAM", "47 cups 2 Tbsp BUTTER", "2261 cups 11 Tbsp 1 tsp BAKINGSODA", "1948 cups CORNSTARCH", "125 cups BASIL", "27 cups 12 Tbsp 2 tsp BAYLEAVES", "20 cups 11 Tbsp CELERY", "21 cups 2 Tbsp CORN", "98 cups 8 Tbsp 2 tsp PEAS", "2192 cups WALNUTS", "180 cups 3 Tbsp KETCHUP", "241 cups 6 Tbsp ROSEMARY", "318 cups 8 Tbsp BAKINGPOWDER", "133 cups 14 Tbsp VANILLA", "1 cups WATER", "191 cups 9 Tbsp 2 tsp RICE", "806 cups THYME", "60 cups 15 Tbsp 1 tsp MAYONAISE", "54 cups 6 Tbsp CHIVES"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> recipe = {"50 tsp CLOVES", "28 cups OATS", "3 tsp BUTTER", "73 Tbsp CORNFLOUR", "79 tsp SALT", "45 Tbsp MILK", "3 tsp BAKINGPOWDER", "13 cups ONION", "59 Tbsp GINGER", "22 cups BASIL", "97 tsp WATER", "4 tsp KETCHUP", "67 Tbsp YEAST", "12 cups MAYONAISE", "63 tsp ALMONDS", "73 tsp TOMATO", "22 cups BAKINGSODA", "29 Tbsp CINNAMON"};
    vector<string> mixingBowl = {"68 cups BUTTER", "24 tsp BAKINGSODA", "39 cups ONION", "16 Tbsp KETCHUP", "75 Tbsp MAYONAISE", "36 tsp SALT", "29 cups BAKINGPOWDER", "6 tsp CLOVES", "22 tsp GINGER", "74 tsp CINNAMON"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1133 cups 3 Tbsp 1 tsp CLOVES", "30464 cups OATS", "4964 cups CORNFLOUR", "1789 cups 14 Tbsp 2 tsp SALT", "3060 cups MILK", "39 cups BAKINGPOWDER", "14105 cups ONION", "4011 cups 8 Tbsp 2 tsp GINGER", "23936 cups BASIL", "2198 cups 10 Tbsp 2 tsp WATER", "89 cups 10 Tbsp 2 tsp KETCHUP", "4556 cups YEAST", "13051 cups 5 Tbsp MAYONAISE", "1428 cups ALMONDS", "1654 cups 10 Tbsp 2 tsp TOMATO", "23935 cups 8 Tbsp BAKINGSODA", "1970 cups 7 Tbsp 1 tsp CINNAMON"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> recipe = {"29 Tbsp GINGER", "98 tsp CLOVES", "65 Tbsp MAYONAISE", "70 cups PEPPER", "2 tsp RICE", "88 Tbsp ONION", "4 cups SALT", "44 cups CHIVES", "7 tsp TOMATO", "87 Tbsp SPINACH", "85 cups CELERY", "32 Tbsp BAKINGSODA", "66 Tbsp WATER", "72 cups BAKINGPOWDER", "97 cups VINEGAR", "96 Tbsp GARLIC", "58 cups MUSTARD", "35 cups EGGS", "92 cups SOURCREAM", "74 tsp ALMONDS", "91 cups FLOUR", "76 tsp BUTTER", "83 tsp CORNSTARCH"};
    vector<string> mixingBowl = {"43 tsp RICE", "69 cups ALMONDS", "8 cups MAYONAISE", "23 tsp BAKINGPOWDER", "48 tsp CHIVES", "28 Tbsp MUSTARD", "48 tsp GINGER", "67 tsp CLOVES", "17 tsp GARLIC", "95 Tbsp FLOUR", "43 tsp CORNSTARCH", "54 Tbsp BAKINGSODA", "17 Tbsp TOMATO", "97 Tbsp BUTTER", "49 cups PEPPER", "72 tsp SALT"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"80 cups 9 Tbsp GINGER", "90 cups 7 Tbsp 2 tsp CLOVES", "174 cups 13 Tbsp MAYONAISE", "3101 cups PEPPER", "15 Tbsp 2 tsp RICE", "247 cups 8 Tbsp ONION", "178 cups 8 Tbsp SALT", "1979 cups CHIVES", "5 cups 8 Tbsp TOMATO", "244 cups 11 Tbsp SPINACH", "3825 cups CELERY", "86 cups 10 Tbsp BAKINGSODA", "185 cups 10 Tbsp WATER", "3239 cups 8 Tbsp 1 tsp BAKINGPOWDER", "4365 cups VINEGAR", "269 cups 10 Tbsp 1 tsp GARLIC", "2608 cups 4 Tbsp MUSTARD", "1575 cups EGGS", "4140 cups SOURCREAM", "6 Tbsp ALMONDS", "4089 cups 1 Tbsp FLOUR", "65 cups 3 Tbsp BUTTER", "76 cups 14 Tbsp 2 tsp CORNSTARCH"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> recipe = {"39 Tbsp CORNMEAL", "56 cups NUTMEG", "76 Tbsp RICE", "63 cups SOYSAUCE", "45 Tbsp GINGER", "30 tsp PEAS", "6 tsp CORNSYRUP", "13 tsp CINNAMON", "86 tsp PARSLEY", "43 tsp FLOUR", "85 tsp CLOVES", "67 Tbsp BUTTER", "49 tsp SALT", "37 tsp EGGS", "50 tsp CHESTNUTS", "66 cups VINEGAR", "14 tsp CORNFLOUR", "20 Tbsp BAKINGSODA", "50 Tbsp BAYLEAVES", "77 cups ONION", "91 cups CORNSTARCH", "26 cups MUSTARD", "40 Tbsp KETCHUP", "39 Tbsp SOURCREAM"};
    vector<string> mixingBowl = {"36 cups SOYSAUCE", "79 tsp KETCHUP", "60 Tbsp CORNSTARCH", "95 cups GINGER", "5 Tbsp MUSTARD", "22 cups BUTTER", "35 tsp CHESTNUTS", "80 Tbsp CORNFLOUR", "26 tsp PEAS", "47 tsp PARSLEY", "17 tsp CLOVES"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"82 cups 14 Tbsp CORNMEAL", "1904 cups NUTMEG", "161 cups 8 Tbsp RICE", "2106 cups SOYSAUCE", "10 Tbsp GINGER", "20 cups 11 Tbsp 1 tsp PEAS", "4 cups 4 Tbsp CORNSYRUP", "9 cups 3 Tbsp 1 tsp CINNAMON", "59 cups 15 Tbsp PARSLEY", "30 cups 7 Tbsp 1 tsp FLOUR", "59 cups 13 Tbsp 2 tsp CLOVES", "120 cups 6 Tbsp BUTTER", "34 cups 11 Tbsp 1 tsp SALT", "26 cups 3 Tbsp 1 tsp EGGS", "34 cups 11 Tbsp CHESTNUTS", "2244 cups VINEGAR", "4 cups 14 Tbsp 2 tsp CORNFLOUR", "42 cups 8 Tbsp BAKINGSODA", "106 cups 4 Tbsp BAYLEAVES", "2618 cups ONION", "3090 cups 4 Tbsp CORNSTARCH", "883 cups 11 Tbsp MUSTARD", "83 cups 5 Tbsp 2 tsp KETCHUP", "82 cups 14 Tbsp SOURCREAM"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> recipe = {"27 cups CORNMEAL", "14 cups ROSEMARY", "57 tsp GARLIC", "13 tsp CLOVES", "16 tsp CHOCOLATE", "86 tsp BAKINGSODA", "92 Tbsp PAPRIKA", "79 Tbsp PEPPER", "98 Tbsp KETCHUP", "5 tsp EGGS", "38 Tbsp TOMATO", "60 cups CHESTNUTS", "13 tsp GINGER", "49 Tbsp SPINACH", "67 Tbsp PECANS", "35 cups CORN", "75 Tbsp CHEESE", "86 Tbsp SUGAR", "14 cups WALNUTS", "79 cups BUTTER", "10 tsp ONION", "16 tsp BAYLEAVES", "29 Tbsp PEAS", "70 Tbsp WATER", "95 tsp PARSLEY", "98 tsp SALT", "13 cups THYME", "91 tsp MAYONAISE", "96 tsp CHIVES", "62 cups MILK", "20 cups SOURCREAM", "71 cups CELERY", "86 tsp VANILLA", "36 Tbsp NUTMEG", "63 Tbsp MUSTARD", "98 tsp CINNAMON", "17 tsp BAKINGPOWDER", "24 tsp CORNFLOUR", "76 cups SOYSAUCE", "92 tsp CREAMCHEESE", "45 cups RICE", "19 Tbsp CORNSTARCH", "45 tsp FLOUR", "11 cups OATS", "34 Tbsp SAGE", "86 tsp ALMONDS"};
    vector<string> mixingBowl = {"34 cups BAYLEAVES", "67 Tbsp CHOCOLATE", "78 cups CHEESE", "60 Tbsp BAKINGSODA", "63 tsp VANILLA", "11 tsp SOURCREAM", "50 tsp BAKINGPOWDER", "33 cups MILK", "56 Tbsp SAGE", "30 cups CHIVES", "73 cups WALNUTS", "69 cups EGGS", "63 Tbsp ROSEMARY", "41 tsp MUSTARD", "7 Tbsp CINNAMON", "44 cups OATS", "89 cups NUTMEG", "40 tsp SALT", "65 tsp GINGER", "34 Tbsp BUTTER", "48 Tbsp WATER", "11 cups MAYONAISE", "66 Tbsp PECANS", "26 tsp RICE", "72 cups CORNFLOUR", "8 Tbsp PEPPER", "32 Tbsp CORN", "13 cups ONION", "44 cups CLOVES", "85 Tbsp CORNSTARCH", "2 Tbsp PAPRIKA", "92 tsp PARSLEY", "14 cups THYME", "2 Tbsp GARLIC", "28 cups CREAMCHEESE"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17901 cups CORNMEAL", "9278 cups 1 Tbsp ROSEMARY", "787 cups 3 Tbsp GARLIC", "135 cups 9 Tbsp CLOVES", "216 cups 13 Tbsp CHOCOLATE", "1184 cups 2 Tbsp BAKINGSODA", "3812 cups 2 Tbsp PAPRIKA", "3273 cups 1 Tbsp PEPPER", "4060 cups 14 Tbsp KETCHUP", "1 Tbsp EGGS", "1574 cups 10 Tbsp TOMATO", "39780 cups CHESTNUTS", "178 cups 3 Tbsp 1 tsp GINGER", "2030 cups 7 Tbsp SPINACH", "2772 cups 3 Tbsp PECANS", "23203 cups CORN", "3029 cups 13 Tbsp CHEESE", "3563 cups 10 Tbsp SUGAR", "9209 cups WALNUTS", "52374 cups 14 Tbsp BUTTER", "125 cups 2 Tbsp ONION", "187 cups BAYLEAVES", "1201 cups 11 Tbsp PEAS", "2897 cups 10 Tbsp WATER", "1310 cups 4 Tbsp 1 tsp PARSLEY", "1352 cups 12 Tbsp 2 tsp SALT", "8605 cups THYME", "1245 cups 15 Tbsp MAYONAISE", "1296 cups CHIVES", "41073 cups MILK", "13259 cups 12 Tbsp 1 tsp SOURCREAM", "47073 cups CELERY", "1186 cups 9 Tbsp VANILLA", "1402 cups 12 Tbsp NUTMEG", "2609 cups 11 Tbsp 1 tsp MUSTARD", "1353 cups 3 Tbsp CINNAMON", "233 cups 12 Tbsp 1 tsp BAKINGPOWDER", "259 cups 8 Tbsp CORNFLOUR", "50388 cups SOYSAUCE", "1242 cups 12 Tbsp CREAMCHEESE", "29834 cups 7 Tbsp 1 tsp RICE", "782 cups CORNSTARCH", "621 cups 9 Tbsp FLOUR", "7249 cups OATS", "1405 cups 6 Tbsp SAGE", "1187 cups 14 Tbsp ALMONDS"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> recipe = {"67 cups BAYLEAVES", "75 tsp CHEESE", "63 tsp SAGE", "52 Tbsp CLOVES", "97 cups PEPPER", "39 tsp CHESTNUTS", "37 cups EGGS", "18 tsp CHOCOLATE", "41 tsp CINNAMON", "23 Tbsp WALNUTS", "70 tsp PECANS", "78 Tbsp VINEGAR", "64 tsp VANILLA", "97 Tbsp OATS", "67 cups SOURCREAM", "18 tsp WATER", "9 cups CORNFLOUR", "1 cups GINGER", "39 tsp GARLIC", "72 tsp PARSLEY"};
    vector<string> mixingBowl = {"91 Tbsp PEPPER", "75 Tbsp CHESTNUTS", "44 Tbsp WATER"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"536 cups BAYLEAVES", "12 cups 8 Tbsp CHEESE", "10 cups 8 Tbsp SAGE", "26 cups CLOVES", "770 cups 5 Tbsp PEPPER", "1 cups 13 Tbsp CHESTNUTS", "296 cups EGGS", "3 cups CHOCOLATE", "6 cups 13 Tbsp 1 tsp CINNAMON", "11 cups 8 Tbsp WALNUTS", "11 cups 10 Tbsp 2 tsp PECANS", "39 cups VINEGAR", "10 cups 10 Tbsp 2 tsp VANILLA", "48 cups 8 Tbsp OATS", "536 cups SOURCREAM", "4 Tbsp WATER", "72 cups CORNFLOUR", "8 cups GINGER", "6 cups 8 Tbsp GARLIC", "12 cups PARSLEY"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> recipe = {"13 tsp CHESTNUTS", "37 Tbsp GINGER", "17 cups EGGS", "83 tsp CHIVES", "11 cups VANILLA", "94 tsp NUTMEG", "56 cups CLOVES", "49 Tbsp WALNUTS", "64 tsp FLOUR", "40 tsp GARLIC", "72 tsp CHEESE", "91 tsp CREAMCHEESE", "5 cups PARSLEY", "18 cups ALMONDS", "35 Tbsp MUSTARD"};
    vector<string> mixingBowl = {"19 Tbsp CHIVES", "5 tsp WALNUTS", "8 Tbsp FLOUR", "16 Tbsp CLOVES", "33 Tbsp VANILLA", "65 cups MUSTARD"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8 cups 2 Tbsp CHESTNUTS", "69 cups 6 Tbsp GINGER", "510 cups EGGS", "50 cups 11 Tbsp CHIVES", "327 cups 15 Tbsp VANILLA", "58 cups 12 Tbsp NUTMEG", "1679 cups CLOVES", "91 cups 12 Tbsp 1 tsp WALNUTS", "39 cups 8 Tbsp FLOUR", "25 cups GARLIC", "45 cups CHEESE", "56 cups 14 Tbsp CREAMCHEESE", "150 cups PARSLEY", "540 cups ALMONDS", "10 Tbsp MUSTARD"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> recipe = {"90 Tbsp ROSEMARY", "79 cups MAYONAISE", "66 Tbsp PARSLEY", "67 tsp FLOUR", "61 tsp BAYLEAVES", "78 tsp CLOVES", "88 cups CORNSYRUP", "34 Tbsp CORNFLOUR", "23 tsp SALT", "78 Tbsp BAKINGSODA", "68 tsp CHEESE", "34 cups PECANS", "64 tsp PEAS", "93 cups BASIL", "12 tsp KETCHUP", "91 Tbsp ONION", "62 Tbsp PEPPER", "86 tsp CINNAMON", "87 cups BAKINGPOWDER", "58 cups SOURCREAM", "28 tsp ALMONDS", "46 Tbsp SOYSAUCE", "74 Tbsp RICE", "27 Tbsp CORNMEAL", "34 cups CREAMCHEESE", "33 tsp OATS", "27 Tbsp CORN", "12 Tbsp VANILLA", "67 Tbsp SUGAR", "70 cups CORNSTARCH", "77 cups TOMATO", "63 tsp NUTMEG", "92 tsp MUSTARD", "91 cups BUTTER", "69 Tbsp THYME", "87 Tbsp CELERY", "45 cups CHIVES"};
    vector<string> mixingBowl = {"49 Tbsp BAKINGSODA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5 cups 10 Tbsp ROSEMARY", "79 cups MAYONAISE", "4 cups 2 Tbsp PARSLEY", "1 cups 6 Tbsp 1 tsp FLOUR", "1 cups 4 Tbsp 1 tsp BAYLEAVES", "1 cups 10 Tbsp CLOVES", "88 cups CORNSYRUP", "2 cups 2 Tbsp CORNFLOUR", "7 Tbsp 2 tsp SALT", "1 cups 13 Tbsp BAKINGSODA", "1 cups 6 Tbsp 2 tsp CHEESE", "34 cups PECANS", "1 cups 5 Tbsp 1 tsp PEAS", "93 cups BASIL", "4 Tbsp KETCHUP", "5 cups 11 Tbsp ONION", "3 cups 14 Tbsp PEPPER", "1 cups 12 Tbsp 2 tsp CINNAMON", "87 cups BAKINGPOWDER", "58 cups SOURCREAM", "9 Tbsp 1 tsp ALMONDS", "2 cups 14 Tbsp SOYSAUCE", "4 cups 10 Tbsp RICE", "1 cups 11 Tbsp CORNMEAL", "34 cups CREAMCHEESE", "11 Tbsp OATS", "1 cups 11 Tbsp CORN", "12 Tbsp VANILLA", "4 cups 3 Tbsp SUGAR", "70 cups CORNSTARCH", "77 cups TOMATO", "1 cups 5 Tbsp NUTMEG", "1 cups 14 Tbsp 2 tsp MUSTARD", "91 cups BUTTER", "4 cups 5 Tbsp THYME", "5 cups 7 Tbsp CELERY", "45 cups CHIVES"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> recipe = {"69 tsp BAYLEAVES", "88 tsp BASIL", "34 Tbsp CLOVES", "25 Tbsp ALMONDS", "83 tsp BAKINGSODA", "77 Tbsp SAGE", "78 Tbsp PECANS", "32 Tbsp CELERY", "49 Tbsp CORN", "62 cups RICE", "42 tsp CHEESE", "81 cups KETCHUP", "42 cups SPINACH", "58 cups NUTMEG", "14 tsp SUGAR", "27 Tbsp PAPRIKA", "81 cups WATER", "8 tsp MUSTARD", "16 cups YEAST", "76 tsp EGGS", "34 cups ONION", "59 tsp GARLIC"};
    vector<string> mixingBowl = {"9 Tbsp PECANS", "21 cups SAGE", "64 tsp KETCHUP", "81 tsp NUTMEG", "27 tsp BAKINGSODA", "9 Tbsp WATER", "45 tsp GARLIC", "6 tsp SPINACH", "26 cups ONION", "71 cups BASIL", "72 Tbsp CHEESE", "29 tsp RICE", "74 tsp CLOVES", "60 cups ALMONDS", "75 tsp YEAST", "33 tsp EGGS", "96 tsp PAPRIKA", "89 Tbsp SUGAR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"56 cups 1 Tbsp BAYLEAVES", "8 Tbsp BASIL", "81 cups 5 Tbsp 1 tsp CLOVES", "15 Tbsp ALMONDS", "66 cups 14 Tbsp BAKINGSODA", "166 cups 11 Tbsp SAGE", "189 cups 9 Tbsp PECANS", "78 cups CELERY", "119 cups 7 Tbsp CORN", "2417 cups 6 Tbsp 1 tsp RICE", "29 cups 10 Tbsp CHEESE", "3157 cups 10 Tbsp 2 tsp KETCHUP", "1637 cups 14 Tbsp SPINACH", "2260 cups 5 Tbsp NUTMEG", "5 cups 13 Tbsp SUGAR", "63 cups 13 Tbsp PAPRIKA", "3158 cups 7 Tbsp WATER", "6 cups 8 Tbsp MUSTARD", "622 cups 7 Tbsp YEAST", "61 cups 1 Tbsp EGGS", "1300 cups ONION", "47 cups GARLIC"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> recipe = {"82 cups PAPRIKA", "50 tsp CHEESE", "44 tsp BASIL", "85 Tbsp THYME", "23 cups PECANS", "18 cups PEPPER", "58 cups GARLIC", "32 tsp SOURCREAM", "28 cups ROSEMARY", "21 cups YEAST", "35 cups CLOVES", "91 tsp PARSLEY", "79 cups TOMATO", "25 Tbsp CORNMEAL", "48 Tbsp MUSTARD", "63 Tbsp SOYSAUCE", "82 Tbsp WATER", "65 Tbsp SUGAR", "12 tsp BAYLEAVES", "90 cups RICE", "6 cups WALNUTS", "74 cups CINNAMON", "70 tsp MILK", "44 Tbsp BAKINGSODA", "80 Tbsp GINGER", "10 Tbsp ONION", "66 tsp VINEGAR", "5 tsp CORNSTARCH", "5 Tbsp CORNSYRUP", "63 Tbsp OATS", "19 cups SPINACH", "41 cups CHIVES"};
    vector<string> mixingBowl = {"68 cups CORNSYRUP", "73 Tbsp PEPPER", "98 cups MILK", "1 cups WALNUTS", "7 cups CHIVES", "89 tsp CINNAMON", "76 cups THYME", "50 tsp SOURCREAM", "76 tsp BAYLEAVES", "91 tsp CHEESE", "89 tsp OATS", "1 Tbsp TOMATO", "29 cups ONION", "94 tsp ROSEMARY", "56 Tbsp PECANS"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"17876 cups PAPRIKA", "225 cups 3 Tbsp CHEESE", "199 cups 13 Tbsp 1 tsp BASIL", "1082 cups 2 Tbsp THYME", "5010 cups 8 Tbsp PECANS", "3919 cups 7 Tbsp PEPPER", "12644 cups GARLIC", "144 cups 4 Tbsp 2 tsp SOURCREAM", "6102 cups 2 tsp ROSEMARY", "4578 cups YEAST", "7630 cups CLOVES", "413 cups 4 Tbsp 2 tsp PARSLEY", "17221 cups 15 Tbsp TOMATO", "340 cups 10 Tbsp CORNMEAL", "654 cups MUSTARD", "858 cups 6 Tbsp SOYSAUCE", "1117 cups 4 Tbsp WATER", "885 cups 10 Tbsp SUGAR", "52 cups 14 Tbsp 2 tsp BAYLEAVES", "19620 cups RICE", "1307 cups WALNUTS", "16130 cups 2 Tbsp 1 tsp CINNAMON", "219 cups 14 Tbsp 2 tsp MILK", "599 cups 8 Tbsp BAKINGSODA", "1090 cups GINGER", "107 cups 4 Tbsp ONION", "299 cups 12 Tbsp VINEGAR", "22 cups 11 Tbsp 1 tsp CORNSTARCH", "2 Tbsp CORNSYRUP", "856 cups 8 Tbsp 1 tsp OATS", "4142 cups SPINACH", "8931 cups CHIVES"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> recipe = {"28 Tbsp BAKINGPOWDER", "4 cups CELERY", "36 Tbsp CORNSYRUP", "18 Tbsp GARLIC", "30 Tbsp ONION", "89 Tbsp CHESTNUTS", "79 tsp SAGE", "71 cups SPINACH", "32 cups MILK", "30 tsp TOMATO", "58 Tbsp BAYLEAVES", "75 cups WALNUTS", "6 tsp GINGER", "3 tsp CORNSTARCH", "14 tsp CORNMEAL", "47 cups WATER", "61 tsp RICE", "76 Tbsp BASIL", "7 cups CHOCOLATE", "80 cups KETCHUP", "22 cups SOYSAUCE", "49 Tbsp OATS", "80 Tbsp PAPRIKA", "19 cups CORN", "15 tsp PEAS", "58 tsp CORNFLOUR", "19 tsp FLOUR", "88 tsp BAKINGSODA", "77 tsp VINEGAR", "19 tsp CLOVES", "68 tsp CHIVES", "40 Tbsp THYME", "90 cups CHEESE", "94 tsp MUSTARD", "17 cups PEPPER", "51 cups BUTTER", "19 tsp YEAST", "56 cups MAYONAISE", "56 tsp CREAMCHEESE", "38 tsp SUGAR", "45 tsp ALMONDS", "58 Tbsp EGGS", "95 Tbsp SOURCREAM", "10 Tbsp PECANS", "45 tsp CINNAMON"};
    vector<string> mixingBowl = {"21 cups CHOCOLATE", "66 Tbsp PEAS", "69 Tbsp CHIVES", "53 tsp CORNFLOUR", "45 Tbsp BAYLEAVES", "34 cups CHESTNUTS", "9 cups FLOUR", "51 Tbsp OATS", "45 Tbsp SOURCREAM", "80 Tbsp MILK", "48 tsp SOYSAUCE", "38 tsp CORN", "43 Tbsp MUSTARD", "76 tsp CINNAMON", "33 Tbsp CHEESE", "9 Tbsp CORNMEAL", "3 tsp THYME", "45 cups GARLIC", "99 Tbsp CORNSYRUP", "41 cups BAKINGSODA", "31 tsp BUTTER", "54 cups RICE", "14 Tbsp WALNUTS", "47 Tbsp PEPPER", "51 Tbsp GINGER", "7 cups SUGAR", "94 cups ONION", "45 tsp BAKINGPOWDER", "94 tsp PECANS", "45 Tbsp SPINACH", "2 Tbsp CORNSTARCH", "30 Tbsp WATER", "48 cups ALMONDS", "37 tsp EGGS", "90 cups MAYONAISE", "51 Tbsp CELERY", "97 Tbsp YEAST", "75 Tbsp CREAMCHEESE", "49 cups VINEGAR", "85 Tbsp TOMATO", "7 Tbsp PAPRIKA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"90 cups 1 Tbsp BAKINGPOWDER", "204 cups 13 Tbsp CELERY", "110 cups 13 Tbsp CORNSYRUP", "13 cups 8 Tbsp GARLIC", "3 cups 8 Tbsp ONION", "255 cups 4 Tbsp CHESTNUTS", "85 cups 9 Tbsp 1 tsp SAGE", "3689 cups 3 Tbsp SPINACH", "1659 cups MILK", "27 cups 3 Tbsp TOMATO", "185 cups 11 Tbsp BAYLEAVES", "3899 cups 2 Tbsp WALNUTS", "3 cups 5 Tbsp GINGER", "3 cups 2 Tbsp CORNSTARCH", "14 cups 9 Tbsp 2 tsp CORNMEAL", "2442 cups 2 Tbsp WATER", "12 cups 1 Tbsp 1 tsp RICE", "247 cups BASIL", "343 cups CHOCOLATE", "4160 cups KETCHUP", "1143 cups SOYSAUCE", "156 cups 1 Tbsp OATS", "259 cups 9 Tbsp PAPRIKA", "987 cups 3 Tbsp 1 tsp CORN", "12 cups 2 Tbsp PEAS", "61 cups 11 Tbsp 2 tsp CORNFLOUR", "11 cups 9 Tbsp 1 tsp FLOUR", "54 cups 5 Tbsp 1 tsp BAKINGSODA", "34 cups 6 Tbsp 2 tsp VINEGAR", "20 cups 9 Tbsp 1 tsp CLOVES", "69 cups 5 Tbsp 2 tsp CHIVES", "129 cups 15 Tbsp THYME", "4677 cups 15 Tbsp CHEESE", "99 cups 2 Tbsp 1 tsp MUSTARD", "881 cups 1 Tbsp PEPPER", "2651 cups 5 Tbsp 2 tsp BUTTER", "14 cups 8 Tbsp 1 tsp YEAST", "2822 cups MAYONAISE", "55 cups 15 Tbsp 2 tsp CREAMCHEESE", "34 cups 2 Tbsp 2 tsp SUGAR", "12 Tbsp ALMONDS", "187 cups 11 Tbsp 2 tsp EGGS", "305 cups 15 Tbsp SOURCREAM", "30 cups 8 Tbsp 2 tsp PECANS", "47 cups 2 Tbsp 2 tsp CINNAMON"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> recipe = {"88 Tbsp PARSLEY", "6 Tbsp VANILLA", "31 Tbsp VINEGAR"};
    vector<string> mixingBowl = {"23 Tbsp VINEGAR", "38 cups PARSLEY", "5 Tbsp VANILLA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8 Tbsp PARSLEY", "2 cups 5 Tbsp VANILLA", "12 cups 2 Tbsp VINEGAR"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> recipe = {"30 cups CORNSYRUP", "47 tsp SOYSAUCE", "83 Tbsp BAYLEAVES", "92 tsp CLOVES", "78 Tbsp KETCHUP", "22 cups PARSLEY", "71 tsp PEAS", "44 cups CINNAMON", "56 cups CORN", "58 cups MAYONAISE", "54 tsp RICE", "15 tsp SPINACH", "38 cups YEAST", "95 tsp PAPRIKA", "38 tsp OATS"};
    vector<string> mixingBowl = {"92 Tbsp CINNAMON", "66 tsp PARSLEY", "68 cups PEAS", "42 cups CLOVES", "51 Tbsp KETCHUP", "90 Tbsp CORNSYRUP", "18 cups SOYSAUCE", "25 cups CORN", "63 tsp OATS"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1374 cups 6 Tbsp CORNSYRUP", "27 cups 2 tsp SOYSAUCE", "238 cups 10 Tbsp BAYLEAVES", "46 cups 2 Tbsp 2 tsp CLOVES", "221 cups 1 Tbsp KETCHUP", "1010 cups 10 Tbsp PARSLEY", "2 tsp PEAS", "2018 cups 4 Tbsp CINNAMON", "2551 cups CORN", "2668 cups MAYONAISE", "51 cups 12 Tbsp RICE", "14 cups 6 Tbsp SPINACH", "1748 cups YEAST", "91 cups 2 tsp PAPRIKA", "35 cups 1 Tbsp 2 tsp OATS"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> recipe = {"7 Tbsp SAGE", "62 cups ROSEMARY", "13 cups CORN", "15 tsp SALT", "81 Tbsp OATS", "70 cups CHEESE", "43 tsp CORNSYRUP", "42 cups CELERY", "14 Tbsp CREAMCHEESE", "97 Tbsp WATER", "74 cups MUSTARD", "84 cups MAYONAISE", "16 cups CLOVES", "92 cups PEPPER", "99 tsp BAKINGPOWDER", "32 tsp NUTMEG", "71 cups CINNAMON", "67 cups EGGS", "22 tsp CHIVES", "48 tsp BAKINGSODA", "61 tsp CHESTNUTS", "17 tsp WALNUTS", "55 tsp RICE", "93 Tbsp MILK", "2 cups CORNFLOUR", "22 Tbsp FLOUR", "18 tsp VANILLA", "72 tsp THYME", "80 cups PECANS", "5 cups BASIL", "86 tsp SOURCREAM", "25 cups PEAS", "98 tsp ONION", "64 Tbsp SPINACH", "71 tsp CORNMEAL", "91 Tbsp BAYLEAVES", "37 cups SUGAR", "70 cups GINGER", "9 tsp ALMONDS", "27 Tbsp KETCHUP", "9 tsp BUTTER", "35 Tbsp PAPRIKA", "92 tsp VINEGAR", "47 tsp PARSLEY", "34 Tbsp SOYSAUCE", "1 cups CHOCOLATE", "45 tsp TOMATO", "41 cups CORNSTARCH", "66 Tbsp YEAST", "24 cups GARLIC"};
    vector<string> mixingBowl = {"39 tsp SALT", "51 cups EGGS", "75 Tbsp CHEESE", "96 tsp OATS", "60 tsp CORNSYRUP", "26 tsp MILK", "87 tsp CLOVES", "15 cups CORNFLOUR", "78 Tbsp THYME", "82 cups GINGER", "9 cups PAPRIKA", "22 Tbsp MAYONAISE", "33 tsp SUGAR", "74 tsp BAYLEAVES", "4 Tbsp CREAMCHEESE", "72 Tbsp BAKINGSODA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3 cups 8 Tbsp SAGE", "496 cups ROSEMARY", "104 cups CORN", "1 cups 11 Tbsp SALT", "38 cups 8 Tbsp OATS", "555 cups 5 Tbsp CHEESE", "5 cups 14 Tbsp 2 tsp CORNSYRUP", "336 cups CELERY", "6 cups 12 Tbsp CREAMCHEESE", "48 cups 8 Tbsp WATER", "592 cups MUSTARD", "670 cups 10 Tbsp MAYONAISE", "126 cups 3 Tbsp CLOVES", "736 cups PEPPER", "16 cups 8 Tbsp BAKINGPOWDER", "5 cups 5 Tbsp 1 tsp NUTMEG", "568 cups CINNAMON", "485 cups EGGS", "3 cups 10 Tbsp 2 tsp CHIVES", "3 cups 8 Tbsp BAKINGSODA", "10 cups 2 Tbsp 2 tsp CHESTNUTS", "2 cups 13 Tbsp 1 tsp WALNUTS", "9 cups 2 Tbsp 2 tsp RICE", "45 cups 15 Tbsp 1 tsp MILK", "1 cups CORNFLOUR", "11 cups FLOUR", "3 cups VANILLA", "7 cups 2 Tbsp THYME", "640 cups PECANS", "40 cups BASIL", "14 cups 5 Tbsp 1 tsp SOURCREAM", "200 cups PEAS", "16 cups 5 Tbsp 1 tsp ONION", "32 cups SPINACH", "11 cups 13 Tbsp 1 tsp CORNMEAL", "43 cups 15 Tbsp 1 tsp BAYLEAVES", "295 cups 5 Tbsp SUGAR", "478 cups GINGER", "1 cups 8 Tbsp ALMONDS", "13 cups 8 Tbsp KETCHUP", "1 cups 8 Tbsp BUTTER", "8 cups 8 Tbsp PAPRIKA", "15 cups 5 Tbsp 1 tsp VINEGAR", "7 cups 13 Tbsp 1 tsp PARSLEY", "17 cups SOYSAUCE", "8 cups CHOCOLATE", "7 cups 8 Tbsp TOMATO", "328 cups CORNSTARCH", "33 cups YEAST", "192 cups GARLIC"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> recipe = {"43 tsp BASIL", "35 cups NUTMEG", "31 Tbsp GARLIC", "27 Tbsp SALT", "11 Tbsp CORNFLOUR", "31 tsp BAKINGPOWDER", "3 Tbsp VANILLA", "11 Tbsp WALNUTS"};
    vector<string> mixingBowl = {"89 cups BASIL", "34 cups BAKINGPOWDER", "80 Tbsp WALNUTS", "29 cups CORNFLOUR", "76 Tbsp GARLIC", "47 Tbsp VANILLA", "28 cups SALT"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"9 Tbsp 1 tsp BASIL", "3500 cups NUTMEG", "189 cups GARLIC", "140 cups 12 Tbsp SALT", "39 cups 12 Tbsp CORNFLOUR", "30 cups 9 Tbsp 1 tsp BAKINGPOWDER", "15 cups 13 Tbsp VANILLA", "63 cups 12 Tbsp WALNUTS"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> recipe = {"72 Tbsp WALNUTS", "98 cups ONION", "3 tsp PEAS", "29 tsp VANILLA", "41 cups PAPRIKA", "89 tsp CELERY", "95 tsp NUTMEG", "99 tsp PARSLEY", "39 Tbsp CINNAMON", "89 tsp CHOCOLATE", "59 tsp CORN", "98 tsp ROSEMARY", "37 tsp CHESTNUTS", "31 Tbsp EGGS", "15 Tbsp TOMATO", "49 tsp SPINACH", "40 tsp SAGE", "93 tsp GINGER", "16 Tbsp SUGAR", "98 cups BAKINGPOWDER", "58 Tbsp RICE", "27 cups CREAMCHEESE", "4 tsp CORNSTARCH"};
    vector<string> mixingBowl = {"84 cups SAGE", "7 cups CHOCOLATE", "92 Tbsp SPINACH", "95 Tbsp GINGER", "76 cups ROSEMARY"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"454 cups 8 Tbsp WALNUTS", "9898 cups ONION", "6 cups 5 Tbsp PEAS", "61 cups 1 tsp VANILLA", "4141 cups PAPRIKA", "187 cups 4 Tbsp 1 tsp CELERY", "199 cups 14 Tbsp 1 tsp NUTMEG", "208 cups 5 Tbsp PARSLEY", "246 cups 3 Tbsp CINNAMON", "180 cups 4 Tbsp 1 tsp CHOCOLATE", "124 cups 2 Tbsp 1 tsp CORN", "130 cups 3 Tbsp 1 tsp ROSEMARY", "77 cups 13 Tbsp 2 tsp CHESTNUTS", "195 cups 11 Tbsp EGGS", "94 cups 11 Tbsp TOMATO", "97 cups 5 Tbsp 2 tsp SPINACH", "2 Tbsp 2 tsp SAGE", "189 cups 12 Tbsp GINGER", "101 cups SUGAR", "9898 cups BAKINGPOWDER", "366 cups 2 Tbsp RICE", "2727 cups CREAMCHEESE", "8 cups 6 Tbsp 2 tsp CORNSTARCH"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> recipe = {"86 Tbsp SUGAR", "98 tsp ONION", "54 cups VINEGAR", "6 cups CORNFLOUR", "24 tsp CHIVES", "93 cups NUTMEG", "95 tsp SOYSAUCE", "11 Tbsp MAYONAISE", "22 cups ALMONDS", "25 tsp CHEESE", "6 cups BAYLEAVES", "24 tsp OATS", "91 Tbsp CHESTNUTS", "23 tsp PARSLEY", "66 tsp SPINACH", "52 tsp EGGS", "25 cups RICE", "77 Tbsp CELERY", "56 cups CORNSYRUP", "79 tsp FLOUR", "78 Tbsp WATER", "82 Tbsp SAGE", "72 tsp GINGER", "38 tsp MUSTARD", "36 tsp THYME", "40 Tbsp TOMATO", "32 Tbsp CINNAMON", "34 cups CHOCOLATE", "90 Tbsp KETCHUP", "29 cups CREAMCHEESE", "86 Tbsp YEAST", "64 tsp BAKINGSODA", "22 tsp PEAS", "7 tsp CORNMEAL"};
    vector<string> mixingBowl = {"25 Tbsp PEAS", "45 cups THYME", "70 Tbsp WATER", "86 cups CHEESE", "87 cups MAYONAISE", "57 Tbsp CORNFLOUR", "23 cups CHOCOLATE", "25 tsp TOMATO", "93 Tbsp CORNMEAL", "97 tsp CHESTNUTS", "10 tsp NUTMEG", "15 tsp GINGER", "47 cups CHIVES", "62 cups CREAMCHEESE", "33 tsp OATS", "47 Tbsp BAYLEAVES", "30 Tbsp FLOUR", "84 tsp SPINACH", "91 tsp CINNAMON", "98 Tbsp BAKINGSODA", "30 Tbsp SUGAR", "61 Tbsp RICE", "21 tsp EGGS", "2 Tbsp PARSLEY", "41 cups MUSTARD", "9 cups VINEGAR", "65 tsp SAGE", "30 cups SOYSAUCE", "88 cups ALMONDS", "83 Tbsp ONION"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"890 cups 6 Tbsp SUGAR", "333 cups 11 Tbsp 2 tsp ONION", "8955 cups VINEGAR", "992 cups 7 Tbsp CORNFLOUR", "36 cups CHIVES", "15437 cups 12 Tbsp 2 tsp NUTMEG", "298 cups 8 Tbsp 2 tsp SOYSAUCE", "27 cups 2 Tbsp MAYONAISE", "3564 cups ALMONDS", "7 Tbsp 1 tsp CHEESE", "993 cups 1 Tbsp BAYLEAVES", "82 cups 5 Tbsp OATS", "942 cups 1 Tbsp 2 tsp CHESTNUTS", "79 cups 6 Tbsp 2 tsp PARSLEY", "226 cups 8 Tbsp SPINACH", "179 cups 6 Tbsp 1 tsp EGGS", "4146 cups 3 Tbsp RICE", "798 cups 14 Tbsp CELERY", "9296 cups CORNSYRUP", "271 cups 5 Tbsp 1 tsp FLOUR", "804 cups 14 Tbsp WATER", "849 cups 6 Tbsp 1 tsp SAGE", "248 cups 11 Tbsp GINGER", "90 cups 6 Tbsp 2 tsp MUSTARD", "79 cups 8 Tbsp THYME", "414 cups 7 Tbsp 2 tsp TOMATO", "330 cups 1 Tbsp 2 tsp CINNAMON", "5621 cups CHOCOLATE", "933 cups 12 Tbsp KETCHUP", "4752 cups CREAMCHEESE", "892 cups 4 Tbsp YEAST", "215 cups 3 Tbsp 1 tsp BAKINGSODA", "74 cups 8 Tbsp 1 tsp PEAS", "18 cups 6 Tbsp 1 tsp CORNMEAL"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> recipe = {"76 Tbsp SPINACH", "36 Tbsp YEAST", "58 tsp ONION", "53 tsp PECANS", "48 Tbsp FLOUR", "57 tsp GINGER", "16 cups MUSTARD", "76 Tbsp CORNFLOUR"};
    vector<string> mixingBowl = {"5 Tbsp FLOUR", "29 Tbsp SPINACH"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 cups 15 Tbsp SPINACH", "2 cups 4 Tbsp YEAST", "1 cups 3 Tbsp 1 tsp ONION", "1 cups 1 Tbsp 2 tsp PECANS", "2 cups 11 Tbsp FLOUR", "1 cups 3 Tbsp GINGER", "16 cups MUSTARD", "4 cups 12 Tbsp CORNFLOUR"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> recipe = {"71 Tbsp OATS", "77 tsp CHIVES", "98 cups MAYONAISE", "32 tsp PAPRIKA", "22 cups PARSLEY", "9 tsp SOYSAUCE", "89 cups CORNFLOUR", "76 Tbsp BAYLEAVES", "55 tsp TOMATO", "19 cups BUTTER", "44 tsp CHEESE", "10 cups YEAST", "42 cups CORN", "22 cups EGGS", "52 tsp BAKINGSODA", "55 tsp THYME", "16 cups KETCHUP", "65 tsp MILK", "74 cups ROSEMARY", "29 cups CREAMCHEESE", "64 tsp NUTMEG", "88 cups CORNSYRUP", "79 Tbsp SUGAR", "27 Tbsp VANILLA", "90 cups WALNUTS", "93 tsp SOURCREAM", "89 cups CELERY", "59 cups ONION", "17 cups SPINACH", "35 tsp CORNMEAL", "71 cups RICE", "29 Tbsp VINEGAR", "13 Tbsp FLOUR"};
    vector<string> mixingBowl = {"51 Tbsp OATS", "11 cups TOMATO", "40 cups FLOUR", "37 Tbsp CORNMEAL", "48 Tbsp VANILLA", "44 cups EGGS", "81 cups ONION", "48 tsp SOYSAUCE", "35 cups MAYONAISE", "90 Tbsp VINEGAR", "9 tsp PAPRIKA", "24 Tbsp THYME", "3 Tbsp RICE", "16 cups CHEESE", "51 cups CORNFLOUR", "72 Tbsp MILK", "51 cups KETCHUP", "63 tsp PARSLEY"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"218 cups 11 Tbsp OATS", "80 cups 3 Tbsp 1 tsp CHIVES", "4865 cups MAYONAISE", "33 cups 2 Tbsp 1 tsp PAPRIKA", "1098 cups 11 Tbsp PARSLEY", "8 cups 6 Tbsp SOYSAUCE", "4399 cups CORNFLOUR", "237 cups 8 Tbsp BAYLEAVES", "46 cups 4 Tbsp 2 tsp TOMATO", "950 cups BUTTER", "29 cups 13 Tbsp 1 tsp CHEESE", "500 cups YEAST", "2100 cups CORN", "1056 cups EGGS", "54 cups 2 Tbsp 2 tsp BAKINGSODA", "55 cups 12 Tbsp 2 tsp THYME", "749 cups KETCHUP", "63 cups 3 Tbsp 1 tsp MILK", "3700 cups ROSEMARY", "1450 cups CREAMCHEESE", "66 cups 10 Tbsp 2 tsp NUTMEG", "4400 cups CORNSYRUP", "246 cups 14 Tbsp SUGAR", "81 cups 6 Tbsp VANILLA", "4500 cups WALNUTS", "96 cups 14 Tbsp SOURCREAM", "4450 cups CELERY", "2869 cups ONION", "850 cups SPINACH", "34 cups 2 Tbsp 1 tsp CORNMEAL", "3549 cups 13 Tbsp RICE", "85 cups VINEGAR", "10 Tbsp FLOUR"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> recipe = {"63 Tbsp FLOUR", "40 tsp BAYLEAVES", "99 cups CELERY", "42 tsp GARLIC", "39 Tbsp RICE", "57 tsp MUSTARD", "74 cups PEPPER", "19 Tbsp OATS", "6 tsp SPINACH", "24 tsp ROSEMARY", "95 cups CORNSYRUP", "98 tsp YEAST", "82 cups PEAS", "38 Tbsp BASIL", "93 tsp CREAMCHEESE", "26 tsp CORNMEAL", "46 tsp CHESTNUTS", "88 tsp CHEESE", "69 cups BAKINGPOWDER", "93 cups BAKINGSODA", "93 Tbsp SUGAR", "68 cups THYME", "47 cups CLOVES", "6 cups PARSLEY", "50 Tbsp VANILLA", "77 Tbsp SALT", "63 tsp VINEGAR", "96 tsp ONION", "50 tsp CHOCOLATE", "72 cups SOURCREAM", "38 Tbsp ALMONDS", "13 cups WATER", "3 cups EGGS", "29 cups SAGE", "13 cups CORNSTARCH", "42 cups BUTTER", "4 cups MAYONAISE", "22 Tbsp CORNFLOUR", "66 Tbsp SOYSAUCE", "9 Tbsp CORN", "81 cups GINGER", "85 Tbsp PECANS", "18 tsp MILK", "30 Tbsp CHIVES", "25 cups KETCHUP"};
    vector<string> mixingBowl = {"34 tsp MUSTARD", "14 Tbsp WATER", "12 cups CLOVES", "77 Tbsp YEAST", "86 Tbsp CORNMEAL", "16 tsp MILK", "81 tsp SAGE", "16 tsp THYME"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"39 cups 6 Tbsp FLOUR", "8 cups 5 Tbsp 1 tsp BAYLEAVES", "990 cups CELERY", "8 cups 12 Tbsp GARLIC", "24 cups 6 Tbsp RICE", "11 cups 2 Tbsp 2 tsp MUSTARD", "740 cups PEPPER", "11 cups 14 Tbsp OATS", "1 cups 4 Tbsp SPINACH", "5 cups ROSEMARY", "950 cups CORNSYRUP", "15 cups 9 Tbsp 2 tsp YEAST", "820 cups PEAS", "23 cups 12 Tbsp BASIL", "19 cups 6 Tbsp CREAMCHEESE", "2 tsp CORNMEAL", "9 cups 9 Tbsp 1 tsp CHESTNUTS", "18 cups 5 Tbsp 1 tsp CHEESE", "690 cups BAKINGPOWDER", "930 cups BAKINGSODA", "58 cups 2 Tbsp SUGAR", "679 cups 10 Tbsp 2 tsp THYME", "458 cups CLOVES", "60 cups PARSLEY", "31 cups 4 Tbsp VANILLA", "48 cups 2 Tbsp SALT", "13 cups 2 Tbsp VINEGAR", "20 cups ONION", "10 cups 6 Tbsp 2 tsp CHOCOLATE", "720 cups SOURCREAM", "23 cups 12 Tbsp ALMONDS", "129 cups 2 Tbsp WATER", "30 cups EGGS", "288 cups 5 Tbsp SAGE", "130 cups CORNSTARCH", "420 cups BUTTER", "40 cups MAYONAISE", "13 cups 12 Tbsp CORNFLOUR", "41 cups 4 Tbsp SOYSAUCE", "5 cups 10 Tbsp CORN", "810 cups GINGER", "53 cups 2 Tbsp PECANS", "3 cups 6 Tbsp 2 tsp MILK", "18 cups 12 Tbsp CHIVES", "250 cups KETCHUP"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> recipe = {"11 cups ONION", "62 tsp SPINACH", "33 Tbsp BUTTER", "74 Tbsp CORNMEAL", "44 cups EGGS", "53 Tbsp CELERY", "40 cups WALNUTS", "15 Tbsp GINGER", "58 Tbsp ALMONDS", "9 tsp RICE", "34 tsp CHESTNUTS", "5 tsp PAPRIKA", "54 cups CORNSYRUP", "64 tsp CORNSTARCH", "18 tsp BAYLEAVES", "93 cups GARLIC", "25 tsp CORNFLOUR", "24 cups YEAST", "93 cups NUTMEG", "74 cups PEPPER", "25 cups SUGAR", "40 Tbsp MAYONAISE", "45 Tbsp BASIL", "85 Tbsp VANILLA", "79 tsp PECANS", "69 Tbsp CHEESE", "77 cups SOURCREAM", "53 tsp SALT", "42 Tbsp CHOCOLATE", "29 tsp MILK", "13 cups PEAS", "3 tsp VINEGAR", "28 tsp PARSLEY", "12 tsp CREAMCHEESE"};
    vector<string> mixingBowl = {"72 tsp MILK", "70 cups BASIL", "88 Tbsp CORNMEAL", "47 cups VINEGAR", "36 cups CORNSTARCH", "95 cups YEAST", "27 Tbsp PARSLEY", "66 Tbsp PAPRIKA", "92 cups NUTMEG", "40 cups SALT", "95 cups ONION", "55 tsp CHESTNUTS", "34 tsp VANILLA", "44 Tbsp CORNSYRUP", "51 cups PECANS", "57 Tbsp SUGAR", "35 Tbsp MAYONAISE", "68 tsp RICE", "65 cups PEAS", "57 cups BUTTER", "8 cups ALMONDS", "83 Tbsp PEPPER", "98 cups WALNUTS", "5 cups CREAMCHEESE", "74 Tbsp BAYLEAVES", "94 cups EGGS", "37 Tbsp CHOCOLATE", "91 Tbsp CORNFLOUR", "77 tsp SOURCREAM", "70 tsp GARLIC", "25 tsp SPINACH", "93 Tbsp CELERY"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"8177 cups ONION", "970 cups 13 Tbsp SPINACH", "1494 cups BUTTER", "3472 cups 8 Tbsp CORNMEAL", "32994 cups EGGS", "2485 cups 3 Tbsp CELERY", "29982 cups WALNUTS", "705 cups GINGER", "2718 cups ALMONDS", "139 cups 9 Tbsp 1 tsp RICE", "531 cups 8 Tbsp 1 tsp CHESTNUTS", "74 cups 3 Tbsp 1 tsp PAPRIKA", "40605 cups 4 Tbsp CORNSYRUP", "966 cups 10 Tbsp 2 tsp CORNSTARCH", "277 cups 6 Tbsp BAYLEAVES", "69934 cups 8 Tbsp 2 tsp GARLIC", "385 cups 15 Tbsp 2 tsp CORNFLOUR", "17953 cups YEAST", "69844 cups NUTMEG", "55642 cups 13 Tbsp PEPPER", "18796 cups 7 Tbsp SUGAR", "1877 cups 13 Tbsp MAYONAISE", "2045 cups BASIL", "3994 cups 4 Tbsp 2 tsp VANILLA", "1186 cups 10 Tbsp 2 tsp PECANS", "3243 cups CHEESE", "57902 cups 6 Tbsp 1 tsp SOURCREAM", "790 cups 5 Tbsp 1 tsp SALT", "1971 cups 11 Tbsp CHOCOLATE", "452 cups 13 Tbsp 1 tsp MILK", "9711 cups PEAS", "436 cups 15 Tbsp 2 tsp PARSLEY", "183 cups CREAMCHEESE"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> recipe = {"75 cups SALT", "85 cups SPINACH", "30 cups MAYONAISE", "94 Tbsp SAGE", "13 Tbsp SOYSAUCE", "80 cups WALNUTS", "87 Tbsp ROSEMARY", "78 cups CORNSTARCH", "76 cups BASIL", "39 cups CLOVES", "98 tsp GINGER", "1 Tbsp KETCHUP", "29 tsp CORNFLOUR", "76 tsp CHESTNUTS", "67 cups SOURCREAM", "38 tsp CORNSYRUP", "24 Tbsp NUTMEG", "86 cups BAKINGPOWDER", "73 tsp SUGAR", "57 Tbsp FLOUR", "39 tsp BAKINGSODA", "51 tsp VINEGAR", "95 tsp CHIVES", "74 cups CELERY", "57 Tbsp OATS", "92 Tbsp PAPRIKA", "52 Tbsp CREAMCHEESE", "16 Tbsp CHEESE", "94 cups WATER", "15 tsp MILK"};
    vector<string> mixingBowl = {"83 tsp WATER", "12 Tbsp SALT", "37 cups SPINACH", "18 Tbsp CHESTNUTS", "11 Tbsp CLOVES", "69 tsp GINGER", "18 cups MAYONAISE", "41 cups NUTMEG", "95 cups MILK", "52 cups BASIL", "72 cups SOYSAUCE", "45 cups WALNUTS", "97 cups CORNSYRUP", "60 cups CORNSTARCH", "43 tsp CHEESE", "81 cups SAGE", "48 tsp PAPRIKA", "71 Tbsp BAKINGSODA", "95 Tbsp CORNFLOUR", "99 tsp CHIVES"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"22799 cups 4 Tbsp SALT", "25803 cups SPINACH", "9102 cups MAYONAISE", "1705 cups SAGE", "175 cups SOYSAUCE", "24275 cups WALNUTS", "1653 cups ROSEMARY", "23652 cups CORNSTARCH", "23052 cups BASIL", "11855 cups 5 Tbsp CLOVES", "619 cups 3 Tbsp 2 tsp GINGER", "19 cups KETCHUP", "177 cups 11 Tbsp 2 tsp CORNFLOUR", "480 cups 3 Tbsp 1 tsp CHESTNUTS", "20368 cups SOURCREAM", "143 cups 10 Tbsp 2 tsp CORNSYRUP", "415 cups NUTMEG", "26144 cups BAKINGPOWDER", "462 cups 5 Tbsp 1 tsp SUGAR", "1083 cups FLOUR", "242 cups 9 Tbsp BAKINGSODA", "323 cups VINEGAR", "599 cups 9 Tbsp 2 tsp CHIVES", "22496 cups CELERY", "1083 cups OATS", "1747 cups PAPRIKA", "988 cups CREAMCHEESE", "303 cups 1 Tbsp 2 tsp CHEESE", "28574 cups 4 Tbsp 1 tsp WATER"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> recipe = {"81 cups SUGAR", "24 tsp CHESTNUTS", "55 tsp SPINACH", "86 cups SAGE", "63 tsp CHEESE", "5 cups CORNFLOUR", "82 cups BAYLEAVES", "31 Tbsp GINGER", "53 Tbsp CREAMCHEESE", "63 Tbsp TOMATO", "95 Tbsp BAKINGSODA", "74 Tbsp WATER", "36 tsp MUSTARD", "30 tsp BASIL", "95 cups BUTTER", "49 tsp YEAST", "50 Tbsp ALMONDS", "41 tsp CORNSTARCH", "87 Tbsp ROSEMARY", "71 cups CELERY", "57 cups CORNMEAL", "77 tsp PAPRIKA", "48 Tbsp VINEGAR", "72 cups OATS", "14 cups MAYONAISE", "72 cups MILK", "47 tsp PARSLEY", "66 Tbsp PECANS", "18 tsp NUTMEG", "53 tsp FLOUR", "74 tsp EGGS", "12 Tbsp CLOVES", "43 cups KETCHUP", "77 cups CINNAMON", "92 Tbsp CHOCOLATE", "75 cups GARLIC", "42 cups CORN", "8 tsp CORNSYRUP", "20 tsp SOURCREAM", "74 cups VANILLA", "5 tsp RICE", "1 tsp THYME", "84 tsp SOYSAUCE", "38 Tbsp PEPPER", "61 Tbsp CHIVES", "14 cups PEAS", "98 Tbsp WALNUTS"};
    vector<string> mixingBowl = {"23 cups OATS", "45 cups PEAS", "21 Tbsp EGGS", "24 cups SUGAR", "32 cups SOURCREAM", "42 tsp YEAST", "84 tsp RICE", "75 Tbsp VANILLA", "96 Tbsp ROSEMARY", "56 cups CORNMEAL", "71 cups CINNAMON", "77 cups PECANS", "10 tsp CLOVES", "42 Tbsp VINEGAR", "25 cups PAPRIKA", "29 Tbsp SAGE", "85 Tbsp MAYONAISE", "19 Tbsp CELERY", "40 cups CHOCOLATE", "93 tsp CORNSTARCH", "13 tsp THYME", "66 Tbsp MUSTARD", "17 tsp CREAMCHEESE", "85 cups PARSLEY", "33 Tbsp SOYSAUCE", "96 Tbsp BUTTER", "6 cups CORNSYRUP", "69 Tbsp ALMONDS", "12 Tbsp BASIL", "88 Tbsp NUTMEG", "58 tsp CHIVES", "24 Tbsp WATER", "82 tsp MILK", "20 cups TOMATO", "63 Tbsp PEPPER", "17 Tbsp CHESTNUTS", "76 tsp KETCHUP", "18 cups SPINACH", "8 Tbsp GARLIC", "8 Tbsp WALNUTS", "35 cups GINGER", "96 tsp BAYLEAVES", "83 cups CORNFLOUR", "2 Tbsp BAKINGSODA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7023 cups SUGAR", "42 cups 7 Tbsp CHESTNUTS", "81 cups 11 Tbsp SPINACH", "7480 cups 3 Tbsp SAGE", "114 cups 3 Tbsp CHEESE", "352 cups CORNFLOUR", "7132 cups BAYLEAVES", "133 cups 9 Tbsp GINGER", "287 cups 13 Tbsp 1 tsp CREAMCHEESE", "322 cups 9 Tbsp TOMATO", "516 cups 7 Tbsp BAKINGSODA", "400 cups 14 Tbsp WATER", "61 cups 2 Tbsp MUSTARD", "53 cups 10 Tbsp BASIL", "8259 cups BUTTER", "87 cups 15 Tbsp YEAST", "267 cups 9 Tbsp ALMONDS", "72 cups 6 Tbsp CORNSTARCH", "467 cups 1 Tbsp ROSEMARY", "6175 cups 13 Tbsp CELERY", "4903 cups CORNMEAL", "114 cups 9 Tbsp PAPRIKA", "258 cups 6 Tbsp VINEGAR", "6241 cups OATS", "1212 cups 11 Tbsp MAYONAISE", "6262 cups 4 Tbsp 2 tsp MILK", "3 Tbsp PARSLEY", "281 cups 14 Tbsp PECANS", "27 cups 2 Tbsp NUTMEG", "96 cups 1 Tbsp FLOUR", "132 cups 13 Tbsp EGGS", "65 cups 2 tsp CLOVES", "3739 cups 6 Tbsp 2 tsp KETCHUP", "6628 cups CINNAMON", "460 cups 4 Tbsp CHOCOLATE", "6524 cups 8 Tbsp GARLIC", "3654 cups CORN", "8 cups 8 Tbsp CORNSYRUP", "4 cups 4 Tbsp SOURCREAM", "6433 cups 5 Tbsp VANILLA", "7 cups 5 Tbsp RICE", "1 cups 8 Tbsp 2 tsp THYME", "150 cups 3 Tbsp SOYSAUCE", "202 cups 11 Tbsp PEPPER", "330 cups 7 Tbsp 2 tsp CHIVES", "1173 cups PEAS", "532 cups 6 Tbsp WALNUTS"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> recipe = {"76 cups ROSEMARY", "93 Tbsp GINGER", "88 tsp TOMATO", "72 Tbsp SUGAR", "65 tsp SAGE", "53 Tbsp BUTTER", "47 tsp CINNAMON", "78 Tbsp BAKINGSODA", "30 Tbsp MUSTARD", "13 tsp CHEESE", "96 cups OATS", "89 cups SOYSAUCE", "75 tsp NUTMEG", "46 tsp BASIL", "7 Tbsp PECANS", "20 Tbsp CLOVES", "36 Tbsp THYME", "96 cups CORNFLOUR", "49 tsp CREAMCHEESE", "86 cups SALT", "31 tsp CHIVES", "75 tsp SPINACH", "11 tsp SOURCREAM", "37 Tbsp CORNSTARCH", "25 tsp ONION", "5 Tbsp GARLIC", "29 Tbsp PAPRIKA", "27 Tbsp BAKINGPOWDER"};
    vector<string> mixingBowl = {"13 Tbsp SPINACH", "1 Tbsp THYME", "20 Tbsp SOURCREAM", "25 cups PAPRIKA", "42 cups CINNAMON", "47 Tbsp NUTMEG", "78 cups PECANS", "38 cups BASIL", "77 tsp BAKINGSODA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"13604 cups ROSEMARY", "1040 cups 7 Tbsp GINGER", "328 cups 2 Tbsp 2 tsp TOMATO", "805 cups 8 Tbsp SUGAR", "242 cups 6 Tbsp 1 tsp SAGE", "592 cups 15 Tbsp BUTTER", "133 cups 4 Tbsp 1 tsp CINNAMON", "871 cups 1 tsp BAKINGSODA", "335 cups 10 Tbsp MUSTARD", "48 cups 7 Tbsp 2 tsp CHEESE", "17184 cups OATS", "15931 cups SOYSAUCE", "276 cups 12 Tbsp NUTMEG", "133 cups 8 Tbsp 2 tsp BASIL", "5 Tbsp PECANS", "223 cups 12 Tbsp CLOVES", "402 cups 11 Tbsp THYME", "17184 cups CORNFLOUR", "182 cups 11 Tbsp 2 tsp CREAMCHEESE", "15394 cups SALT", "115 cups 9 Tbsp 2 tsp CHIVES", "278 cups 14 Tbsp SPINACH", "39 cups 12 Tbsp 1 tsp SOURCREAM", "413 cups 15 Tbsp CORNSTARCH", "93 cups 3 Tbsp 2 tsp ONION", "55 cups 15 Tbsp GARLIC", "299 cups 7 Tbsp PAPRIKA", "302 cups 1 Tbsp BAKINGPOWDER"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> recipe = {"38 Tbsp SALT", "3 Tbsp SUGAR", "72 Tbsp MAYONAISE", "2 Tbsp CINNAMON", "34 tsp ROSEMARY", "75 cups SPINACH", "53 tsp PEAS", "98 cups GARLIC", "20 Tbsp BAKINGPOWDER", "97 tsp VANILLA", "78 tsp SAGE", "42 cups CELERY", "76 tsp CREAMCHEESE", "54 cups FLOUR", "87 Tbsp CHESTNUTS", "60 cups WALNUTS", "55 Tbsp CORN", "83 Tbsp OATS", "1 cups BASIL", "70 Tbsp BAYLEAVES", "79 Tbsp KETCHUP", "9 Tbsp TOMATO", "5 Tbsp CLOVES", "85 tsp MILK", "56 cups YEAST", "76 Tbsp NUTMEG", "36 tsp CORNFLOUR", "85 cups PEPPER", "19 Tbsp CHIVES", "36 tsp MUSTARD", "25 Tbsp ONION", "6 tsp PECANS"};
    vector<string> mixingBowl = {"34 cups CELERY", "14 cups NUTMEG", "60 cups CORNFLOUR", "64 cups ONION", "90 cups OATS"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"190 cups SALT", "15 cups SUGAR", "360 cups MAYONAISE", "10 cups CINNAMON", "56 cups 10 Tbsp 2 tsp ROSEMARY", "6000 cups SPINACH", "88 cups 5 Tbsp 1 tsp PEAS", "7840 cups GARLIC", "100 cups BAKINGPOWDER", "161 cups 10 Tbsp 2 tsp VANILLA", "130 cups SAGE", "3326 cups CELERY", "126 cups 10 Tbsp 2 tsp CREAMCHEESE", "4320 cups FLOUR", "435 cups CHESTNUTS", "4800 cups WALNUTS", "275 cups CORN", "325 cups OATS", "80 cups BASIL", "350 cups BAYLEAVES", "395 cups KETCHUP", "45 cups TOMATO", "25 cups CLOVES", "141 cups 10 Tbsp 2 tsp MILK", "4480 cups YEAST", "366 cups NUTMEG", "6800 cups PEPPER", "95 cups CHIVES", "60 cups MUSTARD", "61 cups ONION", "10 cups PECANS"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> recipe = {"38 tsp BAYLEAVES", "83 Tbsp RICE", "76 cups PEPPER", "44 cups SPINACH", "24 tsp FLOUR", "14 tsp MUSTARD", "84 cups BASIL", "36 cups BAKINGSODA", "88 tsp YEAST", "93 cups CINNAMON", "9 tsp GARLIC", "47 tsp PARSLEY", "4 tsp GINGER", "20 Tbsp CREAMCHEESE", "78 tsp THYME", "48 cups PEAS", "74 Tbsp SOURCREAM", "51 tsp CHESTNUTS", "60 cups VINEGAR"};
    vector<string> mixingBowl = {"10 cups BAYLEAVES", "7 cups PEPPER", "88 cups THYME", "95 Tbsp SOURCREAM", "60 cups GINGER", "42 Tbsp CHESTNUTS"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"560 cups BAYLEAVES", "3735 cups RICE", "54713 cups PEPPER", "31680 cups SPINACH", "360 cups FLOUR", "210 cups MUSTARD", "60480 cups BASIL", "25920 cups BAKINGSODA", "1320 cups YEAST", "66960 cups CINNAMON", "135 cups GARLIC", "705 cups PARSLEY", "900 cups CREAMCHEESE", "1082 cups THYME", "34560 cups PEAS", "3324 cups 1 Tbsp SOURCREAM", "762 cups 6 Tbsp CHESTNUTS", "43200 cups VINEGAR"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> recipe = {"92 tsp PEPPER", "65 Tbsp CREAMCHEESE", "14 cups BAYLEAVES", "32 cups EGGS", "5 cups CORNSYRUP", "75 tsp PEAS", "90 Tbsp SAGE", "50 tsp MUSTARD", "97 Tbsp RICE", "28 Tbsp CORNFLOUR", "77 Tbsp BAKINGPOWDER", "6 tsp ROSEMARY", "43 cups PECANS", "9 cups VANILLA", "59 cups CORNMEAL", "29 Tbsp BUTTER", "56 tsp CELERY", "8 Tbsp OATS", "83 tsp CHESTNUTS", "5 Tbsp CINNAMON", "44 cups SALT", "46 Tbsp CHIVES", "97 Tbsp SPINACH", "59 Tbsp WATER", "81 cups CHOCOLATE", "18 cups PARSLEY", "97 Tbsp ONION", "55 tsp FLOUR", "48 tsp SOURCREAM", "95 cups KETCHUP", "80 cups CORNSTARCH", "90 tsp GARLIC", "34 cups CORN", "25 tsp PAPRIKA", "37 cups ALMONDS", "35 tsp WALNUTS", "47 cups SUGAR", "17 Tbsp MILK", "14 cups BAKINGSODA", "50 cups CHEESE", "63 cups THYME", "80 tsp CLOVES"};
    vector<string> mixingBowl = {"74 cups CREAMCHEESE", "48 tsp PAPRIKA", "34 Tbsp EGGS", "15 cups ROSEMARY", "31 tsp CHESTNUTS", "74 tsp BUTTER", "57 cups ONION", "82 tsp MILK", "73 Tbsp PECANS", "79 tsp WATER", "97 cups SALT", "57 Tbsp BAKINGSODA", "73 cups WALNUTS", "82 tsp CHOCOLATE", "97 cups SUGAR", "82 cups CORN", "7 tsp CELERY", "49 cups PEPPER", "16 Tbsp FLOUR", "88 Tbsp CORNFLOUR", "47 Tbsp SPINACH", "8 tsp VANILLA", "11 tsp OATS", "74 Tbsp CORNSTARCH", "89 cups CHIVES", "21 cups MUSTARD", "3 tsp THYME", "99 tsp BAKINGPOWDER", "45 cups CINNAMON", "10 tsp GARLIC", "8 Tbsp PEAS", "44 Tbsp CORNMEAL", "46 cups CORNSYRUP", "98 tsp RICE", "99 cups KETCHUP", "37 cups PARSLEY"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"227 cups PEPPER", "511 cups CREAMCHEESE", "2016 cups BAYLEAVES", "4605 cups 14 Tbsp EGGS", "674 cups CORNSYRUP", "224 cups 8 Tbsp PEAS", "810 cups SAGE", "129 cups MUSTARD", "870 cups 15 Tbsp 1 tsp RICE", "246 cups 8 Tbsp CORNFLOUR", "690 cups 15 Tbsp BAKINGPOWDER", "3 cups ROSEMARY", "6187 cups 7 Tbsp PECANS", "1295 cups 13 Tbsp 1 tsp VANILLA", "8493 cups 4 Tbsp CORNMEAL", "259 cups 7 Tbsp 1 tsp BUTTER", "167 cups 13 Tbsp 2 tsp CELERY", "71 cups 12 Tbsp 1 tsp OATS", "248 cups 5 Tbsp 2 tsp CHESTNUTS", "6239 cups SALT", "325 cups CHIVES", "870 cups 1 Tbsp SPINACH", "529 cups 5 Tbsp 2 tsp WATER", "11662 cups 4 Tbsp 2 tsp CHOCOLATE", "2555 cups PARSLEY", "816 cups ONION", "164 cups FLOUR", "144 cups SOURCREAM", "13581 cups KETCHUP", "11515 cups 6 Tbsp CORNSTARCH", "269 cups 12 Tbsp 2 tsp GARLIC", "4814 cups CORN", "74 cups PAPRIKA", "5328 cups ALMONDS", "32 cups WALNUTS", "6671 cups SUGAR", "151 cups 4 Tbsp 2 tsp MILK", "2012 cups 7 Tbsp BAKINGSODA", "7200 cups CHEESE", "9071 cups 15 Tbsp THYME", "240 cups CLOVES"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> recipe = {"21 Tbsp SOYSAUCE", "45 cups BAYLEAVES", "6 cups FLOUR", "30 Tbsp SAGE", "51 cups CORNMEAL", "60 cups CORNSYRUP", "32 tsp MAYONAISE", "99 cups BAKINGPOWDER", "35 cups CLOVES", "83 tsp GINGER", "92 tsp PEPPER", "92 Tbsp CORNFLOUR", "5 tsp WATER", "23 Tbsp CORN", "51 tsp TOMATO", "59 Tbsp PAPRIKA", "42 tsp VINEGAR", "63 tsp ONION", "55 tsp BAKINGSODA", "39 cups PEAS", "28 tsp GARLIC", "34 tsp OATS", "63 cups VANILLA", "20 tsp ALMONDS", "39 tsp NUTMEG", "25 tsp MUSTARD", "46 tsp SUGAR", "44 tsp BUTTER", "6 Tbsp KETCHUP", "73 tsp PECANS", "14 cups WALNUTS", "1 tsp CELERY", "8 tsp THYME", "68 cups RICE", "71 Tbsp CHEESE", "60 cups CHESTNUTS", "54 tsp CORNSTARCH", "36 cups EGGS", "18 tsp YEAST", "39 Tbsp ROSEMARY", "20 Tbsp SPINACH", "80 cups CHIVES", "41 Tbsp MILK", "60 cups SALT"};
    vector<string> mixingBowl = {"46 Tbsp MUSTARD", "93 tsp SOYSAUCE", "31 tsp FLOUR", "54 cups ALMONDS", "68 tsp PAPRIKA"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"168 cups 11 Tbsp SOYSAUCE", "5850 cups BAYLEAVES", "779 cups 5 Tbsp 2 tsp FLOUR", "243 cups 12 Tbsp SAGE", "6630 cups CORNMEAL", "7800 cups CORNSYRUP", "86 cups 10 Tbsp 2 tsp MAYONAISE", "12870 cups BAKINGPOWDER", "4550 cups CLOVES", "224 cups 12 Tbsp 2 tsp GINGER", "249 cups 2 Tbsp 2 tsp PEPPER", "747 cups 8 Tbsp CORNFLOUR", "13 cups 8 Tbsp 2 tsp WATER", "186 cups 14 Tbsp CORN", "138 cups 2 Tbsp TOMATO", "477 cups 15 Tbsp 1 tsp PAPRIKA", "113 cups 12 Tbsp VINEGAR", "170 cups 10 Tbsp ONION", "148 cups 15 Tbsp 1 tsp BAKINGSODA", "5070 cups PEAS", "75 cups 13 Tbsp 1 tsp GARLIC", "92 cups 1 Tbsp 1 tsp OATS", "8190 cups VANILLA", "2 Tbsp 2 tsp ALMONDS", "105 cups 10 Tbsp NUTMEG", "64 cups 13 Tbsp 1 tsp MUSTARD", "124 cups 9 Tbsp 1 tsp SUGAR", "119 cups 2 Tbsp 2 tsp BUTTER", "48 cups 12 Tbsp KETCHUP", "197 cups 11 Tbsp 1 tsp PECANS", "1820 cups WALNUTS", "2 cups 11 Tbsp 1 tsp CELERY", "21 cups 10 Tbsp 2 tsp THYME", "8840 cups RICE", "576 cups 14 Tbsp CHEESE", "7800 cups CHESTNUTS", "146 cups 4 Tbsp CORNSTARCH", "4680 cups EGGS", "48 cups 12 Tbsp YEAST", "316 cups 14 Tbsp ROSEMARY", "162 cups 8 Tbsp SPINACH", "10400 cups CHIVES", "333 cups 2 Tbsp MILK", "7800 cups SALT"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> recipe = {"99 cups A", "98 cups B", "1 tsp C", "1 tsp D", "2 tsp E", "3 tsp F", "17 tsp G", "1 tsp H", "10 cups I", "7 tsp J", "99 cups AA", "98 cups AB", "1 tsp AC", "1 tsp AD", "2 tsp AE", "3 tsp AF", "17 tsp AG", "1 tsp AH", "10 cups AI", "7 tsp AJ", "99 cups BA", "98 cups BB", "1 tsp BC", "1 tsp BD", "2 tsp BE", "3 tsp BF", "17 tsp BG", "1 tsp BH", "10 cups BI", "7 tsp BJ", "99 cups CA", "98 cups CB", "1 tsp CC", "1 tsp CD", "2 tsp CE", "3 tsp CF", "17 tsp CG", "1 tsp CH", "10 cups CI", "7 tsp CJ", "99 cups DA", "98 cups DB", "1 tsp DC", "1 tsp DD", "2 tsp DE", "3 tsp DF", "17 tsp DG", "1 tsp DH", "10 cups DI", "7 tsp DJ"};
    vector<string> mixingBowl = {"1 tsp A", "99 cups B", "99 cups C", "99 cups D", "99 cups E", "99 cups F", "50 cups G", "44 cups H", "10 cups I", "8 cups J", "1 tsp AA", "99 cups AB", "99 cups AC", "99 cups AD", "99 cups AE", "99 cups AF", "50 cups AG", "44 cups AH", "10 cups AI", "8 cups AJ", "1 tsp BA", "99 cups BB", "99 cups BC", "99 cups BD", "99 cups BE", "99 cups BF", "50 cups BG", "44 cups BH", "10 cups BI", "8 cups BJ", "1 tsp CA", "99 cups CB", "99 cups CC", "99 cups CD", "99 cups CE", "99 cups CF", "50 cups CG", "44 cups CH", "10 cups CI", "8 cups CJ", "1 tsp DA", "99 cups DB", "99 cups DC", "99 cups DD", "99 cups DE", "99 cups DF", "50 cups DG", "44 cups DH", "10 cups DI", "8 cups DJ"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"470447 cups 15 Tbsp 2 tsp A", "465597 cups B", "99 cups E", "198 cups F", "1633 cups G", "55 cups H", "47510 cups I", "685 cups J", "470447 cups 15 Tbsp 2 tsp AA", "465597 cups AB", "99 cups AE", "198 cups AF", "1633 cups AG", "55 cups AH", "47510 cups AI", "685 cups AJ", "470447 cups 15 Tbsp 2 tsp BA", "465597 cups BB", "99 cups BE", "198 cups BF", "1633 cups BG", "55 cups BH", "47510 cups BI", "685 cups BJ", "470447 cups 15 Tbsp 2 tsp CA", "465597 cups CB", "99 cups CE", "198 cups CF", "1633 cups CG", "55 cups CH", "47510 cups CI", "685 cups CJ", "470447 cups 15 Tbsp 2 tsp DA", "465597 cups DB", "99 cups DE", "198 cups DF", "1633 cups DG", "55 cups DH", "47510 cups DI", "685 cups DJ"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> recipe = {"2 cups FLOUR", "2 tsp SALT"};
    vector<string> mixingBowl = {"1 cups FLOUR", "1 tsp SALT"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups FLOUR", "1 tsp SALT"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> recipe = {"4 cups A", "2 cups B"};
    vector<string> mixingBowl = {"5 cups A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 cups 8 Tbsp B"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> recipe = {"10 tsp F", "11 tsp S"};
    vector<string> mixingBowl = {"11 tsp F"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"3 Tbsp F", "7 Tbsp 1 tsp S"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> recipe = {"3 tsp A", "7 tsp B"};
    vector<string> mixingBowl = {"4 tsp A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 tsp A", "4 Tbsp 2 tsp B"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> recipe = {"3 cups FLOUR", "1 cups SUGAR", "9 tsp SALT", "9 Tbsp GINGER", "2 cups MILK", "21 tsp CINNAMON", "5 Tbsp VANILLA"};
    vector<string> mixingBowl = {"1 Tbsp SUGAR", "8 tsp SALT", "5 Tbsp CINNAMON", "21 tsp VANILLA", "44 tsp GINGER", "3 cups FLOUR", "3 cups MILK"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 cups FLOUR", "1 cups 9 Tbsp 2 tsp SUGAR", "2 Tbsp 1 tsp SALT", "1 tsp GINGER", "5 Tbsp 1 tsp MILK", "6 Tbsp 2 tsp CINNAMON", "1 Tbsp 1 tsp VANILLA"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> recipe = {"97 cups A", "93 Tbsp B", "57 tsp C", "21 tsp E", "69 Tbsp F", "31 tsp G", "29 Tbsp H", "37 cups I", "61 Tbsp J", "73 cups K", "5 tsp L", "7 tsp M", "79 Tbsp N", "27 cups DD"};
    vector<string> mixingBowl = {"95 cups A", "97 Tbsp B", "89 cups C", "57 tsp DD", "61 Tbsp E", "1 tsp G", "17 cups H", "23 cups I"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"7180 cups A", "429 cups 14 Tbsp B", "1 Tbsp C", "29 cups E", "323 cups 7 Tbsp F", "48 cups 6 Tbsp 2 tsp G", "118 cups 15 Tbsp H", "2752 cups I", "285 cups 15 Tbsp J", "5475 cups K", "7 cups 13 Tbsp L", "10 cups 15 Tbsp M", "370 cups 5 Tbsp N", "2023 cups 13 Tbsp DD"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> recipe = {"99 cups FLOUR", "99 Tbsp SALT", "99 cups SUGAR", "99 tsp VANILLA"};
    vector<string> mixingBowl = {};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"99 cups FLOUR", "6 cups 3 Tbsp SALT", "99 cups SUGAR", "2 cups 1 Tbsp VANILLA"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> recipe = {"3 cups FLOUR"};
    vector<string> mixingBowl = {"4 cups FLOUR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> recipe = {"4 cups S", "2 cups T"};
    vector<string> mixingBowl = {"3 cups T", "5 cups S"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups S"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> recipe = {"2 cups FLOUR", "4 cups SALT"};
    vector<string> mixingBowl = {"3 cups FLOUR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"6 cups SALT"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> recipe = {"48 tsp A", "16 Tbsp B", "1 cups C"};
    vector<string> mixingBowl = {"49 tsp A"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups 1 tsp B", "1 cups 1 tsp C"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> recipe = {"71 tsp CINNAMON"};
    vector<string> mixingBowl = {};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 cups 7 Tbsp 2 tsp CINNAMON"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> recipe = {"1 Tbsp A", "2 Tbsp B"};
    vector<string> mixingBowl = {"3 Tbsp B"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"1 Tbsp 2 tsp A", "1 tsp B"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> recipe = {"2 tsp A", "2 tsp B", "2 tsp C", "2 tsp D"};
    vector<string> mixingBowl = {"3 tsp A", "5 tsp B", "7 tsp C", "9 tsp D"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 Tbsp A", "1 Tbsp 1 tsp B", "2 tsp C"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> recipe = {"7 cups FLOUR", "14 cups SUGAR", "7 tsp SALT", "56 Tbsp GINGER", "7 cups MILK", "21 tsp CINNAMON", "56 Tbsp VANILLA"};
    vector<string> mixingBowl = {"1 Tbsp SUGAR", "8 tsp SALT", "5 Tbsp CINNAMON", "21 tsp VANILLA", "44 tsp GINGER", "3 cups FLOUR", "3 cups MILK"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"5 cups FLOUR", "15 cups 15 Tbsp SUGAR", "3 cups 1 Tbsp 1 tsp GINGER", "5 cups MILK", "3 Tbsp CINNAMON", "3 cups 9 Tbsp VANILLA"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> recipe = {"2 tsp SUGAR", "3 tsp FLOUR"};
    vector<string> mixingBowl = {"4 tsp FLOUR", "2 tsp SUGAR"};
    Recipe* pObj = new Recipe();
    clock_t start = clock();
    vector<string> result = pObj->fix(recipe, mixingBowl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"2 tsp SUGAR", "2 tsp FLOUR"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=8007&pm=4708
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
 
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
void load(vector<string> &zoz, map<string, long long> &res, vector<string> &res2) {
  int zs = zoz.size();
  res2.clear();
  REP(i,zs) { 
    stringstream SS(zoz[i]);
    int poc;
    string typ,meno;
    SS >> poc >> typ >> meno; 
    if (typ == "Tbsp") poc *= 3;
    if (typ == "cups") poc *= 3*16;
    res[meno] = poc;
    res2.push_back(meno);
  }
}
 
class Recipe {
public:
  vector <string> fix(vector <string> recipe, vector <string> mixingBowl) {
    map<string, long long> mam, treba;
    vector<string> poradie;
    load(mixingBowl,mam,poradie);
    load(recipe,treba,poradie);
 
    long long gcd = -1;
    FOREACH(it,treba) if (gcd==-1) gcd=it->second; else gcd = __gcd(gcd,it->second);
    FOREACH(it,treba) it->second /= gcd;
 
    int mul = 1;
    int N = poradie.size();
    REP(i,N) {
      mul >?= ( mam[poradie[i]] + treba[poradie[i]] - 1 ) / treba[poradie[i]];
    }
    if (mul < gcd) mul = gcd;
    
    vector <string> res;
    REP(i,N) if (mul * treba[poradie[i]] > mam[poradie[i]]) {
      int dodaj = mul * treba[poradie[i]] - mam[poradie[i]];
      int dc = dodaj / (3*16); dodaj %= (3*16);
      int dT = dodaj / 3; dodaj %= 3;
      int dt = dodaj;
      stringstream SS;
      if (dc) SS << dc << " cups ";
      if (dT) SS << dT << " Tbsp ";
      if (dt) SS << dt << " tsp ";
      SS << poradie[i];
      res.push_back(SS.str());
    }
    
    return res;
  }
 
 
};
// Unused code automatically removed, but the UCR still sucks
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/