/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7507
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

class VegetableGarden {
public:
    vector<int> getMinDistances(vector<string> garden);
};

vector<int> VegetableGarden::getMinDistances(vector<string> garden) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> garden = {"I"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> garden = {"XX", "XI"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> garden = {"III", "IXI", "III"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 8, 10, 12, 14, 16, 18};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> garden = {"X.I", ".I.", "I.."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 10, 14};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> garden = {"IIXIIXIXII"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 6, 12, 14, 20, 26, 28};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> garden = {"X"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> garden = {"I.", ".."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> garden = {"I..", "...", "..."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> garden = {"..X.", "....", "....", "...."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> garden = {".....", ".....", ".....", ".....", "X...."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> garden = {"......", "......", "......", "......", "......", ".X...."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> garden = {"...I...", ".......", ".......", ".......", ".......", ".......", "......."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> garden = {"......X.", "........", "........", "........", "........", "........", "........", "........"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> garden = {".........", ".........", ".........", ".........", ".........", "...X.....", ".........", ".........", "........."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> garden = {"....I.....", "..........", ".....I....", "..........", "..........", "..........", "..........", "..........", "..........", ".........."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 18};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> garden = {"...........", "...........", "...........", "...........", "...........", "...........", ".......X...", ".........I.", "...........", "...........", "..........."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> garden = {"...........I", "............", ".........I..", "............", "............", "............", "............", "............", "............", "............", "............", "............"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 30};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> garden = {".............", ".............", ".............", ".............", ".............", ".............", "...I.........", ".............", ".............", ".I...........", ".............", ".............", "............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 28};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> garden = {"..............", "..............", ".....I........", "..............", "..............", "..............", "..............", "...I..........", "..............", "..............", "..............", "..............", "..............", ".............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 28};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> garden = {"...............", "...............", "...............", "...............", "...............", "...............", "...............", "..............X", "...............", "...............", "...............", "...............", ".X.............", "............I..", "..............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> garden = {".......X........", "................", "................", "................", "...............X", "................", "................", "................", "................", "...........X....", "................", "................", "................", "................", "................", "................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> garden = {".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "........I........", ".................", ".................", ".....X...........", ".........X.......", ".................", ".................", "................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> garden = {"..................", "..................", "..................", "..................", "..................", "..................", "..................", "......I...........", "..................", "..................", "..................", "......I...........", "..................", "..................", "..................", "..................", "..................", "....I............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 38, 50};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> garden = {"...................", "...................", "...................", "...................", ".................I.", "...................", "...................", ".....I.............", "...................", "...................", "...................", "...................", "...................", "...................", "...................", "...........I.......", "...................", "...................", "..................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 52, 68};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> garden = {".................I..", "....................", "I...................", "....................", "....................", "....................", "....................", "....................", ".................I..", "....................", "........I...........", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 40, 54, 58};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> garden = {".....................", ".....................", ".....................", ".....................", ".....................", ".....................", "...........X.........", ".....................", ".............X.......", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", ".....................", "...I.................", ".X...................", ".....................", ".....................", "....................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> garden = {"......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "......................", "X.....................", "......................", "......................", "......................", "......X...............", "......................", "......................", ".............I........", "......................", "......................", "......................", ".....I................", "......................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54, 70};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> garden = {".......................", ".......................", ".......................", ".......................", ".......................", "...............I.......", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......I...........X...", ".......................", ".......................", ".......................", ".......................", "......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 68};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> garden = {"........................", "........................", ".....................X..", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "..........X.............", "........................", "........................", "X.......................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "........................", "...........X............", "........................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> garden = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "................I........", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "........I................", "....................I....", ".........................", ".........................", ".........................", ".........................", ".........................", "........I................", ".........................", ".I......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 64, 68, 84, 92};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> garden = {"..........................", "..........................", "..........................", ".....X....................", "..........................", "..........................", "...............X..........", "..........................", "..........................", "..........................", "..........X...............", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", "..........................", ".........................I", "....................I.....", "..........................", "..........................", "..........................", "..........................", "..........................", ".........................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {82, 92};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> garden = {"...........................", ".........I.................", "...........................", "...........................", "...........................", ".......X...................", "...........................", "...........................", "...........................", ".....X.......X.............", "..............I............", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "...........................", "..........................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 52};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> garden = {"............................", "............................", ".....I.............I........", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", "............................", ".I..........................", "............................", "............................", "............................", "..................I.........", "............................", ".................I..........", "............................", "............................", "............................", "............................", "............................", "............................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18, 44, 72, 80, 84};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> garden = {".............................", ".............................", "....................X........", "...............X.............", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", ".............................", "...................X.........", ".............................", ".............................", "....X........................", ".............................", "............X................", ".............................", ".............................", ".............................", "............................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> garden = {"..............................", "..............................", "..............................", ".............................I", "..............................", "..............................", "..............................", "............................I.", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".................I............", "..............................", "..............................", "..............................", "........I...............I.....", "..............................", "..............................", "..............................", "..............................", "..............................", ".........................X...."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66, 76, 98, 106, 108};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> garden = {"...............................", "...............................", "...............................", "....................X..........", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", ".X.............................", "...............................", "...............................", "...............................", "................X..............", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "...............................", "........................I......", "...............................", "...............................", "...............................", "............................X..", "...................I...........", "..............................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 110};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> garden = {"................................", "................................", "................................", "................................", "................................", "................................", "................................", "..........................I.....", "................................", "................................", "......I.........................", "...X............................", "................................", "................................", "................................", "................................", "................................", "................................", "................................", "....................X...........", "................................", "................................", "................................", "................................", ".....................X..........", "................................", "................................", "................................", "................................", "................................", "........X.......................", "................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 76};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> garden = {"................X................", ".................................", "..X..............................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "..............X..................", ".................................", ".................................", ".................................", ".......................I.........", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", ".................................", "..........................X......", ".................................", ".................................", ".................................", ".................................", "......................X.........."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {82};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> garden = {"..................................", "..................................", ".....................X............", "..................................", "..................................", "..................................", ".........................X........", "..................................", "..................................", "..................X......X........", "..................................", "...........X......................", "..................................", "..................................", ".......................X..........", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", "..................................", ".................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> garden = {"...................................", "...................................", "...................................", "..............................X....", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "...................................", "......................X............", "...................................", "...................................", "........X..........................", "...................................", "...................................", "...................................", "...................................", "...................................", ".................................X.", "...................................", "...................................", "...................................", "...X...............................", "...................................", "...................................", "...................................", "................................I..", ".........................X.........", "...................................", "...................................", "...................................", "..................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> garden = {"....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....X.....I.........................", "....................................", "........X...........................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "..............................X.....", "....................................", ".....X..............................", ".............................X......", "....................................", "....................................", "....................................", ".............................X......", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "....................................", "...................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> garden = {".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".......X.............................", ".................X...................", ".....................................", "...........X.........................", ".....................................", ".....................................", ".....................................", ".....................................", "...................................I.", ".....................................", ".....................................", ".....................................", "...........................X.........", ".....................................", "....................X................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", ".....................................", "..................................X..", ".....................................", ".....................................", ".....................................", "....................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {112};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> garden = {"......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "..........................X.........X.", "..................X...................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......X...............................", "......................................", ".............................X........", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "......................................", "....................X.................", "......................................", "......................................", "......................................", "....................................X.", "......................................", "......................................", "......................................", "......................................", "......................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> garden = {".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "................................X......", ".......................................", ".......................................", ".................................X.....", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "......................X................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", ".....I..................X..............", "..........................I............", ".......................................", ".......................................", ".......................................", ".......................................", ".......................................", "...........X...........................", ".......................................", "......................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 116};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> garden = {"........................................", "........................................", "..................................I.....", "I.......................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "..................................I.....", ".....I..................................", "........................................", ".......I................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "..........I.............................", "...........I............................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "........................................", "............................I...........", "........................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 40, 48, 76, 80, 124, 126, 148};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> garden = {".........................................", ".........................................", ".................X.......................", ".........................................", ".........................................", "..................................X......", ".........................................", ".........................................", ".........................................", ".........................................", "................................X........", "........X................................", ".........................................", ".........................................", ".........................................", "...........I.............................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", "......................................X..", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".....................................X...", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".........................................", ".....................................X..."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> garden = {"..I.......................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................I...............", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", ".........................................I", "..........................................", "..........................................", "..........................................", ".............I............................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "..........................................", "......I...................................", "..........................................", "...........I..............................", "..........................................", "..........................................", "........................I.................", "..........................................", ".........................................I", "..........................................", ".........................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 72, 94, 98, 124, 130, 160, 164};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> garden = {"...........................................", "...........................................", "...........................................", "...........................................", "..I........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", ".........................................X.", "...........................................", "...........................................", "...........................................", "..........................X................", "...........................................", "...........................................", "...........................................", "...........................................", "................................X..........", "X..........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", ".........................X.................", ".I........X................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "...........................................", "..........................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 78};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> garden = {"............................................", "............................................", "............................................", "............................................", "I...........................................", "............................................", "..............................X.............", "............................................", "............................................", ".....................I......................", "............................................", "..............I.............................", "............................................", "............................................", "............................................", "............................................", "............................................", "...I.....................................I..", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "........................................I...", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", "............................................", ".........................................X..", "............................................", "............................................", "............................................", "............................................", "............................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 44, 66, 80, 120, 144};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> garden = {".I...........................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".........X...................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", "............................X................", ".............................................", ".............................................", ".....................................I.......", ".......X.....................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".......................................I.....", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", "..........................................I..", ".............................................", ".............................................", ".............................................", ".............................................", ".............................................", ".................................I...........", "..........................................X..", ".............................................", ".............................................", ".............................................", ".............................................", "............................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 114, 132, 152, 164};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> garden = {"..............................................", "...X..........................................", "..............................................", "...................I..........................", "..............................................", "..............................................", "............I.................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", ".................................I............", "..............................................", "...................................I..........", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", ".....................................I........", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", "..............................................", ".........................I....................", "..............I...............................", "..............................................", "......................X......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 54, 98, 106, 146, 160, 164};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> garden = {".........I.I...................................", "...............................................", "........................................I......", "...............................................", "...............................................", "...............................................", "....................................I..........", "...............................................", ".........................I.....................", "...............................................", "...............I...............................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "..........................................I....", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", ".I.........I...................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "...............................................", "..............................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 26, 54, 74, 88, 104, 122, 138, 142};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> garden = {"................................................", "................................................", "................................................", ".I..............................................", "................................................", "................................................", "........................I.......................", "................................................", "................................................", "................................................", "................................................", "......I.........................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "........X.......................................", "................................................", "..........X.....................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "................................................", "........I.......................................", "................................................", "................................................", "................................................", "................................................", "................................................", "..........I.....................................", "................................................", "................................................", "................................................", "................................................", "................................................", "..........................I.....................", "................................................", "...I............................................", "................................................", "................................................", "................................................", "................................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12, 38, 74, 94, 110, 142, 158};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> garden = {".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "....................................X............", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................X...............", ".................................................", ".................................................", ".................................................", "...............................................X.", "............................................X....", ".................................................", ".................................................", ".................................................", ".................................................", ".......................................X.........", ".........................................X.......", ".................................................", ".................................................", ".................................................", "............................................X....", ".................................................", "...............I.................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "..........................................X......", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", ".................................................", "................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> garden = {"....................................X.............", "..................................................", "..................................................", "..................................................", "..................................................", "...................................X..........I...", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................................X............", "................................................X.", "..................................................", "..................................................", "........X.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................................X.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....I............................................", "...........................X......................", "..................................................", "..........I.......................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {102, 118, 198};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".X................................................", "..................................................", "..................................................", "..................................................", "............................X.....................", "..................................................", "..................................................", ".......X.................................X........", ".........X........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................X........................", "..................................................", ".......I..........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...I..............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............X....................X.............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {74, 98};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> garden = {"..................................................", "..................................................", "I.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................I..............", "..................................................", "..................................................", "...................................X..............", "..................................................", ".......X..........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............I....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........I......................................", "..................................................", ".............I....................................", "..................................................", "..................................................", "..................................................", "......................................X...........", "..................................................", "..................................................", "..................................................", ".............................I....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 74, 92, 96, 140, 156};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................I...........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....X......X......................................", "......I...........................................", "..................................................", "..................................................", "................X.................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................I.........................", "..................................................", "..................I...............................", ".........................X........................", "..................................................", "............................................X.....", "..................................................", "..................................................", "........X.........................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 78, 130, 134};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X.....I......................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................X................................", "..................................................", "..................................................", "......X...........................................", "..................................................", "..................................................", "..................................................", ".........................X........................", "..................................................", "..................................................", "..................................................", "...........................X......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................X....", "..................................................", "..................................................", "...................X..............................", "....X............................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................I......................", "...I.......................X......................", "............X.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................X........................", "....................................X.............", "..................................................", "..................................................", "..................................................", "................................I.................", "..................................................", "............I.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................................X..", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................X................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 82, 116, 132};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> garden = {"........................................I...I.....", "..................................................", "..................................................", "............I.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................X.................", "..................................................", "..................................................", "..................................................", "..........I.....I.................................", "..................................................", "..................................................", "..................................................", "I................................................X", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................X................................", "..................................................", "..................................................", "..................................................", ".........................................I........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 66, 74, 82, 130, 138, 194};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> garden = {"..................................................", "......................................I...........", "..................................................", "..................................................", "..................................................", ".............................................X....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........I.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....I.......................I.....................", "..................................................", ".................I................................", "..................................................", "..................................................", "I.................................................", "..................................................", "..................................................", "..................................................", "........X.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................X...X....", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 80, 90, 108, 130, 150};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............X.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X...........X................................", "..................................................", ".................X................................", "...X.........................................X....", "...........X......................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................X..........................", "..................................................", "................X.................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................X..................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................I..............", ".....................................I............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............I.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............I...................................", "..................................................", "...............I................................I.", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................I....", "...............................I..................", "..................................................", "...................I..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................................I......", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 86, 92, 116, 136, 148, 152, 168, 174, 192};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................I.............................", "..................................................", "..................................................", "..................................................", "..............................................I...", "...............................................X..", "..................................................", "..................................................", "..................................................", "....X.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................I....", "..................................................", "..............................................I...", "X.................................................", "...........I......................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................X........................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 116, 166, 170, 174};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................X.......................", "......................X...........................", "..................................................", "..................................................", "..................................................", ".........................X........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........X.........................................", "..................................................", "..................................................", "...........................................X......", "..................................................", "..................................................", "........................................I.........", "..................................................", "..X...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........X.......................................", "..................................................", ".........................................X........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............X.................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {138};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................I.........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", ".......................I..I.......................", ".................I................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............I........................X..........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................I....", "..................................................", "I.................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62, 88, 90, 92, 96, 104, 116, 146, 184};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..I..I............................................", "..................................................", "..................................................", "..................................................", "..........I.......................................", "..............................................I...", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................X..............................", "..................................................", "............................................I.....", "..................................................", "..................................................", "..................................................", "........................I.........................", "....................I.............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................I........................", "..................................................", "..................................................", ".................................................I", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 26, 44, 92, 100, 134, 144, 176, 188};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> garden = {".......................X.................I........", "..................................................", "..................................I...............", ".................................X................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............X....................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................................X.....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....X.............................I...............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................................X...", "..................................................", "..................................................", "..................................................", "..................................................", "...............................................I..", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 90, 148, 184};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> garden = {"..................................................", ".............................X....................", "..............................................X...", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................X.................", "..................................................", ".X................................................", "..................................................", "..................................................", "...............................................I..", "..................................................", "...X..............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................I...............................", ".......................X..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............I.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................................X......", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 114, 172};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................X................................", "..................................................", "..................................................", "..I...............................................", ".........................................X........", "X.................................................", "..................................................", "......X...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........X........................................", "..................................................", "..................................................", "..................................................", "..........X.......................................", "..................................................", "..................................................", "...................................X..............", "..................................................", "..................................................", "..................................................", "..................X...............................", "...................I..............................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 132};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................I................................", "..................................................", "............................I.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................I.........", "...............................................I..", "..................................................", "..................................I...............", "..................................................", "..................................................", "..................................................", "...............................I..................", "..................................................", "..................................................", "..................................................", "...............................I..................", "..................................................", "..................................................", "........................I.........................", "..................................................", "...................I..............................", ".........................................I........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 74, 112, 120, 128, 132, 138, 150, 154, 166};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> garden = {"..................................................", "....................................X.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........I.......................................", "..................................................", "...................I..............................", "..................................................", "..................................................", "..................................................", "..................................................", "...X.........................I....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................I................", "..................................................", "............I.....................................", "...X..............................................", "..................................................", "..................................................", "..................................................", "......................X...........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................X.............................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 74, 104, 128, 136};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "....................X.............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....X................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "....................................X.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................X.......................", "..................................................", "..................................................", ".........X........................................", "..................................................", "..................................................", ".......................................X..........", "..................................................", "..................................................", "............X..................................X..", "..................................................", "..................................................", "..................................................", "..................................................", "..............................X...................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................I...................", "......I...........................................", "......X...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................I...........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...I..............................................", "..................................................", "..................................................", "................................................X.", "..................................................", "........X.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................I...............................", "..................................................", "..................................................", "............................X.....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................X................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 72, 92, 128, 150};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................I...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "X.................................................", "..................................................", ".....................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...I..............................................", ".........................................I........", "..................................................", "..................................................", "..................................................", "..................................................", "................I.................................", "..................................................", "..................................................", "..................................................", "...................................X..............", "..................................................", "..................................................", "..................................................", "..................................................", "......................................X...........", "..................................................", ".........I.............X..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 90, 102, 124, 170};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", "..................................................", "..........................I.......................", "..................................................", ".....................................X............", "..............................X...................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................I................", "..................................................", "..................................................", ".................X................................", "..................................................", "..................................................", "..................................................", "...................I..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................X.", "..................................................", "..................................................", "..................................................", "..................................................", "....................X.............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................X......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 70, 108, 122};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> garden = {"...............I..................................", "................................I.................", "..................................................", "..................................................", "..................................................", "............I.....................................", "..................................................", "..................................................", "..................................................", "................................................X.", "........I.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............I..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................I........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............X.....................................", "...........................................X......", "..................................................", "..........................I.......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 44, 54, 64, 98, 144, 170};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "......X..................I........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................................X...........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................I.................................", "..................................................", "...............I..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................X...........................", "..................................................", "..................................................", "..................................X...............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................................X......", "..................................................", "........X.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................X................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60, 70, 88};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", ".....X............................................", "..................................................", "..................................................", "..................................................", "............................................X.....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............X.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................X..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................X........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................X....................", "..................................................", "..................................................", "..................................................", ".................I................................", "..................................................", "..................................................", "...........................................X......", "..................................................", "..................................................", "..................................................", "..............I...................................", "..................................................", "..................................................", ".....................I............................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {116, 130, 144};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...I..............................................", "..................................................", "........I.........................................", "..................................................", "..................................................", "..........................................X...I...", "..................................................", ".................................................I", "..................................I...............", "..................................................", "..................................................", "..................................................", "...................................I..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................I................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................I.................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 40, 104, 114, 136, 144, 158, 172, 200};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> garden = {"..........................X.......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....X.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......X...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......X..........................................", "..................................................", "..................................................", "..X...............................................", "..................................................", "...................X..............................", "..................................................", ".......................X..........................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................................X..", "...............X..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X............................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................X.", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................I....................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................X..........................", "..................................................", "...................I..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........X......................................", "..................................................", "..................................................", "..X..............I................................", "..................................................", "..................................................", "..................................................", "................I................................I", "..................................................", ".............X...................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88, 108, 136, 156, 208};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................X.", "......................................X...........", "..................................................", "..................................................", "...................I..............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........I....................................X....", "...........................X......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................X................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...X..............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........X......................................", "..................................................", "..................................................", "..................................................", "..........................................I.......", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58, 80, 178};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "...............I..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................X.", "..............................I...................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................I........", "............................I.....................", "..................................................", ".............................................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................I..................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................................X...", "..................X...........................I...", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {40, 94, 108, 130, 142, 168, 182};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> garden = {"..................................................", "......X...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................X.................", "..................................................", "..................................................", "..................................................", "..........................................I.......", "..................................................", "..................................................", "..................................................", "..................................................", "...................................X..............", "..................................................", "....................................I.............", "..................................................", "..................................................", "..................................................", "..................................................", "..........X......X................................", "..................................................", "................................I.................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X............................................", "..................................................", "..........X......................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120, 134, 152};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> garden = {"........................X.....I...................", ".......I..........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........I......................................", "..................................................", ".....I............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..I...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...................................I..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....I............................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 42, 50, 60, 100, 124, 172};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> garden = {"........................I.........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....I..........................................I.", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....I.............................................", "..................................................", "..................................................", "..........................................I.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................I..........X.....", "....X.............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".I................................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26, 48, 86, 128, 140, 166, 188, 210};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", ".......X..........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......X...........................................", "..................................................", "..................................................", "...............I..................................", "..................................................", "..................................................", "..................................................", "..........................................I.......", ".........I........................................", "..................................................", "..................................................", "..................................................", "........I.........................................", "..................................................", "................I.................................", "..........................................X.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................................I.............", "..................................................", "..................................................", "..................................................", "..................................................", "........I.........................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 78, 90, 96, 130, 170, 182};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................................I...........", "..................I...............................", "..................................................", "..................................................", "..................................................", "..................................................", ".................I.......X...............I........", "..................................................", "..................I...............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................................I............", "..................................................", "..................................................", "..................................................", "..I...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", "..................................................", "..................................................", "..I..............................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 82, 86, 118, 134, 148, 176, 186, 198};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> garden = {"..................................................", "......................................I...........", "..................I...............................", "...........................................X...I..", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................................X...........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....X......I.....................................", "..................................................", "..................................................", "..................................................", "......X...........................................", "..................................................", "...........................I......................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 84, 104, 182, 208};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> garden = {"..........................I.......................", "..................................................", "............................................II....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................II............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................I....................", "..............................................I...", "..................................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................I.........", "..................................................", "..................................................", ".....................I............................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 70, 80, 114, 118, 146, 150, 160, 186, 192};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> garden = {".............................X....................", "..................................................", "..............................I...................", "..................................................", "..................................................", ".........................I........................", "..................................................", "..................................................", "..................................................", "............................................I.....", "..................................................", "..................................................", "..................................................", "...................................X..............", "..................................................", "..................................................", ".............................................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........................X......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................................I.I........", "..................................................", "...........................I......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64, 74, 110, 126, 172, 174, 190};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".I................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................X.", "..................................................", "................................................X.", "..................................................", "................................X.................", "..................................................", "..................................................", "..................................................", "........................X.........................", "..................................................", "............X.....................................", "..................................................", "..................................................", "..................................................", ".....................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................X...............................", "..................................................", "........................................X.........", "..................................................", "..................................................", "...................................X..............", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> garden = {"........X.........................................", "..................................................", "..................................................", "...............................................I..", "..................................................", "..................................................", "..................................................", "................................................X.", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................I.", "..................................................", "...............................................I..", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................X..........................", "..................................................", ".........X........................................", "..................................................", "..................................................", "..................................................", "......I...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................I...............................", "..................................................", "..................................................", "....I............................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {78, 114, 134, 162, 198, 210};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> garden = {".........X........................................", "..................................................", "....................................X.............", "..................................................", "..................................................", ".................I................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................................I.", "..................................................", "..................................................", "..................................................", "................................I.................", "...........................I......................", "..................................................", "..................................................", "...........................I......................", "..................................................", "...........................I......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................I", "..................................................", "..I...............................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {48, 90, 96, 100, 110, 142, 192, 196};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".......................I..........................", "..................................................", ".....................I............................", "..................................................", "..................................................", "..................................................", "........I.........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....I............................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................I....................", "..................................................", "..................................................", "...............................................I..", ".I................................................", "..................................................", "..................................................", "........I.X.......................................", ".....................................I............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 68, 76, 96, 120, 126, 138, 158, 178};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........X.........................I..............", "..................................................", "..................................................", "..................................................", ".........................................I........", "..................................................", "..................................................", "........................................I.........", "..................................................", "..................................................", "..................................................", "......X...........................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................X.............................", "...............X..................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".I............................I...................", "..................................................", "..................................................", "..................................................", "..................................................", "...................X..............................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 118, 124, 172, 210};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> garden = {"................I.................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................................X.............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "X.................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".X................................................", "..................................................", "..................................................", "..........................................X.......", "..........X.......................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "............................X.....................", "..................................................", "...........................................I......", "..................................................", "..................................................", "...............................................X..", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................X", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {36, 164};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> garden = {"..................................................", "..................................................", "...............................I..................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................I............................", "..................................................", "..................................................", "..................................................", ".................................X................", "..I...............................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................I.............................", "..................................................", "..................................................", "..................................................", ".............................I....................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................X................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..............................X...................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......X...........................................", "..................................................", ".......................X..........................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {34, 72, 82, 102, 110};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> garden = {"..................................................", "..................................................", ".......I..........................................", ".................................................I", "..................................................", "..........X.......................................", "..................................................", "..................................................", "..................................................", ".........................................X........", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................................I.........", "..................................................", "..................................................", "................................................X.", "............................X.....................", "..................................................", ".X................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................I.I..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 108, 158, 170, 188};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "...............................X..........I.......", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "......................I......................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................................X............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "X.................................................", "..................................................", ".........................................I........", "................................I.................", "..................................................", "..................................................", "..................................................", "............X................................I....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 118, 124, 168, 178, 190};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> garden = {"..................................................", ".......................X..........................", "..................................................", "...................................X..............", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".....................X............................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...........I......................................", ".X................................................", "...........X......................................", "..................................................", "..................................................", "..................................................", "..........................I.......................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "....................X.............................", "..................................................", "..................................................", "......................................X...........", "..................................................", "..................................................", "..................................................", "..................................................", "..........................................X.......", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70, 112};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........X........................................", "..................................................", "..................................................", "..................................................", "..................................................", ".........................................X........", "..................................................", "..........X.......................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..........................X.......................", "..................................................", "..................................................", "..................................................", "...................X..............................", "..................................................", ".....................I.X..........................", "..................................................", ".........I........................................", "............X.....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................................X.................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {78, 102};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> garden = {"..................................................", "..................................................", "..................................................", "..................................................", ".....I............................................", "..................................................", "..................................I...............", "..................................................", "..................................................", "..................................................", "............I..................I..................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "........................I.........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "...............................I..................", "...............I..................................", ".......................I..........................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "................I.................................", "..................................................", "..................................................", "..................................................", "...................I..............................", ".................................................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {22, 48, 86, 92, 110, 134, 136, 142, 160, 168};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> garden = {".X"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> garden = {"X", "I"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> garden = {".I.X.", ".....", "...IX", ".....", "....."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 14};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> garden = {"IXX", "...", "...", "..X", "...", "X.X"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> garden = {"..I", "II.", ".II", ".I.", "..I"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 8, 10, 12, 12, 14, 16};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> garden = {"X.", ".X", "..", ".X", "..", ".X", "..", "..", "..", "XX", "..", "X."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> garden = {".......", ".......", ".......", "X......", ".......", ".......", ".I.....", ".......", ".......", ".......", ".......", "......."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> garden = {"..", "..", "XI", "..", "..", "..", "..", "XI", ".X", "II", ".."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 20, 26, 28};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> garden = {"........I.....", "..............", "..............", "..............", ".......II.....", "..............", "..............", "..............", ".....X........", ".............X"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 28, 28};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> garden = {"...........X.......", "...................", "...................", "...................", "...................", "...................", ".......X...........", "...................", "...................", "...................", ".......X...........", "...................", "...................", "...................", "..................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> garden = {".", ".", ".", "I", "I", ".", ".", "X", ".", "X", ".", "I", "X", ".", ".", "X", ".", ".", ".", "."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10, 12, 28};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> garden = {".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", "....X..................", ".......................", ".......................", ".......................", ".......................", "......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> garden = {".............", ".............", "X....X.......", ".............", ".............", ".............", ".I...........", ".............", ".X...........", ".............", "..........X..", ".............", ".............", "..........X..", ".............", ".............", "....X........", ".............", "............."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> garden = {"..", "..", ".X", "..", ".X", "..", "..", ".X", "..", ".X", ".I", "..", "..", ".X", "..", "..", "XX", "..", "..", ".X", "..", ".X"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> garden = {"............I.................", "..............................", "..............................", "..............................", "..............................", "............I.................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", ".......I......................", "..............................", "..............................", "..............................", "..............................", "..............................", "..............................", "..................I.......I...", "...I...X......................", "..............................", ".........................I....", "............I................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 38, 52, 68, 76, 88, 102, 104};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> garden = {".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", ".........................", "...............X.........", "X........................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> garden = {".....XII............"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 18};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> garden = {".................", ".............I...", ".................", ".................", ".................", ".................", "...............X.", ".................", ".................", ".................", ".................", ".................", ".................", "....X............", ".................", ".................", "..........X......", ".................", "..............X..", ".................", ".................", ".......X.........", ".................", ".................", "....X............", ".................", ".................", ".................", ".................", ".X.....X.........", ".................", ".................", "..X..............", ".................", "................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> garden = {"....................", "....................", "....................", "....................", "..........X.....X...", "....................", "....................", "....................", "....................", "..X............X....", "....................", "....................", "................I...", "....................", ".......X............", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "....................", "...X................", ".X..................", "....................", "...................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {60};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> garden = {"......................................", "...................II.................", "..................I...................", "......................................", "......................................", "......................................", "......................................", "......................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44, 46, 48};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> garden = {"..", "I.", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", "I.", "..", "..", "..", "..", "..", "..", "..", "..", "..", "..", ".."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 34};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> garden = {".......................", ".......................", "..........X............", ".......................", "......X................", ".......................", ".......................", ".......................", ".......................", ".......................", "....................I..", ".......................", ".......................", ".......................", ".......................", ".......................", ".......................", "......................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> garden = {"......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", "......", ".....X", "......", "......"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> garden = {".....................................I..", "..........................I.............", "..................................I.....", "........................................", "........................................", "........................................", "..............I.........................", "..........I.............................", "...X..I.................................", "..........................I.............", "........................................"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32, 40, 48, 72, 74, 90, 96};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> garden = {".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "...........I.....", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", ".................", "................."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> garden = {"....X........I..I........I.......I..X.....I.X.X..I"};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {30, 36, 54, 70, 90, 106};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> garden = {".", ".", ".", "X", "X", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "X", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "X", ".", ".", ".", ".", ".", "X", "X", ".", ".", "X", ".", "X", "X", ".", ".", "."};
    VegetableGarden* pObj = new VegetableGarden();
    clock_t start = clock();
    vector<int> result = pObj->getMinDistances(garden);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7442498&rd=10664&pm=7507
********************************************************************************
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <set>
#include <map>
#include <stack>
#include <list>
#include <queue>
#include <deque>
#include <cctype>
#include <string>
#include <vector>
#include <sstream>
#include <iterator>
#include <numeric>
using namespace std;
 
 
typedef vector <int > VI;
#define REP(i,n) for (int i=0; i<n; ++i)
#define FOREACH(it,x) for(__typeof((x).begin()) it=(x.begin()); it!=(x).end(); ++it)
#define FOR(i,p,k) for (int i=p; i<=k; ++i)
#define PB push_back
#define ALL(x) x.begin(),x.end()
#define SIZE(x) (int)x.size()
 
const int K=10;
const int MASK=1<<K;
const int N=54;
const int INF=1000000000;
int dist[N][N][MASK];
int wiersz[K];
int kolumna[K];
int typ[K];
int pola=0;
 
#define koduj(a,b,c) (((a)*N+(b))*MASK+(c))
VI q;
VI res;
 
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
 
void popraw(int mask,int d){
  int ile=0;
  REP(i,pola) if (mask&(1<<i)){
    if (!typ[i]) return;
    ile++;
  }
  if (ile==0) return;
  ile--;
  res[ile]=min(res[ile],d);
}
 
    class VegetableGarden
        { 
        public: 
        vector <int> getMinDistances(vector <string> garden){ 
          int n=SIZE(garden);
          int m=SIZE(garden[0]);
          REP(i,n) REP(j,m) if (garden[i][j]!='.'){
            typ[pola]=garden[i][j]=='I';
            wiersz[pola]=i;
            kolumna[pola]=j;
            pola++;
          }
          int ile=1<<pola;
          int dobre_pola=count(typ,typ+pola,1);
          REP(i,dobre_pola) res.PB(INF);
          n++; m++;
          REP(i,n) REP(j,m) REP(mask,ile) dist[i][j][mask]=-1;
          dist[0][0][0]=0;
          q.PB(koduj(0,0,0));
          REP(foo,SIZE(q)){
            int stan=q[foo];
            int mask=stan%MASK;
            stan/=MASK;
            int j=stan%N;
            stan/=N;
            int i=stan;
            if (i==0 && j==0) popraw(mask,dist[i][j][mask]);
            REP(ruch,4){
              int ni=i+dx[ruch];
              int nj=j+dy[ruch];
              if (ni>=0 && ni<n && nj>=0 && nj<m){
                int nmask=mask;
                if (ruch<2){
                  int gdzie=ruch?ni:i;
                  REP(x,pola) if (wiersz[x]==gdzie && kolumna[x]<j)
                    nmask^=(1<<x);
                }
                if (dist[ni][nj][nmask]==-1){
                  dist[ni][nj][nmask]=dist[i][j][mask]+1;
                  q.PB(koduj(ni,nj,nmask));
                }
              }
            }
          }
          return res;
        } 
        
 
         }; 
 
    
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/