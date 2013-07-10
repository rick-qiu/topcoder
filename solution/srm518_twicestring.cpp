/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11480
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

class TwiceString {
public:
    string getShortest(string s);
};

string TwiceString::getShortest(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "aba";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ababa";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "xxxxx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxx";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "topcoder";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "topcodertopcoder";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "abracadabra";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abracadabracadabra";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "xzxxxxxxxxxtxxxxxxxhxxxxggxxxxxxxxzxxxxxxxxxxxxxxa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xzxxxxxxxxxtxxxxxxxhxxxxggxxxxxxxxzxxxxxxxxxxxxxxaxzxxxxxxxxxtxxxxxxxhxxxxggxxxxxxxxzxxxxxxxxxxxxxxa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "dd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ddd";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "mstrrrwtsgdcplbixiomtegvevtlzwpkdsqfvg";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mstrrrwtsgdcplbixiomtegvevtlzwpkdsqfvgmstrrrwtsgdcplbixiomtegvevtlzwpkdsqfvg";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "tvgjtvgjtvgjtvgjtvgjtvgj";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tvgjtvgjtvgjtvgjtvgjtvgjtvgj";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "xppcwwzolgtgirirnv";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xppcwwzolgtgirirnvxppcwwzolgtgirirnv";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "txtx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "txtxtx";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "sbiisj";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sbiisjsbiisj";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "mzbzgqfsmnkoililhtimmzbzg";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mzbzgqfsmnkoililhtimmzbzgqfsmnkoililhtimmzbzg";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "djuqjdj";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "djuqjdjuqjdj";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "zxxanzxxanzxxan";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zxxanzxxanzxxanzxxan";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "dhkpeakykdhkpeakykdhkpeakykdhkpeakykdhkpeakykd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dhkpeakykdhkpeakykdhkpeakykdhkpeakykdhkpeakykdhkpeakykd";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "fazmvnipucpyccscfazmvnipucpyccsc";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fazmvnipucpyccscfazmvnipucpyccscfazmvnipucpyccsc";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "sgsqdcesgsq";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sgsqdcesgsqdcesgsq";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "ddddddddddddd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dddddddddddddd";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "laf";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "laflaf";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "hsvyksiogkoruxfwyclhorrfhsvyksiogk";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hsvyksiogkoruxfwyclhorrfhsvyksiogkoruxfwyclhorrfhsvyksiogk";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "hh";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hhh";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "rzddzhuerggorzddzhu";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rzddzhuerggorzddzhuerggorzddzhu";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "qacufkvqacufkvqacufkvqacufkvqacufkv";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qacufkvqacufkvqacufkvqacufkvqacufkvqacufkv";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "slhltlpsskbytzhqlryrqaslhltlpsskbytzhqlryrqaslhlt";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "slhltlpsskbytzhqlryrqaslhltlpsskbytzhqlryrqaslhltlpsskbytzhqlryrqaslhlt";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "xnbegwjfsekaviiciwrblrnysjfyxnbe";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xnbegwjfsekaviiciwrblrnysjfyxnbegwjfsekaviiciwrblrnysjfyxnbe";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "fodsjzeuzfodsjzeuzfodsjz";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fodsjzeuzfodsjzeuzfodsjzeuzfodsjz";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "jgndgngbwbzxwssczjmpiwcjgndgn";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jgndgngbwbzxwssczjmpiwcjgndgngbwbzxwssczjmpiwcjgndgn";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "zuqrwbcvxajzuqrwbcvxajzuqrwbcvx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zuqrwbcvxajzuqrwbcvxajzuqrwbcvxajzuqrwbcvx";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "qpftryetgqxfnaxfzepstjwumqlutidgmqxqpftryetgqxfn";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qpftryetgqxfnaxfzepstjwumqlutidgmqxqpftryetgqxfnaxfzepstjwumqlutidgmqxqpftryetgqxfn";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "lihurcineeilihurcineeilihurcine";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lihurcineeilihurcineeilihurcineeilihurcine";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "ooucjooucjooucjooucjooucjooucjooucjo";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ooucjooucjooucjooucjooucjooucjooucjooucjo";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "rvgwybajyhdqumxskwwrewnotuucrbtrvgw";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rvgwybajyhdqumxskwwrewnotuucrbtrvgwybajyhdqumxskwwrewnotuucrbtrvgw";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "wpegecqtobwpegecqtobwpegecqtobwpegecqtobwpegecqtob";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wpegecqtobwpegecqtobwpegecqtobwpegecqtobwpegecqtobwpegecqtob";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "uermbuermbu";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "uermbuermbuermbu";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "emdyayntlqzmdnqpmapltvmzsytpaeribrrdaiakvfzdoe";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "emdyayntlqzmdnqpmapltvmzsytpaeribrrdaiakvfzdoemdyayntlqzmdnqpmapltvmzsytpaeribrrdaiakvfzdoe";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "orrbkcioy";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "orrbkcioyorrbkcioy";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "dqmenwrdqmen";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dqmenwrdqmenwrdqmen";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "xmoz";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xmozxmoz";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "ppdxotppdxotppdxotppdxotppdxotpp";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ppdxotppdxotppdxotppdxotppdxotppdxotpp";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "ovhovhovhovhovhovhovhovho";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ovhovhovhovhovhovhovhovhovho";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "tfbuczltuxbvrgsrbhqsptmdatfbuczltuxbvrgsrbhqsptm";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tfbuczltuxbvrgsrbhqsptmdatfbuczltuxbvrgsrbhqsptmdatfbuczltuxbvrgsrbhqsptm";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "dozdozd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dozdozdozd";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "rampicvrampicvrampicvrampicvrampicvrampicvrampic";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rampicvrampicvrampicvrampicvrampicvrampicvrampicvrampic";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "girdzsyobfwcdjvgwrtnyaxjmuzzmhdgirdzsyobfwcdjvgwrt";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "girdzsyobfwcdjvgwrtnyaxjmuzzmhdgirdzsyobfwcdjvgwrtnyaxjmuzzmhdgirdzsyobfwcdjvgwrt";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "aycfkkqspbkulgxxmyrbnqkzsifdrgohrqnmbotmaycfkkqsp";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aycfkkqspbkulgxxmyrbnqkzsifdrgohrqnmbotmaycfkkqspbkulgxxmyrbnqkzsifdrgohrqnmbotmaycfkkqsp";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "hnxpgmqrxyzpqthshnxpg";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hnxpgmqrxyzpqthshnxpgmqrxyzpqthshnxpg";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "lemoaomonswpthxslemoaomonsw";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lemoaomonswpthxslemoaomonswpthxslemoaomonsw";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "deftdef";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "deftdeftdef";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "zvrpoilkzvrpoi";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zvrpoilkzvrpoilkzvrpoi";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "fffffffffffffff";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffffffffffff";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "qdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvq";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvqdvq";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "b";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bb";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "juwiyopwjuwiyopwjuwiyopwjuwiyopwjuwiyopwj";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "juwiyopwjuwiyopwjuwiyopwjuwiyopwjuwiyopwjuwiyopwj";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "ikckqvsyyqpubpmikckqvsyyqpubpmikckqvsyyqpubpmi";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ikckqvsyyqpubpmikckqvsyyqpubpmikckqvsyyqpubpmikckqvsyyqpubpmi";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "uxtzwpvxpufhhubsqjdoqt";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "uxtzwpvxpufhhubsqjdoqtuxtzwpvxpufhhubsqjdoqt";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "qnq";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qnqnq";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "ohhzgnoswnucohhzgnoswnucohhzgno";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ohhzgnoswnucohhzgnoswnucohhzgnoswnucohhzgno";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "tpmjldhtpmjldht";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tpmjldhtpmjldhtpmjldht";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "aygeay";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aygeaygeay";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "upupupupupupu";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "upupupupupupupu";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "jmnczcayhnemeuxpzzbljmnczcayhnemeuxpzzblj";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jmnczcayhnemeuxpzzbljmnczcayhnemeuxpzzbljmnczcayhnemeuxpzzblj";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "yumbuindzttbfkmehkkchibyiomeeqotbuesyumbuindz";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "yumbuindzttbfkmehkkchibyiomeeqotbuesyumbuindzttbfkmehkkchibyiomeeqotbuesyumbuindz";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "xnghujjflfnsytxmjleypmwxhxnghujjf";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xnghujjflfnsytxmjleypmwxhxnghujjflfnsytxmjleypmwxhxnghujjf";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "cgrgbjmvzayonzgcgrgbjmvza";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cgrgbjmvzayonzgcgrgbjmvzayonzgcgrgbjmvza";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "aesjvqkxlbpqzebpulrjqjbymrhikpcwmaesjvqkxlbpqze";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aesjvqkxlbpqzebpulrjqjbymrhikpcwmaesjvqkxlbpqzebpulrjqjbymrhikpcwmaesjvqkxlbpqze";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "ldhuldldhuldldhuldldhul";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ldhuldldhuldldhuldldhuldldhul";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "abbnxhssdalayabbnxhssda";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abbnxhssdalayabbnxhssdalayabbnxhssda";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "upeup";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "upeupeup";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "uuljmmswndettpjxgsluul";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "uuljmmswndettpjxgsluuljmmswndettpjxgsluul";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "lcoivieml";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lcoiviemlcoivieml";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "fffffffffff";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ffffffffffff";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "ikwyqminqbfqsonustlfkhrbhmibjmikwyqminqbfqson";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ikwyqminqbfqsonustlfkhrbhmibjmikwyqminqbfqsonustlfkhrbhmibjmikwyqminqbfqson";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "zyvrttonurwlmkarepqekxookzyvrtton";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zyvrttonurwlmkarepqekxookzyvrttonurwlmkarepqekxookzyvrtton";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "cnycnycnycny";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cnycnycnycnycny";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "kysitroqbuvxffirtkysitroqbuvxffirtkys";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "kysitroqbuvxffirtkysitroqbuvxffirtkysitroqbuvxffirtkys";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "chjeoychjeoychjeoychje";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "chjeoychjeoychjeoychjeoychje";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string s = "prewafwuxon";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "prewafwuxonprewafwuxon";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string s = "bmqtt";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bmqttbmqtt";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string s = "binrbnrmbinrbnrmbinrbnrmbin";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "binrbnrmbinrbnrmbinrbnrmbinrbnrmbin";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string s = "mm";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mmm";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string s = "vwacggzaackjsamsxhggtjjenrnesntibiuv";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "vwacggzaackjsamsxhggtjjenrnesntibiuvwacggzaackjsamsxhggtjjenrnesntibiuv";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string s = "ckjkslbsckjkslbsckjkslbsckjkslbsckjkslbsck";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ckjkslbsckjkslbsckjkslbsckjkslbsckjkslbsckjkslbsck";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string s = "aaaaaaaaaaaaaaaaaaaaa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string s = "osklnhlwfogvmmeaksgyosklnhlwfo";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "osklnhlwfogvmmeaksgyosklnhlwfogvmmeaksgyosklnhlwfo";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string s = "bjlfgcodtpgfb";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bjlfgcodtpgfbjlfgcodtpgfb";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string s = "rwpmyfipdzrvwroujrwpmyfipdzrvwroujr";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rwpmyfipdzrvwroujrwpmyfipdzrvwroujrwpmyfipdzrvwroujr";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string s = "hzufizqeurczoflytmmqonaihzufizqeurczoflytmmqo";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hzufizqeurczoflytmmqonaihzufizqeurczoflytmmqonaihzufizqeurczoflytmmqo";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string s = "snguycfpeovhzpmrpmokpowasnguycfpeovhzpmrpmokpow";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "snguycfpeovhzpmrpmokpowasnguycfpeovhzpmrpmokpowasnguycfpeovhzpmrpmokpow";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string s = "zmcnzjuiosxwzfbpgdgfzmcnzjuiosxwzfbpgdgf";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zmcnzjuiosxwzfbpgdgfzmcnzjuiosxwzfbpgdgfzmcnzjuiosxwzfbpgdgf";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string s = "kcbltgbilevijawlkcb";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "kcbltgbilevijawlkcbltgbilevijawlkcb";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string s = "htepauqhutdhvroxomkglxifpehtepa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "htepauqhutdhvroxomkglxifpehtepauqhutdhvroxomkglxifpehtepa";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string s = "pop";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "popop";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string s = "lriiaodhtsnpgwwsnedmqdlskesgphyixry";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lriiaodhtsnpgwwsnedmqdlskesgphyixrylriiaodhtsnpgwwsnedmqdlskesgphyixry";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string s = "nott";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "nottnott";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string s = "dzd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dzdzd";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string s = "udfpzrqbsfdsvru";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "udfpzrqbsfdsvrudfpzrqbsfdsvru";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string s = "dptomdptomdptomdptomdptomdp";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dptomdptomdptomdptomdptomdptomdp";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string s = "xpxzszbzpxp";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xpxzszbzpxpxzszbzpxp";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string s = "aaaaaaaa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string s = "wfdbwlajsqhincwfd";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wfdbwlajsqhincwfdbwlajsqhincwfd";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string s = "doflxkdoflxkdoflxkdoflxkdoflx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "doflxkdoflxkdoflxkdoflxkdoflxkdoflx";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string s = "tyzoeznjhnfcfiutsmitvzzwgngtogetyzoe";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tyzoeznjhnfcfiutsmitvzzwgngtogetyzoeznjhnfcfiutsmitvzzwgngtogetyzoe";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string s = "kkpgqukkpgqukkpgqukkpg";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "kkpgqukkpgqukkpgqukkpgqukkpg";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string s = "ablwkipetxablwkipetxablwkipetxablwk";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ablwkipetxablwkipetxablwkipetxablwkipetxablwk";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string s = "jrskhqmfpsmjwrirssqjrskh";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jrskhqmfpsmjwrirssqjrskhqmfpsmjwrirssqjrskh";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string s = "asviryzxjrzfedjxasviryzxjrzfedjxasvi";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "asviryzxjrzfedjxasviryzxjrzfedjxasviryzxjrzfedjxasvi";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string s = "a";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string s = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string s = "adfdgdssddssdsdff";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "adfdgdssddssdsdffadfdgdssddssdsdff";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string s = "ababababababababa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abababababababababa";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string s = "bb";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bbb";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string s = "usaushsueaohdueaohusaushuahusaush";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "usaushsueaohdueaohusaushuahusaushsueaohdueaohusaushuahusaush";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string s = "abcdea";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeabcdea";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    string s = "abxab";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abxabxab";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string s = "xxxxax";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xxxxaxxxxax";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string s = "sabsa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "sabsabsa";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string s = "ababa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abababa";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string s = "ababab";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abababab";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string s = "aaaaaab";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaabaaaaaab";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string s = "abaaba";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abaabaaba";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string s = "abcdeabcdabcde";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeabcdabcdeabcdabcde";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string s = "abaa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abaabaa";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string s = "xaxxaxx";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xaxxaxxaxx";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string s = "ba";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "baba";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string s = "abac";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abacabac";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string s = "zaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    TwiceString* pObj = new TwiceString();
    clock_t start = clock();
    string result = pObj->getShortest(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22836134&rd=14543&pm=11480
********************************************************************************
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
#include <sstream> 
#include <iostream> 
#include <cstdio> 
#include <cmath> 
#include <cstdlib> 
#include <ctime> 
#include <queue> 
using namespace std ; 
  
typedef vector<int> VI ; 
typedef vector<string> VS ; 
template<class T> inline int size(const T&c) { return c.size(); }   
  
class TwiceString { 
  public: 
  string getShortest(string s) { 
    int n = s.length(); 
    string s2 = s; 
    for (int i = 1; i <= n; i++) 
    { 
        bool ok = true; 
        int k = 0; 
        for (int j = i; j < n; j++) 
        { 
            if (s[j] != s2[k]) 
            { 
                ok = false; 
                break; 
            } 
            k++; 
        } 
        if (ok) 
        { 
            for (int j = n-i; j <= n-1; j++) 
                s += s2[j]; 
            break; 
        } 
    } 
    return s; 
  } 
 
 
}; 
  
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/