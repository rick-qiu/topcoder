/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2887
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

class DogWoods {
public:
    double howFar(vector<int> x, vector<int> y, vector<int> diameter, int startx, int starty);
};

double DogWoods::howFar(vector<int> x, vector<int> y, vector<int> diameter, int startx, int starty) {
    double ret;
    return ret;
}


int test0() {
    vector<int> x = {0};
    vector<int> y = {10};
    vector<int> diameter = {10};
    int startx = -14;
    int starty = 0;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 23.64281561414452;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> x = {40, 15, -5};
    vector<int> y = {7, 25, 11};
    vector<int> diameter = {26, 12, 23};
    int startx = 0;
    int starty = -49;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 531.3835950099849;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> x = {3};
    vector<int> y = {3};
    vector<int> diameter = {3};
    int startx = 12;
    int starty = 12;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> x = {15};
    vector<int> y = {15};
    vector<int> diameter = {1};
    int startx = 5;
    int starty = 8;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> x = {-220, -204, -187, -11, 16, 211, -180, 87, 272, -118, -1, 16, 187, 113, 71, 217, -12, 78};
    vector<int> y = {232, -162, 60, -125, -22, -266, -120, -242, 87, -148, 50, -218, 161, -232, 249, 215, 11, -79};
    vector<int> diameter = {53, 8, 77, 74, 4, 42, 36, 31, 73, 84, 67, 59, 33, 18, 94, 87, 13, 59};
    int startx = 51;
    int starty = -255;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 3564.170613418495;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> x = {14};
    vector<int> y = {5};
    vector<int> diameter = {10};
    int startx = 0;
    int starty = -19;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 91.16341808491504;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> x = {95, 29, -86, -72, 82, -164, -131, 138, 8, 236, -248, -148, 170, -85, 135, 64, -78, -240, -210, -239, -247, 264, -140, -152, 291, -6, 227, 115, 257, 273, -37, -6, 143, -8, 95, -182, -114, -187, -176, -189, 209, 47, -105, 246, 23, 43, 107, -264, -216, -204};
    vector<int> y = {179, -289, 119, -75, 54, 128, -143, -56, -209, -281, -100, 186, 126, -167, -193, 274, 43, -14, 5, -221, -289, 206, -5, 283, 139, 45, -41, 256, 41, -132, -241, 295, 14, 182, -109, -238, -222, 48, 67, 87, -103, 212, 252, 268, -42, 124, -150, -178, 194, 149};
    vector<int> diameter = {43, 55, 64, 86, 82, 45, 34, 83, 70, 89, 44, 73, 83, 64, 32, 33, 32, 1, 51, 66, 12, 34, 37, 31, 71, 78, 26, 51, 50, 82, 21, 21, 22, 53, 37, 47, 35, 3, 1, 42, 43, 39, 78, 72, 57, 64, 42, 21, 30, 39};
    int startx = -267;
    int starty = -201;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 1636.004079011533;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> x = {70, 262, -31, 142, -221, -18, 61, 282, 158, -120, -104, 133, 113, -12, -81, -77, 222, -255, 248, -235, -216, -40, -109, 181, 273, -155, 15, -251, 297, -136, -284, -298, 49, -276, 271, 256, 213, -235, 295, 70, -155, 70, -294, -192, -99, -184, 189, -11, 118, -75};
    vector<int> y = {248, 123, 167, 139, 210, -271, 49, -154, 237, 106, -11, -39, 294, 104, -75, 88, -243, -163, 254, -72, -96, -156, -112, -138, 47, 263, 28, -242, 209, -232, 296, 235, -30, 136, -95, -143, 124, 90, -265, -255, -34, -85, 6, 41, -154, -148, -284, -80, 22, 271};
    vector<int> diameter = {61, 27, 56, 41, 65, 32, 21, 27, 25, 45, 50, 24, 23, 62, 26, 44, 32, 52, 74, 22, 30, 61, 24, 54, 58, 44, 45, 89, 50, 81, 65, 42, 34, 34, 35, 21, 62, 80, 56, 32, 34, 66, 75, 32, 48, 62, 56, 22, 61, 77};
    int startx = 179;
    int starty = 148;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 1413.0256319959615;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> x = {-189, 273, -281, 140, -139, -112, 77, -8, 252, 228, -251, -11, -210, 11, -231, 269, 291, 17, -26, -215, 98, 152, 124, 78, 52, -140, 297, -21, -76, 279, 188, -261, -209, 276, -289, -290, 167, -81, 47, 69, 176, -221, -29, 224, 216, -81, 176, 204, -160, -151};
    vector<int> y = {-95, -295, -219, 39, -267, 281, -44, -192, -34, 19, 277, -50, 197, 194, 115, 168, 226, -298, 12, 19, -211, -252, 268, -121, 78, 162, -173, 156, -193, -100, -47, -118, -150, 295, -284, -88, 189, -74, 260, 287, 265, -248, 276, 119, 113, -13, -272, -206, -155, 97};
    vector<int> diameter = {70, 51, 28, 89, 79, 56, 60, 37, 52, 63, 50, 29, 27, 43, 81, 93, 1, 1, 30, 99, 71, 35, 42, 44, 92, 95, 70, 53, 58, 32, 44, 27, 35, 79, 51, 41, 2, 2, 11, 13, 58, 26, 50, 12, 3, 28, 24, 53, 62, 35};
    int startx = 103;
    int starty = 9;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> x = {114, -248, -48, -20, 44, -180, 6, -204, -270, -119, 91, 244, -172, 177, -275, 253, 175, -238, 66, 268, 138, 32, 293, -204, -297, 192, 41, -6, -105, -60, -211, -65, 62, -113, 31, 211, -293, 114, -158, 95, 148, 263, 141, 28, 239, 38, -181, -288, 221, 126};
    vector<int> y = {-89, 20, -287, 149, -3, -68, 22, -147, 192, 120, 279, -81, -290, 30, -165, 172, 273, -229, 174, 273, -196, -262, 46, 168, 128, -195, -200, -58, -290, -6, -8, 284, -68, 232, -128, 140, -68, 101, -215, 15, -236, -202, 210, -288, 221, 106, 254, 41, -282, -299};
    vector<int> diameter = {57, 25, 46, 66, 42, 78, 29, 68, 30, 71, 34, 97, 67, 89, 58, 40, 60, 83, 34, 73, 36, 31, 35, 77, 96, 68, 61, 43, 42, 68, 45, 31, 47, 50, 74, 47, 65, 69, 75, 61, 26, 40, 62, 21, 32, 60, 45, 38, 54, 45};
    int startx = -16;
    int starty = 32;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 50.53156658741588;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> x = {105, -183, 251, -288, -109, -45, -186, -23, 179, -266, 0, 253, -248, 261, 272, -264, 55, 67, 115, 291, -9, -239, -71, 202, -80, -228, -142, 298, 49, -82, 24, 33, -156, 201, 248, 181, -297, -114, 84, 141, 120, 104, -66, 126, 103, -202, -135, 182, 150, 241};
    vector<int> y = {-11, 3, 177, -182, -168, 144, 103, -173, -289, 12, -55, 52, -222, -15, -192, 130, 263, -134, -243, -260, 295, -90, 239, -178, -15, 241, 163, -137, -176, 76, 226, -275, -46, 29, 254, -72, -143, -60, 99, -115, 238, -213, -114, -223, -177, -298, 193, 136, -177, -260};
    vector<int> diameter = {25, 37, 58, 41, 77, 41, 43, 60, 63, 30, 62, 33, 70, 58, 31, 53, 48, 48, 22, 31, 37, 56, 98, 23, 80, 80, 30, 87, 35, 93, 22, 76, 41, 45, 53, 51, 26, 32, 70, 45, 58, 23, 39, 23, 23, 60, 26, 58, 50, 35};
    int startx = -161;
    int starty = 32;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> x = {-264, 265, 289, 247, -147, 174, -128, -177, 91, -283, 7, 143, -135, -100, 210, 108, -99, 166, -10, -288, 37, -46, 80, 52, -200, 97, 63, -230, 284, -86, -235, -137, -186, 265, 242, 165, -294, -28, 181, 102, -50, -186, -110, 274, 180, 153, 295, 281, 50, -33};
    vector<int> y = {1, 98, -3, -241, -106, -67, 191, 28, 258, 297, 38, -287, 282, 137, 81, 106, -219, 246, -60, -164, -176, -286, 205, -58, 156, 11, -290, -257, 49, 236, 87, 227, 299, 216, -212, -142, -112, 233, -204, -90, 164, -176, -39, -159, 7, 137, -87, 296, 136, -3};
    vector<int> diameter = {86, 38, 37, 28, 79, 47, 25, 89, 68, 60, 74, 90, 47, 69, 71, 40, 66, 64, 38, 24, 52, 67, 39, 34, 70, 80, 21, 88, 31, 21, 40, 43, 37, 68, 30, 45, 75, 62, 44, 81, 29, 59, 66, 43, 37, 25, 68, 63, 28, 29};
    int startx = 164;
    int starty = 103;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 989.5402927906854;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> x = {269, 166, -94, -132, -211, 9, -89, -54, -246, 29, 148, -141, 203, -67, 62, -25, 247, -111, 259, 193, -142, -142, -266, 216, -87, 272, 19, -182, -7, -247, 106, -129, 70, -264, -197, 239, -239, -198, -248, 197, 104, 258, -48, -1, -99, 47, -258, 171, 71, 208};
    vector<int> y = {11, 268, -93, 242, -131, 235, -232, 211, 126, 77, -161, -160, 37, -287, -264, -130, 179, 136, -88, 239, -31, 73, 34, -255, 291, -244, 155, 179, -220, 202, 165, -276, -144, 238, -216, 76, 295, 55, -33, -25, 291, 287, -35, -176, 75, -103, -225, 208, 24, 117};
    vector<int> diameter = {45, 46, 66, 46, 32, 68, 92, 31, 66, 92, 98, 69, 22, 26, 77, 56, 89, 68, 39, 22, 61, 37, 50, 42, 41, 53, 50, 74, 27, 28, 81, 26, 21, 45, 38, 62, 28, 27, 44, 72, 42, 66, 60, 39, 32, 34, 27, 43, 21, 25};
    int startx = -89;
    int starty = 248;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> x = {278, -151, 25, 148, -164, 261, -33, 286, -246, 142, 145, -293, 67, -45, -209, 139, -131, -19, 205, 226, -154, -291, 297, 21, -299, 113, 90, 34, 84, -184, -232, 57, 299, 211, 278, -76, -260, -128, -265, -20, 19, -182, -233, -197, 113, 201, 123, 215, 211, -208};
    vector<int> y = {245, -73, 230, -57, -297, 185, -176, 34, 32, 26, 234, -132, -194, 27, -72, -162, -208, -270, 157, 291, 177, 151, 141, -94, -276, -82, 245, 22, 96, -176, 279, -276, -255, 95, -125, 244, -253, -5, -56, 110, -230, 31, 160, 72, 171, -204, -245, -143, -269, 254};
    vector<int> diameter = {55, 62, 82, 40, 98, 61, 91, 61, 57, 31, 71, 81, 69, 70, 37, 60, 28, 48, 22, 22, 92, 37, 38, 75, 26, 43, 31, 78, 71, 53, 21, 65, 93, 44, 64, 81, 34, 65, 62, 84, 32, 23, 60, 43, 69, 66, 37, 43, 40, 40};
    int startx = -280;
    int starty = 70;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 1083.9982491357457;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> x = {-28, 75, 74, -170, 255, -159, 20, 207, 220, -230, 208, 5, -220, 144, 129, -268, -206, -97, 259, -68, -284, 18, 1, -93, -65, 217, 292, -265, -133, -101, -266, 101, 182, -56, 255, -185, -176, -116, -45, 17, 63, -98, 227, 178, 77, -208, -153, -203, -261, 110};
    vector<int> y = {117, 113, -100, -292, -77, -209, -158, 24, -202, -30, 142, -241, 213, -221, 112, 126, -116, 279, 179, -92, -64, 198, 161, -148, 25, -291, 243, -146, 200, -43, 276, 136, -17, -199, 28, 40, 227, 15, -12, 280, 188, 147, 270, -158, -2, 263, 155, -80, -211, 164};
    vector<int> diameter = {78, 26, 98, 86, 90, 48, 46, 30, 40, 34, 89, 50, 38, 75, 28, 23, 30, 68, 33, 63, 88, 37, 23, 21, 24, 84, 59, 38, 31, 45, 33, 23, 57, 61, 62, 92, 30, 37, 33, 75, 37, 74, 74, 28, 75, 40, 28, 37, 31, 34};
    int startx = -244;
    int starty = 95;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> x = {122, 76, -207, -194, 91, -175, -61, 195, -116, -291, -287, -203, 230, -18, -34, 189, 292, 165, 54, -59, -27, -77, 143, -29, 277, 20, 209, -102, 25, 296, 268, 75, 237, -110, -271, -232, -126, 202, 29, -279, 92, 189, 105, -140, 192, -8, -279, 72, -242, 285};
    vector<int> y = {202, 99, -254, -28, 228, 48, -7, 270, 149, -40, -196, -154, 11, 167, -103, 135, 197, 39, -239, -141, -264, 232, -229, 80, -9, -48, -88, -52, -164, -235, 144, 200, 289, -166, 48, 95, 36, -24, -105, -113, -57, 213, -295, 268, 73, -44, 271, 36, -91, 100};
    vector<int> diameter = {45, 93, 90, 54, 26, 41, 61, 41, 68, 86, 85, 65, 36, 43, 54, 58, 57, 29, 27, 36, 87, 62, 78, 61, 44, 28, 55, 40, 65, 83, 32, 30, 45, 37, 44, 57, 29, 25, 46, 43, 51, 24, 71, 41, 33, 27, 81, 28, 34, 29};
    int startx = 44;
    int starty = -32;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = -1.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> x = {-166, -296, -88, -145, 124, 198, 107, -231, -63, -34, 247, 262, 92, 200, 73, -27, -271, 237, 222, 124, -241, -269, -244, 0, 30, 195, -258, 51, -82, -86, -103, 173, 231, 28, -169, -150, -178, -198, 120, 11, 36, 47, 81, 58, 71, 236, -151, -199, 173, 122};
    vector<int> y = {159, -121, 43, -113, 105, -188, 8, -57, -150, -65, 227, -194, 292, -267, -141, 125, 181, -38, -128, -268, -161, -104, -239, -279, 270, 58, 43, 204, -26, 208, -294, 242, 125, -87, 252, 0, 29, -272, -177, 17, 88, 40, 57, 139, -31, 9, 209, 207, -132, -93};
    vector<int> diameter = {61, 33, 86, 51, 96, 32, 61, 90, 77, 66, 94, 67, 52, 57, 43, 34, 76, 64, 22, 89, 89, 27, 64, 64, 42, 72, 72, 31, 29, 75, 32, 56, 61, 59, 50, 31, 21, 37, 46, 44, 22, 40, 28, 33, 43, 22, 41, 26, 48, 36};
    int startx = 285;
    int starty = 179;
    DogWoods* pObj = new DogWoods();
    clock_t start = clock();
    double result = pObj->howFar(x, y, diameter, startx, starty);
    clock_t end = clock();
    delete pObj;
    double expected = 2022.7639916975368;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5872&pm=2887
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define VAR(a,b) typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
#define ALL(f,w) ({ bool _ok=true; f _ok=_ok && (w); _ok; })
#define EXISTS(f,w) (!ALL(f,!(w)))
typedef long long LL;
const int INF = 1000000000;
typedef vector<int> VI;
template<class T> inline int size(const T&c) { return c.size(); }
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); }
template<class T> inline vector<T> makeV(const T&x,const T&y) {
  vector<T> v(2); v[0] = x; v[1] = y; return v;
}
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) {
  vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return v;
}
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
template<class T> string i2s(T x) { ostringstream o; o<<x; return o.str(); }
vector<string> split(string s,string del=" ") {
  s+=del[0];
  string w;
  vector<string> res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
typedef double coord;
 
struct Point {
  coord x,y;
  Point() {}
  Point(coord x,coord y):x(x),y(y) {}
};
 
Point operator+(const Point &A,const Point&B) { return Point(A.x+B.x,A.y+B.y); }
Point operator-(const Point &A,const Point&B) { return Point(A.x-B.x,A.y-B.y); }
Point operator*(coord c, const Point &A) { return Point(c*A.x,c*A.y); }
coord operator^(const Point&A,const Point&B) { return A.x*B.y-A.y*B.x; }
coord operator*(const Point&A,const Point&B) { return A.x*B.x+A.y*B.y; }
coord len2(const Point&A) { return A*A; }
 
double len(const Point&A) { return sqrt(len2(A)); }
//
// line AB with CD
Point linecut(Point A,Point B,Point C,Point D) {
  double t = - ( ((A-D)^(C-D)) / ((B-A)^(C-D)) );
  return A + t*(B-A);
}
 
 
///////////////////////////////////////////////////////////////////
 
double PI = atan(1.0)*4.0;
 
double EPSILON = 1e-9;
 
struct Circle {
  double x,y,r;
};
 
vector<Circle> circles;
 
double dist;
Point poz;
 
void intersect(double r1, Circle c, Point &p1, Point&p2) {
  double r0 = c.r;
  double x0 = c.x;
  double y0 = c.y;
 
  double d = x0*x0+y0*y0;
  double p = sqrt(((r0+r1)*(r0+r1) - d) * (d-(r1-r0)*(r1-r0)));
  
  p1.x = x0/2 - x0*(r0*r0 - r1*r1)/(2*d) + y0*p/(2*d);
  p1.y = y0/2 - y0*(r0*r0 - r1*r1)/(2*d) - x0*p/(2*d);
 
  p2.x = x0/2 - x0*(r0*r0 - r1*r1)/(2*d) - y0*p/(2*d);
  p2.y = y0/2 - y0*(r0*r0 - r1*r1)/(2*d) + x0*p/(2*d);
}
 
double cdist(Point a, Point b) {
  double d = len(a);
  double ca = (b*a)/d/d;
  double sa = (b^a)/d/d;
  if(sa>=0.0) return acos(ca) * d;
  else return (2*PI - acos(ca)) * d;
}
 
bool go() {
  double R = len(poz);
  Circle bestc;
  Point bestp;
  double bestv = 1e100;
  FOREACH(it,circles) {
    Circle c = *it;
    double d2 = sqrt(c.x*c.x + c.y*c.y);
    if(d2 + c.r > R + EPSILON && d2 - c.r < R - EPSILON) {
      Point p1,p2;
      intersect(R,c,p1,p2);
      double d = cdist(poz,p1);
      if(d < bestv) { bestc=c; bestp = p1; bestv=d; }
      d = cdist(poz,p2);
      if(d < bestv) { bestc=c; bestp = p2; bestv=d; }
    }
  }
  if(bestv > 1e99) throw 0;
  dist += bestv;
  poz = bestp;
  Point center = Point(bestc.x,bestc.y);
  if(len(center) - bestc.r > 10.0) {
    Point p2 = (len(center)-bestc.r)/len(center) * center;
    dist += cdist(p2 - center, poz - center);
    poz = p2;
    return false;
  }
  else {
    Point p1,p2;
    intersect(10.0, bestc, p1,p2);
    double d1 = cdist(p1 - center, poz-center);
    double d2 = cdist(p2-center, poz-center);
    if(d1<d2) { dist+=d1; poz = p1; }
    else { dist+=d2; poz=p2; }
    return true;
  }
}
 
struct DogWoods {
  // MAIN
  double howFar(vector <int> x, vector <int> y, vector <int> diameter, int startx, int starty) {
    Point p(startx,starty);
    if(len(p) <= 10.0+EPSILON) return 0.0;
    circles.clear();
    REP(i,size(x)) {
      Circle c;
      c.x = x[i]; c.y=y[i]; c.r=diameter[i]*0.5;
      circles.push_back(c);
    }
    poz = p;
    dist = 0.0;
    try {
      while(!go()) ;
      return dist;
    }
    catch(int) { return -1; }
    return -2;
  }
 
 
  
///////////////////////////////////////////////////////////////////
 
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/