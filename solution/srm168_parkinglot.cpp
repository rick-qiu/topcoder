/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1678
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

class ParkingLot {
public:
    int fastest(vector<string> lot);
};

int ParkingLot::fastest(vector<string> lot) {
    int ret;
    return ret;
}


int test0() {
    vector<string> lot = {".Y...........C", ".XUUUUUUUAUUX.", ".XUUUAUUAUUUX.", "..C...........", ".XUUUUUUAUUUX.", ".XUUUUUUUUUAX.", "......C.......", ".............E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> lot = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", ".........................Y........................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAE"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> lot = {"CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC", "................................................YE", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> lot = {"EACAY"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> lot = {"E", "A", "C", "A", "Y"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> lot = {"XC.CCUX....CC.Y", "EC.C..AA.A..UC.", "UCCCUCXC....XCU", "U..C.C.ACCCCCCC", "CC..CC.C.CAUC..", "ACC...CC...U.U."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> lot = {"Y", ".", "A", "C", "A", "E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> lot = {"C..A..Y.E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> lot = {"C..A.Y..E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> lot = {"Y...C", ".XXX.", ".....", "UUAUU", "EA..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> lot = {"A..AX...U.XXCC....X....XXCCXC.U.U...CA....Y..U.X..", ".C..AX..U.U..XX.X.CC....UCACA......CX...ACC...UUA.", "XU..UCX.U..XX..CUE.AAUA..ACC.XXU.CCUX.X.U.UA...U..", "..X.AAAAXACCX.XX...U.C.U...CXU.XACUX...U...X..CACU", "AX.UC.XCCAX.U.......UA.U..AXX.CC.CUX....A..CC.....", ".X.C.X.XUXXUXU....A....UAX..A..UX.U....C.......U.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> lot = {".A....CXACCUA.", ".AU..UCCX.A...", "X.C.A.U...U.U.", "A.AA..A...CCXC", ".X..U.UXX..XAX", "CUAX.C.XX....U", "..C.U.CC.X..C.", ".C.X.C.AXX.XY.", "XCU.AC.A.AX..X", "XX.AC...X..UXC", "CA.A.CA.UC....", "C.XUCC.AX.....", ".U.C....CCX..U", "CCUXAE..X....C", "X..ACACC...CUC", "A....XU.U.....", "..A.U...UC..A.", ".XUACC....A..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> lot = {"CCCCC", "CC..Y", "CC.UC", "ECXXX", "UCCCC", "CC.C.", "CCXC.", "CC.CC", "C.A.X", ".C.A.", "CC.CC"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> lot = {"X.UUU.UA.C", ".A....AAC.", "C.CAU.AXU.", ".X....XEU.", ".AXA.XXY..", "C.U.XA.UXC", "AA.AU..XC.", "UX.....X.U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> lot = {"...AU...AC..UC....CU..U..CXXXC....XUA..C", "XCC..A..CU.XA.U..UU.CUUUX.AAX..AUCU.CA.U", "CUCU.A.X..C....U.X.C...U..UAUA..U.CA..CX", ".....XACC.ACU.AU.A.X..X....U.U..CUU....C", ".CX.CCC..U.C..EC.AU..CUX..X.Y...UX.ACACA", "..CC.XUAX.X..AUXX.XA.UCCCCC.U......C.U.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
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
    vector<string> lot = {"CCYC..", "CX.AUC", "CCC..C", "X..CC.", "CCCA.X", "UC..CU", "CAE.C.", "C..CCX", "CUCC.U", "CCC.CC", "..CCCC", "C.CCU.", "X.CU.A", ".X..XX", "AX.AXC", "..CCAC", "XC..A.", "CCCCC."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> lot = {"U.UCX.", "X..C..", "......", ".U....", "CUUUCC", "....AX", "A..C..", "U..EC.", "..XA..", "....YX"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
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
    vector<string> lot = {"..X...UC.", "XAUXCXCA.", "..CCCCCCC", "CCCUU..CC", "AXCYCCCCA", "X..CA..A.", "CAC..A.UC", "CCUCCC.C.", ".U.A.XECA", "CUCCC..UC", "CCCAC.C.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
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
    vector<string> lot = {"AU....C.XC.CAC.X...Y.C", "CXUCECXCC......C....C.", "A..UXCAAU.C..CCAC.XU.A", "A.AC.C.UC....XA..U.X..", "XC.AC...A.UXXAU.XAX..C", "XUCC..C....X.C.....CCA"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> lot = {"..UAA", "UAU..", "C..CX", "YC.U.", "U.A..", ".XC.C", ".UCAC", ".CAXX", "U..XC", "CXXXX", "..CCC", "..E..", "AU...", "CA.XC", ".X...", "XX...", ".C.UU", "..ACC", ".CUUA", "A..UU", "..U.C", "...CC", ".C.U.", "U.UUC", ".AC..", ".XXC.", "ACXC.", "XA.U.", "..UXA", "CACA.", "X.U.X", "CAC.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> lot = {".CCA..XXCAA..X", "..C..YUC.C.U..", ".AXC...X.UX..C", "CUUU..UX...UA.", "CX....U...XA.U", "....CU.C.....U", "U.C..CU......U", ".XCC..AUU.UC.A", "UCA....X..CAX.", "..UCCC.A.UCCXU", "UCC.AE.U.UX..C"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> lot = {"..C.CCCCCXUC", "AC..ACXC..CC", "CCCCCCC.CCCA", "XCC.CCA....C", "C.CCECCCCCA.", "A..CCCCCCCCY", ".A.ACU.C..CU"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> lot = {"U...A.U.A", ".CX..A.A.", "XU.XU.A..", ".A.....U.", ".X.A.....", ".A..CX..U", ".UU.U.X.U", "XYU..AAAA", ".UA.AAAXA", "A...U.A.X", "X..AUUXU.", "A..U.UX..", "XUU..A..A", ".C.ECAA..", ".....UAU.", "U....XA..", "A.XAAA...", ".UXXUAA..", "..UU.UU..", "..U...UA.", "..A.XUAAU", "...A..A.X", ".A...U..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> lot = {"C..AA", "...C.", "..CCA", ".YCAC", "UCCUE", "CX..C", "UA.CC", "X..CX"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> lot = {".XUC....CAX.A.XC", "C...CAXY.CUCUCCC", "CCCC.X.U.CCCCXUU", "U.CCCC.C.UUX.CCC", "X.U...UCUXCCCU.C", "CCCCACC....X..C.", "AA...UECCX..CCXC"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> lot = {"X....C", "C....C", "CX...U", "A..CCX", "..YCCC", "CC.CC.", ".U..C.", "..U.CU", ".A.X.U", ".XUUUA", "C..CCC", "..CXC.", "X....C", "CXXC.A", "CCCCCC", "UUXAXC", ".UCC.A", "C.AUA.", ".UCU..", "..UECC", "C.CC..", "CX.UU."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> lot = {"C.CCCC", "CYCCCC", "CCCCCC", "ACCACC", "CCCCCC", "XACCCC", "CC.CCC", "C.CECC"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
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
    vector<string> lot = {"CA....C", "...CCC.", "XAA..AC", ".U.EU..", "C...C..", "..C..C.", ".Y.CUAA", "CC..UC."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> lot = {".A..XUCXAX..A.X.X.......X.U", "CCUXC...U......U.U.........", "...CYX...AC..A.UX...C.U....", "EA...C..ACCUA..U..A.A.U..C.", "CCAA...A...U.UA.AXUX..AAU.X"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> lot = {"..CUA.CCCCC...XX.C..X", "C..CA.....C.A.U.AU.XX", "CC.C.A..CXAXU.ACUACC.", ".X...C.UCCC..UAU.YCAC", "CA.CCEUCCC.C...ACUX.X"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> lot = {"..XU...AX...A..U.....U..UC.", ".YX..U.UC..AU..UA..U...A.X.", "E.XCU.AU.X.UCA..XX.X.A.....", ".U...X.A.....C.U.UX.....AA.", "..UXU...A......X........UUU", ".UA.U....UA..UU.CAX....U...", "UX.A.UXAXC.X..UXX.U.A....A.", "A...X..AUX.XXX.XU...AXU..U.", "....AXAAX.UAAXA...AC...A...", "UC..U.....AUUU.U.AACA..X..A", "...C.U.X.U.CCCU.X...C.UC...", "XCUUU...C.CUU.X..X....UCAX.", "XXU.XXU..XX.....A..U..XAX.A", ".XUA..A.AUU...XACU...X.AUU.", "X.X.XA..C..X.....U.U.C.....", "A.A.C.UUA..X.XA..AC..A.XUUX", "U.AU......XXU....X.AUC..U..", "CAUXA.X..AXA.A..XAAAUCC....", "UC..U.UUU..U..UUC...X.U....", "XUU..X.....UA.A..CA.UX.XX.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
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
    vector<string> lot = {".XU...C...X.C.", ".C..CXU.AAAAXX", "U...Y..CC...CX", "A.U.C.A...C..C", ".U.C.CXAUUU.AA", "........A.UUC.", "...ACAA.XU..A.", "CX....C..CU...", "A.....EC..UXC.", "U.CAX...CAA...", "...A..C.A..XUC", "..AC.U.UA..UU.", "...CXUA.CC.X..", "..X.U.......XX", "..XU..AXX.CCCA", "AA...CX.X...U.", ".A..X..CC....C", "A..U.UUAACCU..", ".....CCCC..CCC", "..AX.CA...XA.C", "X.X...XAAUA..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> lot = {"XAC..UCXUAU..UCCACC", "CCCCCCCXCUC.U..CA.C", "CXC.UA.C..ACC..CCCC", ".CYCC.X..CE.C.CC.CC", ".CC.UCCCCCCC...C.C."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> lot = {"CCCXECC", "CCCYUC.", "CA.U.CC", "CXCCUU.", "....CCC"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> lot = {"UA.XU.U..U..A.XC..X..XUAXX.A..X.AU..", ".XAXU.A..UX...XU.U..XA.X.CA.AAX.....", "......AA........C....U...AX..XUX.UAU", "U.....UUUU..A.A.XECXU......XC..UA...", ".X...XC.A.X..U.A..A..CX.XXU...XA.X.X", ".UU.....CXX.CX.X.A.A..XA.X.....XC..A", "CUU...A.UXU.U....XA.XA....A...XUAXA.", ".C.U...UXUU....A....C.U.UUAU.UA.U.X.", ".C...A.XUAAA.UXXCX.UX.....UXU...U...", "..C..U..AU.A...X.U....C....AA..U..A.", "...XC.UAC.XUXX.XX.AA...AAUXX...X.X..", "C.XUC..A...A...X.U..U.XXXX...XCAU...", "..A..XU.CA..AC.U.X...XUCA...X.AU.X..", "AX.XAX.UU..X..U.X...A.X...X......A..", "XAU.A.X.X.UU.CA...XX...C....A......U", "UACC..XX....A.U.U.U.....U....A.A....", "..AUA.XX..........XC.UAU..X...XXAAU.", ".UAXCU..A.A.UAAX...U..XY..XCCA.UA..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> lot = {"..A...A....A.X.AU.AX...A..XU.......A", "X..XAA.X.X.AUA.A.U.UAX....A.U.....U.", "..A...EX.U...X..A...XU.AX.....U..UXA", "XAA....UXUX....A....U.U...A..AU...AU", "UAXUX...A...U..AU.U..U...UA...UAX..X", "XU.AXUX...AU.AU...X..AC.......U.A...", "U.....UX..U...XA.X....UXUXUU..AU....", "U...U.A.........A....AUA.A..X......A", "..U.U...X.AX..AXXUA..U.....X..AU...U", "A...U.....A..U.A.Y..X.A..UU..U..XX..", "...X.A.....A.A.U.U.....UXAXAAXUX.A..", "....XXU..A..U.U..X.......A.U.X.XU...", "..XC.A.UAA..X...AA..U.A.U.AA..UA.XA.", "U.UCU...XA..A.U.XAA..X.A.A.UX.X.X..U", "AUU...U..UX.U.X.U.........XX...XUU..", "..X..U.......AA..A..XA.U.A....U....U", "U.A...X.X...X...XA.XAA....A.A..U...U", "U...X..X.X.....AA....XA...AXU..X.A.A", "UU..XU..........A..........U.U.U...U", ".AX...X.X.XXXUUA..XU.A....X......UAU", ".UXUU.A.X..UAX..X.X.AAXAU..X.A.UA.UA", "XX.U..A.A.XA.AX......A..AXAXU.XX....", ".A.U.A.A.AX.....X...A.U.X...XU.U..UA", ".A.X.XAU.X....XXUUU..UX......AA.AA..", "..U..AXX.U..XA...X.U....A..UXAXX..XX", "A......XX..UXU..X.A....C..U....X.AA.", "X..AXUA.U.A.U..XUAAUX.X...U.X.A.U...", ".......UC.X.U..UAX.X.XA.....AX......", "..A.X...X...A.U.UX....X...UX.X.....U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> lot = {"..A..XXXUC.A.A.UA.CYX.X", ".CXU..UUX.A..........CX", "...X.U.X.X..UC.X...CEU.", "CCA.X..X...XXX.AU.A.X..", "..C.UX....UU.C...AX...X", ".X.....UX.U.XA...X..XC.", "A.U.AXU.......XUUX.....", "X.AAU..A.A.AAX....A..X.", ".ACUXX.AA...C..CUAACU.X", ".UAUXU.AA.AU.A...X..AX."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> lot = {"X..UCCAUUCECUAACX..", "AU..ACC.C..C...X.YA", "U...C.....U.U...X..", ".X..CCAA.CC.UAX.U.A", "X.C.X..XCCX.UC.UCUC", "CU.CCCUCCUUXAC.ACCC", "ACCCC.U.UCC...C.X.U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> lot = {"..A.U..CAU....ACUA..XA.A.UX...A.C.", "C.X......XX.XX..U.X....UU....X....", "XU.A...AAX.C.A..A.XA.U....X...A.UA", ".AA.AUAX.CX..U.X.X..UX.X..UA.A..X.", ".UU...XX.....UXX..A.A.XU....CA.UUA", ".A...A.....UACCX.AX...C.U.EU..U.UX", "..U...X.A..U..U...XCUAA..AAUU.XXUC", ".U....UU..U.X..A..U.UUX..C.U..A..U", "A.AC.AAA...U.........AAA..XCU...UU", "...C...XXC..X.AA..XAUA..AA...U..UU", "..X.CA...C.X......U.U.U...X.AUUXA.", "..C..A..A...AX.U....Y..XA.C.X.AA..", "XC..X.X..AC.U..A.XA..XU...X...CUAC", ".A.X..UC.X.X.X....A.AUAX.UXAA..X.A"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> lot = {"U.ACCU..XU", ".UUUA.XX..", "C..X.AU...", "...A.CUY..", "U..EU...XA"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> lot = {".X.U..X....UU.U.XA...UC..U.UA.A.E.A", "..U..A.X...XX...U...U...X..U.XUX.X.", "U...U.X...U..........A...AXU.U..UUC", "UX..XX.AU..XAA.X.U.XCX..UX.......U.", "UAUX..UX...X....X.X..C.X..U...AXU..", "AA..AA..XUAX..A..XXX..AUUXUAXU.XUAU", "..A....A...XUU..A..A.XU..U..A.XX.X.", "XX.XU...AX.A.A.....UAA.UX.XA.C....X", ".UA.X.A.C...A..UXA.UAX.U.CU.XU....X", "..XX....UUU...XX..U..A.......U..A..", ".ACCUU.A.A.A.XX.....X..UX..A..U..X.", "XCX..UX...X.A.XAUA.UX.X.UA..U..A.A.", "UA..X.UC...U..X.AUUAX.U.X.......UA.", "..X.XXX..AXX.U..XXU..X...A...UAXX..", ".U.A..A.XX....XC.XAUX..AXUX......A.", "...X.A..AX.UU.XU......A.........AA.", "...UXU..X...U..U.U.X.U...U......UX.", "A.U.UA...CA....X..UXUA..X..XX..U...", "XXUC.CAU..X.U.......A...U..X.....XA", "..XA...U...UXYC.CAU...UXA..A...A...", "...XA....U.A.A...CX...A...AX..U..AC", "U..X.AX..U..UXX............AA..A..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> lot = {".CCCXU.AXU.CXC.X....A", "A..A.X.XU.U.A...C....", "X.A.XA.Y.C.UA.A..U.X.", "..X....U.U.XCU.AC..A.", "...XU.E.C..XA..UCUX.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> lot = {".....AU.A.X.XAA.X.A.", "..X.....CXAU.A.UAXUX", "C.A..XUUU...XU...A..", "UEUAAU.X.AX.UU..X..X", "..X.A.U...X.....UXA.", "......X..AU..XX...U.", "..UA.X...UU.....A..U", ".U....A.X..U.AX.A...", "AA.X.AX..UX.U.......", "....X.AAXU.U......UU", ".X.A.X......U..A.A..", "U.AAU.U..XX.....X..U", "U...U.A.AX.........A", ".U....U.....A...U.UA", "AA...X...AA.A...XUXU", "....U.AA...X...UU...", "U.UA.X.A.AU.UA..X...", "AU.U..X.U.A...A...AU", ".UUAX......A..U.XX..", "..UU...X...U.....UA.", "U.....YAAAXU.A..XA..", "XX.....A.UX..XXA..UA", "..A.A.X...U...A....A", "X..U.U......XUUA...U", "AA..U....U.CAU......", ".XA...U.U.U..AA...AU", "..UAA.......XA..UA..", "A....A.U...AU..X....", "...AAAA..A.....A.UUA", "U..UXU.A.....UA...XU", "UA.X.UUA.X..U.A.X.AA", "AA....UU..U.X..XU..."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> lot = {"CA.XYAUC.X.U..XCC.A.CXXX", ".XUC..CAXCA..C.C..CUCXXU", "U..AAX...A..CA.X.ACAU...", "C.C..X..C.C.E.A..XA...CU", ".UAU.CCCX..U....ACCCC.XC"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> lot = {"A...A", ".AUA.", ".A..U", ".UU.X", "A..XX", "CA.CU", "..AX.", "...XU", "XA.X.", "A..UU", ".AA.X", "..X.X", ".EXA.", "U....", ".A...", ".XXA.", ".....", ".UA.A", "U.A..", "UCCCX", "....X", "AX.UU", "A.U..", "..UAU", ".X.A.", "X...U", "X....", ".....", "..A.A", ".....", "AX.X.", "UXX..", "....X", "UAU.A", "....U", "AY...", "...X.", "X....", "XUXXX", "U.A..", ".X..A", "UAA.A", ".AXUX", ".X.UX", ".XA.C", "X..UU", "XUA.C", "AXXU.", "ACX.A"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> lot = {"....U..............XXXA.C..AUUC.", "A..CUXCX...U.........A.U....U..X", "AACXXX..U......X..CX.AAU...UC.CU", ".A.X...X.U..U.C..A..UUAA.CUUA.U.", ".UC........AC..UA.XAU...X....XC.", "CA..C.A....C....C.U.UUCACUU..X..", ".U.X..C.....U.XX..UX.X.UX..AXAXC", "...C..XCUX.U.U....XU.AA.X....AX.", "AU.A....A.C..XCA.A.....A.X.X...X", "...A..UXXCCU.AC..X.....UAC.X....", ".XAAX..ACUAUC.C.A..AAAUXX....A.A", "X.C..EA...C..AA.UA.C.X....XCA.XA", "AC.A..U..CUXA..U..U.C.C.AUUCUAXU", ".U...C...CAUAC....XXXUX.AYCC.AC."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> lot = {"U...XA.", "U.XA..X", "A.XX...", "AAX.AA.", "UUX.A.U", "...A.U.", "X..A.UA", "A.U..X.", ".XX....", "U..XXXA", "..AU..X", ".UUA.A.", "...AUA.", "..U...X", "U....U.", "XU.X...", ".U.....", "X.AA.XE", ".......", ".UU.AX.", "..A.UX.", "A....U.", ".A.XXUU", "....AUX", "...UU.Y", "X..X...", "A....U.", "....UU.", "A......", "....AX.", "AUUA.UA", "....AX.", ".UU.X..", "X......", "A.XU...", ".X..X.U", "...A...", "AXUXX..", "..A.U.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> lot = {".CU.A.X...X.AA", "AU.C.XA.XUA..A", ".CAUC.UU.UXU.U", "X.C.XU...X.X..", "AUX.AAA.U....X", "...U.XA.....CX", "U..U....UCAAAC", "X.A.U...XXAA.U", "......XX.XY..A", "AA...AX.UX..XX", "CE..XXUA.A....", "C.X.UU.U...A.X", "U....UUCC.X.C.", "XU...XUXA.A.UC", "AUX.X....XXA.X", "U.UX..U.UU.XX.", "U.UCCU.....X.U", "X.XX..XX.UA..A", "U........X..U.", "......C....X.C", ".U..AX.X..XUCU", "AUUXX...A.X...", "CA..U.XU......", "...X.UC..CU...", ".UX..U...XX..U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> lot = {"UU.X..X.X..U..U...UUAA.AA..A", "U....U..AU.UUC...X.UC...AUA.", "XU.A.U.A.XXAXXXAUA.A...A....", "UAA.U...XA...U...AA.X.X..AU.", "AU.....AU..A..XU..AUXA.C.A..", "..YA..A...UX.XA...ACXX..X.A.", "AXX.XU..U...A..X..X.UAEXA.AX"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> lot = {"XCCEX..", ".XUAUCC", "...AU.A", ".CX..AU", "Y..AUX.", ".C...U."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> lot = {".X.A.U..UU.A.", "A.U.X.UX..XX.", "A.UA.AXA..A.U", "..UXXUA...X.X", "..U..A...X.U.", "X.....AXUXX.X", ".U.U...A....X", ".UU.AXU.AXY.A", "A..A...A...A.", ".U.U.A.A...U.", "...U.A...X.U.", "X......A...U.", ".UU..A.X..AAA", "A...AXXU.AAA.", "EA.U.AA.U..A.", "UX..AXA.XU...", "A...........A", "..AU.X.A.X.X.", "UXA..A...A...", "X..U..X.X..A.", "..A..A..AUUX.", ".UX....U.XU.U", "A..X..UXU....", "...XAU.AX.A..", "A..U..X...XU.", "U..AA.....A..", ".U...U.A....X", ".AX...U.U...U", "U.C...X...X..", "U.X.AU.U.....", ".....U.UX.U.U", ".X.U.U.XX.A.."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> lot = {"..X.XA....X.A.U.X..U..XAAU.UXA...U", "..A...XU..X.AX....E.A.XX..X..A....", "........UXA.X.XXX.U.U.AUU..X..X.A.", "....XUA.XUX..XUUU...XCC..U..U.AA.U", ".A....AXA.U.X.X.XA...AU...UX..X.A.", ".U.A.AX.U..XUAAX.CA..AU.A.UX...XA.", "..X...U...U.X.AAU.XXA.X..UXU..XX..", "U...C...UXAA....X.UC...AUU.AA.....", ".AA.AXX.UX.U.X....X..U.X..X.A.A...", ".X.A...U.....X.A.XU......A......XY"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> lot = {".X.A.AUUUU.A..", "CAXCU.CU...AXA", "U....A.A..CAUC", "A...AU..U.C.C.", "X.CA..AUA.UA..", "AA...UXA.XUX.X", ".AA...Y..X.U.A", "...UUA.....UCX", "A..U.UUX...U.A", ".U...X..C.A...", "...A..X...UUUU", "XXUX..X...XUX.", ".X...XUXU...UA", "UA.U.UA....CA.", ".UXX.....A...A", "U.X..AXUX.X.CX", ".A..U....CCU..", "ACU.CA..AXA.A.", "XX....AA.A....", "U...C.UX..AUX.", "U....UU.....U.", "U...A.X..AACCX", "C.AUUACCXA...U", "U.C..XAAX.X...", ".....X...UU.U.", "..C.AX.CX.A..C", "UXA..U....AA..", "XUAAU...EAU...", "X.AUAX...UAA.U", "AX.A.A.A..A.XC", "AA.C.ACC.X.X.U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> lot = {".....Y...UAX.XA..UA.A.A", "U.U.UX.CU.UUAAUXUXUU.XU", "X...U......UC.X..A.C...", "...X..AA..XC.U.AX....U.", "......A.XAA.AX.CC...U.X", ".U...U..EC..XA..X.U..UU", "CX..XU.A..XCU.U...AA.CX", "A.XCA....XAXA..UC...U..", "..XA.A..........XC.....", ".AU......UAX...XA.AA...", "..AU..XX.....X...UU.A.C", "C..U.UCAAA..UAA..A.XXX.", "AAXA.XA.A.UX....A.UCAU.", ".U..C.A..A..U.C.U..A.U.", "....U.A.AX......U..X...", "...UA.AA.X..U......A..X"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> lot = {"X.XA.XA.U...U.AA.AU.X.X..AA..XX........A...XU.X", "....AX..X..A..U...U.....UA..AUUA.AA.A...AX.U.X.", "....XXU..U..X..X...AUX..UX.XU..XA.XUUX..X..EAX.", ".AX..UX.U...A.X.....X.UA..A..XAU...X.X....A.U..", "A.XXAUUX.X.XX.UAAX..U..A.A.....U....X..A.A....X", "XX.XX...U.A..X....U....U...X....U....A.AU.....X", "U.XUA.U...U.C....A...U....UXX....AX.A.....A.XAA", "....XUU..UUC.....UA..X..UA.A.....X.UA...AC...X.", ".A.UA.U.XA...U.XA.UUUU...A.X.A....X.A.....UXX..", ".XA.XUUUA..AXXU.XX.UX..AAA.A....XA..UAAUU.XU.AU", "A...XCXA.XU......X.A..X..X.AAX.ACXUX..AA..XA...", "X.AC.AAXA....U..UUAA......U..A.AUU.XAA..AA.X.X.", "U.A...X..U..X.U.XA..A.U.XAX.A.XXAAA.X.....XU.AX", "..XXX..U.AXX.....A..U..XAA...U..UXXX.....X.X..A", ".XU.......UA..UUAX.A..X.U..U.U...A.XAUU...A..X.", "AA.A...XAXUX..A.X....YA.AA.XX..XA...X.X.AUC.XXU", "..AX..XAX....A.AA..UU.A.A.UAA............XAUUX.", "..XAX.X....UX.A..A.A.U.C.U...U....X..AUXU.X...X", "A.A.X.U....A.....A..UUU..AAA.AA..XA....UUUX....", "..X...X.XA.XAXUX.XX..AUA..U.....X.U.AUAAA...XA.", "..C.X.......A.XCU..AXA...AX.X..C...X.....U.U.X.", "AA..U.X.X.XA....U..X.UUU...XX..X....XX...U..X..", "..AU...UU.UA.AXX..AXXACU.X....AAA..U.UU...A.AX.", ".A.X.X..A.UX..AUXAA....X...U...A.X..XA...U..X.U", "AA.....X.A....XAX.UAU...A....AU.A.....C..X....A", "..UUU.XX..A.CUX..X...C.U...X..X....UAU.UA.U...U", "UXAXXXU.X..U......A..U..U.A...XU.XA.U...XA..UX.", ".A.....X....U..X..CA.A.AA......UA.XAX.U.U.X....", "X...U...X.A...XAAUU.....U.....U.A.XUXX.XX....A.", "X.A.UUXXA..XU.....X.......X.UXXX...AX....A.A...", "XX.XAA.XU...AC.UXUU.A.U...X.....UA...U...XAA.U.", "C....A.U...U.......A........X.XXAA..X..U...UA..", "...C.U.X.........XAXU..AU...........UX.U.A..X.A", "..A..UX..U.....A.......XAXX...XAX.AAUA...A.A...", ".A..XA....U..UA.A.U....AX.XAAX.X..U......A.XXU.", ".A.......X.X..A.AAA...X...AXA.AXAA.U..UUAU..A..", "...X....XUUUX..A.....AUXU.UXA.UU..U.XA..A.X..U.", "X.U....U....A....AU.X..X..U..X.XXU.X.U.....AA..", "...X..XA.X.UAX....AU....X....A.X.XA.AA.X..A....", "..XA....UAUXXX.A...A.XU.....U..A..U.U..C.XX.U.U", "XX....AU..A....AX.XU.A.XU....AA.AUUX.XUUA..UU.A", ".U...U....AUUU......X..X..U....AU..X.....U..A..", "X.U.A.UAXX...X...UU.X..XA....X...U.U........A.X", ".UX.....U..U.UA.U.UXU...XU.....U..AUAUX.AXUA.XU", "AUA.....A........U..X.X..U.X..U.XX.UUX..A....U.", ".X.AX..A...U.X.UUUUA.X.A.UA..XX.AAU......AAX.A.", ".U.U.UUAA..........U.UA...XUUX.....X.X.U..U...U", "..AU.XX....XA.U..X......X.U..AUXA.C.A.UX..U...U", ".U..UUXA..X.U..U..A..AA.UA.X.UUU.....U.XXU.X.A.", "X.U..XXU...U.....U.UC...AXC...UX....U.UA.X...X."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> lot = {".A...XX.U..U...U..U.UUX.X.....UX.XAXA.X.....", "AA..A...A....A..X.U.AAX.U..A.UX...XUX.A..XUA", "A...A...U..XX....U.U....UC..XA.......XA.X.UX", "U...UAC.....X.......UA.UX..X.X.X.A.....AXA.U", "XU...XXX...U.UXXC.......U.XA..XX.A.X..U..AAC", ".A.A..Y......UXX..UXX.AA.......XUX..U..U.UCA", ".U.U..A.A....A..U.A.A.UAX..UXXU.A..A.U..A.UU", "..XU.U...X.X.UUAX.U..XU..XX.X.U.AUUXCA...XC.", "A.X.A.U.AX.......U.XX..A.C.AX.XAU..U..A.XX..", ".X.AX.X..UAU.XU.XXA..UXA.X..X.UUAA.UX..U..AA", "X....U.AXX..X.UXXXUA...........A...U.U...AUU", ".AUA..UUAC....AUUX...A...UX...X.A...X.CXUXAX", "...A..AA........X.AXU.....A.X.AAAX.U...AU...", "UX.XAUXXUU..UXAXX...X.X.XUXXC..U.UUX.XAX....", "....AX.A.A..XA..X..AU..X.X.AXA.X.UU.....U.A.", "UA.A..UX..AX.AX..U....XU..U..U...X...XX..AUX", ".AA.XX.A.X.X...U...U...C..AXA.......A...XU.A", "X...A.X........U....U.X..AXX...X.U....AU..A.", "X..UA.X.AAXXA..A....XU..AUUA...X..X.UAXAAUXX", ".U.A..U.UA.U..AX.U.X.UUU.AA....U...A...U..X.", ".A.AUUA.UX..XA.A.X..U.....U..U.AU.XA..X....U", "A..A......XAA..XXAX..A....AA.A..U....AAX.X..", "...XX.....XXA.UUXUX...XAAU......A....UUX..A.", "...A..XU.AA..UX.U.A....XX...X.U...A..A.U...A", ".U.U...U..U.XAA.....XA.....A.X.U......X..UX.", "....AX.....A..A...U.X..A.A.X.U.XU..UX.U....A", "A..X.U......XXA.A....AX..XUUA.A.X..X..X..X..", "U..U...XX..C..UX.....UA.U...A....A....UU.A.A", "U.UAU.AX.UU..X..U........A.U.....U...U...UU.", ".AAXXU....X.A.U....UU.UA...XUAAXEU..UU..X...", ".U.A..A..UA......X...U.X...UUAA...XA.X.A.A..", ".U..A...AXU...U....UUU..U....X...A.AC..U...."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 91;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> lot = {"......A.A....U..X", ".A..UUUX..AU..X.C", "UAAX.A...U.X....U", "U..U...X..X..AA.U", "U..C..UC.A...AAUU", ".C.X....XC..C...A", ".CAX...CU........", "AA.U.A..AAU....AA", "...C...AX.UAX...U", ".UXAU.U...A...X..", "C.XC.XXA..X.UAC..", ".....CYC.AA.X..AU", "C..U.AU.UAA.UA..X", "X..CACUA...C.AX.A", "..CACA...AA.....U", "XCXUX..X.....A.CC", "..X.....U...A.A.U", ".........UAUC.ACU", ".U..ACU..X.ACA.A.", "..U...UUA.X...UXE", "....XX.X.X.CA.U.A", ".AACX.UA.A.U.UAUX", ".X.X.A.....X....C", "...U.A...AXUAU.A.", "C....AC..C.CC.U..", ".UXA.C.CUA...X...", "AAAU...AC..X.AU..", ".C..CCUAA...X.U..", "UA.XXX.CAAA...C.A", "AX.U..U...XA.XA.A", "UC.....XX...UXUX.", "..CX..A...UUUUX..", "...U.ACCCXA.X.UX.", "AA.U.UAU........."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> lot = {".CAA.X.U", "U...XX.C", "CCUCC.CU", "U.C.X...", "XCC...C.", ".....X.C", "XUC.A.C.", ".X..A..U", "AUCCXUAC", "XCC....U", "AXU..UCC", "CC...U..", ".CXAUCU.", ".C..CX..", "AX.CXC.C", "CXEX..XU", ".XACYCCC", "CXAAA...", "C..XACCC", "C..CCCAA"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> lot = {"...A.", "..U.C", "A..XC", "C...A", "C.A.A", "AX.AU", "C.AU.", "A..CC", "C..X.", "X.XU.", "XA...", "U.C.C", "U...X", ".C..A", "UA.A.", "CCCC.", "C..AA", "AA...", "A....", ".C.AA", "X.XCX", "CCC.X", "C.U.A", "CUUXA", "C...C", "ECUUY", "C..AC", "CCAU.", "..AA.", ".....", "X..UX", "..C.U"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> lot = {"Y....C", ".XXXX.", "......", "UUAUUU", "EA...."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> lot = {"XAXAXAXAXAXAX", "X.X.X.X.X.X.X", "C.Y.C.C.C.C.C", ".XXXXXXXXXXXX", "............E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> lot = {"EX", "XX", "YA"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> lot = {"C....", "XXAXX", "E...Y"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> lot = {"Y.ACAE"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> lot = {"Y..A", "XXXX", "XEXX"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> lot = {"Y................................................A", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX..", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "..................................................", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX.", "..................................................", ".XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "................................................AE"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 1272;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> lot = {"Y................................................A", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU..", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "..................................................", "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU.", "..................................................", ".UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU", "................................................AE"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 145;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> lot = {"Y.................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "..................................................", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.", "..................................................", ".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", ".................................................E"};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> lot = {"....A...E", ".........", ".........", ".XXXXX.X.", ".X..C..X.", ".X.XXXXX.", "Y........", ".........", "....A...."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> lot = {"....A...E", ".........", ".........", ".XXXXX.X.", ".X..C..X.", ".X.XXXXX.", "Y........", ".........", "....A...."};
    ParkingLot* pObj = new ParkingLot();
    clock_t start = clock();
    int result = pObj->fastest(lot);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=286907&rd=4645&pm=1678
********************************************************************************
//program framework generated with WishingBone's parser :)-
 
//common header
#ifdef WIN32
#  pragma warning(disable:4786)
#  define for if (0); else for
#endif
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
using namespace std;
 
//64 bit integer definition
#ifdef WIN32
#define in_routine(type,spec) \
istream& operator>>(istream& s,type &d){char b[30];s>>b;sscanf(b,spec,&d);return s;}
#define out_routine(type,spec) \
ostream& operator<<(ostream& s,type d){char b[30];sprintf(b,spec,d);s<<b;return s;}
typedef signed __int64 i64; in_routine(i64,"%I64d") out_routine(i64,"%I64d")
typedef unsigned __int64 u64; in_routine(u64,"%I64u") out_routine(u64,"%I64u")
#else
typedef signed long long i64;
typedef unsigned long long u64;
#endif
 
//common routines
#ifdef WIN32
#define min(a,b) _cpp_min(a,b)
#define max(a,b) _cpp_max(a,b)
#endif
#define abs(a) ((a)>0?(a):-(a))
#define s2d(s,d) {istringstream(s)>>d;}
#define d2s(d,s) {ostringstream t;t<<d;s=t.str();}
int gcd(int a,int b){for(int c;b;c=a,a=b,b=c%b);return a;}
int lcm(int a,int b){return a/gcd(a,b)*b;}
 
//remove routine
template <class T>
void remove(vector<T>& v,const T&e){
  v.resize(remove(v.begin(),v.end(),e)-v.begin());
}
template <class T>
vector<T> remove_copy(vector<T>& v,const T&e){
  vector<T> result;
  remove_copy(v.begin(),v.end(),back_inserter(result),e);
  return result;
}
 
//output routine
ostream& operator<<(ostream& s,string d){
  s<<'\"'<<d.c_str()<<'\"';
  return s;
}
template <class T>
ostream& operator<<(ostream& s,vector<T> d){
  s<<"{"<<endl;
  for (typename vector<T>::iterator i=d.begin();i!=d.end();i++)
    s<<(i!=d.begin()?",":"")<<*i<<endl;
  s<<"}";
  return s;
}
 
//parsing routine
template <class T>
vector<basic_string<T> > parse(const basic_string<T> &s,const basic_string<T> &delim){
  vector<basic_string<T> > ret(0);
  for (int b,e=0;;ret.push_back(s.substr(b,e-b)))
    if ((b=s.find_first_not_of(delim,e))==(e=s.find_first_of(delim,b)))
      return ret;
}
vector<int> intparse(const string &s,const string &delim=" \t\n"){
  vector<string> tmp=parse(s,delim);
  vector<int> ret(0);
  int t;
  for (vector<string>::iterator i=tmp.begin();i!=tmp.end();i++)
    sscanf(i->c_str(),"%d",&t),ret.push_back(t);
  return ret;
}
 
//name mapper
class mapper{
public:
  map<string,int> m;
  vector<string> v;
  void reset(){
    v.clear();
    m.clear();
  }
  int size(){
    return v.size();
  }
  int get(const string str){
    if (m.find(str)==m.end()){
      m[str]=v.size();
      v.push_back(str);
    }
    return m[str];
  }
  string get(int i){
    return v[i];
  }
  vector<int> get(const vector<string>& strs){
    vector<int> ret;
    ret.reserve(strs.size()+2);
    for(int i=0;i<strs.size();i++)
      ret.push_back(get(strs[i]));
    return ret;
  }
  vector<string> get(const vector<int>& is){
    vector<string> ret;
    ret.reserve(is.size()+2);
    for(int i=0;i<is.size();i++)
      ret.push_back(get(is[i]));
    return ret;
  }
};
 
/*
'.' = open street 
'X' = obstacles 
'A' = available parking spots 
'U' = used parking spots 
'E' = the store entrance 
'Y' = your car 
'C' = other cars
*/
 
const int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 
class ParkingLot{
public:
  int m, n;
  int youx, youy, shopx, shopy, carx, cary, meid;
  int parkedtime[50][50], parkedid[50][50], carid[50][50];
  bool carmove(char c) {
    return c != 'X' && c != 'U' && c != 'E';
  }
  bool youmove(char c) {
    return c != 'X';
  }
  bool range(int x, int y) {
    return x >= 0 && x < m && y >= 0 && y < n;
  }
  bool assigncars(vector<string>& lot) {
    int ret = 10000, x = 0, y = 0, tox = 0, toy = 0;
    int step[50][50];
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) if (lot[i][j] == 'C') {
      for (int ii = 0; ii < m; ++ii) for (int jj = 0; jj < n; ++jj) step[ii][jj] = 10000;
      deque<pair<int, int> > que;
      que.push_back(make_pair(i, j));
      step[i][j] = 0;
      int park = 10000, parkx = 10000, parky = 10000;
      while (!que.empty()) {
        int x = que.front().first;
        int y = que.front().second;
        que.pop_front();
        int p = step[x][y];
        if (p >= park) continue;
        for (int d = 0; d < 4; ++d) {
          int xx = x + dir[d][0];
          int yy = y + dir[d][1];
          if (!range(xx, yy)) continue;
          if (step[xx][yy] < 10000) continue;
          if (!carmove(lot[xx][yy])) continue;
          if (lot[xx][yy] == 'A') {
            park = p + 1;
            if (xx < parkx || (xx == parkx && yy < parky)) {
              parkx = xx;
              parky = yy;
            }
          }
          que.push_back(make_pair(xx, yy));
          step[xx][yy] = p + 1;
        }
      }
      if (park < ret) {
        ret = park;
        x = i;
        y = j;
        tox = parkx;
        toy = parky;
      }
    }
    if (ret < 10000) {
  //    cout << "debug:  car at " << x << ' ' << y << " parked at " << tox << ' ' << toy << " with time " << ret << endl;
      parkedtime[tox][toy] = ret;
      parkedid[tox][toy] = carid[x][y];
      lot[x][y] = '.';
      lot[tox][toy] = 'U';
      if (x == youx && y == youy) {
        carx = tox;
        cary = toy;
      }
    }
    return ret < 10000;
  }
  int findfast(vector<string>& lot) {
    int step[50][50];
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) step[i][j] = 10000;
    deque<pair<int, int> > que;
    que.push_back(make_pair(youx, youy));
    step[youx][youy] = 0;
    while (!que.empty()) {
      int x = que.front().first;
      int y = que.front().second;
      que.pop_front();
      int p = step[x][y];
      for (int d = 0; d < 4; ++d) {
        int xx = x + dir[d][0];
        int yy = y + dir[d][1];
        if (!range(xx, yy)) continue;
        if (step[xx][yy] < 10000) continue;
        if (carmove(lot[xx][yy])) {
          step[xx][yy] = p + 1;
          if (lot[xx][yy] != 'A') {
            que.push_back(make_pair(xx, yy));
          }
        } else if (lot[xx][yy] == 'U' && (parkedtime[xx][yy] > p + 1 || (parkedtime[xx][yy] == p + 1 && parkedid[xx][yy] >= meid))) {
          step[xx][yy] = p + 1;
        }
      }
    }
    int step2[50][50];
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) step2[i][j] = 10000;
    que.clear();
    que.push_back(make_pair(shopx, shopy));
    step2[shopx][shopy] = 0;
    while (!que.empty()) {
      int x = que.front().first;
      int y = que.front().second;
      que.pop_front();
      int p = step2[x][y];
      for (int d = 0; d < 4; ++d) {
        int xx = x + dir[d][0];
        int yy = y + dir[d][1];
        if (!range(xx, yy)) continue;
        if (step2[xx][yy] < 10000) continue;
        if (youmove(lot[xx][yy])) {
          step2[xx][yy] = p + 2;
          que.push_back(make_pair(xx, yy));
        }
      }
    }
    int ret = 10000;
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) {
      if (lot[i][j] == 'A' || (lot[i][j] == 'U' && step[i][j] < 10000)) {
        int t = step[i][j] + step2[i][j];
        if (t < ret) ret = t;
      }
    }
    if (ret < 10000) return ret;
    else return -1;
  }
  int fastest(vector<string> lot) {
    m = lot.size();
    n = lot[0].length();
    int idid = 0;
    for (int i = 0; i < m; ++i) for (int j = 0; j < n; ++j) {
      parkedtime[i][j] = 0;
      if (lot[i][j] == 'Y') {
        youx = i, youy = j;
        lot[i][j] = 'C';
        carid[i][j] = meid = idid++;
      } else if (lot[i][j] == 'E') {
        shopx = i, shopy = j;
        lot[i][j] = 'X';
      } else if (lot[i][j] == 'C') {
        carid[i][j] = idid++;
      }
    }
    carx = -1;
    while (assigncars(lot));
    if (carx == -1) return -1;
    return findfast(lot);
  }
};

********************************************************************************
*******************************************************************************/