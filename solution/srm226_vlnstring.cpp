/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3489
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

class VLNString {
public:
    string makeAcronym(string longName);
};

string VLNString::makeAcronym(string longName) {
    string ret;
    return ret;
}


int test0() {
    string longName = "dance dance revolution";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "DDR";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string longName = " return of the king ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RK";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string longName = "the united states of america";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "USA";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string longName = " of the and ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
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
    string longName = "s p a m";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SPAM";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string longName = "something and";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "S";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string longName = "oneword";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string longName = "of";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string longName = "the";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string longName = "and";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string longName = " ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string longName = "blahof blahand blahthe";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "BBB";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string longName = "theblah ofblah andblah something";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TOAS";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string longName = "word blandah blofah bltheah ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "WBBB";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string longName = "omgbighugegiganticwordthingyofginormousdestruction";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "O";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string longName = " fweebf f of rzvq andlbtmk zjlq yeoddhg ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "FFRAZY";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string longName = " jkppa and hijjp sljv of the of of ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "JHS";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string longName = " surqlzkpn the esboqpdgu dbzz qpkisc and os";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SEDQO";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string longName = "and the and and sipivzq geadketova xddbjbm";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SGX";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string longName = " rekuhjspbg of and xvgj z the and an";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RXZA";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string longName = " w iizcgfj nhwnitcxsis hicammgfj ythe and and";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "WINHY";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string longName = " slsljk andof of ckvifiwo zcihcnskbg and ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SACZ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string longName = "rnikdltuo fsoqui sdbmexbfhbuoq iax szollfq";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RFSIS";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string longName = "qefw jmo of eec glqxnyseo andezstlof the";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "QJEGA";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string longName = " ofpdgdodpdok bdp oehnqooc swuomeivdryko ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "OBOS";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string longName = " p the ad hyfxlddpxl the k lxkntauoi";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "PAHKL";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string longName = " and hdcfwqvqsw bluldkm urfmxtq vtssdwykkc ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "HBUV";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string longName = "uhnikqrpl c czepogygaerpgh vgrmleand ofrzxvkydcy";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "UCCVO";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string longName = "khvc frzzzxkuro q lxaxpugnsl the slpdafrx h";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "KFQLSH";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string longName = " kd zxcyjesypg rka bkwh nvlawkbdfo kmucex";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "KZRBNK";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string longName = "ktzayeesj and jkcffgra pqztp gmdhhozu m of ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "KJPGM";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string longName = " apdqbxat xq of rgr and naand the palvm";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "AXRNP";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string longName = " the yunfgdl rfxygsgdws the of hrovn xrgg";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "YRHX";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string longName = "andy and wcdzwof ufg ddmrpkkj ywmck ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "AWUDY";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string longName = " zkf of hivggp shdu dhastzpofdzegzkbag zmvh";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "ZHSDZ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string longName = " mlxohespzjbioufkef mbt and ymtirjn xl ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "MMYX";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string longName = " x qzqjizsae and xlakquqpi of andqmo of";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "XQXA";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string longName = " rgnqffhbl cyabkw gdoz jfdzqpjspu of r ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RCGJR";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string longName = " fkiomof cwsjand dlvtheqdoskgselv brj bfragezs";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "FCDBB";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string longName = " hdrbidiqn ydhpkciabmf the lzwlcbmw dbg";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "HYLD";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string longName = "sualzwnkjq and czrrh xgand f j mc t";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SCXFJMT";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string longName = " fqnsdldqvkd and theof cdkzfpaaa niicfogc";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "FTCN";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string longName = " of kjfzxaof and the and xluofzvplx ay";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "KXA";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string longName = " o mart nujxrjesvjywpqentexwngv the and the";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "OMN";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string longName = " of trbubll sszxiryy mgbqvsgozaubfibnoj and ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TSM";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string longName = " tiohszjz the the ankyrr and cfnxcvhaaof t";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TACT";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string longName = " of sjgagjnkauthe ycxjsthxjbezdu wmlwplyayx ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "SYW";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string longName = " lwje wgfprtcxb of qjhjtxkup zydytbahi ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "LWQZ";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string longName = " and phmymcamuy mrzo wnjejydhpqedthe of k";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "PMWK";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string longName = " yttthe ceu xcith the thethe fxqjry hgi";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "YCXTFH";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string longName = " jc gvg and nhkarc vzx and the oe";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "JGNVO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string longName = " return of the king ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RK";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string longName = "andf kol";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "AK";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string longName = "this is a very simple expample";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TIAVSE";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string longName = " h and the world ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "HW";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string longName = " return of the king ";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "RK";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string longName = "anda";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string longName = "dance dance revolution";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "DDR";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string longName = "af rata of w";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "ARW";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string longName = "title animal orange hair and the texas";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TAOHT";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string longName = "thes ands offs";
    VLNString* pObj = new VLNString();
    clock_t start = clock();
    string result = pObj->makeAcronym(longName);
    clock_t end = clock();
    delete pObj;
    string expected = "TAO";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=11922116&rd=6515&pm=3489
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <algorithm> 
#include <sstream> 
 
#include <cstdio> 
#include <cstdlib> 
 
#include <cmath> 
 
#include <functional> 
#include <numeric> 
#include <cctype> 
#include <climits> 
 
#include <queue> 
#include <map> 
 
using namespace std; 
 
typedef vector<string> VS; 
 
#define si size() 
#define cs c_str() 
#define pb(x) push_back((x)) 
#define mp make_pair 
 
#define fi(i,S) for (int i=0;i<(S);i++) 
 
VS token(string s, string delim=" ")  
{ 
  VS ret; int j; 
  for (int i=0; i < s.si; i = j+1 ) { 
    j = s.find_first_of(delim, i); 
    if (j==-1) j = s.si; 
    if (j-i>0) ret.pb(s.substr(i, j-i)); 
  } 
  return ret; 
} 
 
class VLNString { 
  public: 
  string makeAcronym(string longName)  
  { 
    VS tok=token(longName); 
    string ret; 
    fi(i,tok.si) if (tok[i]!="and"&&tok[i]!="the"&&tok[i]!="of") ret+=toupper(tok[i][0]); 
    return ret; 
  } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/