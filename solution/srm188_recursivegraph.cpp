/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2365
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

class RecursiveGraph {
public:
    int shortestPath(vector<string> edges, unknown start, unknown end);
};

int RecursiveGraph::shortestPath(vector<string> edges, unknown start, unknown end) {
    int ret;
    return ret;
}


int test0() {
    vector<string> edges = {"A B 20", "C D 13", "A C1 1", "D1 C2 2", "D2 B 3"};
    unknown start = A;
    unknown end = B;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> edges = {"A B 800", "A C1 4", "D1 B 4", "C A2 4", "B2 D 4"};
    unknown start = A;
    unknown end = B;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
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
    vector<string> edges = {"A A1 1", "B B1 1"};
    unknown start = A;
    unknown end = B;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
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
    vector<string> edges = {"A E1 10", "H2 J 11", "E F 50", "F1 G2 5", "G H 60", "A C4 12", "D4 J 13", "C E1 14", "F1 D 15", "E G8 6", "F H8 8"};
    unknown start = J;
    unknown end = A;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> edges = {"A F7 835", "E1 B 675", "B F7 16", "J8 B 34", "C5 C 642", "D A9 132", "C4 F 440", "D6 F 972", "G J4 108", "G5 G 879", "H5 G 762", "J I 616", "J G9 798", "F6 A1 699", "J8 C1 644", "C1 D9 137", "H6 F1 125", "G1 H6 423", "I6 I1 975", "D3 J1 802", "H4 C2 135", "H7 C2 993", "C6 F2 257", "G9 H2 934", "J2 F6 21", "J2 F8 152", "A3 A4 100", "I6 A3 100", "A3 H7 739", "C5 B3 633", "B3 F6 54", "B3 E8 86", "I3 F4 547", "I3 E5 279", "G8 J3 932", "J3 I9 319", "C4 E6 522", "C7 D4 492", "G5 F4 895", "I5 F4 677", "H4 H6 401", "H4 C8 287", "B5 B8 799", "D6 B9 751", "E6 I7 37", "F8 I6 200", "J6 C9 264", "G8 D7 997", "C8 B9 176", "G8 B9 74"};
    unknown start = J;
    unknown end = G;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 5463;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> edges = {"B J3 142", "I C 304", "D H3 958", "C5 D 308", "D7 I 404", "J G9 941", "A1 G2 385", "B1 C4 795", "C1 H2 39", "C1 B5 801", "D6 C1 556", "D1 A2 335", "H3 E1 52", "A2 F1 305", "A8 F1 294", "C6 H1 74", "H1 F8 33", "C6 I1 97", "I4 J1 997", "J1 E5 795", "J1 J5 234", "I6 J1 275", "C2 I3 425", "J9 C2 661", "H3 F2 730", "G2 H7 358", "A6 C3 456", "I4 E3 13", "E3 F7 732", "D5 H3 225", "I3 H4 520", "A4 J3 617", "B6 A4 87", "B4 G6 807", "A7 D4 57", "C8 G4 752", "F7 H4 213", "I4 D7 383", "J4 F6 127", "B5 I6 952", "G5 D8 65", "A7 I5 467", "F9 J5 70", "D7 E6 247", "C7 H6 75", "H6 C9 103", "J9 A7 971", "A8 G7 376", "H9 C8 916", "E9 I8 717"};
    unknown start = I;
    unknown end = C;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> edges = {"A A1 420", "A3 A 558", "A B5 587", "A F5 6", "A C6 877", "A J7 137", "B H9 569", "C B1 709", "C B3 369", "G3 D 127", "E D6 663", "D9 G 589", "J7 H 528", "I J1 943", "I8 J 935", "I8 A1 342", "A1 B9 324", "B7 B1 699", "J9 B1 55", "G2 F1 694", "F1 E7 439", "I7 F1 476", "J4 G1 112", "I4 H1 943", "J8 A2 285", "E2 E8 738", "F2 C5 113", "G4 G2 743", "J5 G2 558", "I6 I2 658", "C3 C9 481", "B7 E3 705", "I8 E3 914", "E3 H9 463", "J7 F3 821", "I3 C5 249", "I3 G6 549", "J3 H5 952", "F5 B4 472", "G4 H5 371", "A6 H4 237", "H6 D5 417", "A9 D5 568", "I7 F5 322", "C6 H5 46", "C9 C6 266", "I6 H8 114", "F9 B7 764", "F7 D8 852", "J9 C8 78"};
    unknown start = A;
    unknown end = B;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 2708;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> edges = {"A A1 0", "J J1 0", "A B1 1000", "B C1 1000", "C D1 1000", "D E1 1000", "E F1 1000", "F G1 1000", "G H1 1000", "H I1 1000", "I J1 1000"};
    unknown start = A;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> edges = {"A A1 5", "J J9 7", "A J 1000", "B J1 0", "C J2 0", "D J3 0", "E J4 0", "F J5 0", "G J6 0", "B A2 0", "C A3 0", "D A4 0", "E A5 0", "F A6 0", "G A7 0", "H J7 0", "I J8 0", "H A8 0", "I A9 0"};
    unknown start = A;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 219;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> edges = {"A A1 35", "J1 E 0", "E A2 0", "J J2 25", "A J 1000"};
    unknown start = A;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 310;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> edges = {"E H 3", "C J 3", "D E9 0", "H9 A 0", "A C3 0", "J3 F 0"};
    unknown start = D;
    unknown end = F;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> edges = {"A B1 1000", "B C1 1000", "C D1 1000", "D E1 1000", "E F1 1000", "F G1 1000", "G H1 1000", "H I1 1000", "I J1 1000", "J1 J9 1000", "J J9 1000"};
    unknown start = A;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 5979;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> edges = {"A B1 1000", "I9 J 1000", "B C1 1000", "H9 I 1000", "C D1 1000", "G9 H 1000", "D E1 1000", "F9 G 1000", "I1 B2 1000", "I2 B3 1000", "I3 B4 1000", "I4 B5 1000", "I5 B6 1000", "I6 B7 1000", "I7 B8 1000", "I8 B9 1000", "H1 C2 1000", "H2 C3 1000", "H3 C4 1000", "H4 C5 1000", "H5 C6 1000", "H6 C7 1000", "H7 C8 1000", "H8 C9 1000", "G1 D2 1000", "G2 D3 1000", "G3 D4 1000", "G4 D5 1000", "G5 D6 1000", "G6 D7 1000", "G7 D8 1000", "G8 D9 1000", "F1 E2 1000", "F2 E3 1000", "F3 E4 1000", "F4 E5 1000", "F5 E6 1000", "F6 E7 1000", "F7 E8 1000", "F8 E9 1000", "E A1 1000", "A1 A2 1000", "A2 A3 1000", "A3 A4 1000", "A4 A5 1000", "A5 F 1000"};
    unknown start = A;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 3609442;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> edges = {"E1 B2 66", "J D1 853", "D3 E2 412", "B5 J9 170", "C1 E8 479", "G5 F4 805", "F3 H9 64", "E5 I3 9", "B2 F1 153", "A7 A 207", "I3 C4 208", "E G9 810", "G9 A4 318", "E4 A8 736", "F A4 765", "E8 J 904", "J5 B9 790", "D8 J9 354", "G6 B4 176", "E5 C 527", "G2 E7 795", "I9 E 327", "B1 E4 635", "E7 C9 695", "B3 F9 29", "C4 A7 458", "A8 A 760", "D1 E5 683", "D3 G6 229", "A7 G4 717", "H5 F4 112", "C5 F1 69", "J8 D5 136", "E7 E4 35", "E7 I8 434", "G5 H6 219", "B4 H 124", "E2 E8 704", "J3 I2 879", "G4 F8 436", "F6 H 127", "F C8 888", "C F7 151", "D2 F5 466", "C8 J9 263"};
    unknown start = E;
    unknown end = A;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 2493;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> edges = {"H F5 452", "G3 I4 872", "G D2 732", "E5 A3 614", "F1 B4 476", "J1 H4 794", "A C4 625", "I1 A9 708", "E8 D 367", "C9 G7 816", "C5 B1 961", "H H5 507", "J H 555", "C5 C8 819", "C9 F 195", "I A9 896", "E8 A2 152", "D7 C8 238", "C4 C1 405", "J3 B8 118", "A8 C6 761", "J7 A1 954", "J E2 235", "I8 C7 913", "C7 J3 38", "E9 F5 184", "F6 F 358", "D9 D5 649", "I9 A7 771", "E G3 807", "B2 H3 988", "E9 C6 545", "E3 H7 495", "H5 C4 495", "C9 J 761", "I7 D9 346", "G6 H1 307", "G8 J1 403", "C3 J6 140", "C1 E9 759", "I7 H5 399", "E5 E 206", "F5 E8 903", "C8 J7 478", "D2 G1 198", "G2 G9 849", "J6 J2 188", "C5 D9 814", "E8 G1 198", "B3 D8 237"};
    unknown start = E;
    unknown end = A;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 2026;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> edges = {"H6 J9 657", "F9 J3 958", "J8 J5 702", "F2 I9 563", "G G4 568", "D3 J5 206", "B9 F6 126", "D E3 684", "G3 F2 427", "A7 J 114", "A3 D2 728", "H5 E 311", "G7 E4 389", "C1 C6 136", "B4 H9 438", "H8 C2 729", "C I6 833", "D4 C5 835", "E1 I6 637", "H1 B7 194", "C6 E9 131", "A8 D9 615", "D4 I5 36", "C1 D4 326", "G3 H5 147", "I8 C4 320", "D1 H7 831", "A3 F8 946", "C4 E1 266", "I F6 948", "H9 D 230", "B1 B9 769", "D4 J 296", "J5 E8 638", "H F9 119", "I3 F6 623", "I5 H2 805", "H1 G7 218", "G8 D3 635", "I3 B2 105", "B2 F3 164", "H4 D1 937", "C4 A8 367", "B G8 202", "G H5 425", "J8 F3 276", "H7 I4 55", "D2 D3 987", "H I5 735"};
    unknown start = H;
    unknown end = I;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 3380;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> edges = {"I5 F9 876", "H9 E6 391", "H2 C6 392", "C2 G5 977", "I J3 54", "I1 C 157", "E F4 598", "F8 H6 883", "C8 H6 994", "G2 A6 343", "C8 J2 327", "B2 B 602", "G9 D2 668", "I1 J6 671", "E G7 416", "J8 J7 431", "E7 A3 796", "A9 H1 559", "G9 J5 281", "J5 I6 564", "I8 H 262", "A6 J5 891", "J2 H3 613", "B H1 422", "E4 C7 378", "B4 B2 857", "G5 E9 276", "B9 I7 221", "J6 D4 775", "A5 F9 936", "A8 E2 534", "H6 D 801", "C8 J6 741", "E4 H 853", "E J7 347", "J8 I 731", "G7 J2 45", "I9 C3 435"};
    unknown start = D;
    unknown end = H;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 3986;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> edges = {"I4 C9 618", "F B 381", "F7 H1 823"};
    unknown start = B;
    unknown end = F;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> edges = {"G4 J8 643", "I9 F6 271", "G5 I3 914", "B B8 746", "B3 D8 531", "I1 E3 266", "F3 J9 469", "H9 B5 403", "H9 I7 696", "C2 D1 193", "B8 G6 858", "H6 E4 952", "C I 221", "D4 C5 507", "D3 G2 986", "I7 I 561", "B2 B4 576"};
    unknown start = C;
    unknown end = I;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> edges = {"E1 A3 71", "J6 E4 162", "G1 E4 493", "J7 H5 364", "I5 D8 607", "E3 A 822", "I6 D1 654", "B5 I3 494", "B3 A5 831", "H1 E3 378", "D8 J5 384", "G2 B6 457", "F6 B 893", "H7 G8 390", "I6 C4 862", "E3 E1 781", "H1 I8 40", "C B1 718", "G1 F6 251", "J5 J 120", "J4 B8 293", "D4 J9 47", "D1 A9 558", "E1 E7 384", "F9 B 130", "H7 I1 925", "B3 J7 643", "B2 A9 330", "B7 G6 715", "A1 F 59", "I9 I2 112", "C2 A8 220", "E E9 363", "B4 E7 552", "H7 C9 95", "G7 D2 903", "A2 H5 625", "G4 A9 111", "F8 F1 218", "A B 536", "E3 G8 53", "F1 B5 631", "H F6 964", "I3 B4 478", "G D5 590", "F2 G4 567", "C5 G7 359", "E3 A1 599", "C5 A3 917", "G9 F7 963"};
    unknown start = A;
    unknown end = C;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 2407;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> edges = {"F8 F1 24", "B8 J7 11", "J9 E 999", "B8 B2 814", "I1 A8 413", "G D6 269", "I8 J7 3", "F7 E1 494", "B9 A3 384", "I3 I8 314", "H2 D8 168", "D5 I3 80", "C1 A 45", "B5 I2 716", "E H2 607", "C9 A 256", "I7 I6 938", "B8 J4 105", "B J8 357", "C4 A1 412", "I8 C 420", "C1 B8 884", "F4 H8 699", "G5 H6 625", "E6 F3 493", "G9 H2 124", "I1 D9 999", "G6 F9 801", "D4 H8 488", "H8 D2 268", "I7 E9 670", "F4 G2 609", "F3 H4 168", "D4 F1 534", "C6 A2 839", "H2 B4 884", "I2 D 838", "B9 I3 587", "F9 H4 551", "A3 I4 218", "A7 E4 125", "C7 F 259"};
    unknown start = C;
    unknown end = A;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 1363;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> edges = {"F5 J6 455", "H5 H6 969", "E9 A6 494", "H2 H6 550", "B5 F7 188", "B5 C2 754", "J8 C1 93", "E9 E7 582", "F5 F 889", "I3 D9 875", "B8 J7 316", "F9 B8 342", "C2 B9 622", "G3 F2 709", "I7 I3 615", "B6 B5 99", "B9 E2 822", "J7 B3 823", "A2 G 189", "A2 E9 522", "J6 A5 938", "H2 B9 296", "A1 I4 260", "B8 H3 442", "G3 I5 708", "C I 418", "D H6 991", "H2 B1 107", "H2 B3 110", "J1 C 946", "I2 J3 824", "C1 D7 25", "E9 G5 526", "D5 B8 899", "F1 D4 187", "A1 A2 860", "B3 C1 899", "J A4 838", "I B3 998", "A7 H6 356"};
    unknown start = C;
    unknown end = D;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 3067;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> edges = {"E1 J 129", "B7 G8 53", "B B1 806", "A6 J5 747", "H6 F 927", "G8 H1 172", "G6 G9 407", "B4 H3 421", "D7 J6 423", "B8 H4 36", "H3 D8 316", "A5 H1 889", "F9 B7 628", "E A5 910", "I9 B7 644", "I6 C1 703", "G3 J 87", "H4 J5 921", "D3 H9 564", "J J2 515", "H1 I6 510", "G5 B8 727", "C5 D1 177", "H C3 242", "B5 A3 702", "D4 C2 245", "H7 J8 142", "C G9 668", "J2 A 76", "A A5 52", "H9 I2 394", "E9 D4 517", "I7 B2 312", "E5 G4 313", "B6 G1 9", "I6 I2 680", "E2 A8 523", "A E2 986", "G7 J6 601", "J5 C6 788", "H4 G5 208", "H4 J2 700", "H6 J4 15"};
    unknown start = E;
    unknown end = J;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 1553;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> edges = {"A B1 0", "B A1 0"};
    unknown start = A;
    unknown end = B;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
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
    vector<string> edges = {"A B 62", "A D 457", "A E 830", "G A 38", "H A 172", "J A 69", "B C 269", "G B 857", "B H 485", "J B 689", "C D 402", "C H 974", "G D 104", "I D 737", "D J 755", "E H 708", "I E 719", "E J 200", "F H 442", "G H 857", "H J 615", "I J 868"};
    unknown start = B;
    unknown end = I;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 941;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> edges = {"F A 411", "H A 511", "A I 186", "A J 310", "D B 191", "B H 954", "D G 452", "H D 439", "F E 639", "E H 340", "E J 343", "H G 870", "I G 766"};
    unknown start = F;
    unknown end = A;
    RecursiveGraph* pObj = new RecursiveGraph();
    clock_t start = clock();
    int result = pObj->shortestPath(edges, start, end);
    clock_t end = clock();
    delete pObj;
    int expected = 411;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8349097&rd=4760&pm=2365
********************************************************************************
#line 2 "RecursiveGraph.cpp"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdio>
 
using namespace std;
 
#define INF 2000000000
#define K 40
 
class RecursiveGraph {
    public:
 
    long long g[K][100][100];
  
    void init() {
  for( int i=0; i<K; i++)
      for( int j=0; j<100; j++)
    for( int k=0; k<100; k++) {
        g[i][j][k] = INF;
    }
    }
  
    int shortestPath(vector <string> edges, char start, char end) {
        init();
 
  for( int i=0; i<(int)edges.size(); i++) {
      stringstream ss( edges[i]);
      string a, b;
      int w;
      ss >> a >> b >> w;
 
      int an = a[0]-'A';
      if( a.size()==2)
    an += (a[1]-'0')*10;
 
      int bn = b[0]-'A';
      if( b.size()==2)
    bn += (b[1]-'0')*10;
 
      g[0][an][bn] = w;
      g[0][bn][an] = w;
  }
 
  for( int a=1; a<K; a++) {
      for( int i=0; i<100; i++)
    for( int j=0; j<100; j++) {
      if( g[a-1][i][j]!=INF)
          g[a][i][j] = g[a-1][i][j]/2;
        }
  }
 
  for( int i=K-1; i>=0; i--) {
 
      for( int n=0; n<100; n++)
    for( int a=0; a<100; a++)
        for( int b=0; b<100; b++) {
      g[i][a][b] = min( g[i][a][b], g[i][a][n]+g[i][n][b]);
        }
 
      if( i==0)
    break;
 
      for( int a=0; a<10; a++)
    for( int b=0; b<10; b++) 
        for( int k=10; k<100; k+=10) {
      g[i-1][a + k][b + k] = g[i][a][b];
        }
  }
 
  int result = g[0][ start-'A'][ end-'A'];
  if( result>=INF)
      return -1;
  else
      return result;
    }
 
    
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/