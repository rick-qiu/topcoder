/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9894
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

class LongStraightRoad {
public:
    int distanceToDestination(vector<string> signs, string destination);
};

int LongStraightRoad::distanceToDestination(vector<string> signs, string destination) {
    int ret;
    return ret;
}


int test0() {
    vector<string> signs = {"COLCHESTER 5;GLASTONBURY 25;MARLBOROUGH 13"};
    string destination = "GLASTONBURY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> signs = {"COLCHESTER 5;GLASTONBURY 25;MARLBOROUGH 13", "MARLBOROUGH 2"};
    string destination = "GLASTONBURY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> signs = {"COLCHESTER 5;GLASTONBURY 25;MARLBOROUGH 13", "GLASTONBURY 13;MARLBOROUGH 2"};
    string destination = "GLASTONBURY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"GLASTONBURY 8", "GLASTONBURY 10"};
    string destination = "GLASTONBURY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> signs = {"COLCHESTER 5;GLASTONBURY 25", "MARLBOROUGH 2"};
    string destination = "GLASTONBURY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> signs = {"A 25;B 15", "A 2"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"A 12", "B 20", "B 10", "A 10"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"A 12", "B 10", "A 11"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> signs = {"A 20", "B 7", "B 1", "C 7", "C 1", "A 10"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> signs = {"A 100;B 150", "B 125;C 58", "C 50;D 125", "E 80", "F 5", "D 85"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> signs = {"A 10", "B 10", "B 9", "C 10", "C 9", "A 7"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> signs = {"A 10", "B 10", "B 9", "C 10", "C 9", "A 8"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"A 1000", "C 1000", "C 750", "D 1000", "B 1000", "A 500", "D 251", "B 500"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 500;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> signs = {"A 1000", "C 1000", "C 750", "D 1000", "B 1000", "A 500", "D 250", "B 500"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"VM 457;ETG 657;OYAC 253;K 299", "JN 34;T 595;ED 12;K 234", "VM 366;ETG 566;JN 8;GU 285", "K 198;ETG 556;GU 275;OYAC 152;T 559", "OYAC 87;K 133;VM 291", "K 121;ETG 479;GU 198;GUC 166", "GUC 159;VM 272;K 114;OYAC 68", "GU 6;VM 87;T 290"};
    string destination = "T";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> signs = {"ZBTJ 95;LB 34;QXTQ 227;CZ 386;EZM 808", "CZ 16;EZM 438", "EN 248;E 340;EZM 360", "EN 134;EZM 246", "E 163", "EN 49", "EZM 151", "EZM 110", "EZM 49"};
    string destination = "EZM";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> signs = {"HMC 83;NUR 87;JLC 785;C 200;HMRC 517", "MN 528;HMC 70;AH 176;XDDS 98;BAMX 327", "XDDS 90;AH 168;MN 520;C 179;HMRC 496", "BAMX 165;AH 14;C 25", "HMRC 106;JLC 374", "YZYZ 379", "JLC 286;YZYZ 348;MN 42", "YZYZ 26"};
    string destination = "YZYZ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> signs = {"DAX 594;IN 890;QSEW 738;EDUP 747;RTJN 199", "DAX 490;RTJN 95;TS 779;GW 215", "GW 183;IN 754;K 345;A 47", "QSEW 347;K 90;IN 499;DAX 203", "QSEW 255;EDUP 264", "DAX 17;TS 306", "TS 237", "TS 157;EDUP 21;IN 164"};
    string destination = "IN";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> signs = {"KNP 73;EZAP 649", "WNT 542", "EZAP 591;KNP 15", "WNT 147;EZAP 210", "WNT 66"};
    string destination = "EZAP";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 129;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> signs = {"M 27;TNJ 653;S 112;SWCB 227;NSR 353", "SS 397;NSR 258;SWCB 132;Z 155", "SWCB 127;NSR 253;TNJ 553;SS 392", "NSR 90;TNJ 390", "NSR 62;SS 201", "NSR 6;VEJ 133", "TNJ 258;VEJ 85;SS 97", "TNJ 6"};
    string destination = "TNJ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> signs = {"H 362;UG 775;SXYK 280;ATV 707", "H 297;C 699;SXYK 215", "UCXJ 293;UG 377", "UG 375;G 184;YN 49", "UCXJ 180;G 73;C 253", "G 61;ATV 184;C 241", "C 209;UG 220;ATV 152;UCXJ 136", "C 137", "C 116;ATV 59"};
    string destination = "UG";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> signs = {"AA 1;BA 1;CA 1;DA 1;EA 1;FA 1;GA 1;HA 1;IA 1;JA 1", "AB 1;BB 1;CB 1;DB 1;EB 1;FB 1;GB 1;HB 1", "IB 1;JB 1;AC 1;BC 1;CC 1;DC 1;EC 1;FC 1", "GC 1;HC 1;IC 1;JC 1;AD 1;BD 1;CD 1;DD 1", "ED 1;FD 1;GD 1;HD 1;ID 1;JD 1;AE 1;BE 1", "CE 1;DE 1;EE 1;FE 1;GE 1;HE 1;IE 1;JE 1", "AF 1;BF 1;CF 1;DF 1;EF 1;FF 1", "GF 1;HF 1;IF 1;JF 1;AG 1;BG 1;CG 1;DG 1", "EG 1;FG 1;GG 1;HG 1;IG 1;JG 1;AH 1;BH 1", "CH 1;DH 1;EH 1;FH 1;GH 1;HH 1;IH 1;JH 1", "AI 1;BI 1;CI 1;DI 1;EI 1;FI 1;GI 1;HI 1", "II 1;JI 1;AK 1;BK 1;CK 1;DK 1;EK 1;FK 1", "GK 1;HK 1;IK 1;JK 1"};
    string destination = "JK";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> signs = {"AA 1;BA 1;CA 1;DA 1;EA 1;FA 1;GA 1;HA 1;IA 1;JA 1", "AB 1;BB 1;CB 1;DB 1;EB 1;FB 1;GB 1;HB 1", "IB 1;JB 1;AC 1;BC 1;CC 1;DC 1;EC 1;FC 1", "GC 1;HC 1;IC 1;JC 1;AD 1;BD 1;CD 1;DD 1", "ED 1;FD 1;GD 1;HD 1;ID 1;JD 1;AE 1;BE 1", "CE 1;DE 1;EE 1;FE 1;GE 1;HE 1;IE 1;JE 1", "AF 1;BF 1;CF 1;DF 1;EF 1;FF 1", "GF 1;HF 1;IF 1;JF 1;AG 1;BG 1;CG 1;DG 1", "EG 1;FG 1;GG 1;HG 1;IG 1;JG 1;AH 1;BH 1", "CH 1;DH 1;EH 1;FH 1;GH 1;HH 1;IH 1;JH 1", "AI 1;BI 1;CI 1;DI 1;EI 1;FI 1;GI 1;HI 1", "II 1;JI 1;AK 1;BK 1;CK 1;DK 1;EK 1;FK 1", "GK 1;HK 1;IK 1;JK 1"};
    string destination = "ZZ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"A 30", "B 2", "B 1", "C 2", "C 1", "D 2", "D 1", "E 2", "E 1", "F 2", "F 1", "G 2", "G 1", "H 2", "H 1", "I 2", "I 1", "J 2", "J 1", "K 2", "K 1", "L 2", "L 1", "M 2", "M 1", "N 2", "N 1", "O 2", "O 1", "P 2", "P 1", "Q 2", "Q 1", "R 2", "R 1", "S 2", "S 1", "T 2", "T 1", "U 2", "U 1", "V 2", "V 1", "W 2", "W 1", "X 2", "X 1", "Y 2", "Y 1", "A 5"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> signs = {"A 29", "B 2", "B 1", "C 2", "C 1", "D 2", "D 1", "E 2", "E 1", "F 2", "F 1", "G 2", "G 1", "H 2", "H 1", "I 2", "I 1", "J 2", "J 1", "K 2", "K 1", "L 2", "L 1", "M 2", "M 1", "N 2", "N 1", "O 2", "O 1", "P 2", "P 1", "Q 2", "Q 1", "R 2", "R 1", "S 2", "S 1", "T 2", "T 1", "U 2", "U 1", "V 2", "V 1", "W 2", "W 1", "X 2", "X 1", "Y 2", "Y 1", "A 5"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"YVO 60;J 62", "K 45", "K 40;MV 17", "K 37;YVO 44;HY 48;CC 69;D 77;YXF 80", "YVO 30;B 37;RB 59"};
    string destination = "MV";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> signs = {"TR 57;JCF 63;B 71;HW 91;M 94", "PM 57", "PBH 39;CLK 68;HW 77", "TR 21;X 48", "TR 19;CV 23;PM 26"};
    string destination = "PBH";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"LV 61;TFD 62;MA 87", "MA 65", "E 16", "SYT 3;E 14;ZCK 26;OFU 30;J 33;MA 49", "PN 3;S 5;ZCK 24"};
    string destination = "LV";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> signs = {"L 58;PX 64;QAA 65", "MS 38;L 57;Z 70;E 82", "L 56;KZ 61", "TN 14;HKL 36;PX 41", "VKG 48;E 52"};
    string destination = "TN";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> signs = {"DR 40;S 43;MP 54;DQ 63", "F 37;MP 47;G 76", "BSE 14;DR 16;O 44;E 56", "O 39;LE 59", "E 49"};
    string destination = "F";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> signs = {"J 56;GAT 71", "YK 57;R 68", "QO 68", "VCS 48;SZT 65", "JRG 51", "SGN 47;TE 87;RZK 94", "F 89", "A 53;SU 74;CUD 82;HR 87", "YK 50;DMO 58;YJ 76", "FE 55;TZV 78", "CC 75;GS 87", "YK 47", "C 67", "CC 72", "FQ 45", "S 48;DH 73;F 80;QC 83", "KX 75", "U 55", "YR 39;GAT 53;DID 75;F 77", "QC 79", "GP 63;F 75", "KX 70", "D 28;GY 45;U 50;EUY 51", "DS 39", "CC 61;OEX 76", "GY 42", "FQ 33;CC 59", "DS 35;TE 65", "FE 36", "QX 45;QUA 61", "UNI 24;QUA 60", "UNI 23", "DMO 34", "JRG 22;MVC 53;TE 59;F 62", "I 31", "FE 29", "YJ 48", "JRG 18;QO 33;Q 40;CC 48", "FE 26", "SZT 29", "JRG 15;A 20;I 25;GHV 36;E 38;W 42;NS 56", "SU 40", "UNI 12", "U 29", "ZMB 16;FE 19", "DID 47", "JRG 8;DMO 19;SZT 21;C 32", "DMO 18", "QO 21;ESO 26", "KNQ 3;UNI 4;FE 14;U 22;E 28;KX 41"};
    string destination = "J";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> signs = {"XQ 50;P 58;HQ 73", "Z 52", "Z 51", "LXZ 66;S 77;JM 84;K 87;SB 89", "FX 50;AN 96", "UI 47;NK 80;R 86;T 88;H 91", "U 58;IC 68", "FX 47;UJG 55", "A 43", "HS 67;FU 68;AN 91", "N 53", "J 86", "K 78;RWA 86", "OGC 68", "SPA 41;N 49;AN 86", "NOH 56;SN 73", "QC 66", "HQ 56", "A 33;RP 48;AN 82", "N 44;HQ 54;OGC 62", "AY 66", "Q 35;GG 37", "Q 34;LXZ 46;QC 59", "DM 55", "SN 63;E 70", "Q 31", "Q 30;I 57;H 69", "OVB 40;LXZ 41;FJD 71;AN 72", "IC 45;GSU 49;AY 57;AN 71", "PZ 31;MS 40", "LO 25;YS 41;AN 69", "HS 44", "A 18", "JM 53", "VD 59", "RWA 62", "OVB 31", "Z 15;OVB 30;WZN 45", "HU 26;DM 40;E 56", "H 56", "UJG 21;LMP 34", "RU 18;DM 37", "MS 27;AY 43", "DM 35", "S 35;VD 49", "LE 21;LXZ 23;DM 33", "K 43", "RP 18", "DM 30", "HU 15;J 47"};
    string destination = "XQ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> signs = {"UEZ 62;M 95", "P 84;VZ 89", "VCL 58;UEZ 60;QL 65;PRM 76", "XT 72;ZA 78", "JAD 92", "QL 62", "J 51;BMB 53;HT 55", "VQT 64", "HIR 66", "S 49", "F 82", "S 47", "SWE 65", "ZA 68;I 86", "VK 50;HIR 60", "SP 35;HQ 40;HZQ 50;SWE 62;DB 64", "YZV 40;OR 47;V 60;RZ 78", "SP 33", "ZQA 36", "YZV 37", "DB 59", "Y 52;C 61;AH 72;NF 76", "OIH 62;VX 66", "ZQA 31;DFE 47", "N 29;UEZ 38;F 68;JAD 72", "M 69", "NA 53", "YZV 28;U 55", "J 28", "HT 31", "J 26;S 27;UEZ 31;HZQ 34;VYY 37;ZA 50;AH 62", "ZA 49", "L 18;YFY 19;VZ 57", "L 17", "ZQA 19;J 22;IEV 34;NA 45", "VYY 32", "PRM 41", "C 44", "VCL 21", "L 11;UEZ 22", "VCL 19", "AH 51", "J 14;HL 29;X 43", "VQT 27;TQ 43;AH 49", "I 54", "YZV 10", "YZV 9", "UEZ 14;MQU 52", "YZV 7;T 17;R 40;AH 44;SWM 49", "VQT 21;HIR 24;VX 38"};
    string destination = "P";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"B 62", "XPK 51;KAE 56;MT 95", "C 48;GBG 65;VY 86;BL 88", "OK 94", "NB 49;IBL 83", "UF 50", "B 56", "B 55", "F 73", "UF 46;W 49;HX 68", "TD 41;NB 43;KAE 47;KQ 50", "ZBT 65", "VLC 54;Z 68", "NB 40;UF 42;Z 67;M 72", "SRY 70", "SW 48;CLJ 60;M 70;BL 75;YD 77;OK 82", "M 69", "XFY 42;UA 51;F 64", "I 43;D 46", "VDH 51;Y 52;TG 59;SRY 65;O 81", "NU 59;E 66;O 80", "EZ 51;HL 62;M 64;ZH 78", "UF 33", "E 63", "D 40", "XFY 34;G 48", "BL 64", "M 58", "B 34", "C 21", "UA 38;SFX 39;S 59", "OK 66", "S 57", "X 21;UA 35;BL 57;O 67", "B 28;GBG 33;WG 48;AIZ 57", "E 51", "YD 56", "I 24", "SN 26;ZBT 37;E 47", "NB 13", "IC 15;FZE 52;QGC 57;O 59", "BL 48;AAX 53", "KAE 14", "F 37", "XFY 14;D 19", "XFY 13", "O 53", "E 38", "B 13", "NB 3;V 44"};
    string destination = "I";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> signs = {"NCB 71", "Y 94;TWJ 96", "NRX 49;DOJ 51;JBM 67;NCB 69;KR 75;SRA 82;J 89", "WM 85", "E 56;O 64;B 69;KUF 77;A 89;TWJ 93", "SRA 79", "HL 70", "NCB 64", "HL 68", "JWT 54;KR 68", "JBM 59", "P 79", "LDA 44", "UAR 42;IFS 44;QJ 74;WM 75", "FQ 47;KR 63", "JWT 47", "H 65;TY 68", "QKB 34", "R 80", "WM 68", "KUF 60;FE 75", "DOJ 31;JJD 48", "WM 65;P 67", "SRA 60", "OLN 53", "NEW 40", "HH 27;W 38;SQ 45", "QKB 24;P 62", "TY 56", "X 34;OYE 49;KUF 51;EH 53;SRA 54;YCO 70", "YM 43", "NEW 34;T 35;OLN 46;TWJ 65", "OLN 45;JL 65", "G 52;MNN 60", "SRA 49", "TWJ 61", "LOS 22;KUF 44;TY 48", "LDA 18;W 27;KUF 43", "NRX 12", "D 18;OLN 38", "UAR 14;CFS 21;PE 34;HL 35;SRA 43;S 51", "UAR 13", "VL 46;TWJ 54", "KUF 37", "P 45", "YM 28;OYE 33;MNN 48", "QUV 3;KR 30", "QJ 39", "TWJ 48;R 50", "QJ 37"};
    string destination = "D";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> signs = {"X 83", "HQW 77;MZP 79", "RZ 54;A 64;IPB 65;H 68", "PSS 70", "NPG 81", "ZA 45;FO 49;WBB 72;ZCN 74;CGI 89", "IPB 61", "E 57", "RZ 48;E 56;V 89", "FO 45", "DZC 52", "IPB 56", "IOQ 47;GTP 49;NHV 63;KA 84", "L 59;NHV 62;PR 80", "PSS 59", "C 37", "FO 38", "G 64;T 71", "X 65;N 81", "RZ 37;GCY 55", "Q 33", "QO 37", "XD 47;NHV 53", "AVU 42;V 74", "L 48", "FO 29", "Q 27;QF 31", "Q 26;XMD 49", "V 69", "FO 25", "NOM 61", "PSS 42", "HQW 46", "PSS 40", "RZ 22;FV 29;QL 34;NHV 41;NPG 51", "NPG 50", "WN 18;DZC 25;MZP 43;US 47;GYF 52", "RZ 18;X 45;WU 60", "X 44;W 56", "LCZ 47;LB 50", "NJR 19;MZP 39", "C 10;Q 11;QO 16;GLP 50", "MGL 8;M 39;X 40", "IPB 23", "NJR 15", "MGL 5", "GLP 45", "NJR 12;PSS 25;G 33;NPG 37;LCZ 39;NOM 43;F 52", "QO 9", "C 2;UYP 21;NPG 35"};
    string destination = "CGI";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> signs = {"SX 65;HTO 89", "YK 65", "R 53;PL 86", "JQW 73;RG 74", "RG 73", "AFU 63", "RG 71;LF 74;O 94", "HTO 82;JH 85", "AFU 60;X 73;T 76", "B 69;VJY 74;T 75;NT 90", "XPL 76", "ZNK 53", "R 43;WX 60", "RG 64", "DC 53;UX 68", "I 80", "PH 44", "JYH 52;M 58", "RNQ 44", "UKJ 42", "YCB 31;XPL 66;I 75", "X 60", "URE 37;NT 77", "RNQ 39", "R 31;ON 67;TG 73", "LDV 33;UKJ 36", "T 58", "LF 53", "RNQ 34;LF 52;L 65;I 67", "MB 24", "UKJ 31", "GKL 48", "MB 21;SX 33;B 46;HFO 55", "P 19;UKJ 28;WKC 30;Z 38", "JYH 35;PJP 36;F 40;I 61", "P 17", "YCB 15", "U 17;NT 62", "LF 42", "YK 27", "R 15;ZNK 24;GKL 39;LF 40;OLV 54", "IR 9;PH 19;YK 25;DC 26;YM 32;I 54;Q 57", "WKC 21;I 53", "LF 37;ZZA 42", "ZNK 20", "MB 8;AP 51", "U 8", "HTO 42", "ALB 7;JYH 20;PU 41", "RNQ 12"};
    string destination = "NT";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> signs = {"ZS 83;FU 84", "CMF 84", "LH 63;BC 64;NDL 80;LGB 87", "JLG 68", "ZV 84", "CWK 52", "B 55", "E 69", "XNH 50;HY 66;ZV 80", "U 46;ABR 60;Z 69;G 84;WL 85", "UC 40;UDV 80", "LZ 81;UGH 86", "B 49", "XG 64", "CMF 71", "CWK 42", "NDL 66;CMF 69;PW 84", "B 44", "UC 32", "A 33;YN 62;CMF 66", "BC 45", "VCD 50", "B 38", "ST 29;CWK 33;S 46", "BC 41;Q 50;BNB 55", "PU 72", "Y 64;BGO 69", "YW 39", "XNN 43", "E 45", "XPC 47", "BC 33", "CMF 51;PU 64", "ST 18;J 51", "JW 15;TAC 18;UIU 31;HY 38", "VCD 35", "TAC 16;TDB 49", "UDV 51;D 60", "FU 44", "XG 36;Z 37;XPC 38;CMF 44", "FU 42", "YN 38", "B 17;YW 24", "JWY 14", "CWK 11;JWY 13;E 30;FU 38;UDV 44", "XG 30", "JLG 23;BGO 48", "WZ 7;XNN 24;XPC 30", "XG 27"};
    string destination = "UGH";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> signs = {"YIB 55;P 80;XY 94", "I 59;DZT 86;AXH 95", "LE 49;JN 56;HS 75;UH 89;XY 92", "LBQ 49", "DZT 83", "PQI 48", "K 70;O 92", "LK 63", "DZT 79", "NJ 41;PWO 47;L 53;R 54;SWW 80;AXH 87", "K 66", "JN 47", "PQI 41", "YMM 65;ZX 79", "YMM 64;PDX 86", "PXZ 39", "U 48;UH 75", "UO 42;V 58", "YMM 60", "PQI 34;LIZ 38;QJL 50;K 57;YMM 59;NT 69", "NN 73", "JN 37", "F 39;AGZ 43;S 45;PYC 57;HLB 62", "M 49;YMM 55", "PWO 32;ZE 57", "NN 68", "LBQ 26", "LK 43", "JN 30;UOQ 55", "XBP 43;NEF 55", "PQI 22;PXZ 23", "R 31", "PWO 23;KHQ 35", "LBQ 18;LK 36", "UX 36;ND 64", "H 38;HLB 48", "WW 53", "ZQ 28;UT 44;UH 53", "UX 32", "F 21", "PYC 38", "AXH 54", "LIZ 14", "XY 50", "ZE 36", "S 21", "NEF 38;DZT 40", "UO 11;PYC 31;WW 42;UH 43", "UX 22;K 27;PYC 30;LHN 37;A 46", "LBQ 2;R 13;NN 43"};
    string destination = "PDX";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> signs = {"ZLB 99", "Q 74;O 97", "CB 72;T 85", "XQ 56;CB 71", "F 52;PA 56;B 69;A 88", "G 85", "B 67", "ERR 61", "AYM 45;FDM 55;N 63;BB 71", "KSY 60;N 62;SK 77", "CG 90", "B 62;CB 63;CZ 74;G 79", "O 86", "CG 87", "B 58", "PXC 80", "N 54", "SK 68", "YQ 51", "D 31;SI 44;N 51;JF 56;KXD 68", "DF 29", "R 60;AKW 62", "DF 27;CB 51", "ERR 44", "KUD 33;ERR 43;YQ 45;N 46;U 55;SSO 72", "N 45", "SI 37", "E 49;O 70", "KSY 40", "WKH 42;FB 64", "YLD 30;SI 33", "H 25;ZLB 67", "NE 19;SUV 48;G 57", "CG 66", "B 38;M 43;O 63", "N 35;TXA 47", "M 41;R 45", "ZLB 61", "MP 28;SSO 58", "ZLB 59", "E 36;W 54;PXC 55", "M 36", "N 28;FE 50;FB 51", "FB 50", "YQ 25", "H 11;C 20;QI 45;CG 54", "H 10;VP 15;BB 32", "B 25", "CB 25;HGY 40", "AG 5;DU 15;BB 29"};
    string destination = "O";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> signs = {"XQM 87", "ZG 60;OB 63;V 89", "CHR 48", "JN 91", "IW 49;IN 70", "I 68", "URB 48;CUI 52", "NV 92", "UE 73", "CUI 49;FS 59;UE 72;XQM 77;L 82;AGE 88", "MET 64;WTL 85", "H 39;ZG 49;IXC 81;JN 82", "Y 49", "WTL 82", "H 36", "M 56;AGE 82", "CHR 33;ZG 44;Z 49;GF 50;QE 53;BLP 61;TVN 71", "KWF 53", "OB 45;FYN 65", "O 34;AGE 78", "MNR 62", "F 67;WTL 74", "Y 39;FQQ 53;IXC 70", "W 28;DYT 36;ZG 37;N 39;ZNN 44;U 71", "DYT 35", "NLA 30;IB 71", "ZNN 41", "DYT 32", "ZG 32", "IW 23", "BLP 47", "KWF 39", "RLJ 32;GFQ 47;ZKX 48", "H 17;I 39", "I 38", "CHR 14", "H 14;KWF 34;MNR 46;D 48;VWI 54", "Y 24", "QE 31;YLO 38", "IW 13", "IW 12;ZG 20;GFQ 39;IB 56", "W 10;FQB 15;AUN 16", "XQM 44", "IW 9", "XQM 42", "ZG 15;J 40;B 53", "JN 47", "IW 5;F 41", "UE 33", "M 22"};
    string destination = "URB";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> signs = {"YSX 71", "R 99", "M 52;W 53", "YT 54", "S 61;G 82", "AK 84", "FQE 44;PSW 47;I 50;ZKC 84", "M 47;OCC 53;GX 67;DWF 76", "YT 49;E 50;IWJ 55;MF 56;ZW 84", "IWJ 54;K 69;XNC 72;JSA 86", "IG 69", "FQE 38", "F 80", "R 86", "MF 49;UA 70", "TA 72", "NYP 44", "AK 71;D 81", "NYP 42;O 60;IG 61;TA 69;YD 79;R 81", "NYP 41;ENN 53", "QW 51", "F 71;CUG 72", "NYP 38", "TE 35;QW 48", "YT 32;JMN 71", "ZKC 64", "EO 43;HXJ 57", "TC 41;AK 61", "Q 33;JS 38;TA 59;QT 68", "QT 67", "I 25;PTP 46", "A 19;MF 32;ZDN 43;F 61", "I 23", "YSX 37;IG 46", "GX 39", "YT 21", "DWF 46", "I 18;AK 51", "GX 35", "EO 30;H 47", "JSA 54", "JS 25;RXV 49", "BRF 9;I 13;IWJ 20;TP 33", "M 10;IWJ 19;XUG 22;EO 26;G 42", "BRF 7", "QT 51", "CP 21;TP 29", "AK 41", "O 30", "IG 30"};
    string destination = "RXV";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> signs = {"WS 71", "D 54;E 93", "TR 51", "QL 65;TKX 97", "D 50;T 76;Y 85", "VQ 66;T 75", "JW 70", "N 57;QY 77;C 83", "EYU 55;Z 66;ZYG 69", "IX 46;EN 47;BCI 77", "SHY 49;ZYG 67", "W 51", "N 52;RXT 85", "G 40;V 59;T 67", "WS 56", "IRK 45;T 65;XJ 76", "NQ 33;SDT 62;PW 66", "Z 57;PW 65;TXE 77;BT 81", "EM 43;TKX 81", "Y 70", "OVD 45;C 70", "UDR 58", "CZ 29;RO 35", "W 39;RT 64", "W 38", "SDT 53", "RO 31", "EY 39;M 61;C 63", "JW 48;T 52", "M 59", "XCZ 62", "YJC 38;WS 39", "Z 42;WNE 63", "D 21", "WS 36", "TSF 23;PM 33;XCZ 57", "YJC 33", "RT 50", "NQ 11;DO 45", "YJC 30;LEW 36", "IX 15;W 22;T 40", "W 21;MGN 32", "O 43;C 48", "Y 46", "W 18", "TR 7;PW 37;XCZ 47", "UDR 33;MDI 35", "C 43", "RO 9;YJC 21;UDR 31;PW 34;CN 48;TKX 51", "RO 8"};
    string destination = "SHY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"YG 99", "I 52;K 62;Z 90", "Y 75", "XNQ 52;EIO 61;ABM 65;C 66;XU 76", "Y 73", "KZM 47;M 53;MDT 77", "AKV 64;KO 86", "L 74", "NCG 68", "UD 66", "KO 82", "K 52;UD 64;W 69", "RDM 44", "HLB 38;XNQ 42;A 58;D 71", "NCG 62;L 67;JVM 69", "KZM 37;YZ 59;XS 70;FF 71;TD 73;OX 74", "WSX 51", "RSA 40", "AKV 52", "O 46;AKV 50", "OX 68", "U 39;L 59", "ABM 45;YG 76", "Y 53;SKB 54", "QW 68;NLO 71;DFN 72", "G 74", "YZ 47", "WSX 39;JA 70", "GB 61", "KJ 42;OX 59;GB 60", "NLO 65", "QEY 28", "JQ 32;NLO 63", "QM 20;J 39", "UD 40", "GB 54", "RDM 19;QEY 23;WSX 30", "QEY 22", "E 11;KZM 13;SKB 39", "MDT 42", "A 30", "AKV 28", "JVM 40", "RSA 13;QEY 16;AKV 26;FF 42;UG 51", "JVM 38;AK 42", "NLO 50", "F 15;FF 39", "QEY 12", "KZM 3;UD 26;NLO 47", "MA 9;J 23;XS 35;G 50"};
    string destination = "I";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> signs = {"QCC 504;NQV 985", "FQU 507;XQV 634;ZKT 649;GR 916;Z 981", "W 504;S 518;DT 568;YRA 595", "LN 641;D 663;LOM 811", "YRA 577", "F 642;SFZ 756;M 912", "PQT 815", "EI 697;M 880", "GAJ 622;LOM 752", "QCC 430;PQT 788", "G 612;PWE 691", "YRA 531;T 914", "RCW 501;YRA 519;HJN 540;B 602;AVK 734;FH 881", "ZS 682", "P 427;F 571;GC 885", "GC 878", "PKL 731", "RCW 447;WOF 469;PQT 719", "D 525;LOM 673;H 820", "GC 813", "FH 778;T 799", "FQU 312;K 545;TZZ 771", "QF 362;PWE 540", "DT 352", "W 282;DT 346", "N 433;PWE 520;LOM 579", "RCW 343", "JK 384;F 404;EI 491", "AVK 549", "LOM 546", "D 394", "N 382;XTW 615", "P 227;GD 337;JD 422;K 440;ZS 480;PKL 549", "RCW 280;T 681", "QF 270;BG 441", "GC 666", "C 221;PM 309;DAD 390;SFZ 459;PKL 523", "ZS 415", "QCC 123;HJN 248", "F 279;PKL 457;GR 524;HX 538;M 549", "YRA 209;FP 397", "QF 172;LOM 409", "XQV 217;GC 568", "WOF 188;B 267;NQV 561", "GR 492", "P 90;XQV 197;DAD 279;GR 479", "HJN 174", "XQV 181;JK 198;XW 212;QW 344", "QCC 19;AVK 338", "C 66"};
    string destination = "FQU";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> signs = {"QHS 921", "YP 887", "PA 733;DN 848", "LWQ 509;D 676;FDI 722;WAQ 728;OGA 820", "YE 479;IK 656;YP 825", "GSN 482;E 512;PA 677", "UWR 561", "G 470;Q 635", "YE 415;QJD 617", "GSN 418;EE 595", "WAQ 602;OGA 694", "UWR 497;M 650", "Q 591", "YP 727", "NAH 333;ZB 801", "YP 706", "B 483", "O 345;WAQ 541", "OKP 277;UWR 427;QJD 523;MVD 590", "NAH 272", "RO 311;TQX 373;K 714", "N 368;EZJ 421;B 432;XH 595;GC 665", "IZO 314;I 507", "G 315;FV 504;ZC 652", "QHS 650", "JVE 250;QJD 468", "O 267;MF 534", "M 514", "O 254;XY 448", "E 284;U 482;V 545", "GSN 253;URN 437;BVK 533;QHS 624", "UWR 341", "E 262;EZJ 347;PA 427;K 639", "YE 209;IZO 237;QJD 411;I 430;WN 481;YP 555;WE 572", "NAH 173", "K 618", "XR 164;GSN 202;PBI 588", "B 326", "EZJ 304", "GSN 163;N 225;TQX 229;PA 358", "XDU 173;OGA 431", "TQX 198", "VHP 81;O 118;G 150;WAQ 314;MF 385", "BVK 392", "XH 399", "GSN 97;PA 292;BVK 377", "NAH 38;FV 298;OGA 365;L 421", "NAH 26", "XY 257;L 407", "OKP 12;IZO 84"};
    string destination = "JVE";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> signs = {"P 520;SN 846", "RC 514", "W 885", "UF 474;RR 943", "LRM 814", "SW 902", "NS 539;UJC 643;AFI 877", "ZU 445;B 488;GQ 739;BO 915", "NS 527;IZ 701;N 703;AFI 865", "KEY 883", "NOL 699", "IW 570;AFI 841", "IW 557;IZ 664;T 761", "UF 372;Y 766", "P 397;V 464", "UI 544", "D 659", "OF 462", "AFI 764", "QP 449;CB 638;BO 791", "CM 351", "YOS 337", "VOD 700;RR 731", "P 281;C 459;D 569;SN 607", "SN 581;AFI 666", "UF 220", "YOS 281", "RR 676", "KYP 501;KEY 660", "RG 681", "RC 216;UI 373;TAZ 444;PF 468;RG 669", "B 232;CM 263;UI 366;LRM 533", "KYP 473;D 488;SN 526;TYL 601;KEY 632", "VX 315;JNA 328;SW 615", "VOD 586", "UF 144;ZU 151;NOL 431;RG 624", "B 185;GQ 436;VOD 573;SNK 606", "OF 259;JHV 602;RG 614", "UF 90;CM 171;TAZ 345;TQZ 428;PA 444;W 497;WNR 552", "UF 80;OF 205;QP 215;I 313;NI 327", "AVY 158;OC 312;BO 552;RG 555", "PQ 141;D 377", "OF 172", "UF 40;DYS 142", "C 243", "YOS 97;D 338", "VOD 459", "CM 101;JHV 488", "AFI 453", "N 290"};
    string destination = "YOS";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 88;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> signs = {"KGF 535;Z 914", "R 676", "DU 626;VE 945;N 976", "PB 543", "PB 526;RON 761", "V 871;Z 888", "DU 588;BD 666;WL 843", "D 807;CB 809", "OK 540;EXX 551;ODD 610;T 695;TTG 789;IJT 900", "WB 623;YBB 736;V 846", "VE 895", "UDK 594", "Q 544;Z 830", "HV 420;EXX 503;A 522;R 581;WR 775", "WB 547", "HJB 422", "MZV 401", "P 338;WB 513;FNZ 644;D 690;V 736", "MZV 367;Y 668", "RON 590;NI 665", "YBB 567;D 631", "I 292;J 596", "RON 527;HE 685", "DQ 241;SC 397;V 637", "DU 365;HWY 670", "E 448;RON 503;CJ 566", "S 238;WR 582", "V 607", "Z 613", "P 192;AJJ 569", "MZV 232;J 500", "DQ 178;SC 334;MDJ 411;QBS 540", "J 489", "WB 342;M 476", "P 151;NG 350;MDJ 386", "HJB 211;V 542", "PB 185;WB 310;E 365", "D 481", "MCF 221;A 236;J 437;Y 470", "S 122", "P 85;PB 135;UDK 247;E 315;MDJ 320;NI 445;V 483", "OK 172;A 202", "A 194", "G 451;Z 456", "HE 482", "QK 110;RON 319;QBS 398", "TTG 356", "PB 66;HJB 83;D 368;CB 370;QBS 380", "PB 65;L 170;E 245;QBS 379", "OK 94"};
    string destination = "I";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> signs = {"VT 779;OU 840", "B 647;J 891;JT 944", "PUU 655", "DG 550;W 609;OU 817;IWY 821;WLD 852;MWP 940", "O 848", "MG 526;JT 908", "MC 717;RMV 738", "MWP 893", "M 519;A 604;N 783;J 831", "EL 570;VT 698;IWY 763", "DDR 463", "MG 480;OU 738", "DM 501;MC 656;QAA 863", "VT 648;DE 681", "PC 786;QR 793;XQ 834", "MG 427;YET 564;VT 624;I 700;C 786;EEK 799", "M 412;DE 625;OU 653", "VT 589;I 665", "Q 475", "QAA 763", "QVP 448;MC 554", "PUU 452", "N 620", "GL 241;DDR 298;Y 610;GSE 631", "GL 235", "FLS 279;O 614", "ERM 435", "Q 413;K 428", "SKA 277;XWC 490", "ZT 265", "MG 262;XWC 446", "ZT 238;PUU 353;IWY 520", "Z 290;DM 292;ERM 381;FDG 472;QR 608", "DDR 228;Q 360", "JR 180;EN 211;WLD 542", "DDR 220", "O 543", "GL 144", "MWP 604", "GL 139;KX 276;O 524;NLL 587", "J 531;C 561", "ERM 320", "A 287;IFN 361", "DG 174;A 285;JT 565", "ZT 151;DG 162", "Z 198;PC 509", "N 428", "CNX 135", "EN 60;A 200;BE 231;N 379"};
    string destination = "EL";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> signs = {"AOK 734", "AEX 632;EYI 667;O 720", "UO 481;KCI 614;HO 807;H 820", "TXF 711;FT 755;FQ 829;KS 844;EWO 955", "O 708;RYM 917", "EYI 650;ARJ 817", "O 696", "ZPD 505;HO 786", "SC 712;NZ 868;MBW 956", "Y 613", "O 670", "LY 485;RZG 690", "C 424;RS 593;K 828", "RRR 643;E 816", "RPC 410;GPO 535;XWG 623;FT 654", "RPC 398", "UO 359;ZPD 404;KRQ 415;DF 499;NTR 693;BM 831", "RS 529", "KS 717;EWO 828", "K 756", "B 651", "LY 402;U 457;B 648", "UO 336", "GDU 357;FT 609;P 765", "KCI 457", "C 326;GPO 482;XWG 570", "EYI 490;O 543;RZG 575;B 616", "RXY 365;FT 570;NX 645", "IH 406;IN 423;FT 534", "LY 307;AZ 557;ARJ 594", "J 575;JH 602", "Y 372;MCD 380;RS 382;FQ 562", "SC 447;MBW 691", "LY 246", "ZFR 308", "KRQ 210;BM 626", "N 163;KRQ 208;SC 406", "IN 306;AOK 380;RRR 395;KS 506;E 568", "KS 503", "FT 361", "ZFR 221;KS 445", "RPC 97;RXY 136;RRR 323", "GDU 80;MCD 228;RS 230;FQ 410;QDV 555", "JST 86;U 171;O 289", "FT 319;J 374", "B 332", "KCI 157", "EYI 198;RZG 283", "ZPD 60", "N 13"};
    string destination = "KCI";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> signs = {"QSN 579;WRK 681;VNO 889", "U 822", "CFJ 493;RDF 650;VZN 742", "CFJ 491;A 718;URW 941", "GM 780;QXW 899;URW 930", "QUA 539;ME 938", "I 619;ASJ 912", "QY 799;ME 913", "U 749", "QK 431", "NMD 671", "HBR 434", "S 537;U 720;VNO 784", "CRV 429;VZX 557;W 708", "DQ 575;U 690;WW 834", "EI 461", "ASJ 820", "DQ 539;GM 629;ASJ 796", "SP 314", "HBR 348;QUA 386;B 404;L 441;Q 556;QY 671", "QK 323", "VNO 693", "QSN 366", "QK 294;B 371", "B 370", "EI 368;VZX 446;G 749", "QUA 331;Y 495;JQA 703", "Q 497", "WAQ 336;A 459;VNO 621;ASJ 699", "RDF 388;QRA 686", "W 533;J 650", "ZQ 256;QUA 275;PWF 696", "QUA 273;QY 558", "V 518", "PBK 287;DQ 401;V 514;URW 641", "QUA 264;ME 665", "IV 684", "WV 426;IV 662", "B 240;QY 507;T 605", "L 257", "S 248;VYR 250;LN 509;ASJ 574;WW 576", "H 236;LN 502", "SP 99;VZX 277;NMD 361;G 580", "DQ 302;VK 436;QRA 547;ASJ 559;IV 587", "WV 340", "ZQ 137", "DQ 266;QXW 475", "EI 153;FH 211", "QSN 110;S 172;ASJ 498"};
    string destination = "VZN";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> signs = {"JU 817", "P 590;N 668;IDN 703;JU 804", "PCS 648;DTI 664", "OU 526;DTI 657;F 731;G 910", "K 538;Q 779;HD 851", "WG 522;S 551;PCS 628;GPB 688;HD 842;C 852;AU 867", "Z 498;YYP 574;NVO 583;HTI 792", "ZGR 475;WVD 643;HSS 834", "JIZ 524;O 820;RER 879", "YYP 519", "OU 448;JIZ 475;O 771", "ZEC 816", "WFB 520;PCS 549;JEF 614;LL 690;RER 816", "YXZ 392", "WFB 502", "HD 733", "YXZ 362;ZCO 479;HD 730", "PCS 505", "VDB 758;G 774", "WG 400;GPB 561", "S 413;WVD 512;KF 765", "S 406", "YYP 431;OT 635;KPR 696;Y 764", "WFB 450", "TB 590", "WFB 442", "VDB 720", "PCS 458;AU 697", "WFB 423", "F 499", "YXZ 249;S 326", "J 327", "KPR 600", "WG 281;ZXZ 423;RER 648", "Z 252;J 304;NVO 337;I 353;TB 493", "K 260;A 269;PCS 359", "YYP 304", "ZGR 199;S 268;WFB 316;VDB 601", "JU 459", "HSS 525;AU 551;KF 587", "WG 203", "C 521", "G 564", "D 498;RER 553", "OU 156;ZXZ 312;GPB 331;JEF 336;GBT 465;HD 485", "AY 329;F 349;C 483", "NJF 93;BT 197;NU 291;AU 484;ZEC 505;RDR 522", "YYP 185", "ZXZ 263;KF 497", "PCS 208;KF 483"};
    string destination = "YXZ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> signs = {"F 552;R 556", "UM 545;KL 959", "XX 510;PCC 731;W 959", "UID 466", "FV 596;KIU 839", "R 513", "H 613;LS 620;AF 827;ZEY 859;MD 940", "I 721", "AO 523;T 549;PCC 648", "NJ 464;ZEY 814", "R 427;HW 525;GWQ 666;RO 726;Q 767", "PPR 584", "F 418;LS 537;VV 736", "FV 499", "AF 737", "NQ 688", "FV 486;UT 518;NKB 809", "AO 458;LRY 638;YP 728", "R 401;SA 522;VRF 586", "PPR 560", "YN 355;R 399;ZEY 753", "SA 517;Q 736;G 741", "RO 685", "I 617", "F 372", "ZD 439", "UM 326;HW 434;PCC 517", "H 440;SA 453", "KL 717", "N 698", "YN 233;R 277", "T 331", "Z 284;I 474;KIU 563", "IC 539;BCX 568", "R 219;J 314;LS 334;ESO 472;QXS 625", "R 212;LRY 447", "A 226;H 319;ZEY 560", "X 155;R 208;T 289;H 316;V 602;KL 612", "NQ 479", "AO 241;ZD 273;HW 284;KP 378", "KP 376", "H 264;VV 470", "VG 138;NQ 431;BCX 501", "UXO 223", "PPR 292;Q 469;QXS 535", "WAC 123", "R 96;NJ 100;PPR 256", "XX 54;KP 286;U 427", "AO 141;PCC 267"};
    string destination = "YN";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> signs = {"NH 747;C 902", "NK 494;P 812;NL 832;MI 949", "WQ 512;IY 624;MI 946;B 949", "NL 823", "JWX 680", "NH 692", "HT 609;NH 683", "ZSN 608", "W 424;NK 427;BS 587;A 636", "NH 649;M 694", "N 467", "JWX 609;PWF 650;AR 696", "Y 482", "TW 672;JZK 771", "QN 721", "B 817", "Y 457;HT 518;G 716;C 747", "IY 483;EY 607;MI 803", "MI 800", "U 332;YWT 455;JZK 721;MI 778", "N 385", "D 414;P 633", "NL 639;MI 756", "YWT 431;V 579", "NH 509", "BS 429;UJ 468;X 502;JZK 667", "S 385;SEN 731", "UBZ 500", "VS 348;D 357;PG 367;EY 516;NL 596", "PG 360;MI 706", "NXB 277", "VE 471", "NK 194;E 363;EY 453;ND 635;MT 660", "C 575", "N 235;O 618;ZXA 629", "QN 522;ZXA 620", "Q 157;NXB 178;NH 383;UBZ 386;G 507;J 562;MYD 567", "ZBX 240;DHH 243;NL 477", "U 138", "BS 272", "Y 211;PWF 360;SEN 576", "NH 329", "UBZ 331", "HT 248;VE 328", "NL 410", "QN 424", "C 446", "Y 143;S 162;VE 284", "NL 368;MI 485"};
    string destination = "W";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> signs = {"U 794;ICH 942", "JSK 162", "NW 505;P 508", "KPF 489;F 564;G 567;EWC 727", "UCN 543;VC 598;ZVC 766", "NEI 801;QK 823", "AT 528;TXL 737", "G 419", "FPX 785;LE 814;SB 834;ICH 845", "VV 415;NW 416;JSK 455;PV 887", "VV 386;D 604;FN 694;UW 831", "VV 380;LE 770", "JSK 414;ZG 625;QU 838", "E 710", "UCN 482;PV 897", "U 626;LE 743", "NEI 710", "BIY 322;VV 342;AT 439;A 498;D 560", "NW 342;XNV 411;CA 771", "E 680", "C 780", "H 499", "EA 595", "YM 296;Q 330;B 435", "BIY 265;CD 359;ZG 536;IL 611;FPX 646", "RHG 571;FN 590", "KPF 254", "YM 267;QM 520;FN 573;OWD 614;CA 695", "BIY 244;RHG 553;FN 572", "VD 686;PV 704", "VV 227;G 292;QM 482;WH 623", "PV 659", "H 354;EA 455;CFD 655", "ZS 176;JSK 207", "XHW 179;C 605", "NW 163;QU 626", "E 503;QK 541;C 604", "VV 157;ICH 578", "AT 249", "FPX 510;SB 559", "VV 147;EWC 372;U 420", "JSK 547;SB 917", "BIY 76;D 314;CA 526", "OWD 440", "NEI 422", "O 302", "U 333", "O 266;EA 320;FKI 495", "JSK 82;AT 139", "Q 66;GW 192"};
    string destination = "VC";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> signs = {"J 618;CV 789;EP 846;VL 930;YXJ 933", "POF 536", "JCC 620", "MZB 447;B 889", "YT 511", "GGR 560", "OS 758", "OS 740", "FUR 744", "MZ 383;IAN 580", "GG 722", "M 608;GG 720", "M 592;YWE 683", "J 481;U 688;OS 697;Z 748", "BW 479;YWE 678;FUR 710;C 826;JCC 847", "OV 456;UJQ 482;CV 641;LV 701;QC 778;TIV 834", "HE 365;J 468;IAN 545;OS 684;V 808", "A 568;DZ 656;ILA 707", "GUD 672;OZZ 699", "KR 377;K 745", "HE 307;KR 359;IBS 672", "POF 281", "HE 258;UJQ 373;H 531", "JCC 726", "EP 565;Z 604", "B 637", "GGR 198;IAN 262;SC 266", "OZZ 547", "M 406;C 645", "P 349;EP 499", "YT 225;H 435", "CEA 159;POF 175;BW 257;YWE 456;OZZ 501;UHI 521", "HE 151;GGR 267", "OZZ 497", "MZB 450;POF 479;FUR 792", "GGR 252;PUE 361;U 446", "HE 135;HRH 461", "HE 130;DP 262;OFS 384;HRH 456", "OV 215;IAN 306", "V 553", "BN 180;V 537", "DZ 391;FUR 431", "U 507;VL 612", "U 391;IBS 446;YXJ 499", "HE 61;DP 193;EP 392;TIV 528", "YNT 174;SC 240;JQZ 410;Z 426", "EP 386", "KR 97", "KK 208;YWE 346;B 478"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> signs = {"V 572;J 649;P 978", "JV 502;R 576;HM 662;JY 902", "PV 685;G 857", "PCG 468", "V 487", "SBT 457;OGR 491;FNK 595", "E 258", "DT 433;KVX 810", "NBL 338", "DT 395", "PCG 345;SBT 402", "YI 450;OKD 486;Z 646", "R 383;PV 493;G 665", "NBL 300;DF 427;TO 495", "YI 429", "NBL 282;TO 477", "WB 543;NWH 696", "D 287;TO 467;N 483;KE 646", "Z 612", "G 631;LJ 747", "NWH 683", "YI 412;MNY 417;SU 445;NWH 682", "Z 353;C 477", "DT 317;FOT 406;HM 419;E 499;G 615;JY 659;LJ 731", "P 713;L 721", "T 288;OER 489", "OER 487", "YP 363;HM 389", "PCG 231;ZWS 236;YI 359;SG 703", "E 456", "N 377;KE 540", "T 196", "FOT 290;A 498;JY 543", "FOT 274;TC 412", "U 296;TO 320", "ELW 182;V 188;OGR 229;FNK 333;NWH 536;SD 600", "FJX 238;G 457", "V 158;H 520", "E 331", "PCG 101;V 151;MNY 234;WB 346", "U 246", "PCG 85;T 119;OGR 176;S 216;SG 557", "ATD 362;C 532;SG 556", "DT 111;FPA 183;HM 213", "R 108", "YI 170", "S 171", "PV 607", "T 313;WZD 567", "D 21;O 53;U 177"};
    string destination = "NBL";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> signs = {"BJE 583", "E 483;FGD 531;EZ 832", "JK 602", "SU 711;RX 786;QPM 866", "SU 710;P 938", "FP 613", "O 895", "SU 702;FE 866", "HZ 424;HX 922", "JK 554", "QG 602", "YF 653", "HNS 846", "X 426;BJE 484;WJ 510", "ZTM 455;HN 480;AB 585;L 667;HNS 819", "HU 543;VA 842", "II 441;BJE 454;XP 459;TNF 486;XCE 853;P 855", "BJE 189;PE 190", "HU 534;B 552;CK 582;K 822", "FP 500;HU 502", "FGD 389;VQJ 671;P 835;HX 837;WZ 838", "E 327;QPM 748", "AB 537;HNS 771", "Y 430;YF 533;M 561;YS 754;MX 763;P 791", "IS 333;JK 425", "PE 370;SU 542", "PE 362;QPM 689", "VQJ 597", "YF 494;XCE 750", "II 311", "PE 318;RX 565", "IS 258;RX 557;P 710", "AB 407", "HN 285;QG 363;TDR 389;L 472;O 634", "QG 373", "JK 310;LF 532;CN 630", "CK 384;QUP 480;WPJ 533", "BJE 247;SU 420;MX 620", "MX 601", "R 216", "R 205;HU 276;ZRL 417", "X 389;C 566;M 618;SU 620", "TNF 220", "HZ 81;BJE 176", "TNF 205;JK 214", "E 79;EZ 428", "W 198;CN 528;P 568", "L 352", "K 505", "M 270;A 286"};
    string destination = "HZ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> signs = {"HKX 532", "G 984", "EAB 337;UX 338", "HKX 511", "ZZA 679;QWX 733", "DR 679;OK 713", "BTN 594", "IPH 719;N 734", "YPK 864;KTE 866", "YN 296;TL 414", "S 398;HKX 431;VMY 552", "ZZA 596;YPK 845", "S 376", "BTN 517;B 839", "BLX 419;LMX 544;IPH 677", "X 391;B 811", "HKX 363", "BTN 471;R 713", "JJL 455;N 644", "DR 543;OK 577;K 743", "U 464;W 731", "UX 576", "HKX 313;HE 475;P 599", "BLX 323;UY 605;CAL 736;LCQ 751", "RH 509;N 587;LMD 660", "QWX 522;MI 570", "TL 375;A 526;WD 543;KTE 712", "BWH 545", "N 555", "DR 450;CAL 689", "YN 221;QO 293;Y 662", "N 525", "MI 506", "S 176;Q 458", "ZN 215;MI 465;CAL 621;LCQ 636", "EAB 430;E 445;IPH 454;N 469;Y 588;FW 639", "TU 371;BWH 424;B 587", "DR 318;IJ 349;N 417;UY 426", "E 392;UY 425;KTE 549", "ZZA 291", "BLX 131;K 505;TZG 565", "TL 197;LMX 253;RH 323", "IPH 385", "RH 312;SI 484;K 491", "R 439", "TL 600;JJL 615;ZZA 686;W 808;G 970", "KTE 503;G 536", "BO 62;UIQ 298;MT 384;Y 462;G 509", "HKX 49;Q 298", "ZN 69;TZG 496"};
    string destination = "U";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> signs = {"WL 537;BEW 754;GK 758;O 889;PUB 964", "RXD 840", "B 475;GBV 739", "OL 532;GBV 737;M 751", "B 471", "NTR 562", "W 497;BEW 688;PUB 898", "QOF 443", "BB 504;RY 638;BEW 672;UN 738", "BTX 486;FX 513;RS 828", "ULU 631;DF 671;IWF 717", "GK 660;RXD 747", "VE 572", "R 646", "C 536;ENM 589;QO 700;RS 765", "C 515;BEW 581;SKV 636", "W 381;KZ 422;H 488", "BB 401;IWF 626;Z 669", "LHP 470;SKV 607", "WL 333;KZ 400;QO 648", "RS 712", "NTR 418;LHP 464;C 480", "P 610", "B 313;DPR 413;GBV 577;YJB 699", "UU 376;VE 434;FQZ 507;EJH 612", "BEW 509", "UU 366", "NTR 360;ENM 475;DF 499", "PUB 683", "GK 464;IWF 517;P 527", "OL 288", "QOF 208;YP 355;ULU 414;BEW 443", "FQZ 435", "ATK 422;DF 447;PUB 646;DKB 667", "I 352;GK 435;R 452;RS 594", "M 484", "OL 254;D 269;GBV 459", "W 225;RY 382", "PUB 618", "EJH 495", "B 164;S 237", "W 183", "Z 437;RS 500", "S 182;Q 216;JZG 263;GBV 373", "M 374", "EJH 411;MFB 453", "QOF 65;BTX 121;TTZ 226;UN 366", "OL 130;JZG 225", "Z 377", "WL 58;V 93;UO 389"};
    string destination = "BTX";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> signs = {"Z 644", "ON 524;BON 533;X 832", "ZU 575;SN 758;SB 930", "ON 503;X 811", "BON 496;ZU 541;YFN 630;OIY 717", "NX 582;R 642", "SN 697;S 722;ZM 816", "MA 416;SN 696", "R 631;KAI 701;GVC 844", "G 435;ZJ 454;O 471;ZU 498;E 567;AA 657;RJP 783", "FK 511;H 736", "PIX 492", "FJ 514;RJP 765", "ZU 470;ZM 772;VCG 789", "ZJ 421", "SB 818", "AA 609", "R 566", "N 511;BK 596", "ZJ 385;T 747;SB 784", "KPQ 403;ZU 420;R 543;GVC 756", "W 431;PFX 439;QPC 566", "BK 547", "XUE 332;GWO 657;RJP 663", "MA 278;GWO 654", "CZZ 399;FY 713", "ZU 349;NV 399", "SRQ 241;QPC 516;SN 531;RJP 633", "KAI 527", "W 354;L 411;J 508", "RHE 353", "RBH 559", "W 305;YFN 361", "BMV 433;J 458;XWB 488;X 525", "PIX 274;CZZ 307;OU 491;RBH 530", "G 194;X 511", "XUE 208;L 344", "FQ 162;ZJ 205;W 282;Z 295;R 372", "RHE 270;BK 391", "MA 120;FQ 130", "RJP 495", "RHE 250", "W 234;B 449", "FQ 97", "XUE 124;YFN 259;GWO 449", "H 417;RBH 431;FY 522", "VO 123;BK 323", "S 349;RJP 426", "PIX 138", "MA 23;XUE 74;OIY 296"};
    string destination = "PFX";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 161;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> signs = {"PY 579;VTV 833", "BV 530;LR 767;MK 972", "L 859", "TG 720", "XKP 551;I 594;X 878", "PY 520;JT 715", "ZWT 542", "G 663;JSD 686;HLJ 756", "IZ 648;CT 729", "Z 661;MK 895", "JSD 659", "PW 434;CL 762", "X 816;KU 823", "UZ 456;KU 815", "RRW 458;JT 664", "C 442;U 486;ZKI 613;VTV 722;CI 837", "ZJH 390;MAS 514;X 792", "JT 636;MIF 731;CI 810", "D 418;Z 600", "RRW 391", "H 436;MO 440;O 457;CT 613;X 726", "JSD 548", "I 416", "TG 513", "MAS 392", "I 382;R 463", "R 451;IZ 460;X 654", "PY 317;E 368;KY 423;Q 446;Z 482;FY 641", "KU 656", "J 250;MO 352", "PY 291;S 675", "ZWT 280", "AL 273", "J 198;CT 473;X 586", "ZJH 181;I 299", "PW 161;CL 489", "ZJH 137;ZWT 228", "FN 192;AL 210;MAS 249;NZC 502", "F 239;VTV 444", "AL 203", "JSD 348", "ZWT 201;TG 336;X 512", "D 144;PY 161;HDJ 249;KY 267;ZKI 306;CL 436;MK 560", "JSD 324", "PA 442;X 477", "XKP 143;M 416;L 429;X 470", "F 182;HDJ 221;MK 532", "I 175;NZC 434;KU 466", "JSD 271", "RRW 80;F 140;ZYH 193;LQ 310"};
    string destination = "PW";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> signs = {"YI 640;L 692", "C 601;ZHB 973", "YI 626;DY 813;D 846;Z 909", "CPG 740", "HG 802", "B 708", "OPR 776", "NCK 779;SGI 817", "WHK 447;G 706;VXA 918", "VY 688;J 810", "SP 557;E 561;CPG 671", "HKB 416;DY 734", "XLB 435;VQX 653;Q 812;WF 854;ZHB 887", "FP 428;KZ 662;R 685;HG 730", "OGO 528", "HKB 395;NCK 707;ZVD 776;SQM 789", "KNI 494;SP 527;CPG 641", "BYW 528;UE 581;VY 639;T 677", "GB 665;SLF 755;ZVD 759", "AOY 638", "HKB 321", "WF 744", "AOY 564", "P 380;KNI 392;UE 484;TGN 591;WBE 673", "AOY 548;NCK 599;ZVD 668", "BKN 540;RDC 549;V 676", "NCK 579", "OGO 342;G 466", "WT 320;OGO 340", "HG 505", "VQX 395;ZHB 629", "BKN 421;ZHB 623", "C 218", "UWO 228;AOY 369;BV 384;OPR 416;NHH 461", "WHK 104;OGO 239;HG 434", "K 110;KNI 209;L 288;B 343;ZVD 486", "ZHB 573", "YI 229;X 342;OPR 406;NCK 410;ZVD 479;WBE 483", "CPG 345;ZVD 475", "P 180;YI 219;BV 364", "K 82", "SP 197;NCK 372;NHH 413", "P 145", "SP 177;BYW 183;VY 294;SGI 390;ZVD 421", "KNI 142", "UE 232", "G 291", "BV 307", "RDC 307", "CPG 265;SQM 408"};
    string destination = "UWO";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 134;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> signs = {"H 900", "CW 503;DIX 528;UH 633;MJR 640;WR 698", "IQ 894;XKI 947;DUA 965", "B 563", "AX 738;LP 964", "I 505", "V 708;XKI 923", "FZD 560;OKD 889", "OKD 880", "O 702;YBV 707", "OWM 449;HG 833", "B 486;OAD 501;UH 536;VWU 620;D 856", "B 480;YBV 673;ZS 726;DF 763", "V 620", "L 366;KO 588;LP 860", "I 385;RH 832", "ZL 521", "RH 806", "LP 801", "BJC 473;HG 697", "ZL 482", "H 675;ZMO 736;DUA 753", "UH 409;IO 532", "L 266;UAE 270", "L 250;I 291;ZL 446;WO 609;RH 738", "V 490;IO 506", "BBB 466;RH 727", "ILA 323;D 689", "D 684", "D 661", "MJR 345", "VWU 419;V 442;IQ 604", "OZ 458;KBS 474;H 590", "ILA 275;YYK 512", "Q 611", "CW 178;OAD 273;FZD 276;O 446", "FZD 268", "XR 240;VWU 380;KBS 442", "T 355;DUA 622", "VWU 365", "T 335;VWU 346;XKI 584", "EGQ 182;UH 256;KBS 402;CWZ 558;DUA 596;NFS 600", "GPQ 223;POR 306;YYK 434", "V 347;DF 473;ZMO 563", "GPQ 213;UH 233;V 340;H 495", "MJR 191;H 446", "ZS 356", "V 266", "L 18;PHX 272;ZZV 329", "Y 158;HG 424;Q 449"};
    string destination = "OWM";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> signs = {"UCI 873;JSY 898;W 927", "DAI 507;XGM 827", "SLE 552;ASF 634;RM 886;Z 916", "EX 656;PN 686;JB 718", "WMI 492;W 912", "DAI 486;JF 560;SZR 599;SXK 710;I 874", "JB 693;DGV 805", "DAI 460;ASF 591;IOL 795", "OT 628;NM 896", "SLE 481;B 510;DB 782", "EX 585;MS 625", "GOH 780", "XHR 508;EX 571", "EX 560", "VTW 521", "SQL 438;NM 838", "XHR 487;H 567", "W 808", "EX 536;PN 566", "DAI 367;VTW 487;K 559;XGM 687;DB 717;TZ 769", "ZK 445;H 538;IG 844", "K 541", "QX 430;S 825", "JF 410;D 801", "DAI 335;D 800", "SZR 447", "HZB 551;GOH 682", "SQL 338", "ZK 357;NQP 525", "EX 410", "VTW 367;BYR 431;WRZ 494", "SLE 253", "BYR 361;IOL 512", "B 254;Y 291", "XHR 265;OT 346;BS 371;GOH 534", "K 360", "RM 547", "SZR 272", "H 329;MS 352", "OT 312;S 620", "PN 307;NQP 369", "WH 147;XHR 200;HE 400;DGV 437", "L 123;RZG 200;HE 395;GOH 464", "DB 427", "K 263", "ASF 171;OW 196", "WH 81;IG 520", "K 229"};
    string destination = "Y";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 152;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> signs = {"EWY 581;C 597;OJE 705;O 911", "CJD 619;FG 690", "ZQ 738", "N 669;B 933;WG 953", "J 638", "FG 651;WYA 669;VD 734;ELX 868;FGQ 899", "VXE 486;T 829", "X 467;YOS 603;ZQ 704", "P 566;YOS 591", "MWP 816", "VWA 395;V 419;Q 709;LN 721;XRJ 743;ELX 796", "H 371;NKN 583;Z 611;WSL 742;A 789", "WJY 518", "RJ 444;U 480;R 510;WJY 514;FG 549", "H 359", "OJH 448;D 527", "R 500;ELX 756", "VLH 408;EWY 423;N 539;Z 585;WG 823", "N 537", "FG 529", "C 382;WSL 659", "OJH 378;D 457", "LN 612", "OJH 374;KY 431", "R 411;ZWL 486;FGQ 698", "FG 440;LN 582", "DS 645", "P 352;ZO 561;T 594;MTC 618", "WSL 581", "UIW 488", "VLH 255", "KY 344", "EWY 265;J 361;ZOY 545", "Y 421;ZOY 524;B 624", "H 161", "OJH 241", "Z 381", "P 272;G 284;YOS 297;MTC 538", "SP 205;YOS 295;EL 359;DS 556", "ELX 531;MWP 539", "L 389;XRJ 471", "OJE 318", "CJD 231;UIW 405;ELX 519", "UIW 395;ELX 509", "V 130;WJY 255;LN 432;FGQ 538", "CJD 216;XRJ 451", "OJH 164;EL 291", "RJ 151;CJD 185;XRJ 420", "EWY 136", "G 160;YOS 173"};
    string destination = "VXE";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> signs = {"LHM 557;Z 589;PK 654;U 827", "JQ 539;QH 587;H 609", "NDU 699;TJ 881;OK 945", "ZU 667", "IL 518;FZ 910", "QH 535;OK 898", "QRD 898", "V 710;N 792;Y 828;S 856", "AW 521", "AW 519;RYH 829", "D 424;AD 782", "QSX 504;TJ 738;O 789", "WQD 424;T 523;N 710", "Y 745", "SKH 550", "LOF 641", "J 359;RYH 791;FZ 796", "PW 645;AD 761;ZD 766;L 783;QRD 798", "Z 417", "ZU 506;SQ 684", "S 746", "DI 520", "A 441;Y 698", "URC 289", "GHX 291;ZU 464;LOF 579", "IX 326;Z 365;DI 490", "Z 341;QSX 409;DI 466;SQ 615", "PW 562;C 663", "IL 315", "NDU 447;SR 512;SQ 601;F 691", "KMX 665;F 690", "J 248;IL 293", "GHX 216;AD 633", "Q 488;AD 630", "JQ 228;F 637", "Q 468;PW 494", "YE 244;QH 270", "JQ 198", "ZU 317;KE 339;SKH 340;X 378;F 585", "QH 212;RVF 482;SQ 483", "YE 182;Z 205;PK 270;VKB 298;SKH 324;L 567", "SKH 318", "NDU 317;RVF 470", "GHX 116;U 431;ZD 538", "URC 98;QH 189;QRD 563", "G 261;F 515", "QH 139;AD 476", "IX 93", "AW 167;IEU 299;FZ 482", "N 385"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> signs = {"WEO 550;OEN 657;VV 867;QH 897;YAG 917", "R 534;V 678", "W 843", "MTR 528", "A 646;VF 684;G 772;JA 890", "UJ 519;JLL 537", "R 481;A 630;G 756;M 821", "YAG 856", "QCR 560;YE 656", "O 540;QK 786;YAG 841", "R 458;PW 639", "U 666", "YE 616", "HON 456;OXS 552;I 686;E 764", "QKP 876", "SM 655;VV 732", "TL 772", "M 714", "O 447;DP 654;VV 698;UWR 731", "HON 394;QKP 819", "NL 326;W 671;HTQ 729", "UJ 388;S 511;JBE 687;UWR 719;QKP 812", "Z 528;T 624;HTQ 716", "OXS 471;YE 532;SLH 688", "V 480", "IE 346;AGV 487", "H 314;V 436;A 441;PW 473", "YAG 669;QKP 745", "OXS 347", "SM 472;YAG 599", "J 541", "QCR 279", "SLH 530;QH 546", "I 445", "OXS 307;QK 505;JBE 511;J 516", "O 246", "J 497", "VVO 356;SLH 503", "TY 214;K 319;T 432", "PW 316;PB 350;U 361;TL 520;JA 528;WE 534", "R 132;V 276", "PW 309;X 522", "J 450", "PB 327", "OEN 222", "AGV 284;TL 480", "JLL 138;UWR 451", "YS 51;JA 468", "YS 30;A 203;AGV 243;DYI 483", "MTR 68;T 321"};
    string destination = "NL";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> signs = {"BU 660;YY 989", "P 677", "OWW 509", "RK 614;ZIE 765;UNJ 976", "BVC 696;J 699;NQL 818", "ZG 679;K 687;YY 966", "TZ 476", "JP 517;MEM 563;IY 570;FM 924", "FE 790;GHU 903", "FJD 909", "LBW 937", "BVC 654;J 657", "IDD 582;G 792", "TZ 426;E 566;NXF 739", "IDD 551;FJD 872;CXH 892", "P 575", "BVC 591;KOX 614;KM 829;BS 854", "UQT 383;BVC 571", "TZ 351;BZV 468;NZY 771;CXH 830;UNJ 834", "O 443;UNJ 832", "VU 773", "YMT 561;VU 758", "BU 467", "BZV 425;OIE 609", "IY 384;I 570;NQL 618", "PDT 657", "LBW 740", "UNJ 721", "CK 197;RK 311;IDD 328;NXF 503", "PDT 582;TBJ 665;LBW 676", "LBW 674", "Y 180;KOX 411;FM 630", "OWW 188;P 354;BVC 382;LBW 664", "CUV 198;BZV 272;BU 313", "CK 161;K 362;UNJ 637", "BZV 267;OIE 451;FJD 609", "ZIE 402", "O 214;G 468", "YRM 281;G 463", "T 101;QTT 209;HI 437;GHU 544;UNJ 587", "RK 223;W 413;G 450", "VT 479;PDT 489", "KSI 136;E 227;K 295;GHU 527;UNJ 570", "P 265;VT 471;KM 531", "NQL 394", "JP 86;PDT 439;KM 489;FM 493;YSM 504", "GHU 475", "KOX 260", "FM 466", "GHU 446"};
    string destination = "YRM";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 172;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> signs = {"AIT 106;I 114", "QL 136", "AQ 111;XK 115;ZK 153", "BWQ 100;COL 194", "A 139;ZK 151", "F 145", "I 106;GDA 186", "I 105;XK 108;FTT 123;P 139;MB 178;COL 188", "AJJ 93;FTT 120", "JN 89", "AJJ 89;MB 171;AC 179", "WC 90", "LK 83", "IPU 107;U 158", "LGW 103;K 146", "XK 93;P 124", "BWL 124;C 125", "O 69;AJJ 75;C 120", "XK 86", "S 110;C 118;GDA 162", "O 66;I 81;QL 104;ZZH 105;GQO 139", "WC 72;D 100;MB 152", "LK 61;GLG 78;X 104;WK 119;MD 129;L 137;DXB 143", "AJJ 63;BK 68", "JN 59;T 73", "LGW 80", "WC 58;QL 88", "FTT 81;VI 95;ZK 104", "F 100;YE 109;MD 118", "BK 54;C 94;ZK 99", "WK 100", "T 57;LGW 65;W 95", "IPU 63;FTT 67", "O 30;S 73;GQO 103", "IHI 58;D 63;R 87;NJK 90", "RZV 35;A 70;NJK 89", "VI 72", "XK 42;IHI 55;AY 115", "W 79", "WMU 56;NJK 84", "C 71;SNT 88;U 100", "T 36", "FTT 49;COL 114", "JN 18", "AIT 18;ZZH 50;RS 80", "W 67", "I 23;WMU 43;SNT 76;U 88", "LK 10;WK 68;YJV 97", "ZK 62", "LK 6"};
    string destination = "F";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> signs = {"ZA 172", "WN 135;RX 177;F 193", "A 101", "E 97", "AT 114;K 135;SFR 164", "PQL 127;KYL 141;LU 150;P 180", "IMP 117;IRQ 169", "RT 131;JK 173", "RX 154", "WR 82;S 89;K 127;HXC 133", "CV 80;SGW 95;FZQ 106;DHS 149", "BI 142;LG 148", "WN 104;RT 121;BI 141;JK 163", "AT 97;HXC 124;VRP 151", "WR 68", "X 62;GZV 75;HXC 118;B 143", "CAQ 65;SFR 140", "WN 94;KYL 117;ZA 130;RX 136", "BFN 57;HXC 115", "M 95;DVV 98", "GZV 70;U 81", "KX 85;IMP 90;R 109", "BFN 51;CV 59;AT 82", "A 61;HV 106;LU 117", "BFN 44;JD 57", "RX 121", "ZA 113", "SGW 63;I 64;M 79;K 92", "FG 76", "BFN 36;DVV 78;HXC 94;YI 103", "RG 74", "RG 71", "BFN 30;M 69", "SGW 52;B 112", "A 40;VXG 120", "K 79;HXC 85", "CAQ 32;GZV 41;KU 122", "SGW 48;RG 65;QSA 105", "PQL 69;BI 97", "E 34;RG 63", "CAQ 26;AT 51;JJ 111", "SGW 40", "GZV 29", "CAQ 19;SGW 36;FG 51;RG 53;DVV 55;VZC 76", "WR 19;E 23;DVV 54", "S 25", "S 21;VVR 37;L 58", "E 16", "DHS 81", "QSA 82"};
    string destination = "JD";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> signs = {"HN 116;UJH 139;XAX 195", "EIK 113", "UJH 137;G 153", "FQB 118;FCS 147;BO 173", "L 118", "E 118", "HFG 189", "BFI 91;EIK 99", "NQ 87;MDK 144;Z 168", "LYZ 82;G 137;XAX 177", "PQQ 139", "EIK 94;H 118;FCS 130;IN 140;LPQ 145;ON 158", "W 146", "V 102;BO 148", "NQ 75;ZTY 89;ABE 93;ZC 150", "EIK 84", "S 123", "KMY 76;ABE 86", "IN 122;BO 138", "AR 81;L 84;ZC 140", "SGC 130;MFX 150", "XAX 153", "SNH 131", "ZTY 69;HSE 88;HFG 150", "NQ 54", "ZZ 54;ABE 71;RFW 85;DVR 96;SNH 124", "HN 64;K 67", "L 68;E 70;SNH 120;Z 130;I 133;XAX 140", "MFX 131", "KMY 51;ZTY 57;K 58", "E 63;UJH 77;D 101;XAX 133;HFG 137", "HSE 71;S 90;ZC 113;BWI 131", "XPH 46", "NFP 111", "L 51", "N 60", "FCS 72", "N 55;AT 85;W 88;UBH 117", "XPH 33;PQQ 78;W 87;NFP 102;UBH 116", "P 21;ZZ 23;BWI 115", "P 19;GP 27;XAX 111", "V 43", "V 39;IN 69;W 76", "QIF 25;H 46;IN 68;SGC 79", "KOS 64;MVD 94", "EIK 19;MFX 96", "FCS 54;LPQ 69", "SNH 78", "LYZ 1", "AR 20;E 25;ZC 79"};
    string destination = "LYZ";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> signs = {"VXB 107;HX 182;LB 189", "W 110;SXW 123;Y 124", "FUL 179", "HX 171;JH 179", "EU 134;M 149;L 159", "Y 114", "MW 96;C 100", "ZQV 129;GHN 168;FUL 172", "EU 130;M 145;F 154;N 178", "FUL 169", "IKP 82;D 126", "KO 88;VYF 128", "VJ 88", "IKP 76;C 89;D 120;M 136;N 169", "QHA 94;BTV 122", "QHA 93;L 144", "LHS 78;DE 138", "WDB 135", "O 144", "BTV 112;M 125;LB 153", "VYF 108;LTH 133;JH 149;N 153", "GEX 98;N 151", "CRB 59;FTM 118;WDB 123;L 127", "VYF 102", "LHS 60", "WXM 79", "EU 94;F 118;LTH 122;QZO 145", "QZO 142", "LHS 51;WDB 110", "W 54", "WXM 67;AFP 69;M 99;WDB 105;I 124;LB 127", "W 50;X 61;OTM 135", "FTM 98;WDB 103;LB 125", "U 55;SLQ 106;AAB 112;A 119;FUL 121", "U 50", "A 113", "VXB 33;VYF 75;AH 76;M 87", "TE 30;U 45;H 49;FEZ 71;JE 112", "F 93", "VXB 29;QHA 42", "SN 21;X 45;WDB 88", "FUL 107", "EU 65;DE 87;LTH 93", "VJ 29;R 75;O 97", "OKN 47", "C 30", "FUL 102", "FUL 97", "ZQV 52;A 93", "OKN 37;BTV 55;OTM 105"};
    string destination = "CRB";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    vector<string> signs = {"UWO 194", "Q 108;LTE 183", "LHA 109;JB 120;B 143", "Q 106;TT 122;J 133;T 143", "QK 113;IYN 133;Y 150", "Q 102;TT 118;IYN 130;YN 136", "A 160;ZF 174", "DE 169", "EA 132;B 133", "LNG 82;Q 93;R 97;TT 109;ZYD 163", "EG 83;B 128;WY 135;LN 145;D 157", "VAS 85;J 117", "RZC 127;W 137;ZYD 159;TX 176", "X 95", "IYN 114", "X 92;QK 93", "B 119;AD 129", "B 118;RD 171", "YN 115;HEB 137", "E 75;Q 79;RZC 117;O 126;H 136;DX 167", "YN 112;LTE 153;UWO 162", "VAS 70;DX 163", "H 131", "LNG 62", "FBK 100;T 106", "X 75;C 78;HPX 80;IYN 96;A 127;TX 155", "DE 136", "A 116", "A 115", "J 82", "LQW 63", "RD 142", "QS 73;DE 123", "JW 77;YN 85;H 108", "LQW 57;B 84", "LN 99", "EA 79;UJ 111", "XDD 41;RL 104", "LQW 47;RD 127", "C 46;LTE 111", "JP 93;RL 97", "LP 45", "RZC 63;UWO 109", "XDD 22;RL 85", "ODM 36;YN 52;DE 89", "R 19;YN 49;UWO 99", "W 62", "QK 21;J 40;YN 47", "E 8;T 49"};
    string destination = "ZF";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> signs = {"DV 103;GPV 114;ZI 181;LD 184", "TPX 166", "Q 159;ZGJ 173", "GPV 108;ATR 124;ZS 125;TFD 127", "SM 133;T 139", "GPU 128;TU 140", "ZXE 128", "T 135", "SR 130", "AYQ 143;LM 151", "PET 103;QGA 126;IXA 134;R 137;TPX 146", "GPU 114;ZPR 167", "CHR 90;QGA 121", "DV 73", "T 116;O 146;ZPR 160", "Q 129", "NS 62;GPV 75", "LCR 156", "LD 143", "JC 129", "Y 96;ZGJ 135", "GPV 69;ZS 86;SR 106;IK 109;ZI 136;LCR 151", "PB 78;UFG 91", "ZGJ 130", "GPV 65", "ZXE 91", "LD 132;LCR 144", "TFD 80;FH 87;BK 90;SR 98", "NBA 136", "B 77;T 91;JC 112;ZPR 135", "PIA 76;Q 103", "PJM 35;Q 100;AU 108", "IK 88;ZI 115", "NS 32;DV 34;GPV 45;TFD 64;IK 85", "T 77", "B 61;T 75", "UFG 62", "ZGJ 101;PYF 114", "KE 96;ZGJ 100;E 109", "CWQ 79;ZGJ 99;L 100", "BK 63", "PB 42;UFG 55", "AXQ 15;Q 79;L 94", "FH 50", "PGQ 98", "Q 72;GT 105", "FH 47;BK 50", "QGA 52;Z 58;DX 64", "X 54;ZPR 96"};
    string destination = "SM";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> signs = {"Q 185", "NI 121;NDJ 142;LVD 156;JPG 179", "IWY 100;G 139", "FYP 168", "NDJ 138;JPG 175;GD 188", "VQ 95;R 162", "Z 137;PTB 163", "VPI 99", "AL 139", "ACH 87;G 129;AMS 163", "TQW 124;T 156;MR 175", "QBF 150", "K 157", "NI 103;AL 131;X 143;JPG 161;PU 173", "K 154;IWQ 166", "VRR 82;Y 83;A 142", "ACH 76;IWY 79;YUX 150", "C 115", "FYP 146;OA 150", "G 108;YUX 140", "BIJ 82;W 87;Z 111;JPG 146;GD 159;N 162", "ANL 119;PTB 136;GD 158", "E 75;C 101", "ACH 55;YUX 129", "IWY 54;VPI 60;G 93;P 112;S 130", "Y 56", "K 124;CB 127;IWQ 136", "QBF 113;T 117;QGB 135", "Z 89;AL 94;R 112;JPG 124", "ELQ 41;Y 48", "QBF 107;ZHN 112", "SFY 72;UG 129", "K 113;CB 116", "Z 82", "A 100", "VPI 42", "NDJ 75", "SFY 62;QBF 95;OD 96;T 99;UG 119", "OA 102", "HVH 51;C 63;KIE 68", "NI 45;ANL 77", "G 63;P 82", "O 21;H 56;CMV 76;Q 103", "E 29", "PU 103", "CB 83", "BIJ 21;W 26", "H 40"};
    string destination = "O";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> signs = {"XSB 107;DTD 114", "QG 134;IT 138", "GP 193", "K 99;ZII 163", "JMB 97;WIE 120;B 127;WL 131;HUO 147;X 151;S 171", "Y 95;EL 153;E 173;J 187", "BRG 116;EL 151;FFM 190", "KE 132;YS 152", "OXD 135", "XD 98", "XSB 89;FRD 97;T 106;VKJ 163", "NLI 89", "R 91;KF 149", "RYV 144", "FU 82;WL 108", "XSB 75;FRD 83", "EL 127", "K 68;ENB 131", "VBJ 132;KF 139", "KE 104", "IT 95;NQ 134", "K 58", "I 80;F 90;WDX 116;NL 150", "PA 133;GP 141", "I 75", "WIE 70;S 121", "BRG 68", "U 84;X 99", "NLI 51;QG 74;IT 78;ENB 106;CVQ 128", "K 42;IT 77;ENB 105;ZII 106", "JMB 39", "YS 98", "WL 70", "JEK 38", "JEK 37;FU 42;WIE 57;ZR 128", "K 34;QG 65", "NQ 107", "OXD 74;VBJ 94", "KE 68;TNV 69;YS 88", "I 49;RYV 91;KF 95", "IT 57;ENB 85", "TNB 49;EL 75", "CM 24;F 54;UL 68", "CM 23;RYV 85", "TNB 42;E 88;KW 104", "OXD 56;KF 83", "YS 67", "WL 38;HUO 54;NQF 64"};
    string destination = "JEK";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> signs = {"R 160", "CRI 120;UTB 130;SNM 155", "M 148;PMY 153", "M 145;WA 187", "BW 139;KBI 147;KD 183", "PEB 108", "M 141;PMY 146;R 149;Z 155;IMK 165;J 166", "BAH 101", "ZW 136", "UF 111;DN 125;OM 127", "OL 93", "MO 156", "TLK 74;JTB 96", "ZP 68;PMY 122;WHH 138;OI 147;LS 151", "TLK 69;ZW 117;CDM 163", "DN 105", "OM 101", "D 139;VT 140", "Z 117", "XEJ 88", "OL 61;WX 88", "KD 138;CDM 146", "TLK 49;VA 55;FF 112;XHW 131;CDM 143", "XEJ 80;DN 85;SNM 100", "SBJ 119", "TLK 45;VA 51;HI 52;ZW 93;AC 94", "KBI 94;QZ 111", "ZW 91;QZ 110;KD 129", "OL 50", "UF 63", "BW 78;KBI 86", "T 54;R 89;SBJ 107", "XQI 90;VT 112;TW 127", "H 34;HI 37", "VT 108;YTA 111", "T 46;I 85;WHH 94", "R 80;Z 86", "T 42;ZSD 54;WHH 90", "O 104", "WX 53", "BW 58;QZ 83;MO 90;XHW 98;KD 102;CDM 110", "TLK 15;MO 89;HV 90", "VA 20;ZW 62", "Z 74", "X 23;KXA 48;MO 85", "TLK 10;ZW 58", "WHH 77", "H 11;AC 56;MO 81;HV 82"};
    string destination = "JTB";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> signs = {"HB 143;BD 171;NG 178;RR 181;MEB 191;M 192;H 195", "TI 113;U 134", "Z 168", "L 93;KGM 143", "KUJ 91", "WP 95", "WEZ 123;RR 167;MEB 177", "DEF 107", "KUJ 85;RQ 101;U 118;WVM 125;MDA 129;I 157", "UD 130", "AFS 80;AMI 148;HW 165", "S 124", "L 80;VZA 118", "DUD 137", "PQ 92;ZU 126;Q 127", "H 169", "P 98", "WP 76;O 84;WEZ 106;RR 150", "PQ 84", "MDA 112", "T 89;YOS 104;AL 114", "WP 69;KRN 73;O 77;D 137;MEB 153", "O 75", "T 83;YOS 98;DUD 119", "KRN 68;O 72;HB 100", "DUD 113", "KEP 77;FA 132;HW 135", "WP 56", "XT 68;T 72;AL 97", "HB 88;D 120;J 125", "S 89;Z 117", "WP 50;KRN 54;RR 124", "WP 47;J 120", "QJR 42;UD 82", "O 48", "WP 38;P 57;BD 102", "RQ 45", "KGM 77;Z 97", "RQ 37", "DEF 39;IU 64;BA 66;RW 79", "F 35", "AFS 14", "BDE 26;KGM 66;Z 86", "J 90", "WP 16", "AMI 76;HW 93", "I 79", "DEF 24;VIX 74", "QJR 9;MJ 55;WJ 64"};
    string destination = "UD";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> signs = {"KB 107;V 144", "Y 119", "LF 137;PGS 176", "DV 120;EM 140;PE 188", "G 146;TZO 168;L 179", "CF 115", "EM 131", "PO 102;XQT 146", "KB 89;ZI 148", "JZ 178", "K 80", "V 122", "B 101", "X 111;EB 167", "K 76;LA 97;N 138", "K 73;LA 94", "GPV 108;GM 109;EB 161", "PGS 148", "LF 108;PGS 147;A 163", "OJT 69", "SB 146", "WA 94", "CF 84;TZO 132", "X 86;GM 90", "EY 95", "JZ 146", "ZR 99", "X 77;JKS 113", "WA 77;NJT 90", "XSZ 50;FTX 83;XIV 88", "LF 79", "PGS 117", "L 123", "XSZ 44;CGL 91;CDV 92", "K 33;EHW 46;PWS 55;JKS 103;EB 123", "CDV 89", "V 72;NJT 77", "PE 120", "OJT 27;XSZ 35;BWU 57;EY 71;XIV 73;OCU 106", "S 31;JJA 107", "BWU 51;EY 65;J 92;Z 93", "EYZ 30", "N 80;EB 108", "WA 52;V 60;ZI 82;JZ 114", "DG 14;LA 37;X 50;GM 54;SB 101", "N 77;SB 100", "K 13;Q 16;EHW 26;CF 40;GM 51;ZR 67;N 75;L 99", "A 104", "S 11;EYZ 15;Y 24;R 50;JK 80", "Q 6"};
    string destination = "DG";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> signs = {"I 151;DM 159;LR 160", "TB 99;Z 163;ZU 195", "XJ 166", "FC 107;Q 116;GEC 123", "D 132;GYA 146;AL 162", "JZ 115;WIQ 178", "AL 158", "DM 142", "TB 82;YHQ 108", "TAO 119;XJ 150;AL 152;WIQ 170", "VBU 99;OI 159", "MA 136", "LGD 113;D 114;GYA 128;LR 130", "ZX 71;P 100;YL 119", "LGD 109", "XJ 137;PC 153", "IL 102;TAO 105", "M 73;X 83;MA 125", "D 100;PC 144", "VWU 67", "UC 76;OO 150", "AY 72;RY 79", "C 68;PAX 84;PC 136;OO 147", "ZX 49;H 107", "JZ 72;D 87;GYA 101;XJ 115", "GU 39;ROH 120", "LGD 81;D 82", "RY 65;UAC 114;OO 134", "IL 72", "IL 71;GYA 91;OO 132", "MX 31", "TB 31", "UC 52;KIW 109", "WIQ 115;T 120", "I 73;GYA 80", "MX 22;X 43;J 71;A 77;EU 116", "M 32", "ZX 23", "VWU 32", "OO 114", "VWU 27;LMG 59;QG 102", "UQ 81", "ZX 12;ZKC 24;P 41;YL 60", "GU 5;A 61;RE 66", "GU 4;A 60;UQ 73;ROH 85", "YL 55;H 65;OI 89", "MX 2", "GYA 58;PC 88;WIQ 92;OO 99"};
    string destination = "AY";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> signs = {"HI 102;CAX 132;FP 179", "TM 199", "FL 97;DOL 119;GK 148", "R 147", "QE 108", "FU 127;I 152", "R 143", "FL 89;DOL 111;B 136;GK 140", "ZP 144", "QE 101;DOL 107;CM 108;ZBI 143;RUB 144", "QE 99;CM 106;B 130", "CUP 145", "LK 118;ZBI 130", "FL 71;RUB 130", "PWZ 161", "IW 75;H 80;ZBO 105;Z 113", "S 99;R 117;E 119", "IW 70", "TKB 91;PWZ 153;PN 160", "VER 74;RD 130", "TKB 87;NO 137;PN 156", "VNG 73", "CZ 53;FU 86;ZP 106;RD 120;P 144", "FU 82;WO 110", "R 98", "H 55;Z 88", "TKB 67", "CZ 40;LD 105", "FL 35;QE 51", "GHY 54", "WO 97;F 119", "CUP 98", "IW 37;NT 62", "MBX 32;LD 96;RD 98;F 114", "FP 104", "DOL 46;RUB 83;QFX 106", "UP 38", "CM 42;RUB 78;PKZ 112", "W 72", "VNG 33;GHY 36;CAX 47;FP 94;TM 115", "CUP 82", "Y 10;JSP 61", "FU 46", "QE 25", "FL 8;V 88", "PJW 17;UP 21;TKB 35;KQ 40", "B 51", "IW 10;HZT 75", "CAX 33;FP 80", "TKB 30;QZW 42;W 55"};
    string destination = "PJW";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> signs = {"BAD 135", "EZ 127;KWN 135;YL 163;BJ 193", "UDP 110;YKX 122;BAD 131;T 177;MKY 191", "TGO 118;UAN 137", "KWN 132;SCI 167", "QS 170;A 190", "XB 93;GOF 110;W 116", "CU 96;TGO 111", "QJ 105;TIT 128", "EZ 115;SEP 155", "TIT 125", "UAN 123", "VP 156", "PA 146;P 153", "TIT 116;MRA 174", "T 155", "YL 137", "KA 139", "UAN 109;MPA 146", "MKY 161", "KWN 103", "A 157", "A 154", "YL 120", "TZ 65;ZCT 103;DOY 108;YL 119;SCI 126", "S 85;QT 121", "PLI 93;XE 104", "P 121", "P 120", "EZ 74", "FFC 56;MA 87;TJG 89", "AX 47;UDP 56", "QT 108", "B 36;KG 43", "B 35", "EZ 60;SCI 103", "U 31;AX 34;AWI 63;KA 98;JIJ 114", "DOY 83;SCI 101", "U 27;CH 41;UAN 67;KA 94;MKY 120", "PLI 62;BJ 113", "XB 20", "FK 72", "TJG 57;YM 65", "TGO 32;AWI 43;M 80", "FFC 21;YM 62;FK 65;A 106", "UDP 20;MPA 85", "CU 13;YKX 31;M 76", "B 6;GZ 12;KG 13;X 63;MQH 68;VP 80", "AWI 35;T 82", "P 75"};
    string destination = "PA";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 68;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> signs = {"HB 150", "LS 101;PWS 108;CSQ 153;WC 177;X 196", "AV 135", "J 115;O 129;PA 152;K 155;CJ 188", "B 117;DTU 139", "RQA 104;DIU 171", "PY 112;KR 124", "LCT 146;WC 164", "DS 81;U 127;F 164;OG 178", "O 119", "XGC 100", "XGC 99;GXB 119;AH 143;YR 153;ZTY 169", "U 121;HB 125;LYW 126;EAU 170", "AH 139;V 160", "XGC 94;V 159;EVD 166;OG 169", "DTU 122", "PY 96;KR 108", "A 99;WS 130", "SG 72;U 108;AH 128", "LV 138", "AV 102;DTU 112;WS 123", "E 71;G 82;VVY 134", "AH 119", "AH 116;YR 126;EAU 145", "J 74;CJ 147", "G 75", "CYX 118", "FDU 94;V 132", "JE 46;Y 47;PWS 55;PA 105;LCT 106;WC 124", "DTU 94", "RQA 59", "A 72;WS 103", "F 121", "V 124", "LYW 87", "T 62", "FD 31;LYW 80;AH 95", "LS 32;Z 62;CSQ 84;CJ 125", "T 58;OG 123", "EW 59;DTU 78", "DTU 73", "J 44;K 84", "B 48;SI 107", "W 26;KR 55", "O 49", "KR 49", "LYW 59;V 95;OG 105", "PWS 18;J 31", "LV 82;DV 88", "CYX 73"};
    string destination = "CYX";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> signs = {"A 100", "C 140", "C 100", "D 160", "B 100", "A 50", "D 100", "B 50"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> signs = {"A 100", "C 140", "C 100", "D 160", "B 100", "A 50", "D 100", "B 49"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> signs = {"A 2", "Z 30", "B 2", "A 1", "C 2", "B 1", "D 2", "C 1", "E 2", "D 1", "F 2", "E 1", "G 2", "F 1", "H 2", "G 1", "I 2", "H 1", "J 2", "I 1", "K 2", "J 1", "L 2", "K 1", "M 2", "L 1", "N 2", "M 1", "O 2", "N 1", "P 2", "O 1", "Q 2", "P 1", "R 2", "Q 1", "S 2", "R 1", "T 2", "S 1", "U 2", "T 1", "V 2", "U 1", "W 2", "V 1", "X 2", "W 1", "Z 7", "X 1"};
    string destination = "X";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> signs = {"A 2", "Z 30", "B 2", "A 1", "C 2", "B 1", "D 2", "C 1", "E 2", "D 1", "F 2", "E 1", "G 2", "F 1", "H 2", "G 1", "I 2", "H 1", "J 2", "I 1", "K 2", "J 1", "L 2", "K 1", "M 2", "L 1", "N 2", "M 1", "O 2", "N 1", "P 2", "O 1", "Q 2", "P 1", "R 2", "Q 1", "S 2", "R 1", "T 2", "S 1", "U 2", "T 1", "V 2", "U 1", "W 2", "V 1", "X 2", "W 1", "Z 6", "X 1"};
    string destination = "X";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> signs = {"A 10", "M 10", "M 8", "N 10", "B 10", "A 5", "N 5", "O 10", "C 10", "B 5", "O 5", "P 10", "D 10", "C 5", "P 5", "Q 10", "E 10", "D 5", "Q 5", "R 10", "F 10", "E 5", "R 5", "S 10", "G 10", "F 5", "S 5", "T 10", "H 10", "G 5", "T 5", "U 10", "I 10", "H 5", "U 5", "V 10", "J 10", "I 5", "V 5", "W 10", "K 10", "J 5", "W 5", "X 10", "L 10", "K 5", "X 3", "L 5"};
    string destination = "L";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> signs = {"A 10", "M 10", "M 8", "N 10", "B 10", "A 5", "N 5", "O 10", "C 10", "B 5", "O 5", "P 10", "D 10", "C 5", "P 5", "Q 10", "E 10", "D 5", "Q 5", "R 10", "F 10", "E 5", "R 5", "S 10", "G 10", "F 5", "S 5", "T 10", "H 10", "G 5", "T 5", "U 10", "I 10", "H 5", "U 5", "V 10", "J 10", "I 5", "V 5", "W 10", "K 10", "J 5", "W 5", "X 10", "L 10", "K 5", "X 2", "L 5"};
    string destination = "L";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> signs = {"A 10", "M 10", "M 8", "N 10", "B 10", "A 5", "N 5", "O 10", "C 10", "B 5", "O 5", "P 10", "D 10", "C 5", "P 5", "Q 10", "E 10", "D 5", "Q 5", "R 10", "F 10", "E 5", "R 5", "S 10", "G 10", "F 5", "S 5", "T 10", "H 10", "G 5", "T 5", "U 10", "I 10", "H 5", "U 5", "V 10", "J 10", "I 5", "V 5", "W 10", "K 10", "J 5", "W 5", "X 10", "L 10", "K 5", "X 1", "L 5"};
    string destination = "L";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> signs = {"A 200;B 150", "C 45;D 100;E 150", "C 25;E 130", "F 80;G 65", "G 35;H 160", "A 160", "H 130"};
    string destination = "F";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> signs = {"A 8", "B 11", "C 9", "C 14", "B 9", "B 3"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> signs = {"A 8", "B 38", "B 70"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> signs = {"D 2", "H 25;C 1", "A 18;C 13", "E 23;C 45", "C 24", "G 30", "E 37", "C 9", "F 10", "I 20;E 15"};
    string destination = "H";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> signs = {"C 65", "C 38;I 39", "F 11;B 13", "F 26", "B 54;D 64"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> signs = {"H 30;D 39", "D 9;E 34", "C 32;F 26;A 36;I 17", "G 40;B 13;F 26"};
    string destination = "G";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> signs = {"B 10", "A 10", "A 1", "B 2"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> signs = {"A 100", "B 10", "B 5", "C 10", "C 5", "A 90"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> signs = {"B 5", "A 10", "B 0", "A 0"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> signs = {"A 100", "B 200"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> signs = {"A 101", "C 103", "C 53", "B 52", "B 2", "A 1"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> signs = {"A 4", "B 3;C 4", "A 1", "B 1;C 2"};
    string destination = "C";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> signs = {"A 100", "B 2;C 4", "B 1;C 3", "A 1"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> signs = {"A 10", "B 20", "B 16", "A 3"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> signs = {"A 2", "B 2", "C 2", "A 1", "B 1", "C 1"};
    string destination = "C";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> signs = {"HOGE 1", "HOGE 2"};
    string destination = "HOGE";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> signs = {"A 100", "B 50", "B 10", "A 30"};
    string destination = "A";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> signs = {"A 100", "B 10", "A 1", "B 1"};
    string destination = "B";
    LongStraightRoad* pObj = new LongStraightRoad();
    clock_t start = clock();
    int result = pObj->distanceToDestination(signs, destination);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14768757&rd=13517&pm=9894
********************************************************************************
#line 89 "LongStraightRoad.cpp"
#include <vector>                                                
#include <map>                                                   
#include <set>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <cmath>
#include <string>
#include <complex>
using namespace std;
 
class LongStraightRoad {
   public:
      map <string, int> name;
      int info[55][105];
      int s, N;
      int father[105];
      int S[55], P[105];
      int colour[105];
      int mark[105];
      long long mat[55][55];
      int num, pos[105];
      int process(int c, string x) {
   int i, last, j;
   x += ";";
   last = -1;
   for (i = 0; i < x.length(); i ++)
      if (x[i] == ';') {
         char tmp[55];
         sscanf(x.c_str() + last + 1, "%s", tmp);
         if (name.find(string(tmp)) == name.end()) {
      name[string(tmp)] = s ++;
         }
         for (j = last + 1; x[j] != ' '; j ++);
         sscanf(x.c_str() + j + 1, "%d", &info[c][name[string(tmp)]]);
         last = i;
      }
   return 0;
      }
      int getRoot(int x) {
   return (father[x] == -1 ? x : (father[x] = getRoot(father[x])));
      }
      int merge(int x, int y) {
   x = getRoot(x);
   y = getRoot(y);
   if (x != y)
      father[x] = y;
   return 0;
      }
      int solve(int x, int d) {
   int i, j;
   if (!mark[x])
      mark[x] = 1;
   else
      return (S[x] == d);
   S[x] = d;
   for (i = 0; i < s; i ++)
      for (j = 0; j < N; j ++)
         if (info[x][i] != -1 && info[j][i] != -1)
      if (!solve(j, d + info[x][i] - info[j][i]))
         return 0;
   return 1;
      }
      int distanceToDestination(vector <string> signs, string destination) {
         int i, j, k;
   N = signs.size();
   name.clear();
   s = 0;
   memset(info, -1, sizeof(info));
   for (i = 0; i < N; i ++)
      process(i, signs[i]);
   int dest;
   if (name.find(destination) == name.end())
      return -1;
   dest = name[destination];
   memset(father, -1, sizeof(father));
   for (i = 0; i < N; i ++)
      for (j = i + 1; j < N; j ++)
         for (k = 0; k < s; k ++)
      if (info[i][k] != -1 && info[j][k] != -1)
         merge(i, j);
   for (i = 0; i < N; i ++)
      for (j = 0; j < s; j ++)
         if (info[i][j] != -1)
      colour[j] = getRoot(i);
   memset(mark, 0, sizeof(mark));
   for (i = 0; i < N; i ++)
      if (!mark[getRoot(i)]) {
         j = getRoot(i);
         if (!solve(j, 0))
      return -1;
      }
   for (i = 0; i < N; i ++)
      for (j = 0; j < s; j ++)
         if (info[i][j] != -1)
      P[j] = S[i] + info[i][j];
   for (i = 0; i < N; i ++)
      for (j = 0; j < s; j ++)
         if (info[i][j] != -1)
      if (P[j] != S[i] + info[i][j])
         return -1;
   for (i = 0; i < N; i ++)
      for (j = i + 1; j < N; j ++)
         if (getRoot(i) == getRoot(j) && S[i] >= S[j])
      return -1;
   num = 0;
   for (i = 0; i < N; i ++)
      if (getRoot(i) == i)
         pos[i] = num ++;
   for (i = 0; i < num; i ++)
      for (j = 0; j < num; j ++)
         mat[i][j] = 1000000000;
   for (i = 0; i < N; i ++)
      for (j = i + 1; j < N; j ++)
         if (getRoot(i) != getRoot(j))
      mat[pos[getRoot(i)]][pos[getRoot(j)]] = min(mat[pos[getRoot(i)]][pos[getRoot(j)]], (long long)S[j] - S[i]);
   for (i = 0; i < num; i ++)
      for (j = 0; j < num; j ++)
         mat[i][j] = mat[i][j] * 10000LL - 1;
   long long d[55];
   for (i = 0; i < num; i ++)
      d[i] = 0;
   for (i = 0; i < num + 1; i ++)
      for (j = 0; j < num; j ++)
         for (k = 0; k < num; k ++)
      d[j] = min(d[j], d[k] + mat[j][k]);
   for (i = 0; i < num; i ++)
      for (j = 0; j < num; j ++)
         if (d[i] > d[j] + mat[i][j])
      return -1;
   if (colour[dest] == getRoot(N - 1) && P[dest] - S[N - 1] >= 0)
      return P[dest] - S[N - 1];
   return -1;
      }
};
 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/