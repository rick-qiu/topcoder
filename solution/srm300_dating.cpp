/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4514
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

class Dating {
public:
    string dates(string circle, int k);
};

string Dating::dates(string circle, int k) {
    string ret;
    return ret;
}


int test0() {
    string circle = "abXCd";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "bC dX";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string circle = "abXCd";
    int k = 8;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Xa dC";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string circle = "ABC";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string circle = "HGFhgfz";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Hf Gg Fh";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string circle = "DiuwSFab";
    int k = 98;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "iD wF aS";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string circle = "ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxy";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "yA Ea Mb Yc sB Sd xC nD kF pG Ke jH Xf lI Og Nh oJ uL wP Ui Tm rQ Vq Rt vW";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string circle = "DiuwSFablmnoLMNOA";
    int k = 53;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "iA mD nF aL wM oN Sb Ol";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string circle = "abcdefghijklmnopqrstuvwxyABCDEFGHIJKLMNOPQRSTUVWXY";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA bB cC dD eE fF gG hH iI jJ kK lL mM nN oO pP qQ rR sS tT uU vV wW xX yY";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string circle = "ZzYyXxWwvVUuTtSsQqBbMmr";
    int k = 12;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "uB zM Sb wQ yT Zm Yq Wr sU xV Xt";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string circle = "ABCDEFGHIJkLMNOPQRSTUVWXYZ";
    int k = 26;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Zk";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string circle = "ABCDEFGHIJkLMNOPQRSTUVWXYZ";
    int k = 25;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Yk";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string circle = "ABCDEFGHIJkLMNOPQRSTUVWXYZ";
    int k = 37;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "kA";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string circle = "GHKJghkjYOIUerytX";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "He Jg kG Yh Ij rK tO Uy";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string circle = "XmOxgzjAMqlfevnNpkKoywrZTbiVh";
    int k = 25;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Tb wA yK Ze Xf jM oN qO gV";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string circle = "kCGIfnpMtrmgONcUwPxWhLsEiVXFdZQJHRYTqeKvA";
    int k = 80;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Kc Ad nC wE He Uf pF Gg mI Xh Wi Zk Nq Vr Js Tt Rv Ox";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string circle = "mOVoEfHenNMPRrZtkXsDpduagljhGYUv";
    int k = 85;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "pD rE Za gG eH Od Nf Uh nM Pj Rk lV tX sY";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string circle = "EubxqfgocnyzUSpIeWliQCjdhrk";
    int k = 74;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "iC Wb hE yI oQ pS zU";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string circle = "yNaxcSMYnfpuqVdezvZkogQmHLb";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Na cH Mb nL pQ qS dV zY Ze";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string circle = "cqPEKxhTHakiYjAougbrtCFlnNezwypV";
    int k = 47;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Aa Vb Cc jE iF uH eK Yg Th lN rP";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string circle = "joFHLzriJxNYPSfyOKspMtuqlQBIhmwdacEVkXg";
    int k = 13;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Pa Qc oB yE wF xH lI Jd hK Sf jL mM tN pO qV zX kY";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string circle = "VgXLMjnFywHlqRYDUdzvhOsbcNSoiBEfmkexAa";
    int k = 23;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "sA yB kD Oa qE jF gH xL Vb nM Uc oN Yd lR hS zX";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string circle = "OAyNpDdZKLtIzxlfbBShEMJiQTjoVFGnPgRWuXsa";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Oa Ab yB Nd pD Zf Kg Lh tE Ii zF xG lJ Sj Mn Qo Ts Vu";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string circle = "mgUJxeXnwdPRHcsaquWCDvjSfIhN";
    int k = 12;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ra fC wD Ic Pd gH jJ uN qS vU eW xX";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string circle = "njxiyktugvhecoqzabmfl";
    int k = 82;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "ljcfhznIMgTJvOuwtSXdksomFaRUE";
    int k = 41;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ja Rc wE Md nF Tf kI Og tS hU sX";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string circle = "yimsqwjegopvzfdNnUxt";
    int k = 78;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ud sN";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string circle = "RlQOfAFBkXPYKiEqUWDdVCzaHMrJIgNZSGLT";
    int k = 90;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Wa fA Gd Sg Oi Vk Pl Kq Ir Jz";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string circle = "FbmQiPCMENHOfUqXnKYJRZgvWALseGTDo";
    int k = 27;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Lb Ze Yf Kg Ri sA mC Un Fo Wq Gv";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string circle = "SkIYJNHKMbjAwGzCgcPdZQVnyX";
    int k = 79;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Sb Kc Vd Zg Yj kA Cn Nw Iy Qz";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string circle = "iDsnfvtburTgwYeOkdyBlxj";
    int k = 37;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Yb tB fD rO yT";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string circle = "hxfdzaep";
    int k = 20;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string circle = "rSEzTtVLIDfmkwihbuseUqMxYcGvFn";
    int k = 75;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "iD zE Fb Sc wG Ve fI vL mM uT Yh tU";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string circle = "reSZpdlcYqfFxnkamLCIKObwgoWit";
    int k = 15;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "kC eF Ia lK iL bO xS fW mY tZ";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string circle = "CXwhJzWkLabxvBfDIROyHjcNUSPlE";
    int k = 48;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Oa xB kC bD Hc hE Pf wI Nj Xl Wv Jy Rz";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string circle = "EsDxCvRWSVNIgwHoXTMFZOQ";
    int k = 32;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Sg Zo Is Wv Nw Ox";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string circle = "xlbyjaimMzpvshnugqWNYdrt";
    int k = 84;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "vM aN pW lY";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string circle = "mPYNBiTbtXoIxLsApejuEKcSCzkGVRgFwyrdQZUMa";
    int k = 13;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "xA kB Ma sC gE iF cG Pb Kd Ne Rj Im Yo Qp rL Ut Su Tw Vy Zz";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string circle = "nOzefQswgBvTI";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "wB sI Qe gO zT";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string circle = "HGFhgfz";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Hf Gg Fh";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string circle = "ABCDEfghiJKLmnopQrstuVWXYzabcd";
    int k = 5;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ea Jb oA tB Yc fC Ld rD Xg mK uQ iV zW";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string circle = "a";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string circle = "ABCDE";
    int k = 21;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "abXCd";
    int k = 8;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Xa dC";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string circle = "HxyGFaZMnPo";
    int k = 7;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Za yF xG nH Po";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string circle = "ABCDEFGd";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Bd";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string circle = "aA";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string circle = "asdGHJoiuLK";
    int k = 7;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "oG dH sJ uK La";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string circle = "PnFeCDabhKLMotzwx";
    int k = 4;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "eC hD oF xK bL wM tP";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string circle = "abcdefghijklmnopqrstuvwxyz";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "ab";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string circle = "ABCDEFGabcdefgHIJKhijkLMNOPQRSYTzyxWv";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Na Kb Jc Md vA Pe Lf zB kC Sg jD Eh Ri Qx Oy";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string circle = "abcDEF";
    int k = 6;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Fa cD bE";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string circle = "AZ";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "kAbBaEdDeFfgGhHiIjJK";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ja eA gB Gb iD hE jF dH Kf kI";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string circle = "AB";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "ABCD";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "aB";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aB";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string circle = "aqwertyuiopPOIUYTREQAmnblkMNBLKJ";
    int k = 6;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "tA Pa Rb kB qE iI Te Nl yJ Ym wK Un oL uM Op rQ";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string circle = "ABD";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string circle = "ABCDEFG";
    int k = 5;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string circle = "dguftweEWhHr";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "dE gH uW";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string circle = "abAB";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA bB";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string circle = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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
    string circle = "abXCd";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "dC aX";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string circle = "abcdefghijklmnOPQRSTWXVzytpqCBA";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "fA Ra hB eC nO dP kQ cS Vb jT iW gX";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string circle = "npIgGDLxAtasOouEqPfwMCbFrNjivHQkKmcBlhedJ";
    int k = 60;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "fA dB Fa sC Ib Jc pD Oe jE xG hH Lg Ni rK oM vP tQ";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string circle = "ABCDEFGHIJKLMNOPQRSTUVWXYyxwvutsrqponmlkjihgfedcba";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Aa Bb Cc Dd Ee Ff Gg Hh Ii Jj Kk Ll Mm Nn Oo Pp Qq Rr Ss Tt Uu Vv Ww Xx Yy";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string circle = "a";
    int k = 11;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string circle = "Aa";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Aa";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string circle = "abcdefghijkABCDEF";
    int k = 3;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "cA fB iC Da bE gF";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string circle = "abcdefg";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
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

int test71() {
    string circle = "ab";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string circle = "YZyz";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Yy Zz";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string circle = "zFJxSchKLgfdEYmRretyuioQWTUqwPADnIHasGZXMvblOkjNCB";
    int k = 94;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "lA Ma bB zC fD Wc Fd qE eG mH yI sJ rK gL oN Sh uO Yi Xj Pk xQ nR Tt wU vZ";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string circle = "AB";
    int k = 3;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string circle = "ABC";
    int k = 34;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string circle = "abXCd";
    int k = 5;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "dC bX";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string circle = "aAbBcC";
    int k = 3;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "bA Ca Bc";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string circle = "abXCd";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "bC dX";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string circle = "abcdA";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string circle = "abcdefghijXZ";
    int k = 12;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Za cX";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string circle = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuU";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA bB cC dD eE fF gG hH iI jJ kK lL mM nN oO pP qQ rR sS tT uU";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string circle = "PnFrgqjSeRCDabhKLMotzwx";
    int k = 5;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "gC Ra Lb wD rF hK xM Se nP";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string circle = "abcd";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string circle = "ABCDEFG";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string circle = "abcdefG";
    int k = 98;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ga";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string circle = "abc";
    int k = 2;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string circle = "HGFhgfzIopPMTL";
    int k = 10;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "pF zG fH oI Lg Ph";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string circle = "aAbdefSDIF";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA bD dF eI fS";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string circle = "aBcDeF";
    int k = 4;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Da cB Fe";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string circle = "abcd";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string circle = "HGFhgfzabcdywe";
    int k = 34;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "fF Ga bH";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string circle = "bAaBcCdD";
    int k = 3;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aA Cb Bc dD";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string circle = "RZpz";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "pR zZ";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string circle = "ABCDEFGabcdrtyuhgfjklvMPZ";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Pa Fb Mc Cd vA uB Df Zg lE Gh";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string circle = "ABCDEFGHIJKLMNOPQRSTUVWXYabcdefghijklmnopqrstuvwxy";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "yA Ea Mb Yc sB Sd xC nD kF pG Ke jH Xf lI Og Nh oJ uL wP Ui Tm rQ Vq Rt vW";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string circle = "alksdjfhOWAEIFJqwerVNM";
    int k = 7;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "fA Ja Md We Vh Ej lF rI Nk qO";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string circle = "CfPaTQVRSbUedW";
    int k = 99;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Ca Tb fP Rd eQ";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string circle = "abc";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string circle = "HGFhgfzk";
    int k = 1;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "Hf Gg Fh";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string circle = "abcdEABCDef";
    int k = 10;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "eA fB cC bD dE";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string circle = "abcdefgh";
    int k = 100;
    Dating* pObj = new Dating();
    clock_t start = clock();
    string result = pObj->dates(circle, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9821&pm=4514
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
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
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define FOR(i,a,b) for(int i=(int)(a);i<=(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
int both(const vector<char> &S) {
  int l=0, u=0;
  REP(i,SIZE(S)) if (islower(S[i])) { l=1; break; }
  REP(i,SIZE(S)) if (isupper(S[i])) { u=1; break; }
  return u && l;
}
 
class Dating {
public:
  string dates(string circle, int k) {
    vector<char> V;
    REP(i,SIZE(circle)) V.push_back(circle[i]);
 
    stringstream sout;
 
    while (both(V)) {
      FOR(kk,1,k-1) {
        char ch = V[0];
        V.erase(V.begin());
        V.push_back(ch);
      }
      sout << " " << V[0];
      char mam = V[0];
      V.erase(V.begin());
      char par = 127;
      REP(i,SIZE(V)) if (islower(mam) != islower(V[i])) par <?= V[i];
      sout << par;
      int q=0; while (V[q]!=par) q++;
      V.erase(V.begin()+q);
    }
    
    string res = sout.str();
    if (!res.empty()) res=res.substr(1);
    return res;
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/