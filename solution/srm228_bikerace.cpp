/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2958
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

class BikeRace {
public:
    vector<string> eliminated(int track, vector<string> name, vector<int> start, vector<int> speed);
};

vector<string> BikeRace::eliminated(int track, vector<string> name, vector<int> start, vector<int> speed) {
    vector<string> ret;
    return ret;
}


int test0() {
    int track = 4800;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {0, 100, 180};
    vector<int> speed = {30, 30, 30};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int track = 3000;
    vector<string> name = {"BO", "JO", "AL"};
    vector<int> start = {10, 0, 15};
    vector<int> speed = {12, 2, 10};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JO", "AL"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int track = 3000;
    vector<string> name = {"BOBO", "JOHNNY", "ANNA"};
    vector<int> start = {67, 0, 15};
    vector<int> speed = {50, 45, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOBO", "ANNA"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int track = 3000;
    vector<string> name = {"B", "J", "A"};
    vector<int> start = {66, 0, 15};
    vector<int> speed = {50, 45, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "J"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int track = 5000;
    vector<string> name = {"TOM", "TOMMY", "BILL", "SPEEDY", "JIMMY"};
    vector<int> start = {100, 120, 110, 0, 1000};
    vector<int> speed = {50, 50, 50, 50, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BILL", "JIMMY", "TOM", "TOMMY"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int track = 5000;
    vector<string> name = {"ABCDEFGHIJKLMNOPQRSTUVWXYQBCDEFGHIJKLMNOPQRSTUVWXY", "ABCDE"};
    vector<int> start = {1000, 999};
    vector<int> speed = {49, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABCDEFGHIJKLMNOPQRSTUVWXYQBCDEFGHIJKLMNOPQRSTUVWXY"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int track = 4999;
    vector<string> name = {"A", "B", "C", "D", "BA", "AB", "BC", "X"};
    vector<int> start = {300, 199, 23, 444, 445, 443, 1000, 0};
    vector<int> speed = {42, 42, 42, 43, 18, 22, 22, 22};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"X", "A", "AB", "B", "BA", "BC", "D"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int track = 1000;
    vector<string> name = {"A", "B", "C", "D"};
    vector<int> start = {100, 200, 0, 1};
    vector<int> speed = {10, 15, 4, 4};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"D", "C", "B"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int track = 4000;
    vector<string> name = {"A", "B", "C", "D", "E"};
    vector<int> start = {100, 250, 420, 500, 499};
    vector<int> speed = {10, 16, 50, 42, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "D"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int track = 4000;
    vector<string> name = {"E", "D", "C", "B", "A"};
    vector<int> start = {100, 250, 420, 500, 499};
    vector<int> speed = {10, 16, 50, 42, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "D", "E"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int track = 5000;
    vector<string> name = {"A", "BOB", "C", "D"};
    vector<int> start = {0, 100, 198, 199};
    vector<int> speed = {20, 40, 1, 2};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "C", "D"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int track = 5000;
    vector<string> name = {"A", "BOB", "C", "D"};
    vector<int> start = {699, 698, 600, 500};
    vector<int> speed = {2, 1, 40, 20};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOB", "D", "A"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int track = 4000;
    vector<string> name = {"A", "BOB", "C", "D"};
    vector<int> start = {699, 698, 600, 500};
    vector<int> speed = {2, 1, 40, 20};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOB", "D", "A"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int track = 3998;
    vector<string> name = {"A", "BOB", "C", "D"};
    vector<int> start = {699, 698, 600, 500};
    vector<int> speed = {2, 1, 40, 20};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "BOB", "D"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int track = 3999;
    vector<string> name = {"A", "BOB", "C", "D"};
    vector<int> start = {699, 698, 600, 500};
    vector<int> speed = {2, 1, 40, 20};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOB", "D", "A"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int track = 5000;
    vector<string> name = {"ADAM", "EVE", "SERPENT"};
    vector<int> start = {995, 996, 999};
    vector<int> speed = {1, 1, 1};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int track = 5000;
    vector<string> name = {"TOM", "TOMMY", "BILL", "SPEEDY", "JIMMY"};
    vector<int> start = {100, 120, 110, 0, 1000};
    vector<int> speed = {50, 50, 50, 50, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BILL", "JIMMY", "TOM", "TOMMY"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int track = 3000;
    vector<string> name = {"B", "J", "A"};
    vector<int> start = {66, 0, 15};
    vector<int> speed = {50, 45, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "J"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int track = 4800;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {0, 100, 180};
    vector<int> speed = {30, 30, 30};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int track = 4996;
    vector<string> name = {"B", "J", "A"};
    vector<int> start = {0, 10, 9};
    vector<int> speed = {10, 3, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"J", "A"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int track = 4999;
    vector<string> name = {"B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "R", "S", "T", "U", "V", "Z", "X", "Y", "W", "AB", "AC", "AD", "AE", "AF", "AG", "AH", "AI", "AJ", "AK", "AL", "AM", "AN", "AO", "AP", "AR", "AS", "AT", "AU", "AV", "AZ", "AX", "AY", "AW"};
    vector<int> start = {100, 200, 300, 400, 299, 289, 133, 900, 999, 1, 2, 3, 4, 5, 6, 7, 8, 9, 211, 298, 297, 708, 709, 501, 502, 503, 504, 505, 506, 507, 601, 602, 603, 604, 605, 606, 607, 608, 609, 610, 611, 701, 702, 703, 704, 705, 706, 707};
    vector<int> speed = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 4};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K", "L", "M", "N", "O", "P", "R", "S", "B", "C", "H", "AB", "AC", "AD", "AE", "AF", "AG", "AH", "AI", "AJ", "AK", "AL", "AM", "AN", "AO", "AP", "AR", "AS", "AT", "AU", "AV", "AW", "AX", "AY", "AZ", "D", "E", "F", "G", "I", "J", "V", "W", "X", "Y", "Z", "T"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int track = 1000;
    vector<string> name = {"B", "C", "Q", "A", "J"};
    vector<int> start = {80, 60, 1000, 999, 0};
    vector<int> speed = {50, 25, 10, 1, 10};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "C", "J", "Q"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int track = 4981;
    vector<string> name = {"A", "B", "C", "D", "E", "F", "G"};
    vector<int> start = {0, 1, 2, 245, 316, 819, 971};
    vector<int> speed = {1, 2, 42, 16, 2, 1, 47};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B", "D", "E", "F", "G"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {1, 2, 3};
    vector<int> speed = {2, 2, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "A"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int track = 4800;
    vector<string> name = {"B", "A", "C"};
    vector<int> start = {0, 2, 3};
    vector<int> speed = {3, 6, 12};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int track = 1000;
    vector<string> name = {"A", "B", "C", "D"};
    vector<int> start = {1, 2, 3, 4};
    vector<int> speed = {1, 1, 1, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "B", "A"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int track = 4999;
    vector<string> name = {"A", "AA", "AAA", "AAAA", "AB", "BB", "BBB", "ABB"};
    vector<int> start = {0, 1, 2, 3, 999, 998, 889, 5};
    vector<int> speed = {1, 2, 3, 3, 50, 49, 48, 47};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "AA", "AAAA", "AAA", "AB", "BB", "BBB"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {0, 1, 2};
    vector<int> speed = {2, 3, 7};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "A"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {0, 1, 2};
    vector<int> speed = {1, 1, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "A"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int track = 1000;
    vector<string> name = {"A", "B"};
    vector<int> start = {0, 1};
    vector<int> speed = {5, 6};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {1, 0, 2};
    vector<int> speed = {1, 1, 50};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int track = 1500;
    vector<string> name = {"A", "B"};
    vector<int> start = {500, 1000};
    vector<int> speed = {2, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int track = 1499;
    vector<string> name = {"Z", "E", "D", "C", "B", "A", "WLEITE"};
    vector<int> start = {51, 49, 50, 0, 25, 30, 31};
    vector<int> speed = {50, 24, 50, 10, 20, 25, 25};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "C", "E", "WLEITE", "A"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int track = 5000;
    vector<string> name = {"A", "B", "C", "D"};
    vector<int> start = {0, 10, 20, 30};
    vector<int> speed = {10, 5, 6, 4};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "D", "C"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int track = 3000;
    vector<string> name = {"BOBO", "JOHNNY", "ANNAABHISHEK"};
    vector<int> start = {67, 0, 15};
    vector<int> speed = {50, 45, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BOBO", "ANNAABHISHEK"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int track = 4352;
    vector<string> name = {"AA", "AAB", "AAC", "ADA", "AEA", "AFA", "AGA", "AHA", "AIA", "AJA", "AKA", "ALA", "MAA", "NAA", "AOA", "PAA", "QAA", "ARA", "ASA", "ATA", "AUA", "AVA", "AWA", "AXA", "AYA", "AZA", "ASDFAA", "AFSDA", "ATHRTHA", "ASDFA", "AGERA", "ATBHRTHA", "ATCHRTHA", "ATHERTHA", "ATHRDTHA", "ATHRTHHA", "ATHRTGHA", "ATHRITHA", "ATHJRTHA", "ATHKRTHA", "ATHLRTHA", "ATHMRTHA", "ATHNRTHA", "ATHORTHA", "ATHPRTHA", "ATHWRTHA", "ATHTRTHA", "KITA", "PSINA", "TITO"};
    vector<int> start = {235, 176, 472, 36, 690, 895, 230, 369, 18, 266, 641, 216, 212, 753, 94, 343, 726, 203, 573, 735, 579, 566, 425, 398, 29, 759, 694, 819, 55, 356, 382, 332, 404, 716, 11, 843, 107, 582, 701, 349, 654, 621, 327, 629, 762, 623, 274, 627, 65, 632};
    vector<int> speed = {44, 31, 15, 18, 48, 19, 45, 6, 38, 29, 4, 40, 41, 43, 16, 41, 31, 37, 40, 18, 40, 1, 17, 50, 28, 45, 12, 25, 37, 37, 17, 32, 21, 32, 35, 38, 9, 28, 21, 26, 37, 5, 36, 21, 14, 35, 15, 18, 34, 6};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ADA", "ATHRDTHA", "AA", "AAB", "AAC", "AEA", "AFA", "AFSDA", "AGA", "AGERA", "AHA", "AJA", "AKA", "ALA", "ARA", "ASA", "ASDFA", "ASDFAA", "ATA", "ATBHRTHA", "ATCHRTHA", "ATHERTHA", "ATHJRTHA", "ATHKRTHA", "ATHLRTHA", "ATHMRTHA", "ATHNRTHA", "ATHORTHA", "ATHPRTHA", "ATHRITHA", "ATHRTHHA", "ATHTRTHA", "ATHWRTHA", "AUA", "AVA", "AWA", "AXA", "AZA", "KITA", "MAA", "NAA", "PAA", "QAA", "TITO", "AYA", "ATHRTGHA", "AOA", "PSINA", "ATHRTHA"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int track = 1000;
    vector<string> name = {"A", "B", "C", "D", "E"};
    vector<int> start = {100, 5, 0, 20, 21};
    vector<int> speed = {3, 2, 1, 2, 3};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"C", "D", "B"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {0, 1, 2};
    vector<int> speed = {1, 1, 10};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"B", "A"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {110, 90, 0};
    vector<int> speed = {20, 11, 10};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "C"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int track = 1000;
    vector<string> name = {"A", "B", "C"};
    vector<int> start = {450, 400, 0};
    vector<int> speed = {1, 1, 2};
    BikeRace* pObj = new BikeRace();
    clock_t start = clock();
    vector<string> result = pObj->eliminated(track, name, start, speed);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"A", "B"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=270505&rd=6517&pm=2958
********************************************************************************
#include <vector>
#include <string>
#include <cstdio>
using namespace std;
 
#define V(x) vector<x >
#define vs V(string)
#define vi V(int)
#define vd V(double)
 
#define fr(x,y,z) for((x)=(y);(x)<(z);(x)++)
#define fo(x,y) fr(x,0,y)
#define fir(n) fo(i,n)
#define fjr(n) fo(j,n)
#define fkr(n) fo(k,n)
#define fi fir(n)
#define fj fjr(n)
 
#define pb push_back
#define sz size()
#define cs c_str()
 
#define df double
#include <cmath>
#define eps 1e-10
 
struct foo { df tim; int fast,slow; foo(df a, int i, int j) { tim=a,fast=i,slow=j; } };
vs nam;
bool cmp(foo x, foo y) { if(fabs(x.tim-y.tim)>eps) return x.tim<y.tim; return nam[x.slow]<nam[y.slow]; }
class BikeRace { public: vs eliminated(int track, vs name, vi start, vi speed) {
nam=name;
int n=name.sz;
int i,j,k;
V(foo) f;
vd st,sp;
fi st.pb(df(start[i])),sp.pb(df(speed[i]));
fi fj { 
if(st[i]<st[j] && st[i]+track/sp[i]<=st[j]+eps) { f.pb(foo(st[i]+track/sp[i],i,j)); continue; }
if(st[j]<st[i] && st[j]+track/sp[j]<=st[i]+eps) { f.pb(foo(st[j]+track/sp[j],j,i)); continue; }
if(sp[i]>sp[j]) {
if(st[i]>st[j]) {
//df t=(st[i]*sp[i]-st[j]*sp[j])/(sp[i]-sp[j]);
df t=(st[i]-st[j])*sp[j]/(sp[i]-sp[j])+st[i];
f.pb(foo(t,i,j));
} else {
df d=df(track)-(st[j]-st[i])*sp[i];
df t=d/(sp[i]-sp[j])+st[j];
f.pb(foo(t,i,j));
}
}
}
 
sort(f.begin(),f.end(),cmp);
 
fir(f.sz) { printf("%f %s %s\n",f[i].tim,name[f[i].fast].cs,name[f[i].slow].cs); }
vs ret;
vi ok(n,1);
fir(f.sz) if(ok[f[i].fast] && ok[f[i].slow]) { ret.pb(name[f[i].slow]); ok[f[i].slow]=0; }
 
return ret;
}};

********************************************************************************
*******************************************************************************/