/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1046
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

class StringMult {
public:
    string times(string sFactor, int iFactor);
};

string StringMult::times(string sFactor, int iFactor) {
    string ret;
    return ret;
}


int test0() {
    string sFactor = "wOw";
    int iFactor = 0;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string sFactor = "AbC";
    int iFactor = -3;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "CbACbACbA";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string sFactor = "Boo";
    int iFactor = 4;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "BooBooBooBoo";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string sFactor = "";
    int iFactor = 50;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string sFactor = "Racecar";
    int iFactor = -5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "racecaRracecaRracecaRracecaRracecaR";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string sFactor = "a";
    int iFactor = 50;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string sFactor = "a";
    int iFactor = -50;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string sFactor = "abcdefgHIJKLMNOPqrstuvWXYZcdefgHIJKLMNOPqrstuvWXYZ";
    int iFactor = 1;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefgHIJKLMNOPqrstuvWXYZcdefgHIJKLMNOPqrstuvWXYZ";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string sFactor = "abcdefgHIJKLMNOPqrstuvWXYZcdefgHIJKLMNOPqrstuvWXYZ";
    int iFactor = -1;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "ZYXWvutsrqPONMLKJIHgfedcZYXWvutsrqPONMLKJIHgfedcba";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string sFactor = "AbCdEfG";
    int iFactor = 7;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "AbCdEfGAbCdEfGAbCdEfGAbCdEfGAbCdEfGAbCdEfGAbCdEfG";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string sFactor = "AbCdEfG";
    int iFactor = -7;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "GfEdCbAGfEdCbAGfEdCbAGfEdCbAGfEdCbAGfEdCbAGfEdCbA";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string sFactor = "uapoifusdapofuaspodu";
    int iFactor = 0;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
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
    string sFactor = "oaiufpoiasudfpoiuasioasdu";
    int iFactor = 2;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "oaiufpoiasudfpoiuasioasduoaiufpoiasudfpoiuasioasdu";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string sFactor = "AAA";
    int iFactor = 16;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string sFactor = "AAA";
    int iFactor = -16;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string sFactor = "GreatProblem";
    int iFactor = 4;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "GreatProblemGreatProblemGreatProblemGreatProblem";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string sFactor = "TerrificProblem";
    int iFactor = -3;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "melborPcifirreTmelborPcifirreTmelborPcifirreT";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string sFactor = "Fubar";
    int iFactor = 10;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "FubarFubarFubarFubarFubarFubarFubarFubarFubarFubar";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string sFactor = "BlahBlah";
    int iFactor = 4;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "BlahBlahBlahBlahBlahBlahBlahBlah";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string sFactor = "test";
    int iFactor = 5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "testtesttesttesttest";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string sFactor = "fubar";
    int iFactor = -10;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "rabufrabufrabufrabufrabufrabufrabufrabufrabufrabuf";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string sFactor = "test";
    int iFactor = -5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "tsettsettsettsettset";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string sFactor = "Racejoemom";
    int iFactor = -5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "momeojecaRmomeojecaRmomeojecaRmomeojecaRmomeojecaR";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string sFactor = "googleplex";
    int iFactor = -5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "xelpelgoogxelpelgoogxelpelgoogxelpelgoogxelpelgoog";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string sFactor = "wOw";
    int iFactor = 0;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string sFactor = "Suny";
    int iFactor = 5;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "SunySunySunySunySuny";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string sFactor = "nwfniwng";
    int iFactor = -3;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "gnwinfwngnwinfwngnwinfwn";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string sFactor = "AbCdE";
    int iFactor = -9;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "EdCbAEdCbAEdCbAEdCbAEdCbAEdCbAEdCbAEdCbAEdCbA";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string sFactor = "AbC";
    int iFactor = -3;
    StringMult* pObj = new StringMult();
    clock_t start = clock();
    string result = pObj->times(sFactor, iFactor);
    clock_t end = clock();
    delete pObj;
    string expected = "CbACbACbA";
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=299273&rd=5074&pm=1046
********************************************************************************
import java.util.*;
public class StringMult {
  public String times(String sFactor, int iFactor) {
    if (iFactor==0 || sFactor.compareTo("")==0) return "";
    if (iFactor>0) {
      String s = "";
      for (int i = 0; i < iFactor; i++) s += sFactor;
      return s;
    }
    if (iFactor<0) {
      String s = "";
      for (int i = 0; i > iFactor; i--) s += new StringBuffer(sFactor).reverse();
      return s;      
    }
    return "";
  }
  /** begin cut - don't modify this line*/
  public static void main(String[] a) {
    new StringMult().runTestCase(0);
    new StringMult().runTestCase(1);
    new StringMult().runTestCase(2);
    new StringMult().runTestCase(3);
    new StringMult().runTestCase(4);
  }
 
  public void runTestCase(int nbr) {
    switch(nbr) {
      case 0 : {
        checkOutput(times("wOw", 0), "", 0); break;
      }
      case 1 : {
        checkOutput(times("AbC", -3), "CbACbACbA", 1); break;
      }
      case 2 : {
        checkOutput(times("Boo", 4), "BooBooBooBoo", 2); break;
      }
      case 3 : {
        checkOutput(times("", 50), "", 3); break;
      }
      case 4 : {
        checkOutput(times("Racecar", -5), "racecaRracecaRracecaRracecaRracecaR", 4); break;
      }
    }
  }
  final void checkOutput(int mine, int them, int nbr) {
    boolean success = (mine==them);
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append(mine);
      out.append(", Expected: ");
      out.append(them);
    }
    System.out.println(out);
  }
  final void checkOutput(long mine, long them, int nbr) {
    boolean success = (mine==them);
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append(mine);
      out.append(", Expected: ");
      out.append(them);
    }
    System.out.println(out);
  }
  final void checkOutput(double mine, double them, int nbr) {
    boolean success = doubleCompare(mine, them);
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append(mine);
      out.append(", Expected: ");
      out.append(them);
    }
    System.out.println(out);
  }
  private static boolean doubleCompare(double expected, double result){
    double MAX_DOUBLE_ERROR = 1E-9;
    if(Double.isNaN(expected)){
      return Double.isNaN(result);
    }else if(Double.isInfinite(expected)){
      if(expected > 0){
        return result > 0 && Double.isInfinite(result);
      }else{
        return result < 0 && Double.isInfinite(result);
      }
    }else if(Double.isNaN(result) || Double.isInfinite(result)){
      return false;
    }else if(Math.abs(result - expected) < MAX_DOUBLE_ERROR){
      return true;
    }else{
      double min = Math.min(expected * (1.0 - MAX_DOUBLE_ERROR),
        expected * (1.0 + MAX_DOUBLE_ERROR));
      double max = Math.max(expected * (1.0 - MAX_DOUBLE_ERROR),
          expected * (1.0 + MAX_DOUBLE_ERROR));
      return result > min && result < max;
    }
  }
  final void checkOutput(char mine, char them, int nbr) {
    boolean success = (mine==them);
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("'");
      out.append(mine);
      out.append("'");
      out.append(", Expected: ");
      out.append("'");
      out.append(them);
      out.append("'");
    }
    System.out.println(out);
  }
  final void checkOutput(String mine, String them, int nbr) {
    boolean success = (mine.equals(them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("\"");
      out.append(mine);
      out.append("\"");
      out.append(", Expected: ");
      out.append("\"");
      out.append(them);
      out.append("\"");
    }
    System.out.println(out);
  }
  final void checkOutput(long[] mine, long[] them, int nbr) {
    boolean success = (Arrays.equals(mine, them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("{");
      for(int x=0;x<mine.length;x++) {
        out.append(mine[x]);
        if(x<mine.length-1) out.append(", ");
      }
      out.append("}");
      out.append(", Expected: ");
      out.append("{");
      for(int x=0;x<them.length;x++) {
        out.append(them[x]);
        if(x<them.length-1) out.append(", ");
      }
      out.append("}");
    }
    System.out.println(out);
  }
  final void checkOutput(char[] mine, char[] them, int nbr) {
    boolean success = (Arrays.equals(mine, them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("{");
      for(int x=0;x<mine.length;x++) {
        out.append(mine[x]);
        if(x<mine.length-1) out.append(", ");
      }
      out.append("}");
      out.append(", Expected: ");
      out.append("{");
      for(int x=0;x<them.length;x++) {
        out.append(them[x]);
        if(x<them.length-1) out.append(", ");
      }
      out.append("}");
    }
    System.out.println(out);
  }
  final void checkOutput(double[] mine, double[] them, int nbr) {
    boolean success = (Arrays.equals(mine, them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("{");
      for(int x=0;x<mine.length;x++) {
        out.append(mine[x]);
        if(x<mine.length-1) out.append(", ");
      }
      out.append("}");
      out.append(", Expected: ");
      out.append("{");
      for(int x=0;x<them.length;x++) {
        out.append(them[x]);
        if(x<them.length-1) out.append(", ");
      }
      out.append("}");
    }
    System.out.println(out);
  }
  final void checkOutput(int[] mine, int[] them, int nbr) {
    boolean success = (Arrays.equals(mine, them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("{");
      for(int x=0;x<mine.length;x++) {
        out.append(mine[x]);
        if(x<mine.length-1) out.append(", ");
      }
      out.append("}");
      out.append(", Expected: ");
      out.append("{");
      for(int x=0;x<them.length;x++) {
        out.append(them[x]);
        if(x<them.length-1) out.append(", ");
      }
      out.append("}");
    }
    System.out.println(out);
  }
  final void checkOutput(String[] mine, String[] them, int nbr) {
    boolean success = (Arrays.equals(mine, them));
    StringBuffer out = new StringBuffer();
    out.append("Example ");
    out.append((nbr+1));
    out.append(" - ");
    out.append(success ? "success" : "failure   ");
    if(!success) {
      out.append("Got: ");
      out.append("{");
      for(int x=0;x<mine.length;x++) {
        out.append(mine[x]);
        if(x<mine.length-1) out.append(", ");
      }
      out.append("}");
      out.append(", Expected: ");
      out.append("{");
      for(int x=0;x<them.length;x++) {
        out.append(them[x]);
        if(x<them.length-1) out.append(", ");
      }
      out.append("}");
    }
    System.out.println(out);
  }
 
/** end cut - don't modify this line*/
    
}
 
// Powered by PopsEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/