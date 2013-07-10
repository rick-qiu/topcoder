/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10848
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

class NextHomogeneousStrings {
public:
    string getNext(int d, int n, string seed, long k);
};

string NextHomogeneousStrings::getNext(int d, int n, string seed, long k) {
    string ret;
    return ret;
}


int test0() {
    int d = 1;
    int n = 2;
    string seed = "aaa";
    long k = 3;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ddd";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int d = 2;
    int n = 3;
    string seed = "abc";
    long k = 0;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aca";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int d = 2;
    int n = 4;
    string seed = "ttrrzz";
    long k = 6;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ttsssc";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int d = 9;
    int n = 9;
    string seed = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    long k = 1000000000000000000;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaakmluxinkecojo";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int d = 8;
    int n = 9;
    string seed = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    long k = 1000000000000000000;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaauialgggesdxfk";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int d = 1;
    int n = 1;
    string seed = "a";
    long k = 4;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "e";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int d = 1;
    int n = 1;
    string seed = "a";
    long k = 1234;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int d = 8;
    int n = 9;
    string seed = "abcdefghiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    long k = 0;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int d = 2;
    int n = 7;
    string seed = "abcdefg";
    long k = 0;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "acaaaaa";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int d = 8;
    int n = 9;
    string seed = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    long k = 1;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int d = 1;
    int n = 1;
    string seed = "aa";
    long k = 50;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "by";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 5378843636977;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 5378843636978;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 48143649267;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 48143649268;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 100483;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aghuuuzzz";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int d = 4;
    int n = 6;
    string seed = "aghteassd";
    long k = 100484;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aghvaaaaa";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int d = 8;
    int n = 9;
    string seed = "abcdefghiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    long k = 987654321987654321;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaubjyalyffnphp";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int d = 2;
    int n = 9;
    string seed = "qwertyuiopasdfghjklzxcvbnmqwertyuiopasdfghjklzxcvb";
    long k = 987654321987654321;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "wwwwpwwwwwwwwwwswwwwssswssssssssvvsssssssssssdddds";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int d = 2;
    int n = 6;
    string seed = "zjbrdidfznptkyrcwzrmtmaovadjmlasjylrlh";
    long k = 161017101982535372;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int d = 3;
    int n = 9;
    string seed = "wbtmljcngiqaqhzjlcjmxdv";
    long k = 152671632822947363;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int d = 3;
    int n = 9;
    string seed = "ffsudovdvcmmfazzygxcldfsuhsabaac";
    long k = 588618793123736163;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ffttnnnnffnnnggggghggqgqggggqvgv";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int d = 1;
    int n = 4;
    string seed = "mjiswggoyaqlbtpvuurwwd";
    long k = 508076030000877367;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int d = 1;
    int n = 2;
    string seed = "mydkhjjolaqyyuio";
    long k = 681796813750870494;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int d = 7;
    int n = 7;
    string seed = "ugpsqhcqahexziucmeokoreohlgqqeax";
    long k = 458693086742393099;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ugpsqhcqahexziucmeopjqmdoeeiqtyw";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int d = 1;
    int n = 2;
    string seed = "layaqtvwggs";
    long k = 827363008135085348;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int d = 1;
    int n = 1;
    string seed = "iuwdqufhsngbjazb";
    long k = 627734589849298739;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "iuwkfuytunhkornq";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int d = 1;
    int n = 6;
    string seed = "xqrwgfxyytbpwr";
    long k = 35860789315137365;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int d = 3;
    int n = 5;
    string seed = "hqcnvbmlc";
    long k = 780809284454958633;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int d = 6;
    int n = 6;
    string seed = "pvjttzt";
    long k = 15251967175865072;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int d = 4;
    int n = 9;
    string seed = "qljnixcentuhjlledirixxnqhojmcurtnov";
    long k = 744705331172606588;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "qljnjjjjjaaaaaashhooaaaogaagazagfgg";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int d = 1;
    int n = 8;
    string seed = "ujesavkyownmaragmeuzavtkmqggqwcirbm";
    long k = 224612649071353125;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int d = 1;
    int n = 7;
    string seed = "efsclljepzunaspmnd";
    long k = 122628963912712396;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int d = 6;
    int n = 9;
    string seed = "qcidxqymibe";
    long k = 999774354670631733;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int d = 6;
    int n = 8;
    string seed = "veizshplcathrtdw";
    long k = 565437263355050623;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "vfeeppclyyftfbyt";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int d = 6;
    int n = 6;
    string seed = "rttchyrfojswsypgioatxgpxquksuyjlbgjpvqcpoarstyxijv";
    long k = 8303933872856992;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "rttchyrfojswsypgioatxgpxquksuyjlbgjpvqewjlimcgwpzb";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int d = 1;
    int n = 1;
    string seed = "nliktkmwugszkielaxvwotpqvwiwfwwjzogdco";
    long k = 820406421532403027;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "nliktkmwugszkielaxvwotpqweyjvleemqquxl";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int d = 3;
    int n = 9;
    string seed = "vuveefytcrjqydefnmvzhamnbpdxreffnlhxgzymbpwenqjz";
    long k = 370529795734391525;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "vuveeueeeeeaaaaaaaaaaxakkxxaxxxaaaxaxttttaattaff";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int d = 4;
    int n = 7;
    string seed = "rubryewwnhzafsrvmafsqrugxdmewguibkdm";
    long k = 183118399013308547;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "rubryrbbaaaaaaaaaaazzzqvzqaazzzyoozx";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int d = 2;
    int n = 2;
    string seed = "ssadtklkuitxnbyxdepowgdnyfwskituxckavlfmsvzja";
    long k = 451492565914815456;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ssadtklkuitxnbyxdepowgdnyfwskitvbvkifxornmogs";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int d = 3;
    int n = 6;
    string seed = "uffpnxkyxkmzepvciwdvprezvmofabmihbzxfwwyrmpillchl";
    long k = 990085593971163469;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "uffppfaaaaaaaaaaaaaaaaaaaaeggeeooooowbbwbbdbbwwwy";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int d = 1;
    int n = 2;
    string seed = "yu";
    long k = 191001040783842403;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int d = 1;
    int n = 1;
    string seed = "kfpjhnbcnbbwebhqonctaqscwmrpgfyidkvwvllhimuwchdnh";
    long k = 404657974508279689;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "kfpjhnbcnbbwebhqonctaqscwmrpgfyidkvwzrruulkxhbrsw";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int d = 4;
    int n = 9;
    string seed = "yufuclfizyuupzonqrahwbm";
    long k = 659777990501168730;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "yuujjuiiixixxghxhhxuuua";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int d = 1;
    int n = 2;
    string seed = "blxwrhexzgdirezewgogvqmikdjxwjxhcfajdzvbxauo";
    long k = 285072968968476570;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int d = 1;
    int n = 1;
    string seed = "epdboa";
    long k = 811243207234742873;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int d = 7;
    int n = 7;
    string seed = "ufwfbcqakudpfvmbpjekgirnxtnyybxynccextdqyimwfx";
    long k = 636965764229081671;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ufwfbcqakudpfvmbpjekgirnxtnyybxynittbkckuonaoe";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int d = 2;
    int n = 5;
    string seed = "meauha";
    long k = 731817502470930227;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int d = 1;
    int n = 4;
    string seed = "wyxajlaohipmhnpeetnumnithfzwlgurgnrjuppu";
    long k = 838115371368469190;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int d = 4;
    int n = 7;
    string seed = "qvotybknzswfgqnbzogptcrlryerekxfbjnkebdpnlub";
    long k = 840151680346107411;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "qvouoooaaaaaaaaaaaaaaaaaaammemmbmmqqrrrdrwvw";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int d = 5;
    int n = 7;
    string seed = "dmqfxmpgrkmmsqddsrorxxyjwzibgyrtbxrezaqeko";
    long k = 638712155222560570;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "dmqfxmqaaaaaaaaaaaaaaaaaaaajghwggohxooxniz";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int d = 1;
    int n = 2;
    string seed = "fmszipy";
    long k = 611013320506975062;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int d = 1;
    int n = 4;
    string seed = "nivqoquciasgtwyc";
    long k = 632079707877440250;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int d = 1;
    int n = 3;
    string seed = "qireqzuusxvalhqgntsckcccsoecdfntetlyzzwyn";
    long k = 880601761534185111;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int d = 1;
    int n = 1;
    string seed = "ejafzafj";
    long k = 243741281353272774;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int d = 2;
    int n = 7;
    string seed = "pmxaabwjgodfpntghulbhkrdvwlfauqzqfei";
    long k = 986931023339269;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int d = 9;
    int n = 9;
    string seed = "ookatvjoaaevyfisfw";
    long k = 638846775380157723;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ookaucbpmcqufmodkl";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int d = 1;
    int n = 1;
    string seed = "rjymapgu";
    long k = 566368663660497470;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int d = 5;
    int n = 5;
    string seed = "qzazimjdrgrslpdaxevbhnbdniruhdqeynvbzwiqisr";
    long k = 367830453719327590;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "qzazimjdrgrslpdaxevbhnbdniruhdubeekwogdknfv";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int d = 1;
    int n = 1;
    string seed = "xzsylwfuhgqnnstfkhqutorezzozegeaqmyickfxnbcvkvdw";
    long k = 430992096425720848;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "xzsylwfuhgqnnstfkhqutorezzozegeaqmympvhojukklavo";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int d = 5;
    int n = 7;
    string seed = "zimungfe";
    long k = 681294360739127187;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int d = 6;
    int n = 7;
    string seed = "ngtdfdxfxwtkuygcqaxvuechsthespfjgglgpdnerup";
    long k = 803543297882298575;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "ngtdfdxfxwtkvffaaaaaaaaaaaaaacpcvpvezhvulvh";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int d = 3;
    int n = 8;
    string seed = "uhwvcsnxavqcz";
    long k = 874620457882883753;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int d = 1;
    int n = 1;
    string seed = "gicodweaekevdtfrxikgxmltutketygtvd";
    long k = 269300565842669697;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "gicodweaekevdtfrxikgxphdmfxmyymjyo";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int d = 2;
    int n = 7;
    string seed = "bfaziwupfhpffwqijbuokoakunmzushjhghxclqtnnqzaie";
    long k = 101848840541077234;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "bjbbjbbbjbbbbbboooooooxoxxxooooooopppppppppppdd";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int d = 2;
    int n = 2;
    string seed = "lranmbtmpimvfofcgicezebgnhcysuuvfgupbewgk";
    long k = 557502849839491807;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "lranmbtmpimvfofcgicezebgnhcyyqsbmaprkyrub";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int d = 2;
    int n = 4;
    string seed = "rrbuubejbiftlfqvhqddtkcgdzhohcifvbsubglhw";
    long k = 611434323312655713;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "rrcccaaaaaaxxxhhhqqqdddbbbmmmmdmmmtttrrrr";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int d = 3;
    int n = 3;
    string seed = "eaogmdhjnfdpijlngqhtcvccvsxgeqfrx";
    long k = 222283957814702018;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "eaogmdhjnfdpijlngqhtfdqswcndnqxil";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int d = 1;
    int n = 3;
    string seed = "ronrthhazaadxogpmipwlqpwyueebghejgdqe";
    long k = 26297644121207405;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int d = 6;
    int n = 8;
    string seed = "txyaaxaassaaaarghjsdohasdghususdidisisdodo";
    long k = 10000000000000000;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "txyaaxaassaaaarghjsgaaaaaaaaadntffiniqrddy";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int d = 2;
    int n = 5;
    string seed = "zzzzzaa";
    long k = 100;
    NextHomogeneousStrings* pObj = new NextHomogeneousStrings();
    clock_t start = clock();
    string result = pObj->getNext(d, n, seed, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20463878&rd=14151&pm=10848
********************************************************************************
#include <algorithm>  
#include <string>  
#include <set>  
#include <map>  
#include <vector>  
#include <queue>   
#include <iostream>  
#include <iterator>  
#include <math.h>  
#include <cstdio>  
#include <cstdlib>  
#include <sstream>  
 
#pragma comment(linker, "/STACK:60777216")  
 
using namespace std;  
 
typedef pair<int,int> pii;  
typedef long long ll;  
typedef vector<int> vi;  
 
#define UN(v) SORT(v),v.erase(unique(v.begin(),v.end()),v.end())  
#define SORT(c) sort((c).begin(),(c).end())  
#define FOR(i,a,b) for (int  i=(a); i < (b); i++)   
#define REP(i,n) FOR(i,0,n)   
#define CL(a,b) memset(a,b,sizeof(a))  
#define pb push_back  
 
const ll inf = 1000000000000000013ll;  
 
int n,d; 
string s; 
 
map<ll,ll> r[55][2]; 
int u[33]; 
int c[33]; 
int now; 
void prep(vi &v){ 
    now++; 
    int cc=0; 
    REP(i,v.size()){ 
        if(u[v[i]]!=now) 
            u[v[i]]=now,c[v[i]]=cc,cc++; 
        v[i] = c[v[i]]; 
    } 
} 
 
bool good(vi &v){ 
    now++; 
    int c=0; 
    REP(i,v.size()) 
        if(u[v[i]]!=now) 
            u[v[i]]=now,c++; 
    return c<=d; 
} 
 
ll hash(vi &v){ 
    ll x=0; 
    REP(i,v.size()) x=x*37+(v[i]+1); 
    return x; 
} 
 
ll go(int len,bool coin,vi last){ 
    if(!good(last)) return 0; 
    if(len==s.size()) return 1; 
    ll h = hash(last); 
    if(r[len][coin].count(h)) return r[len][coin][h]; 
    ll val = 0; 
    vi tt = last; 
    if(tt.size()==n) tt.erase(tt.begin()); 
    if(coin){ 
        REP(i,26){ 
            if(i<s[len]-'a') continue; 
            vi nlast = tt; 
            nlast.pb(i); 
            if((i!=s[len]-'a')) 
                prep(nlast); 
            val+=go(len+1,(i==s[len]-'a'),nlast); 
            val=min(val,inf); 
            if(val==inf) break; 
        } 
    }else{ 
        REP(i,12){ 
            vi nlast = tt; 
            nlast.pb(i);         
            prep(nlast); 
            val+=go(len+1,coin&(i==s[len]-'a'),nlast)*(i==11?26-11:1); 
            val=min(val,inf); 
            if(val==inf) break; 
        } 
    } 
    return r[len][coin][h]=val; 
} 
 
string rr; 
void go2(int len,bool coin,vi last,ll k){ 
    if(len==s.size()) return; 
    vi tt = last; 
    if(tt.size()==n) tt.erase(tt.begin()); 
    if(coin){ 
        REP(i,26){ 
            if(i<s[len]-'a') continue; 
            vi nlast = tt; 
            nlast.pb(i); 
            vi qq= nlast; 
            if((i!=s[len]-'a')) 
                prep(nlast); 
            ll val=go(len+1,(i==s[len]-'a'),nlast); 
            if(val>=k+1){ 
                rr.pb(char('a'+i)); 
                go2(len+1,(i==s[len]-'a'),qq,k); 
                break; 
            } 
            else{ 
                k-=val; 
            } 
        } 
    }else{ 
        REP(i,26){ 
            vi nlast = tt; 
            nlast.pb(i);         
            vi qq = nlast; 
            prep(nlast); 
            ll val=go(len+1,false,nlast); 
            if(val>=k+1){ 
                rr.pb(char('a'+i)); 
                go2(len+1,false,qq,k); 
                break; 
            }else k-=val; 
        } 
    } 
} 
 
class NextHomogeneousStrings { 
public: 
 string getNext(int _d, int _n, string seed, long long k) { 
     d=_d;n=_n; 
     REP(i,55)REP(j,2)r[i][j].clear(); 
     s=seed; 
    if(go(0,true,vi(0))<k+1) return ""; 
    rr=""; 
    go2(0,true,vi(0),k); 
    return rr; 
 } 
  
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/