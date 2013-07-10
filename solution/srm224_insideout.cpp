/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3452
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

class InsideOut {
public:
    string unscramble(string line);
};

string InsideOut::unscramble(string line) {
    string ret;
    return ret;
}


int test0() {
    string line = "I ENIL SIHTHSIREBBIG S";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "THIS LINE IS GIBBERISH";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string line = "LEVELKAYAK";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "LEVELKAYAK";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string line = "H YPPAHSYADILO";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "HAPPY HOLIDAYS";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string line = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "MLKJIHGFEDCBAZYXWVUTSRQPON";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string line = "RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA SEVODELT";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "THREE FRENCH HENS TWO TURTLEDOVES AND A PARTRIDGE";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string line = "AB";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "AB";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string line = " ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = " ";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string line = "XXXX";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "XXXX";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string line = " X";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = " X";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string line = "DF";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "DF";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string line = "BVVC";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "VBCV";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string line = " GYH";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "G HY";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string line = "AZDPDP";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "DZAPDP";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string line = "VAXAEB";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "XAVBEA";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string line = "WSPFHDUV";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "FPSWVUDH";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string line = "XXNIPSZQ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "INXXQZSP";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string line = " XAKTJOWNV";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "TKAX VNWOJ";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string line = "ZTC GY VJS";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "G CTZSJV Y";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string line = "AVSKBGPHMRNB";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "GBKSVABNRMHP";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string line = "AALJJPPNSVXF";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "PJJLAAFXVSNP";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string line = "FCWWVQCOJILOGA";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "CQVWWCFAGOLIJO";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string line = "KPTFAMCJTBB IY";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "CMAFTPKYI BBTJ";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string line = "KAWYBPVZXEKZLZLI";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "ZVPBYWAKILZLZKEX";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string line = "EJZRVJEYWUKDXLRJ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "YEJVRZJEJRLXDKUW";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string line = "OY RNNKLIHOVOFGIDN";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "ILKNNR YONDIGFOVOH";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string line = "SPRKNSUJ SIDCISMPD";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = " JUSNKRPSDPMSICDIS";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string line = "NGJYRQWWLETWHHREUHZI";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "ELWWQRYJGNIZHUERHHWT";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string line = "PKHZKPKHTLQDOSYYWYRY";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "LTHKPKZHKPYRYWYYSODQ";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string line = "FDOFYGOVRDPQCYW PA MQC";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "PDRVOGYFODFCQM AP WYCQ";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string line = "UPWGNIOLRTVV CTEH NTVY";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "VTRLOINGWPUYVTN HETC V";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string line = "RDUVXZBYPDKPNGLOQWBLMFUH";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "PKDPYBZXVUDRHUFMLBWQOLGN";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string line = "YGUUEWTSSRTEVGGDPACMHQVQ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "ETRSSTWEUUGYQVQHMCAPDGGV";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string line = "S HBRFPAVORVCHXLRHOYCAWHWK";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "CVROVAPFRBH SKWHWACYOHRLXH";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string line = "EQ QYSFECOGDKSMLTIBJYQTTOH";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "KDGOCEFSYQ QEHOTTQYJBITLMS";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string line = "GUURVSSBPDQSOOJQUTOXALLWSTVC";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "OOSQDPBSSVRUUGCVTSWLLAXOTUQJ";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string line = "SXKETJDGFFPKNUEFQFXLBLVULKHT";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "UNKPFFGDJTEKXSTHKLUVLBLXFQFE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string line = "IIIMXGHLAJEKPGUOFVDUKYSTCSSHQR";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "UGPKEJALHGXMIIIRQHSSCTSYKUDVFO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string line = "GGHOMHSKACDMYKUPVVYVRGAQFFDRFI";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "UKYMDCAKSHMOHGGIFRDFFQAGRVYVVP";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string line = "RYQTHYLUBCLUINRKW WWZVDQUDG ACLG";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "KRNIULCBULYHTQYRGLCA GDUQDVZWW W";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string line = "ERRAZQVHCGSGHGDLHFSSWSPVWOKHXOSR";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "LDGHGSGCHVQZARRERSOXHKOWVPSWSSFH";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string line = "GTFXARUWNLSYBAGYIECDDWCXUVWSYYVKND";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "IYGABYSLNWURAXFTGDNKVYYSWVUXCWDDCE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string line = "UIEYYBUPSHRVG RHFAYWQONNDJNZVU DQM";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "FHR GVRHSPUBYYEIUMQD UVZNJDNNOQWYA";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string line = "SWYWQQW YPPLGLYGEXYXPPHVPHN SOKCFCVJ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "XEGYLGLPPY WQQWYWSJVCFCKOS NHPVHPPXY";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string line = "AXUYHZMVLZFWRUY OCLS NUQNORAHKHYBLWS";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "CO YURWFZLVMZHYUXASWLBYHKHARONQUN SL";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string line = " STVMVFBXYZ U JSTZADZNWEKGLSFKJCKZCE";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "TSJ U ZYXBFVMVTS ECZKCJKFSLGKEWNZDAZ";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string line = "GWPVYOFMSEKDHBVLAAOLHICGPNVZHN ZBCANVM";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "OAALVBHDKESMFOYVPWGMVNACBZ NHZVNPGCIHL";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string line = "ULVUYZBFLC UKEJXTEUKONBWIDOCXTKSSGKLSTID";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "KUETXJEKU CLFBZYUVLUDITSLKGSSKTXCODIWBNO";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string line = "TRGLUVWUHFWUAZ RYKNFKOIUHVBWJPKSHQGYJWDY";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "FNKYR ZAUWFHUWVULGRTYDWJYGQHSKPJWBVHUIOK";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string line = "YTMJJOSQW YJQIGFUABHSAFIHIVSZBTITGGYNYOHJZ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "SHBAUFGIQJY WQSOJJMTYZJHOYNYGGTITBZSVIHIFA";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string line = "XPTUMQQDIHVTANILPCTIOLSXRNTTXGJIRKGHMFZVEM";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "OITCPLINATVHIDQQMUTPXMEVZFMHGKRIJGXTTNRXSL";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string line = "VYMNEKWYKTDSLOAW IVLOJ UQP I BMSSQDJLJSOJR J";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "JOLVI WAOLSDTKYWKENMYVJ RJOSJLJDQSSMB I PQU ";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string line = "ZTTDFVGWHXMYAPZPCFCFMLRFHHCZAISMVGAYFLHJHFMX";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "LMFCFCPZPAYMXHWGVFDTTZXMFHJHLFYAGVMSIAZCHHFR";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string line = "FNJXVZQMIJBTSEGDMOWKFPHOODKWYEHTGHPDPQCZOEIWHQ";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "HPFKWOMDGESTBJIMQZVXJNFQHWIEOZCQPDPHGTHEYWKDOO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string line = "SSQTNDZDRJTFJPOFKVODTJFNG DOEXFXWBCCUHWVUOAOZA";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "FJTDOVKFOPJFTJRDZDNTQSSAZOAOUVWHUCCBWXFXEOD GN";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string line = "CBH AGZPDBZAXBBRQULERBX GETFZUIGY JLWJWALGWJAVME";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = " XBRELUQRBBXAZBDPZGA HBCEMVAJWGLAWJWLJ YGIUZFTEG";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string line = "CZZGEEIAUGOJSYHRFXVXEQKERTEEMYZDHRIMFBGMPIJPWE A";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "EKQEXVXFRHYSJOGUAIEEGZZCA EWPJIPMGBFMIRHDZYMEETR";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string line = "CNGPEOU EKBDBRBDEKWRKMBTOERTFUPBFXDFERVF YRIEH VBG";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "OTBMKRWKEDBRBDBKE UOEPGNCGBV HEIRY FVREFDXFBPUFTRE";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string line = "OMUC HW XWJVRLZZNLNTFYEHIWPAJPFXNCKXLJZNAIVDPAJWKI";
    InsideOut* pObj = new InsideOut();
    clock_t start = clock();
    string result = pObj->unscramble(line);
    clock_t end = clock();
    delete pObj;
    string expected = "IHEYFTNLNZZLRVJWX WH CUMOIKWJAPDVIANZJLXKCNXFPJAPW";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=10195348&rd=5870&pm=3452
********************************************************************************
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
 
class InsideOut
{
  public:
  string unscramble(string line)
  {
    int mid = line.length()/2;
    string r;
    int i;
    
    for (i = mid-1; i >= 0; --i)
      r += line[i];
    for (i = line.length()-1; i >= mid; --i)
      r += line[i];
    return r;
  }
};

********************************************************************************
*******************************************************************************/