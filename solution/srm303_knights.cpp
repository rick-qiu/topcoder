/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6070
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

class Knights {
public:
    int makeFriendly(int N, vector<string> pos);
};

int Knights::makeFriendly(int N, vector<string> pos) {
    int ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<string> pos = {"A2 A4", "B1 B5", "D1 D5 E2 E4 C3"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    vector<string> pos = {"A1 A2 B1 B2"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 6;
    vector<string> pos = {"A1 A5 B3 C1 C5 D2 D4 E6 F5"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 8;
    vector<string> pos = {"A2 A4 A5 A6 B2 B5 B6 B7 B8", "C3 C8 D1 D2 D3 D4 D5 D6 D8", "E1 E3 E8 F1 F2 F8 G3 G5 H4 H7 H8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 9;
    vector<string> pos = {"A3 A4 A5 A7 A8 B6 B8 C3 C6", "C7 C9 D4 D5 D8 D9 E1 E3 E7", "F2 G2 G6 G7 H2 H9 I2 I4 I5", "I6 I7 I8 I9"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 15;
    vector<string> pos = {"A1 A3 A5 A6 A7 A9 A10 A11 A13 A14 A15 B1 B2 B3 B4", "B5 B6 B7 B8 B9 B10 B12 B13 B14 B15 C1 C2 C3 C4 C5", "C6 C7 C8 C9 C11 C12 C13 C14 D1 D2 D3 D4 D5 D6 D7", "D8 D9 D10 D11 D12 D14 D15 E1 E2 E3 E4 E5 E6 E7 E8", "E9 E10 E11 E12 E13 E14 E15 F1 F2 F3 F4 F5 F6 F7 F8", "F9 F10 F11 F12 F13 F14 F15 G1 G2 G3 G4 G5 G6 G7 G8", "G9 G10 G11 G12 G13 G14 G15 H1 H2 H4 H5 H6 H7 H8 H9", "H10 H11 H12 H13 H14 H15 I1 I2 I3 I4 I5 I6 I7 I8", "I10 I11 I12 I13 I14 I15 J1 J2 J4 J5 J6 J7 J8 J11", "J12 J13 J14 J15 K1 K3 K4 K5 K6 K7 K8 K9 K10 K12", "K13 K14 K15 L1 L2 L3 L6 L7 L8 L9 L10 L11 L12 L13", "L14 L15 M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13", "M14 M15 N1 N2 N3 N4 N5 N6 N8 N9 N10 N12 N13 N14", "N15 O1 O2 O4 O5 O7 O8 O9 O10 O11 O13 O14 O15"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 96;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A13 A14 A15 A19 A20 A22 A23 A24", "A25 A26 B1 B3 B4 B5 B6 B7 B9 B10 B11 B12 B14 B15", "B17 B20 B22 B25 B26 C3 C4 C5 C6 C8 C10 C13 C15 C16", "C17 C22 C23 C25 D5 D6 D9 D10 D11 D15 D18 D26 E1 E3", "E5 E7 E9 E10 E11 E12 E15 E17 E18 E19 E21 E22 E23", "E24 E25 F1 F2 F3 F4 F5 F7 F8 F9 F10 F12 F16 F17", "F18 F19 F20 F21 F22 F24 F25 G3 G4 G5 G6 G7 G8 G9", "G12 G13 G15 G17 G18 G19 G20 G21 G22 G24 G25 G26 H2", "H4 H5 H7 H10 H13 H15 H18 H20 H22 H25 I2 I3 I4 I7", "I9 I10 I12 I14 I16 I17 I18 I19 I20 I21 I24 I25 I26", "J2 J6 J8 J10 J11 J12 J13 J14 J15 J17 J18 J25 K1 K5", "K6 K8 K10 K11 K12 K15 K23 K24 K25 K26 L1 L2 L3 L7", "L8 L9 L10 L11 L14 L17 L20 L21 L25 L26 M5 M6 M7 M9", "M12 M14 M16 M22 M26 N1 N5 N10 N11 N12 N15 N16 N17", "N24 N25 O1 O3 O6 O7 O10 O13 O14 O15 O16 O17 O18", "O19 O22 O26 P2 P3 P5 P6 P7 P8 P9 P13 P16 P18 P19", "P21 P23 P24 Q3 Q4 Q7 Q8 Q10 Q12 Q13 Q15 Q17 Q18", "Q19 Q20 Q24 R2 R4 R5 R6 R10 R11 R12 R14 R15 R16", "R17 R18 R19 R21 R22 R23 R25 R26 S1 S3 S5 S6 S8 S9", "S10 S11 S13 S14 S22 S26 T2 T4 T6 T7 T11 T12 T15", "T16 T17 T18 T22 T23 T26 U2 U3 U4 U5 U8 U10 U12 U13", "U14 U15 U16 U17 U18 U21 U22 U23 U24 U25 V3 V4 V5", "V6 V8 V9 V10 V11 V12 V17 V18 V19 V20 V22 V23 V25", "V26 W1 W3 W5 W6 W9 W11 W12 W13 W15 W16 W18 W19 W20", "W21 W22 W23 W24 W26 X1 X2 X6 X8 X9 X11 X12 X13 X15", "X19 X20 X23 X25 X26 Y2 Y6 Y8 Y9 Y10 Y12 Y17 Y21", "Y23 Y25 Y26 Z1 Z2 Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z12 Z13 Z15", "Z16 Z19 Z20 Z21 Z23 Z25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 178;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 10;
    vector<string> pos = {"A2 A3 A4 A5 A6 A7 A8 A9 A10 B1 B2 B3 B4 B5 B6 B7", "B8 B9 B10 C1 C2 C5 C7 C8 C9 C10 D1 D2 D4 D5 D6 D8", "D9 D10 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 F1 F2 F3 F4", "F5 F6 F7 F8 F9 F10 G1 G2 G3 G4 G5 G6 G7 G8 G9 G10", "H1 H2 H3 H5 H6 H8 H9 H10 I1 I2 I3 I4 I5 I6 I7 I8", "I9 I10 J1 J2 J3 J4 J5 J6 J8 J9 J10"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 10;
    vector<string> pos = {"A2 A5 A6 A8 B1 B2 B3 B4 B6 B7 B9 B10 C1 C3 C7 C8", "C10 D4 D5 D6 D7 D10 E6 E9 F5 F6 F8 F10 G1 G2 G3 G4", "G5 G8 G10 H3 H6 H9 I1 I2 I3 I5 I6 I7 I9 I10 J1 J2", "J3 J5 J10"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 21;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 B1 B2 B3 B4 B5 B6 B7 B8 B9", "B10 B11 B12 B13 B14 B15 B16 B17 B18 B19 B20 B21 C1", "C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15", "C16 C17 C18 C19 C20 C21 D1 D2 D3 D4 D5 D6 D7 D8 D9", "D10 D11 D12 D13 D14 D15 D16 D17 D18 D19 D20 D21 E1", "E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "E16 E17 E18 E19 E20 E21 F1 F2 F3 F4 F5 F6 F7 F8 F9", "F10 F11 F12 F13 F14 F15 F16 F17 F18 F19 F20 F21 G1", "G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 G20 G21 H1 H2 H3 H4 H5 H6 H7 H8 H9", "H10 H11 H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 I1", "I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "I16 I17 I18 I19 I20 I21 J1 J2 J3 J4 J5 J6 J7 J8 J9", "J10 J11 J12 J13 J14 J15 J16 J17 J18 J19 J20 J21 K1", "K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15", "K16 K17 K18 K19 K20 K21 L1 L2 L3 L4 L5 L6 L7 L8 L9", "L10 L11 L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 N1 N2 N3 N4 N5 N6 N7 N8 N9", "N10 N11 N12 N13 N14 N15 N16 N17 N18 N19 N20 N21 O1", "O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15", "O16 O17 O18 O19 O20 O21 P1 P2 P3 P4 P5 P6 P7 P8 P9", "P10 P11 P12 P13 P14 P15 P16 P17 P18 P19 P20 P21 Q1", "Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15", "Q16 Q17 Q18 Q19 Q20 Q21 R1 R2 R3 R4 R5 R6 R7 R8 R9", "R10 R11 R12 R13 R14 R15 R16 R17 R18 R19 R20 R21 S1", "S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19 S20 S21 T1 T2 T3 T4 T5 T6 T7 T8 T9", "T10 T11 T12 T13 T14 T15 T16 T17 T18 T19 T20 T21 U1", "U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14 U15", "U16 U17 U18 U19 U20 U21"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 19;
    vector<string> pos = {"A2 A3 A5 A6 A9 A10 A12 A14 A15 A16 A18 A19 B1 B4", "B7 B8 B9 B10 B13 B15 B16 C1 C2 C3 C5 C8 C9 C10 C13", "C14 C16 C17 C19 D1 D2 D4 D5 D7 D8 D10 D12 D13 D15", "D16 D18 D19 E1 E2 E3 E4 E5 E6 E7 E8 E9 E14 E15 E16", "E17 E18 F1 F2 F3 F4 F5 F7 F8 F10 F11 F13 F14 F15", "F17 F18 G2 G4 G6 G7 G10 G11 G12 G14 G16 G18 G19 H1", "H4 H7 H8 H9 H10 H12 H14 H15 H16 H18 H19 I1 I4 I6", "I9 I10 I12 I14 I17 I19 J2 J4 J5 J6 J7 J15 J16 J17", "J18 J19 K1 K4 K6 K8 K11 K12 K17 K18 L1 L3 L5 L6 L8", "L10 L11 L13 L14 L16 M1 M2 M3 M7 M8 M9 M12 M15 M16", "M19 N1 N6 N7 N8 N9 N10 N12 N14 N15 O1 O2 O3 O4 O6", "O7 O8 O10 O12 O13 O14 O18 P1 P2 P3 P5 P6 P7 P8 P9", "P10 P11 P13 P14 P19 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q10 Q13", "Q14 Q15 Q17 Q18 Q19 R1 R2 R3 R4 R5 R6 R7 R8 R11", "R13 R15 R17 R18 R19 S2 S3 S4 S5 S6 S7 S8 S13 S15", "S16 S17 S18"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 24;
    vector<string> pos = {"A2 A3 A5 A6 A7 A9 A10 A12 A14 A15 A16 A17 A18 A19", "A20 A23 B2 B3 B4 B5 B8 B10 B11 B15 B16 B17 B19 B22", "B23 B24 C3 C4 C6 C7 C9 C10 C11 C13 C14 C16 C17 C19", "C21 C22 C24 D1 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12", "D13 D18 D19 D20 D21 D22 D23 D24 E1 E2 E3 E4 E6 E7", "E9 E10 E11 E12 E13 E14 E16 E17 E20 E22 E24 F1 F4", "F5 F6 F8 F10 F11 F12 F13 F14 F17 F20 F21 F22 F23", "G1 G3 G4 G5 G7 G8 G9 G12 G14 G17 G18 G20 G22 H1 H3", "H5 H7 H8 H9 H10 H13 H18 H19 H20 H21 H22 H23 I2 I4", "I6 I9 I10 I11 I15 I16 I18 I20 I22 I23 J1 J3 J4 J6", "J7 J8 J9 J13 J14 J15 J19 J20 J21 J24 K1 K3 K4 K7", "K8 K13 K14 K15 K16 K17 K19 K21 K22 L3 L4 L5 L6 L8", "L9 L10 L12 L14 L15 L16 L19 L20 L22 L23 L24 M2 M3", "M4 M5 M6 M7 M8 M10 M11 M16 M17 M18 M19 M20 M21 M22", "M23 N1 N2 N5 N6 N7 N9 N10 N11 N12 N13 N14 N15 N16", "N17 N18 N19 N22 N24 O2 O4 O5 O6 O8 O9 O10 O11 O12", "O13 O14 O19 O20 O21 O22 O23 O24 P2 P4 P5 P7 P11", "P13 P15 P16 P17 P18 P19 P20 P24 Q2 Q3 Q5 Q8 Q10", "Q14 Q15 Q17 Q18 Q19 Q20 Q21 Q22 Q23 R3 R5 R7 R9", "R11 R13 R14 R15 R16 R18 R19 R21 R22 R23 S5 S7 S8", "S10 S13 S15 S16 S17 S18 S20 S21 S22 S23 S24 T1 T2", "T3 T4 T8 T9 T10 T12 T14 T15 T16 T17 T18 T20 T21", "T22 U1 U3 U6 U7 U8 U9 U13 U14 U15 U19 U21 U22 U23", "U24 V4 V5 V6 V7 V9 V12 V13 V14 V16 V17 V19 V20 V21", "W1 W5 W6 W8 W10 W11 W13 W14 W15 W17 W19 W20 W21", "W23 X2 X4 X5 X7 X9 X11 X12 X13 X14 X15 X16 X17 X18", "X19 X22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 171;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 23;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A10 A11 A12 A13 A14 A15", "A16 A17 A19 A20 A21 A22 B1 B2 B3 B4 B5 B6 B7 B9", "B10 B11 B12 B14 B15 B16 B17 B18 B19 B20 B21 B22", "B23 C2 C3 C4 C5 C6 C7 C8 C11 C12 C13 C14 C15 C16", "C17 C18 C19 C20 C21 C23 D1 D3 D5 D6 D7 D8 D9 D10", "D11 D12 D13 D14 D16 D17 D18 D19 D20 D21 D22 D23 E2", "E3 E4 E6 E7 E8 E9 E10 E12 E13 E14 E15 E17 E18 E19", "E20 E21 E22 E23 F1 F2 F3 F4 F6 F7 F8 F9 F11 F12", "F13 F14 F15 F16 F17 F20 F21 F22 F23 G1 G2 G3 G4 G5", "G6 G7 G10 G11 G13 G14 G15 G17 G20 G21 G22 G23 H1", "H2 H3 H4 H5 H7 H8 H10 H11 H13 H14 H15 H17 H19 H21", "H23 I1 I2 I3 I4 I5 I7 I9 I10 I11 I12 I13 I14 I16", "I17 I18 I19 I20 I21 I22 I23 J1 J2 J3 J5 J6 J7 J9", "J12 J13 J14 J15 J16 J17 J18 J20 J21 J22 J23 K1 K2", "K3 K4 K5 K8 K9 K10 K11 K12 K13 K15 K16 K17 K18 K19", "K21 K22 K23 L2 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13", "L17 L20 L22 L23 M1 M2 M3 M4 M5 M6 M7 M8 M9 M12 M14", "M15 M16 M17 M18 M19 M20 M21 M22 M23 N1 N2 N3 N5 N6", "N7 N11 N12 N13 N14 N15 N16 N17 N18 N19 N20 N21 N22", "N23 O1 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14", "O15 O16 O17 O18 O20 O21 O22 O23 P1 P2 P5 P6 P7 P8", "P9 P10 P11 P13 P14 P15 P16 P17 P18 P19 P20 P21 P22", "P23 Q1 Q2 Q3 Q4 Q6 Q7 Q8 Q9 Q12 Q13 Q15 Q16 Q17", "Q18 Q19 Q21 Q22 Q23 R1 R2 R3 R4 R5 R7 R8 R9 R10", "R11 R13 R14 R15 R16 R17 R18 R19 R20 R22 R23 S1 S2", "S3 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15 S16 S17", "S18 S19 S20 S21 S22 T1 T3 T5 T6 T7 T8 T10 T11 T12", "T13 T15 T16 T17 T22 T23 U1 U2 U3 U4 U5 U6 U7 U9", "U10 U11 U12 U13 U14 U17 U18 U21 U23 V1 V2 V3 V4 V5", "V6 V7 V8 V9 V10 V11 V12 V13 V14 V15 V16 V17 V18", "V19 V20 V21 V22 V23 W1 W4 W5 W6 W7 W9 W11 W12 W14", "W15 W18 W20 W21 W22 W23"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 213;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 20;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A10 A11 A12 A13 A14 A15", "A16 A17 A19 A20 B1 B2 B4 B5 B6 B7 B8 B9 B10 B12", "B13 B14 B15 B16 B17 B18 B19 B20 C1 C2 C3 C4 C5 C6", "C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17 C18 C19", "C20 D1 D2 D3 D4 D5 D6 D7 D9 D10 D11 D12 D14 D15", "D16 D17 D18 D19 D20 E1 E2 E3 E5 E6 E7 E8 E9 E10", "E11 E12 E13 E14 E15 E16 E18 E19 E20 F1 F2 F3 F4 F5", "F6 F7 F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18", "F19 F20 G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13", "G14 G15 G16 G17 G18 G19 G20 H1 H2 H3 H4 H5 H6 H8", "H9 H10 H11 H12 H13 H14 H15 H16 H17 H18 H19 H20 I1", "I2 I3 I4 I5 I6 I8 I9 I10 I11 I12 I13 I14 I15 I16", "I18 I20 J2 J3 J4 J5 J6 J7 J8 J9 J11 J12 J13 J14", "J15 J16 J17 J18 J20 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10", "K11 K12 K13 K14 K15 K16 K18 K19 K20 L1 L2 L3 L4 L5", "L6 L7 L8 L9 L10 L11 L12 L13 L14 L15 L16 L18 L19", "L20 M1 M2 M3 M4 M5 M6 M7 M8 M9 M11 M12 M13 M15 M17", "M18 M19 M20 N1 N2 N3 N4 N5 N6 N7 N9 N10 N12 N13", "N14 N15 N16 N17 N18 N19 N20 O1 O2 O3 O4 O5 O6 O7", "O8 O9 O10 O11 O12 O13 O14 O15 O16 O17 O18 O19 O20", "P1 P2 P4 P5 P6 P7 P10 P11 P12 P13 P14 P15 P16 P17", "P18 P19 P20 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12", "Q13 Q14 Q15 Q16 Q17 Q18 Q19 Q20 R1 R2 R3 R4 R5 R6", "R7 R9 R10 R11 R12 R13 R14 R15 R16 R18 R19 R20 S1", "S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S14 S15 S16", "S17 S20 T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13", "T14 T15 T16 T18 T19 T20"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 25;
    vector<string> pos = {"A1 A2 A3 A4 A7 A8 A9 A10 A12 A14 A15 A17 A19 A20", "A21 A23 A25 B2 B3 B4 B5 B6 B7 B8 B9 B12 B13 B14", "B16 B17 B18 B19 B20 B21 B22 B24 B25 C1 C3 C5 C6 C8", "C10 C12 C13 C15 C16 C17 C18 C20 C21 C22 C24 C25 D1", "D2 D3 D4 D6 D7 D8 D10 D11 D13 D15 D16 D17 D18 D20", "D21 D22 D23 D24 E2 E3 E4 E5 E6 E7 E9 E10 E11 E12", "E14 E15 E17 E18 E20 E22 E23 E25 F1 F7 F8 F9 F10", "F13 F14 F18 F19 F21 F22 F23 F25 G1 G3 G4 G5 G6 G7", "G9 G10 G12 G13 G15 G16 G17 G18 G19 G20 G22 G24 G25", "H1 H2 H3 H5 H7 H10 H12 H13 H14 H15 H16 H17 H18 H19", "H20 H24 H25 I1 I2 I4 I6 I7 I8 I9 I11 I13 I14 I15", "I16 I17 I18 I19 I20 I22 I23 I24 I25 J1 J2 J3 J4 J6", "J7 J8 J9 J10 J11 J12 J13 J14 J15 J16 J17 J18 J21", "J22 J23 K1 K4 K7 K8 K11 K12 K13 K15 K16 K17 K19", "K20 K21 K23 K24 L3 L4 L5 L6 L9 L10 L11 L12 L13 L16", "L17 L19 L20 L21 L22 L25 M2 M3 M4 M5 M6 M7 M8 M10", "M11 M13 M14 M17 M18 M19 M20 M21 M23 M24 M25 N1 N2", "N5 N7 N10 N11 N12 N13 N14 N15 N16 N17 N18 N19 N20", "N21 N22 N23 N24 N25 O1 O4 O5 O6 O8 O9 O11 O12 O13", "O14 O15 O17 O18 O20 O22 O23 O24 O25 P1 P2 P3 P4 P5", "P6 P8 P9 P10 P11 P12 P14 P16 P17 P18 P19 P20 P21", "P23 P24 Q1 Q2 Q3 Q4 Q6 Q8 Q9 Q11 Q13 Q14 Q16 Q17", "Q18 Q19 Q21 Q22 Q23 Q24 R1 R2 R3 R4 R5 R6 R7 R8", "R10 R12 R14 R15 R16 R19 R20 R22 R23 R24 R25 S2 S3", "S5 S6 S7 S9 S10 S11 S12 S13 S14 S15 S16 S17 S18", "S19 S20 S22 S23 S24 S25 T2 T3 T4 T5 T6 T7 T9 T10", "T11 T13 T14 T15 T16 T17 T18 T19 T20 T21 T23 U1 U2", "U3 U4 U5 U6 U8 U10 U11 U12 U13 U14 U16 U17 U18 U21", "U22 U24 U25 V1 V2 V3 V4 V7 V8 V9 V10 V11 V14 V15", "V16 V17 V18 V19 V20 V21 V23 V25 W1 W2 W4 W5 W6 W7", "W9 W10 W11 W13 W15 W16 W17 W18 W19 W20 W21 W23 W24", "W25 X2 X3 X5 X6 X10 X11 X12 X14 X16 X20 X22 X23", "X25 Y1 Y7 Y8 Y9 Y11 Y12 Y13 Y15 Y16 Y19 Y20 Y22", "Y24 Y25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 20;
    vector<string> pos = {"A12 B5 B7 B11 B17 C4 C7 C9 C11 D2 D6 D7 D10 D14 E1", "E5 E10 F2 F6 F14 F15 F17 G18 H6 H8 I6 J20 K11 K16", "K18 L13 L18 L19 L20 N3 N5 N7 N10 N19 O4 O20 P2 P6", "P7 P8 P10 Q7 R5 R11 R14 S13 S17 S18 S19 T12"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 13;
    vector<string> pos = {"A4 A7 A8 A9 A10 A12 B1 B2 B7 B8 B12 C1 C2 C4 C5 C6", "C7 C8 C11 C12 C13 D2 D3 D5 D7 D8 D10 D11 D12 E4 E6", "E10 E11 F1 F2 F5 F6 F7 F9 F10 F11 F13 G3 G4 G5 G7", "G12 H1 H4 H6 H11 I2 I3 I7 I8 I10 I11 I13 J3 J8 J9", "K3 K4 K5 K8 L1 L3 L5 L8 L11 L12 M1 M7 M9 M10"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 24;
    vector<string> pos = {"A4 A14 A15 A18 A19 A21 A22 B1 B2 B10 B19 B20 C1 C7", "C8 C10 C13 C14 C16 C21 D16 D20 D23 D24 E2 E6 E8", "E12 E13 E17 F5 F7 F13 F14 F17 F18 F24 G2 G4 G8 G11", "G13 G14 G15 G24 H2 H3 H11 H12 H17 H18 H21 H23 I2", "I3 I9 I11 I13 J2 J5 J8 J9 J10 J13 J15 J17 J18 J19", "J20 J21 J23 K3 K10 K11 K13 K14 K16 K18 K21 K22 L12", "L15 L16 L19 L20 M3 M4 M6 M9 M11 M14 N5 N6 N7 N13", "N15 N16 N17 N18 N24 O1 O3 O5 O7 O8 O14 O17 O18 O21", "O22 O24 P2 P6 P15 P18 P19 Q1 Q3 Q8 Q9 Q15 Q20 Q21", "Q22 Q23 R3 R4 R9 R10 R13 R15 R24 S2 S5 S7 S11 S12", "S13 S14 S16 S17 S19 S20 S21 S23 T4 T15 U2 U6 U10", "U12 U15 U19 U21 U22 V1 V2 V6 V7 V17 V19 V21 V23", "V24 W6 W12 W14 W19 W23 X4 X5 X8 X12 X13 X19"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 11;
    vector<string> pos = {"A4 A8 A9 B1 B2 B3 B4 B6 B7 B8 B9 B10 B11 C1 C3 C4", "C5 C10 D1 D3 D4 D10 D11 E5 E7 E10 E11 F1 F3 F5 F6", "F7 F9 F11 G3 G7 G8 H1 H4 H7 H11 I4 I6 I7 I8 I10 J3", "J5 J9 J10 K2 K3 K7"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 21;
    vector<string> pos = {"A4 A8 A9 A12 A13 A14 A15 A17 A18 A19 A20 A21 B1 B2", "B4 B5 B6 B11 B13 B15 B16 C1 C2 C7 C9 C12 C13 C14", "C16 C18 C19 C20 D1 D3 D6 D10 D11 D15 D18 D21 E4 E8", "E10 E11 E12 E14 E18 E20 F3 F4 F7 F8 F12 F20 G1 G7", "G8 G11 G12 G18 G19 G20 H1 H5 H7 H8 H10 H11 H12 H14", "H21 I1 I2 I3 I7 I9 I11 I12 I14 I15 I17 I18 I21 J2", "J5 J6 J7 J11 J12 J14 J16 J17 J19 K8 K11 K14 K15", "K16 K19 K21 L2 L3 L4 L5 L6 L8 L12 L19 L20 M1 M2 M4", "M6 M9 M10 M13 M18 M21 N2 N3 N6 N7 N10 N11 N13 N17", "N18 N19 N21 O3 O5 O8 O13 P2 P3 P4 P10 P12 P13 P14", "P15 P21 Q1 Q2 Q3 Q5 Q6 Q7 Q8 Q11 Q14 Q15 Q17 Q18", "Q19 Q21 R1 R2 R3 R4 R5 R7 R9 R11 R14 R17 R18 R20", "R21 S1 S6 S7 S8 S9 S10 S11 S13 S14 S15 S16 S17 S21", "T5 T6 T7 T8 T10 T12 T13 T16 T18 T19 T20 U1 U3 U12", "U14 U17 U18 U19 U20 U21"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 23;
    vector<string> pos = {"A19 B20 C10 D19 E3 E4 G6 H9 H19 I2 I10 J11 J19 K1", "K6 K20 L9 N19 O21 P5 Q10 Q11 Q17 R2 R8 S7 T6 U11", "V9 V16 V18 V19 V23 W19"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 13;
    vector<string> pos = {"A4 A8 A9 A12 A13 B1 B2 B4 B5 B6 B7 B8 B9 B10 B12", "B13 C1 C6 C8 C10 C11 D4 D5 D10 D12 E2 E3 E4 E6 E8", "E9 E10 E12 F1 F4 F8 F9 F13 G3 G6 G10 H1 H3 H4 H5", "H7 H11 H13 I4 I5 I8 I9 I13 J8 J10 K3 K4 K7 K8 L1", "L2 L3 L5 L9 L11 L12 M1 M2 M3 M5 M12 M13"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 11;
    vector<string> pos = {"A3 B2 B3 B7 B9 C1 C2 C3 C4 C5 C6 C9 C10 C11 D1 D3", "D4 D7 D9 D10 D11 E2 E4 E5 E8 E9 E10 F4 F5 F6 F9 G3", "G4 G5 G9 H2 H4 H5 H7 H8 H11 I3 I4 I5 I6 I9 J2 J3", "J5 J8 J10 J11 K2 K3 K7 K8 K10"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 23;
    vector<string> pos = {"A3 A13 A14 A18 A20 A23 B1 B2 B3 B4 B5 B8 B9 B10", "B11 B13 B14 B17 B19 B20 B21 B23 C2 C3 C6 C7 C8 C13", "C14 C15 C18 C23 D1 D2 D6 D10 D12 D13 D15 D16 D19", "D22 D23 E1 E2 E5 E9 E10 E12 E15 E17 E18 E20 E21 F2", "F3 F5 F10 F12 F15 F17 F18 F19 F20 F21 F22 G1 G7 G9", "G15 G22 G23 H3 H6 H8 H9 H16 H22 I2 I12 I21 J4 J7", "J8 J9 J10 J15 J17 J18 J19 J20 J21 J23 K3 K5 K6 K7", "K12 K14 K15 K18 K22 L1 L3 L8 L14 L16 L17 L19 L20", "L21 M1 M2 M3 M4 M6 M7 M12 M13 M14 M15 M17 M23 N2", "N3 N5 N7 N12 N14 N16 N18 N19 N22 O3 O5 O6 O7 O10", "O13 O14 O15 O19 O21 O22 O23 P2 P3 P4 P5 P6 P7 P9", "P10 P15 P17 P18 P19 P21 Q3 Q5 Q7 Q8 Q9 Q13 Q14 Q17", "Q19 Q22 Q23 R2 R6 R8 R10 R11 R12 R13 R18 R21 R22", "R23 S1 S3 S5 S6 S7 S8 S10 S12 S13 S14 S15 S16 S19", "S21 S23 T9 T10 T11 T18 T20 T22 U2 U5 U6 U9 U10 U13", "U18 V4 V7 V8 V11 V13 V15 V18 V21 V22 W6 W7 W12 W13", "W14 W18 W19 W22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 10;
    vector<string> pos = {"A3 B3 B4 B8 B10 C3 C4 C5 C6 C7 C8 D1 D2 D3 D4 D6", "D7 D10 E2 E3 E4 E6 E8 E9 F2 F3 F4 F9 F10 G1 G4 G9", "G10 H1 H5 H9 I1 I2 I4 I5 I8 J1 J2 J3 J4 J7"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 1;
    vector<string> pos = {"A1"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
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
    int N = 2;
    vector<string> pos = {"A1 A2 B1 B2"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 3;
    vector<string> pos = {"A1 A2 A3 B1 B2 B3 C1 C2 C3"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 4;
    vector<string> pos = {"A1 A2 A3 A4 B1 B2 B3 B4 C1 C2 C3 C4 D1 D2 D3 D4"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 5;
    vector<string> pos = {"A1 A2 A3 A4 A5 B1 B2 B3 B4 B5 C1 C2 C3 C4 C5 D1 D2", "D3 D4 D5 E1 E2 E3 E4 E5"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 6;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 B1 B2 B3 B4 B5 B6 C1 C2 C3 C4 C5", "C6 D1 D2 D3 D4 D5 D6 E1 E2 E3 E4 E5 E6 F1 F2 F3 F4", "F5 F6"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 7;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 B1 B2 B3 B4 B5 B6 B7 C1 C2 C3", "C4 C5 C6 C7 D1 D2 D3 D4 D5 D6 D7 E1 E2 E3 E4 E5 E6", "E7 F1 F2 F3 F4 F5 F6 F7 G1 G2 G3 G4 G5 G6 G7"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 8;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 B1 B2 B3 B4 B5 B6 B7 B8 C1", "C2 C3 C4 C5 C6 C7 C8 D1 D2 D3 D4 D5 D6 D7 D8 E1 E2", "E3 E4 E5 E6 E7 E8 F1 F2 F3 F4 F5 F6 F7 F8 G1 G2 G3", "G4 G5 G6 G7 G8 H1 H2 H3 H4 H5 H6 H7 H8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 9;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 B1 B2 B3 B4 B5 B6 B7 B8", "B9 C1 C2 C3 C4 C5 C6 C7 C8 C9 D1 D2 D3 D4 D5 D6 D7", "D8 D9 E1 E2 E3 E4 E5 E6 E7 E8 E9 F1 F2 F3 F4 F5 F6", "F7 F8 F9 G1 G2 G3 G4 G5 G6 G7 G8 G9 H1 H2 H3 H4 H5", "H6 H7 H8 H9 I1 I2 I3 I4 I5 I6 I7 I8 I9"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 10;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 B1 B2 B3 B4 B5 B6", "B7 B8 B9 B10 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 D1 D2", "D3 D4 D5 D6 D7 D8 D9 D10 E1 E2 E3 E4 E5 E6 E7 E8", "E9 E10 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 G1 G2 G3 G4", "G5 G6 G7 G8 G9 G10 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 J1 J2 J3 J4 J5 J6", "J7 J8 J9 J10"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 11;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 B1 B2 B3 B4 B5", "B6 B7 B8 B9 B10 B11 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10", "C11 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 E1 E2 E3 E4", "E5 E6 E7 E8 E9 E10 E11 F1 F2 F3 F4 F5 F6 F7 F8 F9", "F10 F11 G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 H1 H2", "H3 H4 H5 H6 H7 H8 H9 H10 H11 I1 I2 I3 I4 I5 I6 I7", "I8 I9 I10 I11 J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 12;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 B1 B2 B3 B4", "B5 B6 B7 B8 B9 B10 B11 B12 C1 C2 C3 C4 C5 C6 C7 C8", "C9 C10 C11 C12 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11", "D12 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 F1 F2", "F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 G1 G2 G3 G4 G5 G6", "G7 G8 G9 G10 G11 G12 H1 H2 H3 H4 H5 H6 H7 H8 H9", "H10 H11 H12 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 K1 K2 K3 K4", "K5 K6 K7 K8 K9 K10 K11 K12 L1 L2 L3 L4 L5 L6 L7 L8", "L9 L10 L11 L12"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 13;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 B1 B2", "B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 C1 C2 C3 C4", "C5 C6 C7 C8 C9 C10 C11 C12 C13 D1 D2 D3 D4 D5 D6", "D7 D8 D9 D10 D11 D12 D13 E1 E2 E3 E4 E5 E6 E7 E8", "E9 E10 E11 E12 E13 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10", "F11 F12 F13 G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12", "G13 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 I1", "I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 J1 J2 J3", "J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 K1 K2 K3 K4 K5", "K6 K7 K8 K9 K10 K11 K12 K13 L1 L2 L3 L4 L5 L6 L7", "L8 L9 L10 L11 L12 L13 M1 M2 M3 M4 M5 M6 M7 M8 M9", "M10 M11 M12 M13"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 14;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 B1", "B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 C1 C2", "C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 D1 D2 D3", "D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 E1 E2 E3 E4", "E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 F1 F2 F3 F4 F5", "F6 F7 F8 F9 F10 F11 F12 F13 F14 G1 G2 G3 G4 G5 G6", "G7 G8 G9 G10 G11 G12 G13 G14 H1 H2 H3 H4 H5 H6 H7", "H8 H9 H10 H11 H12 H13 H14 I1 I2 I3 I4 I5 I6 I7 I8", "I9 I10 I11 I12 I13 I14 J1 J2 J3 J4 J5 J6 J7 J8 J9", "J10 J11 J12 J13 J14 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10", "K11 K12 K13 K14 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11", "L12 L13 L14 M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12", "M13 M14 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13", "N14"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 15;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 B15", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 D15", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14 F15", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14 H15", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14 L15", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14 N15", "O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 16;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14", "B15 B16 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13", "C14 C15 C16 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12", "D13 D14 D15 D16 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10", "F11 F12 F13 F14 F15 F16 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 H1 H2 H3 H4 H5 H6 H7", "H8 H9 H10 H11 H12 H13 H14 H15 H16 I1 I2 I3 I4 I5", "I6 I7 I8 I9 I10 I11 I12 I13 I14 I15 I16 J1 J2 J3", "J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15 J16 K1", "K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15", "K16 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14", "L15 L16 M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13", "M14 M15 M16 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12", "N13 N14 N15 N16 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11", "O12 O13 O14 O15 O16 P1 P2 P3 P4 P5 P6 P7 P8 P9 P10", "P11 P12 P13 P14 P15 P16"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 128;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 17;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13", "B14 B15 B16 B17 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11", "C12 C13 C14 C15 C16 C17 D1 D2 D3 D4 D5 D6 D7 D8 D9", "D10 D11 D12 D13 D14 D15 D16 D17 E1 E2 E3 E4 E5 E6", "E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17 F1 F2 F3", "F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14 F15 F16 F17", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13", "H14 H15 H16 H17 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 J1 J2 J3 J4 J5 J6 J7 J8 J9", "J10 J11 J12 J13 J14 J15 J16 J17 K1 K2 K3 K4 K5 K6", "K7 K8 K9 K10 K11 K12 K13 K14 K15 K16 K17 L1 L2 L3", "L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14 L15 L16 L17", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13", "N14 N15 N16 N17 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11", "O12 O13 O14 O15 O16 O17 P1 P2 P3 P4 P5 P6 P7 P8 P9", "P10 P11 P12 P13 P14 P15 P16 P17 Q1 Q2 Q3 Q4 Q5 Q6", "Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 18;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12", "B13 B14 B15 B16 B17 B18 C1 C2 C3 C4 C5 C6 C7 C8 C9", "C10 C11 C12 C13 C14 C15 C16 C17 C18 D1 D2 D3 D4 D5", "D6 D7 D8 D9 D10 D11 D12 D13 D14 D15 D16 D17 D18 E1", "E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "E16 E17 E18 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12", "F13 F14 F15 F16 F17 F18 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 H1 H2 H3 H4 H5", "H6 H7 H8 H9 H10 H11 H12 H13 H14 H15 H16 H17 H18 I1", "I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "I16 I17 I18 J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12", "J13 J14 J15 J16 J17 J18 K1 K2 K3 K4 K5 K6 K7 K8 K9", "K10 K11 K12 K13 K14 K15 K16 K17 K18 L1 L2 L3 L4 L5", "L6 L7 L8 L9 L10 L11 L12 L13 L14 L15 L16 L17 L18 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12", "N13 N14 N15 N16 N17 N18 O1 O2 O3 O4 O5 O6 O7 O8 O9", "O10 O11 O12 O13 O14 O15 O16 O17 O18 P1 P2 P3 P4 P5", "P6 P7 P8 P9 P10 P11 P12 P13 P14 P15 P16 P17 P18 Q1", "Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15", "Q16 Q17 Q18 R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12", "R13 R14 R15 R16 R17 R18"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 162;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 19;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11", "B12 B13 B14 B15 B16 B17 B18 B19 C1 C2 C3 C4 C5 C6", "C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17 C18 C19", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 D15", "D16 D17 D18 D19 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 E17 E18 E19 F1 F2 F3 F4 F5 F6", "F7 F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18 F19", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11", "H12 H13 H14 H15 H16 H17 H18 H19 I1 I2 I3 I4 I5 I6", "I7 I8 I9 I10 I11 I12 I13 I14 I15 I16 I17 I18 I19", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15", "J16 J17 J18 J19 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11", "K12 K13 K14 K15 K16 K17 K18 K19 L1 L2 L3 L4 L5 L6", "L7 L8 L9 L10 L11 L12 L13 L14 L15 L16 L17 L18 L19", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11", "N12 N13 N14 N15 N16 N17 N18 N19 O1 O2 O3 O4 O5 O6", "O7 O8 O9 O10 O11 O12 O13 O14 O15 O16 O17 O18 O19", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12 P13 P14 P15", "P16 P17 P18 P19 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11", "Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19 R1 R2 R3 R4 R5 R6", "R7 R8 R9 R10 R11 R12 R13 R14 R15 R16 R17 R18 R19", "S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 180;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 20;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10", "B11 B12 B13 B14 B15 B16 B17 B18 B19 B20 C1 C2 C3", "C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17", "C18 C19 C20 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12", "D13 D14 D15 D16 D17 D18 D19 D20 E1 E2 E3 E4 E5 E6", "E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17 E18 E19", "E20 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14", "F15 F16 F17 F18 F19 F20 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 G19 G20 H1 H2", "H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14 H15 H16", "H17 H18 H19 H20 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 J1 J2 J3 J4 J5", "J6 J7 J8 J9 J10 J11 J12 J13 J14 J15 J16 J17 J18", "J19 J20 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13", "K14 K15 K16 K17 K18 K19 K20 L1 L2 L3 L4 L5 L6 L7", "L8 L9 L10 L11 L12 L13 L14 L15 L16 L17 L18 L19 L20", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10", "N11 N12 N13 N14 N15 N16 N17 N18 N19 N20 O1 O2 O3", "O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15 O16 O17", "O18 O19 O20 P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12", "P13 P14 P15 P16 P17 P18 P19 P20 Q1 Q2 Q3 Q4 Q5 Q6", "Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19", "Q20 R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14", "R15 R16 R17 R18 R19 R20 S1 S2 S3 S4 S5 S6 S7 S8 S9", "S10 S11 S12 S13 S14 S15 S16 S17 S18 S19 S20 T1 T2", "T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14 T15 T16", "T17 T18 T19 T20"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 21;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 B1 B2 B3 B4 B5 B6 B7 B8 B9", "B10 B11 B12 B13 B14 B15 B16 B17 B18 B19 B20 B21 C1", "C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15", "C16 C17 C18 C19 C20 C21 D1 D2 D3 D4 D5 D6 D7 D8 D9", "D10 D11 D12 D13 D14 D15 D16 D17 D18 D19 D20 D21 E1", "E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "E16 E17 E18 E19 E20 E21 F1 F2 F3 F4 F5 F6 F7 F8 F9", "F10 F11 F12 F13 F14 F15 F16 F17 F18 F19 F20 F21 G1", "G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 G20 G21 H1 H2 H3 H4 H5 H6 H7 H8 H9", "H10 H11 H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 I1", "I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "I16 I17 I18 I19 I20 I21 J1 J2 J3 J4 J5 J6 J7 J8 J9", "J10 J11 J12 J13 J14 J15 J16 J17 J18 J19 J20 J21 K1", "K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15", "K16 K17 K18 K19 K20 K21 L1 L2 L3 L4 L5 L6 L7 L8 L9", "L10 L11 L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 N1 N2 N3 N4 N5 N6 N7 N8 N9", "N10 N11 N12 N13 N14 N15 N16 N17 N18 N19 N20 N21 O1", "O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15", "O16 O17 O18 O19 O20 O21 P1 P2 P3 P4 P5 P6 P7 P8 P9", "P10 P11 P12 P13 P14 P15 P16 P17 P18 P19 P20 P21 Q1", "Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15", "Q16 Q17 Q18 Q19 Q20 Q21 R1 R2 R3 R4 R5 R6 R7 R8 R9", "R10 R11 R12 R13 R14 R15 R16 R17 R18 R19 R20 R21 S1", "S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19 S20 S21 T1 T2 T3 T4 T5 T6 T7 T8 T9", "T10 T11 T12 T13 T14 T15 T16 T17 T18 T19 T20 T21 U1", "U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14 U15", "U16 U17 U18 U19 U20 U21"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 220;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 22;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 B1 B2 B3 B4 B5 B6 B7", "B8 B9 B10 B11 B12 B13 B14 B15 B16 B17 B18 B19 B20", "B21 B22 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13", "C14 C15 C16 C17 C18 C19 C20 C21 C22 D1 D2 D3 D4 D5", "D6 D7 D8 D9 D10 D11 D12 D13 D14 D15 D16 D17 D18", "D19 D20 D21 D22 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 E17 E18 E19 E20 E21 E22 F1 F2", "F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14 F15 F16", "F17 F18 F19 F20 F21 F22 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 G19 G20 G21", "G22 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14", "H15 H16 H17 H18 H19 H20 H21 H22 I1 I2 I3 I4 I5 I6", "I7 I8 I9 I10 I11 I12 I13 I14 I15 I16 I17 I18 I19", "I20 I21 I22 J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12", "J13 J14 J15 J16 J17 J18 J19 J20 J21 J22 K1 K2 K3", "K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15 K16 K17", "K18 K19 K20 K21 K22 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10", "L11 L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 L22 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 N1 N2 N3 N4 N5 N6 N7", "N8 N9 N10 N11 N12 N13 N14 N15 N16 N17 N18 N19 N20", "N21 N22 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13", "O14 O15 O16 O17 O18 O19 O20 O21 O22 P1 P2 P3 P4 P5", "P6 P7 P8 P9 P10 P11 P12 P13 P14 P15 P16 P17 P18", "P19 P20 P21 P22 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11", "Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19 Q20 Q21 Q22 R1 R2", "R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14 R15 R16", "R17 R18 R19 R20 R21 R22 S1 S2 S3 S4 S5 S6 S7 S8 S9", "S10 S11 S12 S13 S14 S15 S16 S17 S18 S19 S20 S21", "S22 T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14", "T15 T16 T17 T18 T19 T20 T21 T22 U1 U2 U3 U4 U5 U6", "U7 U8 U9 U10 U11 U12 U13 U14 U15 U16 U17 U18 U19", "U20 U21 U22 V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12", "V13 V14 V15 V16 V17 V18 V19 V20 V21 V22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 23;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 B1 B2 B3 B4 B5 B6", "B7 B8 B9 B10 B11 B12 B13 B14 B15 B16 B17 B18 B19", "B20 B21 B22 B23 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11", "C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C22 C23 D1", "D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 D15", "D16 D17 D18 D19 D20 D21 D22 D23 E1 E2 E3 E4 E5 E6", "E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17 E18 E19", "E20 E21 E22 E23 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11", "F12 F13 F14 F15 F16 F17 F18 F19 F20 F21 F22 F23 G1", "G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 G20 G21 G22 G23 H1 H2 H3 H4 H5 H6", "H7 H8 H9 H10 H11 H12 H13 H14 H15 H16 H17 H18 H19", "H20 H21 H22 H23 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 I21 I22 I23 J1", "J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15", "J16 J17 J18 J19 J20 J21 J22 J23 K1 K2 K3 K4 K5 K6", "K7 K8 K9 K10 K11 K12 K13 K14 K15 K16 K17 K18 K19", "K20 K21 K22 K23 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11", "L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 L22 L23 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 N1 N2 N3 N4 N5 N6", "N7 N8 N9 N10 N11 N12 N13 N14 N15 N16 N17 N18 N19", "N20 N21 N22 N23 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11", "O12 O13 O14 O15 O16 O17 O18 O19 O20 O21 O22 O23 P1", "P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12 P13 P14 P15", "P16 P17 P18 P19 P20 P21 P22 P23 Q1 Q2 Q3 Q4 Q5 Q6", "Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19", "Q20 Q21 Q22 Q23 R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11", "R12 R13 R14 R15 R16 R17 R18 R19 R20 R21 R22 R23 S1", "S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19 S20 S21 S22 S23 T1 T2 T3 T4 T5 T6", "T7 T8 T9 T10 T11 T12 T13 T14 T15 T16 T17 T18 T19", "T20 T21 T22 T23 U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11", "U12 U13 U14 U15 U16 U17 U18 U19 U20 U21 U22 U23 V1", "V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12 V13 V14 V15", "V16 V17 V18 V19 V20 V21 V22 V23 W1 W2 W3 W4 W5 W6", "W7 W8 W9 W10 W11 W12 W13 W14 W15 W16 W17 W18 W19", "W20 W21 W22 W23"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 264;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 24;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 A24 B1 B2 B3 B4 B5", "B6 B7 B8 B9 B10 B11 B12 B13 B14 B15 B16 B17 B18", "B19 B20 B21 B22 B23 B24 C1 C2 C3 C4 C5 C6 C7 C8 C9", "C10 C11 C12 C13 C14 C15 C16 C17 C18 C19 C20 C21", "C22 C23 C24 D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12", "D13 D14 D15 D16 D17 D18 D19 D20 D21 D22 D23 D24 E1", "E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "E16 E17 E18 E19 E20 E21 E22 E23 E24 F1 F2 F3 F4 F5", "F6 F7 F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18", "F19 F20 F21 F22 F23 F24 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 G19 G20 G21", "G22 G23 G24 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12", "H13 H14 H15 H16 H17 H18 H19 H20 H21 H22 H23 H24 I1", "I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "I16 I17 I18 I19 I20 I21 I22 I23 I24 J1 J2 J3 J4 J5", "J6 J7 J8 J9 J10 J11 J12 J13 J14 J15 J16 J17 J18", "J19 J20 J21 J22 J23 J24 K1 K2 K3 K4 K5 K6 K7 K8 K9", "K10 K11 K12 K13 K14 K15 K16 K17 K18 K19 K20 K21", "K22 K23 K24 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12", "L13 L14 L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 M24 N1 N2 N3 N4 N5", "N6 N7 N8 N9 N10 N11 N12 N13 N14 N15 N16 N17 N18", "N19 N20 N21 N22 N23 N24 O1 O2 O3 O4 O5 O6 O7 O8 O9", "O10 O11 O12 O13 O14 O15 O16 O17 O18 O19 O20 O21", "O22 O23 O24 P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12", "P13 P14 P15 P16 P17 P18 P19 P20 P21 P22 P23 P24 Q1", "Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15", "Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q23 Q24 R1 R2 R3 R4 R5", "R6 R7 R8 R9 R10 R11 R12 R13 R14 R15 R16 R17 R18", "R19 R20 R21 R22 R23 R24 S1 S2 S3 S4 S5 S6 S7 S8 S9", "S10 S11 S12 S13 S14 S15 S16 S17 S18 S19 S20 S21", "S22 S23 S24 T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12", "T13 T14 T15 T16 T17 T18 T19 T20 T21 T22 T23 T24 U1", "U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14 U15", "U16 U17 U18 U19 U20 U21 U22 U23 U24 V1 V2 V3 V4 V5", "V6 V7 V8 V9 V10 V11 V12 V13 V14 V15 V16 V17 V18", "V19 V20 V21 V22 V23 V24 W1 W2 W3 W4 W5 W6 W7 W8 W9", "W10 W11 W12 W13 W14 W15 W16 W17 W18 W19 W20 W21", "W22 W23 W24 X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12", "X13 X14 X15 X16 X17 X18 X19 X20 X21 X22 X23 X24"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 288;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 25;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 A24 A25 B1 B2 B3", "B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 B15 B16 B17", "B18 B19 B20 B21 B22 B23 B24 B25 C1 C2 C3 C4 C5 C6", "C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17 C18 C19", "C20 C21 C22 C23 C24 C25 D1 D2 D3 D4 D5 D6 D7 D8 D9", "D10 D11 D12 D13 D14 D15 D16 D17 D18 D19 D20 D21", "D22 D23 D24 D25 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 E17 E18 E19 E20 E21 E22 E23", "E24 E25 F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13", "F14 F15 F16 F17 F18 F19 F20 F21 F22 F23 F24 F25 G1", "G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 G20 G21 G22 G23 G24 G25 H1 H2 H3", "H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14 H15 H16 H17", "H18 H19 H20 H21 H22 H23 H24 H25 I1 I2 I3 I4 I5 I6", "I7 I8 I9 I10 I11 I12 I13 I14 I15 I16 I17 I18 I19", "I20 I21 I22 I23 I24 I25 J1 J2 J3 J4 J5 J6 J7 J8 J9", "J10 J11 J12 J13 J14 J15 J16 J17 J18 J19 J20 J21", "J22 J23 J24 J25 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11", "K12 K13 K14 K15 K16 K17 K18 K19 K20 K21 K22 K23", "K24 K25 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13", "L14 L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 L25 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 M24 M25 N1 N2 N3", "N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14 N15 N16 N17", "N18 N19 N20 N21 N22 N23 N24 N25 O1 O2 O3 O4 O5 O6", "O7 O8 O9 O10 O11 O12 O13 O14 O15 O16 O17 O18 O19", "O20 O21 O22 O23 O24 O25 P1 P2 P3 P4 P5 P6 P7 P8 P9", "P10 P11 P12 P13 P14 P15 P16 P17 P18 P19 P20 P21", "P22 P23 P24 P25 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11", "Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q23", "Q24 Q25 R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13", "R14 R15 R16 R17 R18 R19 R20 R21 R22 R23 R24 R25 S1", "S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19 S20 S21 S22 S23 S24 S25 T1 T2 T3", "T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14 T15 T16 T17", "T18 T19 T20 T21 T22 T23 T24 T25 U1 U2 U3 U4 U5 U6", "U7 U8 U9 U10 U11 U12 U13 U14 U15 U16 U17 U18 U19", "U20 U21 U22 U23 U24 U25 V1 V2 V3 V4 V5 V6 V7 V8 V9", "V10 V11 V12 V13 V14 V15 V16 V17 V18 V19 V20 V21", "V22 V23 V24 V25 W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11", "W12 W13 W14 W15 W16 W17 W18 W19 W20 W21 W22 W23", "W24 W25 X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13", "X14 X15 X16 X17 X18 X19 X20 X21 X22 X23 X24 X25 Y1", "Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15", "Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 312;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 A24 A25 A26 B1 B2", "B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 B15 B16", "B17 B18 B19 B20 B21 B22 B23 B24 B25 B26 C1 C2 C3", "C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17", "C18 C19 C20 C21 C22 C23 C24 C25 C26 D1 D2 D3 D4 D5", "D6 D7 D8 D9 D10 D11 D12 D13 D14 D15 D16 D17 D18", "D19 D20 D21 D22 D23 D24 D25 D26 E1 E2 E3 E4 E5 E6", "E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17 E18 E19", "E20 E21 E22 E23 E24 E25 E26 F1 F2 F3 F4 F5 F6 F7", "F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18 F19 F20", "F21 F22 F23 F24 F25 F26 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 G19 G20 G21", "G22 G23 G24 G25 G26 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10", "H11 H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 H22", "H23 H24 H25 H26 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 I21 I22 I23", "I24 I25 I26 J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12", "J13 J14 J15 J16 J17 J18 J19 J20 J21 J22 J23 J24", "J25 J26 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13", "K14 K15 K16 K17 K18 K19 K20 K21 K22 K23 K24 K25", "K26 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14", "L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 L25 L26 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 M24 M25 M26 N1 N2", "N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14 N15 N16", "N17 N18 N19 N20 N21 N22 N23 N24 N25 N26 O1 O2 O3", "O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15 O16 O17", "O18 O19 O20 O21 O22 O23 O24 O25 O26 P1 P2 P3 P4 P5", "P6 P7 P8 P9 P10 P11 P12 P13 P14 P15 P16 P17 P18", "P19 P20 P21 P22 P23 P24 P25 P26 Q1 Q2 Q3 Q4 Q5 Q6", "Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19", "Q20 Q21 Q22 Q23 Q24 Q25 Q26 R1 R2 R3 R4 R5 R6 R7", "R8 R9 R10 R11 R12 R13 R14 R15 R16 R17 R18 R19 R20", "R21 R22 R23 R24 R25 R26 S1 S2 S3 S4 S5 S6 S7 S8 S9", "S10 S11 S12 S13 S14 S15 S16 S17 S18 S19 S20 S21", "S22 S23 S24 S25 S26 T1 T2 T3 T4 T5 T6 T7 T8 T9 T10", "T11 T12 T13 T14 T15 T16 T17 T18 T19 T20 T21 T22", "T23 T24 T25 T26 U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11", "U12 U13 U14 U15 U16 U17 U18 U19 U20 U21 U22 U23", "U24 U25 U26 V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12", "V13 V14 V15 V16 V17 V18 V19 V20 V21 V22 V23 V24", "V25 V26 W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13", "W14 W15 W16 W17 W18 W19 W20 W21 W22 W23 W24 W25", "W26 X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13 X14", "X15 X16 X17 X18 X19 X20 X21 X22 X23 X24 X25 X26 Y1", "Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15", "Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25 Y26 Z1 Z2", "Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z10 Z11 Z12 Z13 Z14 Z15 Z16", "Z17 Z18 Z19 Z20 Z21 Z22 Z23 Z24 Z25 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 338;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A6 A7 A8 A9 A11 A12 A13 A14 A15 A16", "A17 A18 A19 A20 A23 A25 B3 B4 B5 B7 B8 B9 B10 B14", "B15 B16 B17 B19 B20 B22 B23 C2 C3 C4 C5 C6 C7 C9", "C10 C11 C12 C14 C15 C16 C17 C18 C19 C20 C22 C23", "C24 C26 D1 D2 D3 D6 D7 D8 D9 D10 D11 D12 D14 D15", "D17 D18 D19 D20 D21 D22 D23 D25 D26 E1 E2 E3 E4 E5", "E6 E7 E8 E9 E10 E11 E12 E14 E15 E16 E17 E18 E19", "E21 E22 E23 E24 E25 E26 F1 F3 F4 F5 F7 F8 F11 F12", "F14 F15 F17 F19 F20 F21 F23 F24 F25 F26 G2 G3 G4", "G5 G6 G7 G10 G11 G12 G13 G16 G17 G18 G20 G21 G22", "G24 G25 G26 H1 H2 H4 H5 H7 H9 H10 H11 H12 H13 H15", "H17 H18 H19 H20 H21 H23 H24 H25 H26 I2 I3 I4 I5 I6", "I7 I9 I11 I12 I13 I15 I17 I18 I19 I20 I21 I22 I23", "I24 I25 I26 J1 J2 J3 J4 J5 J6 J7 J8 J9 J11 J12 J13", "J16 J17 J19 J22 J23 J24 J25 J26 K1 K3 K4 K5 K7 K8", "K9 K10 K11 K12 K13 K14 K15 K17 K18 K19 K20 K21 K22", "K23 K24 K25 K26 L1 L3 L4 L5 L6 L7 L8 L9 L10 L11", "L12 L15 L16 L18 L19 L20 L21 L22 L24 L25 L26 M1 M2", "M5 M6 M7 M9 M10 M11 M12 M13 M14 M15 M16 M17 M18", "M19 M20 M21 M22 M23 M25 M26 N1 N2 N3 N4 N6 N7 N8", "N13 N14 N15 N16 N17 N18 N19 N20 N21 N23 N24 N25", "N26 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O14 O15", "O16 O17 O18 O19 O20 O21 O22 O23 O24 O25 O26 P1 P2", "P4 P7 P8 P9 P10 P11 P12 P13 P14 P15 P16 P18 P20", "P21 P22 P23 P24 P25 Q1 Q2 Q3 Q4 Q7 Q9 Q10 Q11 Q12", "Q13 Q14 Q15 Q17 Q18 Q19 Q20 Q23 Q24 Q25 Q26 R1 R5", "R6 R7 R8 R9 R10 R11 R12 R13 R14 R15 R16 R18 R19", "R20 R22 R23 R24 R25 R26 S1 S2 S3 S5 S6 S9 S10 S12", "S13 S14 S15 S16 S17 S21 S22 S23 S24 S25 S26 T1 T2", "T3 T4 T5 T6 T8 T9 T13 T14 T16 T17 T18 T19 T20 T21", "T24 T25 T26 U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12", "U13 U14 U16 U17 U18 U19 U21 U22 U23 U24 U26 V1 V3", "V4 V5 V6 V8 V10 V12 V13 V14 V15 V16 V17 V18 V19", "V20 V23 V24 V25 V26 W1 W2 W4 W6 W7 W8 W9 W12 W14", "W15 W17 W18 W19 W20 W21 W22 W24 W26 X2 X3 X4 X5 X6", "X11 X12 X14 X15 X16 X17 X18 X19 X20 X21 X22 X23", "X24 X25 Y2 Y3 Y4 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15 Y16", "Y17 Y20 Y21 Y23 Y25 Y26 Z1 Z2 Z3 Z4 Z5 Z6 Z7 Z8 Z9", "Z11 Z12 Z13 Z17 Z20 Z21 Z22 Z23 Z24 Z25 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 261;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A6 A7 A8 A9 A11 A12 A13 A14 A15 A16", "A17 A18 A20 A23 A25 B3 B4 B5 B7 B8 B9 B10 B14 B15", "B16 B17 B19 B20 B22 B23 C3 C5 C6 C7 C9 C10 C11 C12", "C14 C15 C16 C17 C18 C19 C20 C22 C23 C24 C26 D1 D2", "D3 D6 D7 D8 D9 D10 D12 D14 D17 D18 D19 D20 D21 D22", "D23 D25 D26 E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12", "E14 E15 E16 E17 E18 E19 E21 E22 E23 E24 E25 E26 F3", "F4 F5 F7 F8 F12 F14 F15 F17 F19 F20 F21 F23 F24", "F25 F26 G2 G3 G4 G5 G6 G7 G10 G11 G12 G13 G16 G17", "G18 G20 G21 G22 G24 G25 G26 H1 H2 H5 H7 H10 H11", "H12 H13 H15 H17 H18 H19 H20 H23 H24 H25 H26 I2 I3", "I4 I5 I7 I9 I11 I12 I13 I15 I18 I19 I20 I21 I23", "I25 I26 J1 J2 J3 J4 J5 J6 J7 J8 J9 J11 J12 J13 J16", "J17 J19 J22 J23 J24 J25 J26 K1 K3 K4 K5 K7 K8 K9", "K10 K11 K12 K13 K14 K15 K17 K18 K19 K20 K21 K22", "K23 K24 K26 L1 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12", "L15 L16 L18 L20 L21 L22 L24 L25 L26 M1 M2 M5 M6", "M10 M11 M12 M13 M14 M15 M16 M17 M18 M19 M20 M21", "M22 M23 M25 M26 N1 N2 N3 N4 N6 N7 N8 N13 N14 N15", "N16 N18 N19 N20 N21 N23 N24 N25 N26 O1 O2 O3 O4 O5", "O6 O7 O8 O9 O10 O11 O12 O14 O15 O16 O17 O18 O20", "O21 O22 O23 O24 O25 O26 P2 P4 P7 P8 P9 P11 P13 P15", "P16 P18 P20 P21 P22 P24 P25 Q1 Q2 Q3 Q4 Q7 Q9 Q10", "Q11 Q12 Q13 Q14 Q15 Q17 Q18 Q19 Q20 Q23 Q24 Q25", "Q26 R1 R5 R6 R7 R8 R9 R10 R12 R14 R15 R16 R18 R19", "R20 R22 R23 R24 R26 S1 S2 S5 S9 S10 S12 S13 S14", "S15 S16 S17 S21 S22 S23 S24 S25 S26 T1 T2 T3 T4 T5", "T6 T8 T9 T13 T14 T16 T17 T18 T19 T20 T21 T24 T26", "U1 U2 U4 U7 U8 U9 U10 U11 U12 U14 U16 U17 U19 U21", "U22 U23 U24 U26 V1 V3 V4 V5 V6 V8 V10 V12 V13 V14", "V16 V17 V18 V19 V20 V24 V25 V26 W1 W2 W4 W6 W7 W8", "W9 W12 W14 W15 W17 W18 W19 W20 W21 W22 W24 W26 X2", "X3 X4 X5 X6 X11 X12 X15 X16 X17 X18 X19 X20 X21", "X22 X23 X24 X25 Y2 Y3 Y4 Y8 Y9 Y10 Y11 Y13 Y14 Y15", "Y16 Y17 Y20 Y21 Y23 Y25 Y26 Z1 Z2 Z3 Z4 Z5 Z6 Z7", "Z8 Z9 Z11 Z12 Z13 Z17 Z20 Z21 Z22 Z23 Z24 Z25 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 26;
    vector<string> pos = {"A1 A3 A11 A22 B10 B12 B13 B17 B20 B22 B26 C4 C15", "C20 C21 D4 D5 D7 D9 D17 D25 E2 E9 E12 E22 F3 F8", "F16 F17 F19 F23 F25 G3 G5 G7 G15 G17 H1 H9 H13 H19", "H21 H24 H25 H26 I1 I4 I8 I10 I11 I12 I14 I15 I17", "I19 I21 I23 I25 J1 J2 J7 J9 J12 J17 J22 J24 K5 K7", "K8 K9 K12 K15 K18 K24 L1 L12 L14 M1 M2 M10 M13 M14", "M16 M18 M25 M26 N1 N8 N11 N15 N23 O7 O8 O10 O19", "O20 P5 P7 P13 P15 P16 P18 P20 Q4 Q6 Q9 Q10 Q20 R9", "R10 R14 R15 R21 R22 R23 R24 S3 S12 S14 S16 S23 S24", "T2 T11 T15 T18 T26 U14 U18 U22 U23 U26 V1 V4 V5 V7", "V9 V15 V25 W3 W4 W11 W15 W17 W25 X2 X6 X7 X18 X22", "Y3 Y12 Z9 Z13 Z16 Z18 Z23 Z24 Z25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 26;
    vector<string> pos = {"A11 A22 B10 B12 B17 B20 B22 B26 D4 D5 D7 D9 D17 E9", "E12 F3 F17 F19 F23 F25 G3 G7 G17 H9 H21 H25 H26 I1", "I8 I10 I12 I15 I17 I23 J1 J2 J7 J9 J22 K8 K15 K18", "K24 L14 M1 M13 M14 M25 M26 N8 N23 O7 O8 O10 P7 P13", "P15 P16 P18 P20 Q4 Q9 Q10 Q20 R14 R15 R21 R22 R23", "R24 S12 S14 S23 S24 T2 T15 T18 U18 U22 U23 U26 V1", "V4 V7 V9 W3 W4 W11 W15 W17 W25 X6 X7 X18 X22 Y12", "Z9 Z13 Z16 Z18 Z23 Z25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A24 A26 B1 B2 B3 B4 B5", "B6 B7 B8 B9 B10 B11 B12 B13 B14 B15 B16 B17 B19", "B20 B21 B22 B23 B25 B26 C1 C2 C4 C5 C6 C8 C9 C10", "C11 C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C23", "C24 C25 D1 D2 D4 D5 D7 D8 D9 D10 D11 D12 D13 D14", "D15 D16 D17 D18 D20 D21 D22 D23 D24 D25 D26 E2 E3", "E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17", "E18 E19 E20 E21 E22 E23 E25 E26 F1 F2 F3 F4 F6 F7", "F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18 F19 F21", "F22 F23 F24 F25 F26 G1 G2 G3 G4 G5 G6 G7 G9 G10", "G11 G13 G14 G15 G16 G17 G20 G21 G22 G23 G24 G25", "G26 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14", "H15 H16 H17 H18 H19 H20 H21 H24 H25 H26 I1 I3 I4", "I5 I6 I8 I9 I10 I11 I12 I13 I14 I15 I16 I17 I18", "I19 I20 I21 I22 I23 I24 I25 I26 J1 J2 J3 J4 J5 J6", "J7 J8 J9 J10 J11 J12 J13 J14 J15 J16 J17 J18 J19", "J20 J21 J22 J24 J25 J26 K1 K2 K3 K4 K5 K6 K7 K8 K9", "K10 K11 K12 K13 K14 K15 K16 K17 K18 K20 K21 K22", "K23 K24 K25 K26 L1 L2 L3 L4 L5 L7 L8 L9 L10 L11", "L12 L13 L14 L15 L16 L18 L19 L20 L21 L22 L23 L24", "L25 L26 M1 M2 M4 M5 M6 M7 M8 M9 M10 M12 M13 M14", "M15 M16 M17 M18 M19 M20 M21 M23 M24 M25 M26 N1 N2", "N3 N6 N7 N8 N9 N10 N11 N13 N14 N15 N16 N17 N18 N19", "N20 N21 N22 N23 N24 N25 N26 O2 O3 O4 O5 O6 O7 O8", "O9 O10 O11 O12 O13 O14 O15 O17 O18 O19 O20 O21 O22", "O23 O24 O25 O26 P1 P2 P3 P4 P5 P7 P8 P9 P10 P11", "P12 P13 P14 P15 P16 P17 P18 P19 P20 P21 P22 P23", "P24 P25 P26 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13", "Q14 Q15 Q16 Q17 Q18 Q19 Q20 Q22 Q23 Q24 Q25 Q26 R2", "R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14 R15 R16", "R17 R18 R19 R20 R21 R22 R23 R24 R25 R26 S1 S2 S3", "S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15 S16 S17", "S18 S19 S20 S21 S22 S23 S24 S25 S26 T1 T2 T3 T5 T6", "T8 T9 T10 T11 T12 T13 T14 T15 T16 T17 T18 T19 T21", "T22 T24 T25 T26 U1 U3 U4 U6 U7 U8 U9 U10 U11 U12", "U13 U14 U15 U16 U17 U18 U19 U20 U21 U22 U23 U24", "U25 U26 V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V13 V15", "V16 V17 V18 V19 V20 V21 V22 V23 V24 V25 V26 W1 W2", "W3 W4 W5 W6 W7 W8 W9 W10 W11 W13 W14 W15 W17 W18", "W19 W20 W21 W22 W23 W24 W25 W26 X1 X2 X3 X4 X6 X7", "X8 X10 X11 X12 X14 X15 X16 X17 X18 X19 X20 X22 X23", "X24 X25 Y1 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13", "Y14 Y15 Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25", "Y26 Z1 Z2 Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z10 Z11 Z12 Z13 Z14", "Z15 Z16 Z17 Z18 Z19 Z21 Z22 Z23 Z24 Z25 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 308;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A5 A6 A9 A10 A11 A12 A15 A17 A18 A22 B2", "B4 B5 B6 B7 B9 B10 B11 B12 B13 B15 B16 B17 B20 B21", "B22 B25 B26 C2 C4 C6 C8 C9 C11 C12 C15 C16 C17 C19", "C20 C21 C23 C25 D1 D2 D4 D5 D7 D9 D11 D13 D16 D17", "D18 D20 D21 D22 D24 D25 D26 E2 E3 E4 E5 E6 E9 E10", "E11 E12 E13 E15 E16 E19 E20 E21 E22 E25 F1 F2 F3", "F4 F7 F8 F10 F11 F12 F13 F16 F17 F18 F19 F21 F22", "F23 F25 G1 G3 G4 G5 G6 G7 G9 G10 G14 G15 G16 G17", "G20 G21 G22 G23 G24 G25 G26 H1 H2 H4 H5 H6 H7 H8", "H9 H10 H11 H12 H13 H16 H19 H21 H24 H25 H26 I1 I4", "I5 I8 I9 I10 I11 I12 I13 I14 I15 I17 I18 I19 I20", "I21 I23 I25 I26 J1 J2 J4 J5 J6 J7 J8 J9 J10 J12", "J13 J14 J15 J16 J17 J18 J21 J22 J24 K1 K2 K4 K5 K6", "K7 K8 K9 K10 K12 K13 K14 K15 K16 K17 K18 K21 K23", "K24 K26 L1 L2 L3 L5 L7 L8 L9 L10 L11 L12 L13 L14", "L15 L18 L20 L21 L22 L23 L25 M1 M2 M4 M6 M10 M13", "M14 M15 M16 M17 M18 M20 M21 M25 M26 N1 N3 N6 N7 N8", "N9 N10 N11 N13 N15 N16 N20 N21 N23 N24 N26 O2 O3", "O5 O6 O7 O8 O10 O11 O13 O14 O15 O17 O18 O19 O20", "O21 O23 O24 O26 P1 P5 P7 P8 P9 P10 P12 P13 P15 P16", "P17 P18 P20 P22 P24 P25 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10", "Q13 Q14 Q16 Q20 Q22 Q25 Q26 R2 R3 R7 R8 R9 R10 R11", "R12 R13 R14 R15 R16 R19 R20 R21 R22 R23 R24 S3 S5", "S6 S8 S9 S10 S11 S12 S13 S14 S16 S17 S18 S19 S20", "S22 S23 S24 S25 S26 T1 T2 T3 T8 T9 T10 T11 T13 T14", "T15 T16 T17 T18 T19 T21 T24 T25 T26 U3 U4 U6 U7 U9", "U11 U12 U13 U14 U18 U19 U20 U21 U22 U23 U24 U25", "U26 V1 V2 V4 V5 V7 V8 V9 V10 V15 V17 V19 V20 V21", "V22 V24 V25 V26 W2 W3 W4 W5 W6 W7 W8 W9 W11 W13", "W15 W17 W18 W20 W21 W22 W23 W25 W26 X1 X2 X3 X4 X6", "X7 X8 X10 X14 X15 X16 X17 X18 X19 X20 X22 X24 X25", "Y3 Y4 Y5 Y7 Y8 Y9 Y11 Y12 Y13 Y14 Y18 Y19 Y22 Y23", "Y24 Y26 Z1 Z2 Z6 Z7 Z9 Z10 Z12 Z13 Z15 Z16 Z18 Z19", "Z22 Z23 Z24 Z25 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A8 A9 A10 A11 A12 A14 A15 A17", "A18 A20 A21 A22 A24 A26 B1 B2 B4 B5 B6 B7 B9 B10", "B11 B12 B13 B15 B16 B17 B20 B21 B22 B23 B25 B26 C2", "C4 C6 C8 C9 C11 C12 C15 C16 C17 C18 C19 C20 C21", "C23 C25 D1 D2 D4 D5 D7 D8 D9 D11 D13 D15 D16 D17", "D18 D20 D21 D22 D23 D24 D25 D26 E2 E3 E4 E5 E6 E9", "E10 E11 E12 E13 E15 E16 E18 E19 E20 E21 E22 E23", "E25 F1 F2 F3 F4 F7 F8 F10 F11 F12 F13 F16 F17 F18", "F19 F21 F22 F23 F24 F25 G1 G3 G4 G5 G6 G7 G9 G10", "G13 G14 G15 G16 G17 G20 G21 G22 G23 G24 G25 G26 H1", "H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H15 H16", "H19 H21 H24 H25 H26 I1 I4 I5 I8 I9 I10 I11 I12 I13", "I14 I15 I17 I18 I19 I20 I21 I23 I25 I26 J1 J2 J4", "J5 J6 J7 J8 J9 J10 J12 J13 J14 J15 J16 J17 J18 J21", "J22 J24 J26 K1 K2 K4 K5 K6 K7 K8 K9 K10 K12 K13", "K14 K15 K16 K17 K18 K21 K22 K23 K24 K26 L1 L2 L3", "L5 L7 L8 L9 L10 L11 L12 L13 L14 L15 L18 L19 L20", "L21 L22 L23 L25 L26 M1 M2 M4 M6 M10 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M23 M25 M26 N1 N3 N6 N7 N8", "N9 N10 N11 N13 N15 N16 N20 N21 N23 N24 N25 N26 O2", "O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15 O17", "O18 O19 O20 O21 O23 O24 O26 P1 P2 P3 P5 P7 P8 P9", "P10 P11 P12 P13 P15 P16 P17 P18 P20 P21 P22 P23", "P24 P25 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q13 Q14 Q15 Q16", "Q18 Q19 Q20 Q22 Q25 Q26 R2 R3 R7 R8 R9 R10 R11 R12", "R13 R14 R15 R16 R17 R19 R20 R21 R22 R23 R24 R25 S1", "S2 S3 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S16 S17", "S18 S19 S20 S21 S22 S23 S24 S25 S26 T1 T2 T3 T5 T8", "T9 T10 T11 T13 T14 T15 T16 T17 T18 T19 T21 T24 T25", "T26 U3 U4 U6 U7 U9 U11 U12 U13 U14 U15 U16 U18 U19", "U20 U21 U22 U23 U24 U25 U26 V1 V2 V4 V5 V6 V7 V8", "V9 V10 V15 V16 V17 V19 V20 V21 V22 V23 V24 V25 V26", "W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W13 W15 W17 W18", "W19 W20 W21 W22 W23 W25 W26 X1 X2 X3 X4 X6 X7 X8", "X10 X12 X14 X15 X16 X17 X18 X19 X20 X22 X24 X25 Y3", "Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15 Y17 Y18", "Y19 Y22 Y23 Y24 Y26 Z1 Z2 Z5 Z6 Z7 Z8 Z9 Z10 Z11", "Z12 Z13 Z14 Z15 Z16 Z18 Z19 Z21 Z22 Z23 Z24 Z25", "Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 26;
    vector<string> pos = {"A11 A15 A18 B20 D5 D21 F8 F10 F15 F24 G11 H20 K5", "K16 M5 N15 N25 P9 Q13 R7 R18 S4 U3 U4 V1 V16 W5 X7", "Y7 Y25 Z22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 26;
    vector<string> pos = {"A2 A3 A8 A11 A15 A16 A18 A19 A20 A23 A24 A26 B8", "B14 B15 B16 B17 B20 B21 B22 B23 B25 C5 C13 C15 C16", "C18 C20 C22 C24 D2 D3 D4 D5 D9 D14 D16 D18 D21 D25", "D26 E1 E3 E5 E6 E7 E8 E9 E12 E14 E15 E19 F1 F2 F4", "F7 F8 F10 F14 F15 F18 F19 F20 F22 F23 F24 G1 G8 G9", "G11 G13 G18 G25 H2 H3 H6 H8 H9 H10 H11 H14 H17 H18", "H20 H22 H23 H26 I1 I3 I7 I8 I11 I15 I16 I19 I21", "I22 I24 I26 J2 J3 J5 J6 J8 J9 J13 J15 J16 J21 J25", "J26 K3 K5 K6 K9 K16 K20 K23 K24 K25 L2 L4 L5 L6", "L12 L14 L16 L19 L22 L23 L24 M1 M2 M3 M5 M8 M9 M12", "M14 M16 M18 M19 M22 N3 N5 N6 N7 N8 N10 N14 N15 N21", "N24 N25 N26 O2 O5 O10 O14 O15 O19 O22 O25 O26 P2", "P3 P4 P5 P6 P7 P9 P10 P18 P21 P25 P26 Q2 Q8 Q10", "Q11 Q13 Q18 Q21 Q22 Q26 R2 R4 R5 R7 R11 R13 R15", "R17 R18 R20 R23 R24 S1 S4 S5 S9 S10 S13 S16 S20", "S21 T3 T5 T8 T9 T14 T16 T17 T18 T20 T23 T24 U1 U2", "U3 U4 U5 U6 U8 U9 U11 U22 U23 V1 V3 V4 V6 V7 V11", "V12 V13 V15 V16 V18 V19 V20 V22 W1 W3 W5 W8 W13", "W16 W18 W20 W21 W23 X3 X4 X5 X6 X7 X9 X12 X16 X17", "X18 X21 X24 X25 X26 Y2 Y3 Y7 Y13 Y15 Y17 Y18 Y22", "Y23 Y25 Z2 Z4 Z7 Z11 Z13 Z16 Z21 Z22 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 9;
    vector<string> pos = {"A3 A4 A5 A7 A8 B6 B8 C3 C6", "C7 C9 D4 D5 D8 D9 E1 E3 E7", "F2 G2 G6 G7 H2 H9 I2 I4 I5", "I6 I7 I8 I9"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 5;
    vector<string> pos = {"A2 A4", "B1 B5", "D1 D5 E2 E4 C3"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 26;
    vector<string> pos = {"D21 B12 I11 B4 G16 E15 W11 F21 D20 L2 Y26 V22 B9", "C12 Q18 K25 W23 I6 H25 T2 X1 I20 M5 S4 F13 O23", "L14 N17 Z25 I19 F20 W8 Y16 L7 W18 L23 T22 J9 D9", "M16 E10 M26 Z7 I17 T16 X7 U21 X12 T11 N22 J23 X20", "A23 B7 M20 X5 L20 M14 B3 V9 Q5 S8 L11 L1 Y20", "R8 I4 J19 K6 C3 T13 C26 G1 N12 K20 Y21 E11 D14", "Z17 S1 L15 S12 V6 H10 P22 S2 S20 J15 K19 M17 T23", "Q9 T6 U20 P15 P12 T20 A2 J20 R2 U15 H17 J1 J10", "J6 R5 K23 W25 O11 T3 C22 P5 L16 S11 P6 J11 K12", "X19 O6 V8 Y11 O2 N23 O16 E19 W16 X6 J4 E20 U25", "P1 I1 M7 A6 M6 Z11 C25 A11 Y9 Q2 S6 X2 V16", "E26 G25 W10 D24 L4 Y5 H3 I16 O3 Z18 S21 D12 M12", "M15 I21 D19 K10 P11 G6 S10 F4 A16 E3 Y10 P4 S14", "X11 B21 R7 G8 J17 D6 X8 N10 I23 G13 P26 M3 J16", "T8 N9 B18 B16 B1 Z9 I10 F10 T1 P17 O26 V18 M11", "J14 T21 L12 C4 C6 Q14 A26 I8 M22 V21 P24 Z15 I22", "V24 X25 N24 V15 T15 T9 O8 M4 W12 O19 H8 R10 R17", "V11 P19 U10 N16 N15 S24 T18 F25 H5 E25 C9 P25 F17", "E7 C23 Y17 C17 G24 H6 R24 J25 R15 D23 H24 N11 T12", "B14 H19 A5 K22 X18 O12 K13 Q19 Z14 Z6 R13 D26 N7", "P7 K8 W20 B17 V19 V4 Z4 G23 N3 M10 Y13 P20 Y7", "E14 D3 G4 U18 X4 P18 Z23 K18 F23 T19 K7 F5 Q10", "X3 D18 Z8 F12 M21 M9 H13 U2 T26 S15 O1 Q4 C20", "G9 O24 M8 W19 R9 R3 Q12 F1 O14 M13 H4 U26 Y1", "U5 W1 H20 P3 N21 K3 Q7 J2 N19 U17 I9 O18 E9", "P21 P2 T7 Y8 K4 I5 S26 X10 L22 M1 G21 F9 L19", "L8 N2 V2 G15 G19 N1 W22 Z22 A17 A9 G7 V7 U16", "G2 J3 L26 H22 E6 U8 B10 F7 Z24 W24 K11 B24 B20", "M18 L9 C10 J24 Y15 Y3 H26 J13 R16 W15 P16 I7 D16", "F16 Y12 Z16 S22 G12 D10 J18 S9 N6 Q16 D13 T24 S16", "D2 G3 P14 E18 O22 K26 B5 Y4 L6 Z3 R14 X17 V23", "X15 E4 K14 R1 Y23 A10 X16 X9 X13 P23 J21 H9 S5", "K5 J5 Z2 W14 X21 Q11 H14 L10 X14 H1 A15 Q3 R20", "V3 H23 Y24 E23 Q25 W7 G5 Q24 Q1 U7 C21 Z12 F22", "V12 S13 O20 L21 B22 Q17 R22 V5 I26 N5 V1 X26 E24", "Q21 K9 O17 B26 U11 S3 Z19 A20 D7 N8 R12 Q22 D4", "K24 A22 H16 A18 D25 E16 I12 Y14 N26 Q6 A1 L25 O13", "F2 U24 O21 X24 S25 C5 H12 K2 H15 A21 W5 T4 A24", "R19 P8 V26 C8 F18 W21 A7 F6 J8 E5 F11 S7 D22", "N25 N18 U19 G17 G18 K21 Z20 C2 I15 W9 K17 B25 E8", "N14 L24 J26 F15 C16 K16 A4 W6 Z10 K1 I14 S23 Z1", "E17 Y19 A13 I18 R18 J22 U23 U3 U9 D1 F14 U6 U14", "W17 U22 J12 R6 K15 R23 Z13 Q15 S19 G11 A14 B2 T17", "B6 Y2 B8 G22 C11 W26 I24 D5 O4 L5 A3 Q20 Q23 G10", "Q26 A12 F24 Q8 H18 Z26 Y6 V10 E13 O25 M25 V20 C7", "X23 W2 V25 I25 Y18 B15 L13 W13 W3 C13 E1 U1 N20", "D11 O10 E21 I3 W4 A8 G26 B13 U4 C19 G14 U13 U12", "C18 E12 S17 L17 B11 T14 L18 D17 D15 X22 Q13 Y25", "C24 B23 B19 V17 T5 C14 Z5 C15 T25 S18 N4 H7 M19", "O15 I13 F26 R4 N13 A19 P9 M24 Y22 O7 C1 I2 V13"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 323;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 26;
    vector<string> pos = {"A3 A4 A5 A7 A8 B6 B8 C3 C6", "C7 C9 D4 D5 D8 D9 E1 E3 E7 E14", "F2 G2 G6 G7 H2 H9 I2 I4 I5", "I6 I7 I8 I9", "J5 J8 J12 J13 J15 J20 J24 J25", "A11 K1 K4 K9 K10 K11 K13 K14 K15 K18 K20", "M8 M9 M10 M11 M12 M13 M14 M18 M22 M24", "O8 O9 O10 O11 O12 O13 O14 O18 O22 O24", "P1 P3 P4 P5 P6 P8 P10 P13 P15 P16 P18 P20", "Q5 Q10 Q14 Q13 Q20 Q21", "S1 S2 S3 S5 S8 S14 S15", "T5 T8 T10 T13 T20 T21 T22", "N1 N4 N5 N10 N15 N19 N20 N21 N23 N24", "L1 L4 L10 L11 L13 L15 L20 L23", "R4 R5 R6 R9 R10 R13 R17 R21 R22", "W10", "X8 X12", "Z7 Z13"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 A24 A25 A26", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 B15", "B16 B17 B18 B19 B20 B21 B22 B23 B24 B25 B26", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15", "C16 C17 C18 C19 C20 C21 C22 C23 C24 C25 C26", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14 D15", "D16 D17 D18 D19 D20 D21 D22 D23 D24 D25 D26", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14 E15", "E16 E17 E18 E19 E20 E21 E22 E23 E24 E25 E26", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14 F15", "F16 F17 F18 F19 F20 F21 F22 F23 F24 F25 F26", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14 G15", "G16 G17 G18 G19 G20 G21 G22 G23 G24 G25 G26", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14 H15", "H16 H17 H18 H19 H20 H21 H22 H23 H24 H25 H26", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15", "I16 I17 I18 I19 I20 I21 I22 I23 I24 I25 I26", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15", "J16 J17 J18 J19 J20 J21 J22 J23 J24 J25 J26", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14 K15", "K16 K17 K18 K19 K20 K21 K22 K23 K24 K25 K26", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14 L15", "L16 L17 L18 L19 L20 L21 L22 L23 L24 L25 L26", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 M24 M25 M26", "N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14 N15", "N16 N17 N18 N19 N20 N21 N22 N23 N24 N25 N26", "O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15", "O16 O17 O18 O19 O20 O21 O22 O23 O24 O25 O26", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12 P13 P14 P15", "P16 P17 P18 P19 P20 P21 P22 P23 P24 P25 P26", "Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15", "Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q23 Q24 Q25 Q26", "R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14 R15", "R16 R17 R18 R19 R20 R21 R22 R23 R24 R25 R26", "S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14 S15", "S16 S17 S18 S19 S20 S21 S22 S23 S24 S25 S26", "T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14 T15", "T16 T17 T18 T19 T20 T21 T22 T23 T24 T25 T26", "U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14 U15", "U16 U17 U18 U19 U20 U21 U22 U23 U24 U25 U26", "V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12 V13 V14 V15", "V16 V17 V18 V19 V20 V21 V22 V23 V24 V25 V26", "W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13 W14 W15", "W16 W17 W18 W19 W20 W21 W22 W23 W24 W25 W26", "X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13 X14 X15", "X16 X17 X18 X19 X20 X21 X22 X23 X24 X25 X26", "Y1 Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15", "Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25 Y26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 26;
    vector<string> pos = {"A7 B8 C6 A3 B2 C4 E5 G6 H8 I7 G4 I3 H2", "A17 B18 C16 A13 B12 C14 E15 G16 H18 I17 G14", "I13 H12"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 26;
    vector<string> pos = {"P8 Q7 H21 M5 A25 L14 L6 D24 F9 R3 V19 C24", "G7 B23 K6 N17 D21 X23 F14 F15 Z22 S18 T11 J16", "R5 P7 G24 R16 N18 V25 S20 M23 C25 S25 Y3 Q16", "E22 I11 E6 F13 Z14 I13 K11 A19 V23 E14 Z11 X6", "X20 L19 G25 P19 F1 D16 O15 X26 B3 O5 J21 V16", "V1 B15 Y7 P15 E25 P2 N16 L10 V18 V9 P25 A13", "Y5 H23 Q14 Q18 M24 U10 J12 O23 U24 W8 M19 N3", "B24 C15 K19 F26 K22 A20 X4 K14 L25 J25 H6 I24", "J19 W14 U6 N21 X24 Z18 Z2 M14 M7 Q15 O11 E20", "H14 K15 A21 G26 C4 D9 U20 E9 O10 W1 Y25 Z16", "C13 A10 V7 U2 A15 V12 Z25 T18 K4 C16 W19 R20", "E19 J23 H4 I26 B26 C14 F23 L17 I10 T22 D23 V24", "H18 C2 L4 Y12 W7 B21 S2 M2 O18 L8 C19 M16", "X15 H7 N11 E21 F4 T15 G2 P5 Y1 N6 C21 K5", "P26 S8 K12 G5 K10 D17 Z10 V17 I5 P10 D26 J1", "Z21 L3 H8 B6 Q13 K9 Z15 B9 W25 U14 F19 R19", "E11 M17 D3 Y26 J5 H13 Q3 O26 I16 O14 E5 D4", "N1 M13 T1 T2 Q19 M21 V14 P16 U1 A26 M8 E3", "T8 L5 G18 P21 D13 B16 P23 E17 T7 J15 P1 R13", "Z4 Q25 O24 Y20 J2 B8 A23 D25 P18 X16 H15 O8", "P11 W17 Y21 Q26 B14 F21 Q12 R26 X9 O7 K18 U19", "V15 I12 R1 G16 U21 J13 S14 D12 T6 T3 J20 N26", "X21 G12 S4 S13 Z3 N15 C11 V6 F18 O20 W11 B10", "Z23 U3 W12 J6 R9 M25 H3 H26 B1 R24 B7 F3", "H10 U7 W20 B22 E8 B2 F2 X22 C7 K3 F17 T26", "G11 M10 B19 Z20 S19 R15 J18 X10 U26 W23 Q21 I17", "F12 U22 E15 U4 N10 H1 Z6 S11 U9 S23 Y11 A2", "V11 E26 I4 U11 U8 J26 C26 Z26 K17 H20 H24 D10", "L18 L16 A24 C5 I20 T16 C3 L9 F11 E12 T9 C17", "X14 E4 R21 R23 O19 F7 Q22 F24 K13 M4 C1 S26", "S7 O22 S15 D11 J7 W13 B13 X18 U25 F25 Q11 L26", "Y24 K8 K20 K25 I22 Y16 U18 Y18 D8 S22 T17 H5", "I7 J24 Y19 P14 A18 A5 E7 J3 C22 R10 V2 S17", "P6 G6 W16 Z19 E16 S16 V10 I21 Y14 M11 H19 G9", "P4 J17 W9 U15 Q8 V21 Y22 U12 L11 J4 S10 A6", "B20 M6 J14 T25 D20 E1 C10 R8 T14 Y9 W24 G3", "L7 O9 L23 H25 G20 Y4 C23 Y8 E23 Z13 Z12 T10", "I8 M20 A1 D18 C8 F22 G21 R17 A11 O17 O2 Q24", "K26 M1 D14 R11 F6 A3 L22 D1 C12 L20 M15 N24", "Y10 Z7 I14 R14 X1 R6 F8 V26 S24 T20 G22 L13", "K24 P3 B4 W18 X2 L24 X7 Q6 C9 L12 G8 M3", "L2 G19 U16 P17 F10 P24 K21 N12 T12 P20 N4 D19", "N5 U17 M22 N23 W5 T24 M18 I15 Q1 D15 N20 D22", "R7 O6 N13 K23 H11 E2 J9 S21 X8 Q2 X17 X11", "Q20 D6 J11 O12 H22 J10 F16 G15 L1 O4 W10 O16", "B11 Z17 W3 M12 I3 T21 X25 C18 A12 B17 X19 G14", "W26 Y2 N19 Z8 P9 X12 I2 E24 Y6 K7 N7 H16", "N22 I19 P13 V5 D5 W4 Q5 H12 V3 Z9 A14 S12", "I9 Q4 J22 A8 X5 U13 S5 N14 B5 P12 I25 W2", "T13 Y17 K16 R12 A22 A9 H2 R2 Z24 Q17 Z1 W21"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 25;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12", "A13 A14 A15 A16 A17 A18 A19 A20 A21 A22 A23 A24", "A25 B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11", "B12 B13 B14 B15 B16 B17 B18 B19 B20 B21 B22 B23", "B24 B25 C1 C2 C3 C4 C5 C6 C7 C8 C9 C10", "C11 C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C22", "C23 C24 C25 D1 D2 D3 D4 D5 D6 D7 D8 D9", "D10 D11 D12 D13 D14 D15 D16 D17 D18 D19 D20 D21", "D22 D23 D24 D25 E1 E2 E3 E4 E5 E6 E7 E8", "E9 E10 E11 E12 E13 E14 E15 E16 E17 E18 E19 E20", "E21 E22 E23 E24 E25 F1 F2 F3 F4 F5 F6 F7", "F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18 F19", "F20 F21 F22 F23 F24 F25 G1 G2 G3 G4 G5 G6", "G7 G8 G9 G10 G11 G12 G13 G14 G15 G16 G17 G18", "G19 G20 G21 G22 G23 G24 G25 H1 H2 H3 H4 H5", "H6 H7 H8 H9 H10 H11 H12 H13 H14 H15 H16 H17", "H18 H19 H20 H21 H22 H23 H24 H25 I1 I2 I3 I4", "I5 I6 I7 I8 I9 I10 I11 I12 I13 I14 I15 I16", "I17 I18 I19 I20 I21 I22 I23 I24 I25 J1 J2 J3", "J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14 J15", "J16 J17 J18 J19 J20 J21 J22 J23 J24 J25 K1 K2", "K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14", "K15 K16 K17 K18 K19 K20 K21 K22 K23 K24 K25 L1", "L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13", "L14 L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 L25", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12", "M13 M14 M15 M16 M17 M18 M19 M20 M21 M22 M23 M24", "M25 N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11", "N12 N13 N14 N15 N16 N17 N18 N19 N20 N21 N22 N23", "N24 N25 O1 O2 O3 O4 O5 O6 O7 O8 O9 O10", "O11 O12 O13 O14 O15 O16 O17 O18 O19 O20 O21 O22", "O23 O24 O25 P1 P2 P3 P4 P5 P6 P7 P8 P9", "P10 P11 P12 P13 P14 P15 P16 P17 P18 P19 P20 P21", "P22 P23 P24 P25 Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8", "Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19 Q20", "Q21 Q22 Q23 Q24 Q25 R1 R2 R3 R4 R5 R6 R7", "R8 R9 R10 R11 R12 R13 R14 R15 R16 R17 R18 R19", "R20 R21 R22 R23 R24 R25 S1 S2 S3 S4 S5 S6", "S7 S8 S9 S10 S11 S12 S13 S14 S15 S16 S17 S18", "S19 S20 S21 S22 S23 S24 S25 T1 T2 T3 T4 T5", "T6 T7 T8 T9 T10 T11 T12 T13 T14 T15 T16 T17", "T18 T19 T20 T21 T22 T23 T24 T25 U1 U2 U3 U4", "U5 U6 U7 U8 U9 U10 U11 U12 U13 U14 U15 U16", "U17 U18 U19 U20 U21 U22 U23 U24 U25 V1 V2 V3", "V4 V5 V6 V7 V8 V9 V10 V11 V12 V13 V14 V15", "V16 V17 V18 V19 V20 V21 V22 V23 V24 V25 W1 W2", "W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13 W14", "W15 W16 W17 W18 W19 W20 W21 W22 W23 W24 W25 X1", "X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13", "X14 X15 X16 X17 X18 X19 X20 X21 X22 X23 X24 X25"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 20;
    vector<string> pos = {"A14 C13 C15 E14 G13 G15 I14"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 5;
    vector<string> pos = {"A1 A2 A4 A5 B3 C1 C2 C4 C5"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 8;
    vector<string> pos = {"A2 A4 A5 A6 B2 B5 B6 B7 B8", "C3 C8 D1 D2 D3 D4 D5 D6 D8", "E1 E3 E8 F1 F2 F8 G3 G5 H4 H7 H8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14", "A15 A16 A17 A18 A19 A20 A21 A22 A23 A24 A25 A26", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14", "B15 B16 B17 B18 B19 B20 B21 B22 B23 B24 B25 B26", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14", "C15 C16 C17 C18 C19 C20 C21 C22 C23 C24 C25 C26", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14", "D15 D16 D17 D18 D19 D20 D21 D22 D23 D24 D25 D26", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14", "E15 E16 E17 E18 E19 E20 E21 E22 E23 E24 E25 E26", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14", "F15 F16 F17 F18 F19 F20 F21 F22 F23 F24 F25 F26", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14", "G15 G16 G17 G18 G19 G20 G21 G22 G23 G24 G25 G26", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14", "H15 H16 H17 H18 H19 H20 H21 H22 H23 H24 H25 H26", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14", "I15 I16 I17 I18 I19 I20 I21 I22 I23 I24 I25 I26", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14", "J15 J16 J17 J18 J19 J20 J21 J22 J23 J24 J25 J26", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14", "K15 K16 K17 K18 K19 K20 K21 K22 K23 K24 K25 K26", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14", "L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 L25 L26", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14", "M15 M16 M17 M18 M19 M20 M21 M22 M23 M24 M25 M26", "N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14", "N15 N16 N17 N18 N19 N20 N21 N22 N23 N24 N25 N26", "O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14", "O15 O16 O17 O18 O19 O20 O21 O22 O23 O24 O25 O26", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12 P13 P14", "P15 P16 P17 P18 P19 P20 P21 P22 P23 P24 P25 P26", "Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14", "Q15 Q16 Q17 Q18 Q19 Q20 Q21 Q22 Q23 Q24 Q25 Q26", "R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14", "R15 R16 R17 R18 R19 R20 R21 R22 R23 R24 R25 R26", "S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14", "S15 S16 S17 S18 S19 S20 S21 S22 S23 S24 S25 S26", "T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14", "T15 T16 T17 T18 T19 T20 T21 T22 T23 T24 T25 T26", "U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14", "U15 U16 U17 U18 U19 U20 U21 U22 U23 U24 U25 U26", "V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12 V13 V14", "V15 V16 V17 V18 V19 V20 V21 V22 V23 V24 V25 V26", "W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13 W14", "W15 W16 W17 W18 W19 W20 W21 W22 W23 W24 W25 W26", "X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13 X14", "X15 X16 X17 X18 X19 X20 X21 X22 X23 X24 X25 X26", "Y1 Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14", "Y15 Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25 Y26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 325;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 12;
    vector<string> pos = {"A10 B8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 25;
    vector<string> pos = {"A1 B3 C5 D7 E9 F11 G13 H15 I17 J19 K21 L23 M25", "N23 O21 P19 Q17 R15 S13 T11 U9 V7 W5 X3 Y1"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 7;
    vector<string> pos = {"A3 B1 C4 E3 E5 F1 F7"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 26;
    vector<string> pos = {"A13 A14 A15 A17 A18 B16 B18 C13 C16", "C17 C19 D14 D15 D18 D19 E11 E13 E17", "F12 G12 G16 G17 H12 H19 I12 I14 I15", "I16 I17 I18 I19"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 8;
    vector<string> pos = {"G1 F3 E5 G6 C6 A7 H8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 26;
    vector<string> pos = {"A1 A9 B3 B7 C5 D3 D7 E1 E9"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 26;
    vector<string> pos = {"N13", "P14", "P12", "R15", "R11", "R13", "L14", "L12", "J15", "J11", "J13"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 26;
    vector<string> pos = {"A20 B22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
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
    int N = 26;
    vector<string> pos = {"A1 C2 D4 F3 H2 C6 D8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 20;
    vector<string> pos = {"D7 E5 D3 C9 E8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 11;
    vector<string> pos = {"A6 A8 C2 E2 I4 I6 D10 G10 C7 D4 G5 F8 E6"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 12;
    vector<string> pos = {"A11 A4 A5 A7 A8 B6 B8 C3 C6", "C7 C9 D4 D5 D8 D9 E1 E3 E7", "F2 G2 G6 G7 H2 H9 I2 I4 I5", "I6 I7 I8 I9"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 10;
    vector<string> pos = {"A5 A3 A1 C4 C2"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 11;
    vector<string> pos = {"G8 H10 A2"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 10;
    vector<string> pos = {"A1 A5 C2 C4 E3 G2 G4 I1 I5"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 8;
    vector<string> pos = {"A7 C6 D4 E2 E6 G1 G7"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 8;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8", "B1 B2 B3 B4 B5 B6 B7 B8", "C1 C2 C3 C4 C5 C6 C7 C8", "D1 D2 D3 D4 D5 D6 D7 D8", "E1 E2 E3 E4 E5 E6 E7 E8", "F1 F2 F3 F4 F5 F6 F7 F8", "G1 G2 G3 G4 G5 G6 G7 G8", "H1 H2 H3 H4 H5 H6 H7 H8"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 25;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11", "A12 A13 A14 A15 A16 A17 A18 A19 A20 A21 A22", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11", "B12 B13 B14 B15 B16 B17 B18 B19 B20 B21 B22", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11", "C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C22", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11", "D12 D13 D14 D15 D16 D17 D18 D19 D20 D21 D22", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 E17 E18 E19 E20 E21 E22", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11", "F12 F13 F14 F15 F16 F17 F18 F19 F20 F21 F22", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11", "G12 G13 G14 G15 G16 G17 G18 G19 G20 G21 G22", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11", "H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 H22", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 I21 I22", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11", "J12 J13 J14 J15 J16 J17 J18 J19 J20 J21 J22", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11", "K12 K13 K14 K15 K16 K17 K18 K19 K20 K21 K22", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11", "L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 L22", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11", "M12 M13 M14 M15 M16 M17 M18 M19 M20 M21 M22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 26;
    vector<string> pos = {"A10 C2"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11 E12 E13 E14", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11 F12 F13 F14", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11 G12 G13 G14", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11 H12 H13 H14", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11 I12 I13 I14", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12 J13 J14", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13 K14", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14", "N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14", "O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11 P12 P13 P14", "Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14", "R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11 R12 R13 R14", "S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11 S12 S13 S14", "T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11 T12 T13 T14", "U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11 U12 U13 U14", "V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12 V13 V14", "W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13 W14", "X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13 X14", "Y1 Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14", "Z1 Z2 Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z10 Z11 Z12 Z13 Z14"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 26;
    vector<string> pos = {"B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14", "B15 B16 B17 B18 B19 B20 B21 B22 B23 B24 B25 B26", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11 D12 D13 D14"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 25;
    vector<string> pos = {"A11 C12"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 26;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11 A12 A13 A14 A15", "A16 A17 A18 A19 A20 A21 A22 A23 A24 A25 A26 B1 B2", "B3 B4 B5 B6 B7 B8 B9 B10 B11 B12 B13 B14 B15 B16", "B17 B18 B19 B20 B21 B22 B23 B24 B25 B26 C1 C2 C3", "C4 C5 C6 C7 C8 C9 C10 C11 C12 C13 C14 C15 C16 C17", "C18 C19 C20 C21 C22 C23 C24 C25 C26 D1 D2 D3 D4 D5", "D6 D7 D8 D9 D10 D11 D12 D13 D14 D15 D16 D17 D18", "D19 D20 D21 D22 D23 D24 D25 D26 E1 E2 E3 E4 E5 E6", "E7 E8 E9 E10 E11 E12 E13 E14 E15 E16 E17 E18 E19", "E20 E21 E22 E23 E24 E25 E26 F1 F2 F3 F4 F5 F6 F7", "F8 F9 F10 F11 F12 F13 F14 F15 F16 F17 F18 F19 F20", "F21 F22 F23 F24 F25 F26 G1 G2 G3 G4 G5 G6 G7 G8 G9", "G10 G11 G12 G13 G14 G15 G16 G17 G18 G19 G20 G21", "G22 G23 G24 G25 G26 H1 H2 H3 H4 H5 H6 H7 H8 H9 H10", "H11 H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 H22", "H23 H24 H25 H26 I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 I21 I22 I23", "I24 I25 I26 J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11 J12", "J13 J14 J15 J16 J17 J18 J19 J20 J21 J22 J23 J24", "J25 J26 K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11 K12 K13", "K14 K15 K16 K17 K18 K19 K20 K21 K22 K23 K24 K25", "K26 L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11 L12 L13 L14", "L15 L16 L17 L18 L19 L20 L21 L22 L23 L24 L25 L26 M1", "M2 M3 M4 M5 M6 M7 M8 M9 M10 M11 M12 M13 M14 M15", "M16 M17 M18 M19 M20 M21 M22 M23 M24 M25 M26 N1 N2", "N3 N4 N5 N6 N7 N8 N9 N10 N11 N12 N13 N14 N15 N16", "N17 N18 N19 N20 N21 N22 N23 N24 N25 N26 O1 O2 O3", "O4 O5 O6 O7 O8 O9 O10 O11 O12 O13 O14 O15 O16 O17", "O18 O19 O20 O21 O22 O23 O24 O25 O26 P1 P2 P3 P4 P5", "P6 P7 P8 P9 P10 P11 P12 P13 P14 P15 P16 P17 P18", "P19 P20 P21 P22 P23 P24 P25 P26 Q1 Q2 Q3 Q4 Q5 Q6", "Q7 Q8 Q9 Q10 Q11 Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19", "Q20 Q21 Q22 Q23 Q24 Q25 Q26 R1 R2 R3 R4 R5 R6 R7", "R8 R9 R10 R11 R12 R13 R14 R15 R16 R17 R18 R19 R20", "R21 R22 R23 R24 R25 R26 S1 S2 S3 S4 S5 S6 S7 S8 S9", "S10 S11 S12 S13 S14 S15 S16 S17 S18 S19 S20 S21", "S22 S23 S24 S25 S26 T1 T2 T3 T4 T5 T6 T7 T8 T9 T10", "T11 T12 T13 T14 T15 T16 T17 T18 T19 T20 T21 T22", "T23 T24 T25 T26 U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11", "U12 U13 U14 U15 U16 U17 U18 U19 U20 U21 U22 U23", "U24 U25 U26 V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11 V12", "V13 V14 V15 V16 V17 V18 V19 V20 V21 V22 V23 V24", "V25 V26 W1 W2 W3 W4 W5 W6 W7 W8 W9 W10 W11 W12 W13", "W14 W15 W16 W17 W18 W19 W20 W21 W22 W23 W24 W25", "W26 X1 X2 X3 X4 X5 X6 X7 X8 X9 X10 X11 X12 X13 X14", "X15 X16 X17 X18 X19 X20 X21 X22 X23 X24 X25 X26 Y1", "Y2 Y3 Y4 Y5 Y6 Y7 Y8 Y9 Y10 Y11 Y12 Y13 Y14 Y15", "Y16 Y17 Y18 Y19 Y20 Y21 Y22 Y23 Y24 Y25 Y26 Z1 Z2", "Z3 Z4 Z5 Z6 Z7 Z8 Z9 Z10 Z11 Z12 Z13 Z14 Z15 Z16"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 26;
    vector<string> pos = {"A25", "B23"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 25;
    vector<string> pos = {"A1 A2 A3 A4 A5 A6 A7 A8 A9 A10 A11", "A12 A13 A14 A15 A16 A17 A18 A19 A20 A21 A22", "B1 B2 B3 B4 B5 B6 B7 B8 B9 B10 B11", "B12 B13 B14 B15 B16 B17 B18 B19 B20 B21 B22", "C1 C2 C3 C4 C5 C6 C7 C8 C9 C10 C11", "C12 C13 C14 C15 C16 C17 C18 C19 C20 C21 C22", "D1 D2 D3 D4 D5 D6 D7 D8 D9 D10 D11", "D12 D13 D14 D15 D16 D17 D18 D19 D20 D21 D22", "E1 E2 E3 E4 E5 E6 E7 E8 E9 E10 E11", "E12 E13 E14 E15 E16 E17 E18 E19 E20 E21 E22", "F1 F2 F3 F4 F5 F6 F7 F8 F9 F10 F11", "F12 F13 F14 F15 F16 F17 F18 F19 F20 F21 F22", "G1 G2 G3 G4 G5 G6 G7 G8 G9 G10 G11", "G12 G13 G14 G15 G16 G17 G18 G19 G20 G21 G22", "H1 H2 H3 H4 H5 H6 H7 H8 H9 H10 H11", "H12 H13 H14 H15 H16 H17 H18 H19 H20 H21 H22", "I1 I2 I3 I4 I5 I6 I7 I8 I9 I10 I11", "I12 I13 I14 I15 I16 I17 I18 I19 I20 I21 I22", "J1 J2 J3 J4 J5 J6 J7 J8 J9 J10 J11", "J12 J13 J14 J15 J16 J17 J18 J19 J20 J21 J22", "K1 K2 K3 K4 K5 K6 K7 K8 K9 K10 K11", "K12 K13 K14 K15 K16 K17 K18 K19 K20 K21 K22", "L1 L2 L3 L4 L5 L6 L7 L8 L9 L10 L11", "L12 L13 L14 L15 L16 L17 L18 L19 L20 L21 L22", "M1 M2 M3 M4 M5 M6 M7 M8 M9 M10 M11", "M12 M13 M14 M15 M16 M17 M18 M19 M20 M21 M22", "N1 N2 N3 N4 N5 N6 N7 N8 N9 N10 N11", "N12 N13 N14 N15 N16 N17 N18 N19 N20 N21 N22", "O1 O2 O3 O4 O5 O6 O7 O8 O9 O10 O11", "O12 O13 O14 O15 O16 O17 O18 O19 O20 O21 O22", "P1 P2 P3 P4 P5 P6 P7 P8 P9 P10 P11", "P12 P13 P14 P15 P16 P17 P18 P19 P20 P21 P22", "Q1 Q2 Q3 Q4 Q5 Q6 Q7 Q8 Q9 Q10 Q11", "Q12 Q13 Q14 Q15 Q16 Q17 Q18 Q19 Q20 Q21 Q22", "R1 R2 R3 R4 R5 R6 R7 R8 R9 R10 R11", "R12 R13 R14 R15 R16 R17 R18 R19 R20 R21 R22", "S1 S2 S3 S4 S5 S6 S7 S8 S9 S10 S11", "S12 S13 S14 S15 S16 S17 S18 S19 S20 S21 S22", "T1 T2 T3 T4 T5 T6 T7 T8 T9 T10 T11", "T12 T13 T14 T15 T16 T17 T18 T19 T20 T21 T22", "U1 U2 U3 U4 U5 U6 U7 U8 U9 U10 U11", "U12 U13 U14 U15 U16 U17 U18 U19 U20 U21 U22", "V1 V2 V3 V4 V5 V6 V7 V8 V9 V10 V11", "V12 V13 V14 V15 V16 V17 V18 V19 V20 V21 V22"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 242;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 8;
    vector<string> pos = {"B8 C6 H6 F5 D4 C2 A1"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 26;
    vector<string> pos = {"A2 A5 A7 A8 A10 A13 A15 A16 A19 A21 A23 B3 B7", "B14 B15 B19 B23 B24 C5 C6 C8 C10 C13 C15 C16", "C19 C20 C21 C22 D1 D3 D10 D12 D17 D22 D23 D24", "D26 E2 E4 E5 E8 E10 E13 E14 E15 E17 E21 E25 F1", "F2 F4 F5 F6 F9 F13 F14 F16 F18 F19 F24 F26 G5", "G7 G9 G11 G16 G18 G20 G23 H4 H5 H10 H12 H13 H14", "H16 H18 I1 I2 I3 I7 I20 I21 I24 I25 J1 J2 J5", "J10 J15 J16 J17 J19 J20 J23 K1 K2 K3 K4 K7 K9", "K10 K12 K15 K16 K17 K21 K22 K24 K26 L2 L5 L9", "L16 L17 L18 L19 L22 L26 M5 M6 M8 M10 M14 M15", "M22 N1 N3 N4 N7 N8 N10 N11 N12 N16 N17 O2 O3", "O4 O5 O10 O14 O16 O18 O20 O22 O23 P1 P3 P4 P7", "P12 P14 P15 P24 P25 Q3 Q4 Q5 Q6 Q8 Q12 Q13 Q16", "Q18 Q20 Q22 Q24 Q26 R1 R2 R3 R5 R10 R15 R18 R19", "R20 R21 R23 R24 S4 S9 S13 S15 S16 S19 S26 T5", "T10 T12 T17 T19 T26 U1 U2 U6 U10 U12 U13 U14", "U15 U17 U18 U20 U21 V3 V9 V12 V16 V17 V18 V26", "W3 W4 W8 W10 W15 W18 W22 X6 X15 X16 X18 X21 X23", "Y7 Y8 Y9 Y10 Y11 Y12 Y16 Y19 Y23 Y24 Z2 Z6 Z8", "Z10 Z13 Z18 Z19 Z21 Z22 Z26"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 26;
    vector<string> pos = {"F10 H9 J10", "K12 L14", "K8 L6"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 26;
    vector<string> pos = {"A19", "B21"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 5;
    vector<string> pos = {"A1 B3 C5 D3 E1"};
    Knights* pObj = new Knights();
    clock_t start = clock();
    int result = pObj->makeFriendly(N, pos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=10157606&rd=9824&pm=6070
********************************************************************************
#include <vector> 
#include <string> 
#include <cstdio> 
#include <cmath> 
#include <cstring> 
#include <cstdlib> 
#include <iostream> 
#include <sstream> 
#include <algorithm> 
#include <utility> 
#include <queue> 
#include <map> 
 
using namespace std; 
 
char g[500][500]; 
 
int match1[500],match2[500]; 
 
int match(int n,int m) 
{ 
  int s[500],t[500],p,q,i,j,k,ret=0; 
  memset(match1,0xff,sizeof(match1)); 
  memset(match2,0xff,sizeof(match2)); 
  for(i=0;i<n;ret+=(match1[i]>=0),i++) 
    for(memset(t,0xff,sizeof(t)),s[p=q=0]=i;p<=q&&match1[i]<0;p++) 
      for(k=s[p],j=0;j<m&&match1[i]<0;j++) 
        if (g[k][j]&&t[j]<0){ 
          s[++q]=match2[j],t[j]=k; 
          if (s[q]<0) 
            for(p=j;p>=0;j=p) 
              match2[j]=k=t[j],p=match1[k],match1[k]=j; 
        } 
  return ret; 
} 
 
class Knights{ 
public: 
  int n1,n2; 
  int x1[1000],y1[1000],x2[1000],y2[1000]; 
 
  int makeFriendly(int N, vector <string> pos){ 
    int i,j; 
    n1=n2=0; 
    string temp; 
    for(i=0;i<pos.size();i++){ 
      stringstream in(pos[i]); 
      while(in>>temp){ 
        sscanf(temp.c_str(),"%*c%d",&j); 
        int x,y; 
        x=temp[0]-'A'; 
        y=j; 
        if ((x+y)&1){ 
          x1[n1]=temp[0]-'A'; 
          y1[n1]=j; 
          n1++; 
        }else{ 
          x2[n2]=temp[0]-'A'; 
          y2[n2]=j; 
          n2++; 
        } 
      } 
    } 
    for(i=0;i<n1;i++){ 
      for(j=0;j<n2;j++){ 
        int t1,t2; 
        t1=abs(x1[i]-x2[j]); 
        t2=abs(y1[i]-y2[j]); 
        if ((t1==1 && t2==2) || (t2==1 && t1==2)){ 
          g[i][j]=1; 
        }else g[i][j]=0; 
      } 
    } 
    return match(n1,n2); 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/