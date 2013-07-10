/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3035
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

class ParenReduction {
public:
    string pretty(string expr);
};

string ParenReduction::pretty(string expr) {
    string ret;
    return ret;
}


int test0() {
    string expr = "((a*b)+(c*d))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a*b+c*d";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string expr = "((w+x)+(y+z))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "w+x+y+z";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string expr = "((s*t)/(m*n))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "s*t/(m*n)";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string expr = "((q^r)^(f^g))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(q^r)^f^g";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string expr = "(((((a+b)/c)*d)^e)-f)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((a+b)/c*d)^e-f";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string expr = "(a-(b/(c^d)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a-b/c^d";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string expr = "(e*((f+(g+h))*i))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "e*(f+g+h)*i";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string expr = "(((a-(b-c))-d)^((e/f)/(g/h)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(a-(b-c)-d)^(e/f/(g/h))";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string expr = "x";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string expr = "((a+((l-g)+o))^((r/i)*((t/h)*m)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(a+l-g+o)^(r/i*t/h*m)";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string expr = "z";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string expr = "(a-(b-(c-d)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a-(b-(c-d))";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string expr = "((u-d)*(((m/c)/y)+((z*(x-(l/e)))-((p+a)-(w*v)))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(u-d)*(m/c/y+z*(x-l/e)-(p+a-w*v))";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string expr = "((v^h)/((p+b)/(((u-(w-((r+z)^f)))-(m^d))+(l-y))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "v^h/((p+b)/(u-(w-(r+z)^f)-m^d+l-y))";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string expr = "((((n/(r*k))+(h-(i^(l^(c/z)))))/e)*((u*(x/o))*j))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(n/(r*k)+h-i^l^(c/z))/e*u*x/o*j";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string expr = "(((((t-(k/(o*m)))*(c*f))*((n/j)+(v-z)))^l)/(x-h))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((t-k/(o*m))*c*f*(n/j+v-z))^l/(x-h)";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string expr = "(a+b)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a+b";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string expr = "(c-d)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "c-d";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string expr = "(e*f)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "e*f";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string expr = "(g/h)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "g/h";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string expr = "(i^j)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "i^j";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string expr = "((h-q)/s)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(h-q)/s";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string expr = "(v/(k/w))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "v/(k/w)";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string expr = "(g+(t^y))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "g+t^y";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string expr = "((p/o)+(e*i))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "p/o+e*i";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string expr = "(z/((d-r)^a))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "z/(d-r)^a";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string expr = "(n^((x^l)/m))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "n^(x^l/m)";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string expr = "((((j+b)-u)-f)*c)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(j+b-u-f)*c";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string expr = "(w-(d+((h^g)/y)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "w-(d+h^g/y)";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string expr = "(((z-b)/f)-(i^x))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(z-b)/f-i^x";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string expr = "((l^u)*((t/m)-(k+r)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "l^u*(t/m-(k+r))";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string expr = "((v/j)+(a^(s/(p/e))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "v/j+a^(s/(p/e))";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string expr = "(q*((((c*n)+o)-j)*p))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "q*(c*n+o-j)*p";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string expr = "(((g*z)/(w-(t^s)))-(b*r))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "g*z/(w-t^s)-b*r";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string expr = "((q/y)-((c^h)+(v-(x/o))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "q/y-(c^h+v-x/o)";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string expr = "(((n+u)+(l-a))-(e-(f/i)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "n+u+l-a-(e-f/i)";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string expr = "(m/((((k+d)-((i^x)-w))+a)*s))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "m/((k+d-(i^x-w)+a)*s)";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string expr = "((d*(e-l))+(u/(v+(j^(f+y)))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "d*(e-l)+u/(v+j^(f+y))";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string expr = "((((k/o)-(m-n))^b)+(c*(h*r)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(k/o-(m-n))^b+c*h*r";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string expr = "(((z+((p^q)-t))*(g+((c^w)+i)))-a)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(z+p^q-t)*(g+c^w+i)-a";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string expr = "((((m^(u-p))*t)/(n*((b+f)-q)))-e)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "m^(u-p)*t/(n*(b+f-q))-e";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string expr = "((((v-(y^(h/l)))+(s*d))/(o^x))-k)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(v-y^(h/l)+s*d)/o^x-k";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string expr = "((j*g)/(c/((r-w)*(e^(a/((z^t)*s))))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "j*g/(c/((r-w)*e^(a/(z^t*s))))";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string expr = "((d+((b^x)*((i+k)-((q-u)+y))))/(m/c))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(d+b^x*(i+k-(q-u+y)))/(m/c)";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string expr = "(((z/(((l*o)*g)^(v*r)))/(n*f))-(p^h))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "z/(l*o*g)^(v*r)/(n*f)-p^h";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string expr = "(a+(((u*(j+z))/(k*((d/n)/((b/x)^i))))-y))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a+u*(j+z)/(k*d/n/(b/x)^i)-y";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string expr = "((((g-e)+(r*h))/f)/((m*c)^(l/(v*(w^o)))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(g-e+r*h)/f/(m*c)^(l/(v*w^o))";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string expr = "((((((q*s)/t)-p)*r)-(v^(w-((g+y)*u))))+f)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(q*s/t-p)*r-v^(w-(g+y)*u)+f";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string expr = "((((q+(c+k))/((f*a)+(i*(j^d))))*(e-(l-b)))+m)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(q+c+k)/(f*a+i*j^d)*(e-(l-b))+m";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string expr = "((((o*n)+((h+t)/s))/((z*x)*(((r-g)*q)-e)))-b)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(o*n+(h+t)/s)/(z*x*((r-g)*q-e))-b";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string expr = "(((((((d/k)+(f^a))*(x^(o-c)))+(s+u))^y)^b)*z)";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(((d/k+f^a)*x^(o-c)+s+u)^y)^b*z";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string expr = "((p^(((q-a)-(v-w))*j))-((((m-t)^((i/l)^d))*o)^u))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "p^((q-a-(v-w))*j)-((m-t)^(i/l)^d*o)^u";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string expr = "((e/(j-r))/(f-(z/((y-(s*w))^((i*h)-(u/(m^g)))))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "e/(j-r)/(f-z/(y-s*w)^(i*h-u/m^g))";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string expr = "((q*v)*((((a/(b+n))-(t/k))/((c/x)*(p+(h-j))))-s))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "q*v*((a/(b+n)-t/k)/(c/x*(p+h-j))-s)";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string expr = "(((n+(u+j))+y)*((((t-k)-r)*(d-((g-f)*q)))*(c/i)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(n+u+j+y)*(t-k-r)*(d-(g-f)*q)*c/i";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string expr = "((((v+w)-(x+z))+(a-(l*o)))^(e*(((p+m)^(h+b))*s)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(v+w-(x+z)+a-l*o)^(e*(p+m)^(h+b)*s)";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string expr = "((((z-y)+x)-n)+(p/((r^c)^((((o-q)*g)-a)^(d-b)))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "z-y+x-n+p/(r^c)^((o-q)*g-a)^(d-b)";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string expr = "((((s^(h-j))-i)^t)^((((m/f)+((e^w)^l))*k)^(u+v)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((s^(h-j)-i)^t)^((m/f+(e^w)^l)*k)^(u+v)";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string expr = "(((y/f)+((d^((((s-o)-v)-z)/h))^k))+(p+(w*(b^q))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "y/f+(d^((s-o-v-z)/h))^k+p+w*b^q";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string expr = "(((a*i)*(x/(m/(l+r))))*(((c/g)/(j^(t-(n-u))))-e))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a*i*x/(m/(l+r))*(c/g/j^(t-(n-u))-e)";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string expr = "((a*q)+(((((((r/k)-h)-u)-(n/e))-o)/(l-v))-(c-s)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "a*q+(r/k-h-u-n/e-o)/(l-v)-(c-s)";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string expr = "(((b+f)*((t*((g+m)^p))^(((j+x)*(i^y))*w)))-(d^z))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(b+f)*(t*(g+m)^p)^((j+x)*i^y*w)-d^z";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string expr = "(((f/g)+c)/(h*((e*a)-(((u/p)+(k+n))+(i^(o^y))))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(f/g+c)/(h*(e*a-(u/p+k+n+i^o^y)))";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string expr = "(((((d+z)*m)/j)-((t*w)-(v/(s-(r/l)))))^((x*q)^b))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((d+z)*m/j-(t*w-v/(s-r/l)))^(x*q)^b";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string expr = "((k*((m+(v+s))*(x^g)))^((w*(d-(b/((c-t)-u))))/n))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(k*(m+v+s)*x^g)^(w*(d-b/(c-t-u))/n)";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string expr = "((((p+r)-(h+l))*(f-q))*((e-i)*(((y+o)^z)-(j*a))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(p+r-(h+l))*(f-q)*(e-i)*((y+o)^z-j*a)";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string expr = "((((((k^p)^y)+x)+(a+(b^h)))+((u*o)/f))*((j/e)^m))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((k^p)^y+x+a+b^h+u*o/f)*(j/e)^m";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string expr = "((((z/g)^(r-(q+l)))^v)+((s/d)*(((c+i)+t)+(w-n))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((z/g)^(r-(q+l)))^v+s/d*(c+i+t+w-n)";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string expr = "(b/((r^((x+u)^(t-l)))/((((a-w)-(d^e))-o)+(z*h))))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "b/(r^(x+u)^(t-l)/(a-w-d^e-o+z*h))";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string expr = "x";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string expr = "(((((t-(k/(o*m)))*(c*f))*((n/j)+(v-z)))^l)/(x-h))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "((t-k/(o*m))*c*f*(n/j+v-z))^l/(x-h)";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string expr = "(((a-(b-c))-d)^((e/f)/(g/h)))";
    ParenReduction* pObj = new ParenReduction();
    clock_t start = clock();
    string result = pObj->pretty(expr);
    clock_t end = clock();
    delete pObj;
    string expected = "(a-(b-c)-d)^(e/f/(g/h))";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=262096&rd=5870&pm=3035
********************************************************************************
#include <iostream>
#include <string>
 
using namespace std;
 
class ParenReduction {
public:
string reduceleft (string E, char op) {
  int x, count;
  if (E. length () == 1) return E;
  count = 0;
  if (E [0] == '(') count++;
  x = 0;
  while (count > 0) {
    x++;
    if (E [x] == '(') count++;
    else if (E [x] == ')') count--;
  }
  char Eop = E [x+1];
  string E1 = E.substr (0, x + 1);
  if (E1 [0] == '(') E1 = E1. substr (1, E1. length () - 2);
  string E2 = E.substr (x + 2, E.length ());
  if (E2 [0] == '(') E2 = E2. substr (1, E2. length () - 2);
  
  E1 = reduceleft (E1, Eop);
  E2 = reduceright (E2, Eop);
   
  switch (op) {
  case '^':
    return ('(' + E1 + Eop + E2 + ')');
  case '*':
    if (Eop == '^' || Eop == '*' || Eop == '/') return (E1 + Eop + E2);
    if (Eop == '+' || Eop == '-') return ('(' + E1 + Eop + E2 + ')');
  case '/':
    if (Eop == '^' || Eop == '*' || Eop == '/') return (E1 + Eop + E2);
    if (Eop == '+' || Eop == '-') return ('(' + E1 + Eop + E2 + ')');
  case '+':
    return (E1 + Eop + E2);
  case '-':
    return (E1 + Eop + E2);
  }
  return "(-1)";
}
 
string reduceright (string E, char op) {
  int x, count;
  if (E. length () == 1) return E;
  count = 0;
  if (E [0] == '(') count++;
  x = 0;
  while (count > 0) {
    x++;
    if (E [x] == '(') count++;
    else if (E [x] == ')') count--;
  }
  char Eop = E [x+1];
  string E1 = E.substr (0, x + 1);
  if (E1 [0] == '(') E1 = E1. substr (1, E1. length () - 2);
  string E2 = E.substr (x + 2, E.length ());
  if (E2 [0] == '(') E2 = E2. substr (1, E2. length () - 2);
  
  E1 = reduceleft (E1, Eop);
  E2 = reduceright (E2, Eop);
   
  switch (op) {
  case '^':
    if (Eop == '^') return (E1 + Eop + E2);
    return ('(' + E1 + Eop + E2 + ')');
    break;
  case '*':
    if (Eop == '^' || Eop == '*' || Eop == '/') return (E1 + Eop + E2);
    if (Eop == '+' || Eop == '-') return ('(' + E1 + Eop + E2 + ')');
  case '/':
    if (Eop == '^') return (E1 + Eop + E2);
    return ('(' + E1 + Eop + E2 + ')');
  case '+':
    return (E1 + Eop + E2);
  case '-':
    if (Eop == '+' || Eop == '-') return ('(' + E1 + Eop + E2 + ')');
    return (E1 + Eop + E2);
  }
  return "(-1)";
}
 
string pretty (string expr) {
  int x, count;
  if (expr. length () == 1) return expr;
  expr = expr.substr (1, expr.length () - 2);
  count = 0;
  if (expr [0] == '(') count++;
  x = 0;
  while (count > 0) {
    x++;
    if (expr [x] == '(') count++;
    else if (expr [x] == ')') count--;
  }
  char Eop = expr [x+1];
  string E1 = expr.substr (0, x + 1);
  if (E1 [0] == '(') E1 = E1. substr (1, E1. length () - 2);
  string E2 = expr.substr (x + 2, expr.length ());
  if (E2 [0] == '(') E2 = E2. substr (1, E2. length () - 2);
 
  E1 = reduceleft (E1, Eop);
  E2 = reduceright (E2, Eop);
  return (E1 + Eop + E2);
}
};

********************************************************************************
*******************************************************************************/