/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6763
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

class BikeRiding {
public:
    int countRoutes(vector<string> paths, vector<int> startPoints, int endPoint, int n);
};

int BikeRiding::countRoutes(vector<string> paths, vector<int> startPoints, int endPoint, int n) {
    int ret;
    return ret;
}


int test0() {
    vector<string> paths = {"011", "001", "000"};
    vector<int> startPoints = {0, 1};
    int endPoint = 2;
    int n = 5;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> paths = {"01000", "00100", "00010", "01001", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 4;
    int n = 10;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> paths = {"010", "001", "001"};
    vector<int> startPoints = {0};
    int endPoint = 2;
    int n = 10;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"000111000000000", "000111000000000", "000111000000000", "000000111000000", "000000111000000", "000000111000000", "000000000111000", "000000000111000", "000000000111000", "000000000000111", "000000000000111", "000000000000111", "000000000000001", "000000000000001", "000000000000000"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 14;
    int n = 1000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> paths = {"010", "100", "001"};
    vector<int> startPoints = {0};
    int endPoint = 2;
    int n = 10;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> paths = {"000111000000000000000000000000000000000000", "000111000000000000000000000000000000000000", "000111000000000000000000000000000000000000", "000000111000000000000000000000000000000000", "000000111000000000000000000000000000000000", "000000111000000000000000000000000000000000", "000000000111000000000000000000000000000000", "000000000111000000000000000000000000000000", "000000000111000000000000000000000000000000", "000000000000111000000000000000000000000000", "000000000000111000000000000000000000000000", "000000000000111000000000000000000000000000", "000000000000000111000000000000000000000000", "000000000000000111000000000000000000000000", "000000000000000111000000000000000000000000", "000000000000000000111000000000000000000000", "000000000000000000111000000000000000000000", "000000000000000000111000000000000000000000", "000000000000000000000111000000000000000000", "000000000000000000000111000000000000000000", "000000000000000000000111000000000000000000", "000000000000000000000000111000000000000000", "000000000000000000000000111000000000000000", "000000000000000000000000111000000000000000", "000000000000000000000000000111000000000000", "000000000000000000000000000111000000000000", "000000000000000000000000000111000000000000", "000000000000000000000000000000111000000000", "000000000000000000000000000000111000000000", "000000000000000000000000000000111000000000", "000000000000000000000000000000000111000000", "000000000000000000000000000000000111000000", "000000000000000000000000000000000111000000", "000000000000000000000000000000000000111000", "000000000000000000000000000000000000111000", "000000000000000000000000000000000000111000", "000000000000000000000000000000000000000111", "000000000000000000000000000000000000000111", "000000000000000000000000000000000000000111", "000000000000000000000000000000000000000001", "000000000000000000000000000000000000000001", "000000000000000000000000000000000000000000"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 41;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 4782969;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> paths = {"0010000001", "0001001000", "0000100100", "0000000000", "0101000100", "0100000000", "0001000000", "0100000000", "0000001000", "0000000000"};
    vector<int> startPoints = {0, 3, 6};
    int endPoint = 1;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> paths = {"0010010001", "0001001000", "0000100100", "0000000000", "0101000100", "0100000100", "0001000000", "0100000000", "0000001000", "0000000010"};
    vector<int> startPoints = {4, 5, 7};
    int endPoint = 2;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0000000100", "0000011000", "1000001100", "0000110100", "1000000100", "0000001100", "1000000000", "0000000000", "0000110101", "0000101100"};
    vector<int> startPoints = {2, 3, 9};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> paths = {"0010010111", "0000001001", "0000001001", "0100000010", "0010000110", "0110001001", "0000000000", "0100001001", "0000001000", "0000001000"};
    vector<int> startPoints = {0, 3, 4};
    int endPoint = 9;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0010010001", "0001101000", "0000100100", "0000000000", "0101000100", "0100000100", "0001000000", "0100000010", "0000111000", "0000000010"};
    vector<int> startPoints = {0, 7, 8};
    int endPoint = 6;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0010100110", "0001100100", "0101101010", "0000000000", "0000001101", "0001000011", "0001000100", "0001000001", "0001100000", "0000101000"};
    vector<int> startPoints = {1, 4, 8};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> paths = {"0000000010", "0000001000", "0100001100", "1000000000", "0011001010", "0100100000", "0001000000", "1001000010", "0000000000", "0000001100"};
    vector<int> startPoints = {0, 2, 8};
    int endPoint = 1;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> paths = {"0010000010", "1010100000", "1000100010", "1010001000", "0001000010", "1111001000", "0000100000", "0100010100", "0000000000", "1111001000"};
    vector<int> startPoints = {1, 4, 9};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0000000010", "1000100010", "0000000010", "1100000010", "1010100000", "0110000000", "0000100101", "1100110100", "0000000000", "1110000000"};
    vector<int> startPoints = {0, 3, 8};
    int endPoint = 4;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0010110101", "0001001000", "0101101110", "0000000000", "0101000110", "0100100110", "0001000000", "0101001000", "0101001100", "0000001110"};
    vector<int> startPoints = {8};
    int endPoint = 9;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> paths = {"0001110111", "1011110101", "0001110111", "0000011110", "0001011110", "0000001110", "0000000000", "0000001000", "0000001100", "0001011010"};
    vector<int> startPoints = {7, 8, 9};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> paths = {"0001100000", "1011010010", "1001111010", "0000000000", "0001000000", "1001100000", "1001110000", "1111011001", "1001101000", "1111101010"};
    vector<int> startPoints = {1, 2, 9};
    int endPoint = 6;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> paths = {"0011111011", "1010011011", "0000111011", "0000100011", "0000011000", "0000001000", "0000000000", "1110100000", "0000111001", "0000111000"};
    vector<int> startPoints = {6, 7};
    int endPoint = 3;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> paths = {"0100110110", "0000000000", "0101100110", "0100110010", "0100010000", "0100000000", "1111100011", "0001110010", "0100110000", "1111010110"};
    vector<int> startPoints = {1, 2, 8};
    int endPoint = 9;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> paths = {"0000000000", "0010110110", "1000000000", "0110101110", "1010010000", "1000000000", "0110000111", "1010110011", "0010110001", "1000000000"};
    vector<int> startPoints = {3, 7, 8};
    int endPoint = 0;
    int n = 112;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> paths = {"0100000000", "0000000000", "0100000000", "1110100001", "1110000000", "1111100001", "0001110111", "1111110010", "1011110001", "1110000000"};
    vector<int> startPoints = {8, 5, 0};
    int endPoint = 1;
    int n = 1000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> paths = {"0110011111", "0000000101", "0100000101", "1110111111", "1010011011", "0110001100", "0010000111", "0000000000", "0110000001", "0000000100"};
    vector<int> startPoints = {3, 5, 1};
    int endPoint = 9;
    int n = 111;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> paths = {"0100000100", "0000000100", "1100000100", "1000000000", "1011000111", "1110100011", "1110110011", "0000000000", "1111000000", "1111000010"};
    vector<int> startPoints = {6, 3, 0};
    int endPoint = 7;
    int n = 143;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"0000001001", "1011111011", "0000001001", "0010001101", "1011001110", "1001100111", "0000000000", "1010000001", "1011001101", "0000001000"};
    vector<int> startPoints = {4, 7, 2};
    int endPoint = 6;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> paths = {"00011110001111110101110000101111100100110010110111", "00100000011000000000000000000000000000000000100000", "00010000011000000000000000000000000000000000100000", "00000000010000000000000000000000000000000000000000", "01100101011011100011101110011010100100100000100010", "00000001000000100001001010010000000000100011100000", "01011100011110110111111110011111110100010000010111", "01100000001000000001001100000000000000100000000000", "11101111001101011111101011011111110101110110110111", "00000000000000000000000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "01111101010010000000001010111100110100110000100011", "01010101000000000011001110010000000000000011000000", "00110001011000100011100110010000000000000001000000", "00100001000000010011001100000000000000000010000000", "00010000010000000000000000000000000000100000000000", "11110110010110110111011011111111010001110001010101", "00010001011011100001111110111011110000110001110111", "01100000011000000001000100000000000000000010000000", "01100000011000010000000000000000000000000000100000", "00110101011010110011000110010000000000000011100000", "01111100010011100011001110011010110000100001000010", "01000000001000000001000100000000000000100000100000", "01010000000000010001000000000000000000000000000000", "01000001001000110010001100000000000000000011100000", "11001110011101010110111010101111110101110011010011", "01011100011011100011100110001010110100110011100011", "00000001011000110010001010000000000000000010000000", "01100101001011110001101110000000000000100010100000", "00001100011001100001110110111010010100010010100011", "01110101010011110001100110001000100000000010100000", "01101100011110010011011100111110110100110001110111", "01100100001011000011100010001000000000000011100000", "01000000001001010011001110001000100000110010100001", "11001110100111001110110111100111110111111111111111", "00110100001010110010100000000010100000000011100000", "11101110110111101111110111011111110101110111010111", "11111111000110110111110010111111110100110011110111", "00010000011000000000000000000000000000000000100000", "00000000000010010010101000011010000100000001100001", "11100111101111011110011111111111010111110101110111", "00011101011101101101110111101111100101010011010101", "00110000011000010000000000000000000000100000100000", "00100001001000000001001100000000000000000010100000", "00000000000000000000000000000000000000000000000000", "00111101000111110010010100111110010100010001000011", "10011111101100111101110111011111010011011101110111", "01111000011111010001111010111110110100110001110001", "01100101011010000001101010011010100100010011000001", "01100101000011100010101110011010000000000011100000"};
    vector<int> startPoints = {41, 16, 47, 26, 48, 33, 27, 24, 1};
    int endPoint = 10;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01111111111100100000111011111011111111010011011000", "00000000000100000000000100000000000000000000000000", "00000010000000000000000000000000001000000000000000", "01101000100100000100000110111001010011000011101001", "00000010000000000000100100000000000000000000000000", "01100000000001000000110011101000011100000111101001", "00000000000000000000100000000000000000000000000000", "00000000000000000000110011001000001000000101001000", "00000101000101000000110101101000111110000101001101", "01110101100100100100011111001111111011010100001101", "01011111110101100100001011100101110011010011111000", "00000000000000000000000000000000000000000000000000", "10110011011101100010001011101111110111010010011101", "01101001000000000000000011101000011100000111101000", "01100011100101000100011111111111101111010011101001", "10111101111011101110011101011110011110110111111100", "10111100111110100110111001111111111001010111011100", "01100011100001000000110010111001010111000111000101", "10111110111100100100100111111111100101010111011101", "10011111111010111110111001100101111101110111011101", "00000000000000000000000000000000000000000000000000", "00000010000000000000000000000000001000000000001000", "00111111000101000100110111100001111111000001101101", "00000010000100000000100000000000000000000000000000", "01001010000100000000100100000000000000000000000000", "01000010000100000000110000000000001000000100001000", "00100001000000000000110101001000000000000101001000", "01101011000001000000000011101000111000000111101101", "01101000000000000000110000000000001000000000000000", "01011111100001000100001111110011111111010111000101", "00010101100001000000011010010001011111010110101101", "01101111100001000000100010111000111111000111101101", "00001010000000000000110111101000010000000001001000", "01001011000100000000010100000000001100000100001000", "00001010000000000000100010000000000000000000000000", "01101000000000000000010001001000001000000001001000", "01001001000101000000010110110000110001000100100101", "00001101000101000000100101110000101100000101000101", "11010111111111101110101011111111100001010111010101", "00111110000100000000110011010000011111000110101101", "11000001101111111111101111110111111101110100110001", "01101010000100000000100100000000001000000000000000", "01001001000000000000010011100000111100000000101000", "00100010000100000000110111001000001000000100000000", "01000000000000000000110101101000010100000001001000", "00111101110001100100011001101111111011010101100101", "01000010000100000000000110000000000000000000000000", "00100011000001000000010101100000111100000001100001", "11011111111111111011011001010111110111111111111101", "00101011000000000000010010001000111100000110101000"};
    vector<int> startPoints = {40, 19, 15, 9, 29, 3, 28, 46, 1};
    int endPoint = 20;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00101010000101110101101110110001111111110010111110", "10001010010101110011110110110001111111110100101000", "00000010010000000000000000100000000000001110000100", "11001101101010111001111111011111111001111011001111", "00100000010101000100110000110001011011011010011010", "11101010111111111010111111110111101111101101100111", "00000000000001100011000000110000000000000010000100", "11101110101010111100101101111111111011111111011011", "11101010001100011110111111010111110101110111111110", "00000000000001100001000000110000000000001100000010", "11100010010101110101111111110001011111110000101010", "00100010000001100111011000110000000100011110100100", "11101000101100111100111111110111111111100011101110", "00000000000000100000000000110000000000001100000000", "00000000000000000011000000110000000000010100000000", "00101000000101100000111011110001111101011000101010", "11101010001000110111101010000011101011111110111100", "00100000000000000010010000110000000100011110000110", "00000000000000000000000000010000000000001010000000", "00000000000000000000000000000000000000000010000000", "00100010010100100111011001010000101110010110111110", "00100000000000100000000000000000000000001110000100", "00100010010001100001010000100000000100011010000010", "00101000010101000100111011100001111011001000110110", "00001000000000000110101001000000111011011000100010", "00000010010000100100010000110000000000000100000110", "00000000000000000010000000000000000000010100000000", "00000000000000000001000000000000000000001010000000", "11001110111111111101111111010111111111101111111011", "11101010001001111100101111110011111110101101111110", "11101000001101010110110101010001000101101000111110", "00000010000101100011011001100000000011000000100100", "00000010010100100101010001010000000100011110100110", "00000010010000100100110001110001100111010110101110", "00100010010101000111010000100000100000001010111010", "00000010010000100011000000000000000000001110000000", "00100000000100000010000001110000100100001010110110", "00100010000001000111001001100000101110011110101100", "00101010010101010100111110000001111011010010111110", "00000000000000000000000000010000000000001000000000", "00000000000000000000000000000000000000000010000000", "00000000000000000001000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "11100010011100111101010111000011111111110010111010", "00100010010000100111001000000000000000010110000110", "00100010000100000110000001100000100000000110100010", "00100010010101100100001001110000000100010100110000", "00000000000000000000000000000000000000010000000010", "00000000000001100000000000000000000000011000000000", "11101010101111111000111110100111111011101111111010"};
    vector<int> startPoints = {3, 8, 30, 0, 23, 37, 44, 6, 47, 39};
    int endPoint = 42;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00000000000000000011000000000100000000000010000000", "00001110010100011011100000000100000100110110100000", "10001011110100101101110011001010111110110111001110", "01100110110011111111111111011110111111010110101111", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00001100000000000011000000000100000000100001000000", "01001110110100010010101000000000000101110111000111", "01000110010100010001100000000100000100110110000000", "10000000000110001011000010000000000001000000100000", "10110011110101101101111101011010111011010111001111", "10001100000010001000000010000100000001100001100000", "00001100000000000000000010000100000000100001000000", "11101011010100101100111011011110111010010111001100", "01001011110010010000000000010100000100110101101111", "10001010000100001010000010000100000001100010100000", "00001010000010000011000010000100000000100001000000", "11001111110100110010111010000100010111010110101111", "00001000000010000001000010000000000000100001000000", "00000000000000000000000000000000000000000000000000", "00000110000110010011000000000100000100100011000001", "01001000100100111001101010000100000100110110101101", "00001000010110011011000010000100000101100001100000", "01101001110111111111111000011110011111100100101111", "00000000000000000000000000000000000000000000000000", "11001000110110111101110000010010110100100111101111", "10110110111001111110111111011110111000010110101111", "01000111110110010011101010000000000101010111101101", "11000111110110111100111011010110110010110101101111", "00001100000000000000000000000000000000100010000000", "11001011110000110110111010010000010111000111101110", "01111101011101111111111111111110111010110000101111", "10000111110010111011111010010110010010110110001111", "11001001110110110000111010010000000001110011001110", "01000101110100111101110001011110100110010101101111", "10000010000110001001000010000100000000100011100000", "11001101110110101010110000000100010100010001101111", "00001010000010000011000010000000000000100011000000", "00000000000000000001000000000000000000000000000000", "00000100010000011000001010000100000100100011100001", "11111111111001110101110111111011111111010111001111", "00000110010100000011001010000100000001010011100001", "00000100000000000001000000000000000000100000000000", "00000000000000000000000000000100000000100010000000", "00000000000010001011000000000100000000000000000000", "01110001111001111111101101111111111111101101101111", "11000100110100011011101010000000000100110111100101", "00001010100110011011100010000000000101110111100001", "01001110110110010011101010000000000101110111101101", "10001110010000011010001000000100000101000011100000"};
    vector<int> startPoints = {31, 3, 36, 33, 48, 47, 35, 37, 0, 43};
    int endPoint = 4;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01101011111100010111010111011111001111001100101110", "00101110011110011001010100010011111111011011101100", "00000100111100111011000001110100110011101000101000", "11101100011110111111011111110111011111100111000110", "00100100011010110001010101111101111111111011101100", "00000000000000000000001001100000011000110011100000", "00000001000000000000000000001000101010000010100000", "00000000000000000000001000001000101010000010000000", "00000101010000011010000001100100111000111011100000", "00000010000000000000001001100000010010000001100000", "00000111100000011010001001101100111010000000000000", "00000111111010101001001001100100110011011011001000", "00000111110000111010001000111000110000011011100000", "10111000111110111110111010100111001110011101010111", "00000100111000010010000001001100110000111011001000", "00000101000000000000001000101000111000100010100000", "00000111010000010010001001000100111000100011100000", "01101001111110101011011100111011000111111010101100", "00000000010000010000001000100000101010110011100000", "00000011110010101010000000110100000011101001001000", "11111100111110111110011101010111000111101110101110", "00100110111110101011001100001000101111011011101100", "00000000000000000000000000001000101000000010100000", "00100011010110111001000000110000111000111011001000", "01101101111110111101010100011111001001001111101100", "00000000000000000000000000000000001010000000100000", "00000011000000000000001000000000000010010011000000", "00000110111000111010001001100100111000001000000000", "00000000000000000000000000000000000000000000000000", "00000100010000010000001001101000101010010011000000", "00101110010110111001011100101101111101111001001100", "00100000111000011001001100111100110011101001001000", "00000000000000000000000001001000001000000000000000", "00000001000000000000001000001000000010000000100000", "00000000000000000000000000001000000000000000000000", "00100111110110101011001101110101011001010011000100", "00000000000000000000000000000000000000000000100000", "00000111110010111000001001111000010010111001100000", "00000000000000000000001001101000010010010011100000", "00000011000000000000000001000000101010000010100000", "00000111010000001010000001100100011010110010100000", "01101111111010111111011101011111111111111001101100", "00000000000000000000000000001000001010000000100000", "00000010000000000000001001000000111000010010100000", "00000000000000000000000000001000000000000000000000", "11111011101110111111111111010111111101111110000111", "00000011111000011010001000100000101010101011100000", "00000110111110111011001001111001011011011000001000", "01001111111110111111011111111111110111111111001100", "11111101101110111111111111111011010110010101001110"};
    vector<int> startPoints = {24, 1, 47, 2, 9, 6, 7, 32, 34};
    int endPoint = 44;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00001000001101110101100000101011000000100010010010", "00100000000000000000000000000000000000000000100000", "00010000001000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "01000101011010100001001100011010100000000000000010", "00000001000000000000001010000000000000100010100000", "01011100010100110111111000011110010000010000000101", "00100000001000000001000100000000000000000000000000", "10101111001101001110001001010011110101110100110110", "00000000000000000000000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "00111101010010000000001000111100110000010000100011", "00000101000000000010001100010000000000000001000000", "00010001011000100010100100010000000000000000000000", "00000000000000000001001000000000000000000010000000", "00010000000000000000000000000000000000100000000000", "10000110010110010111011011111101010001110000010101", "00000001001001000000110010101001110000010001110111", "01000000001000000001000100000000000000000010000000", "00000000000000010000000000000000000000000000000000", "00110101001010110010000000000000000000000010100000", "01101100010011100011001000011010110000000001000010", "01000000001000000001000100000000000000000000100000", "01010000000000000001000000000000000000000000000000", "00000001001000110010001100000000000000000011000000", "10001110001101000000010010001101110001010010010001", "01001100001010000001000010001000110000110011100011", "00000001011000000000000010000000000000000010000000", "00000100001011010000101010000000000000000000000000", "00001100001001100000100100111010010100000010000001", "01110101010011110001100100000000100000000010100000", "01001000001010010010001100010110010100110001110011", "01100000001010000010100010001000000000000000000000", "01000000000001000011001100001000100000010000100001", "11001110100011001100100111100111100111101111111111", "00000000001000110000100000000000000000000000100000", "10001110100110001111100011011111010101110101010110", "11101011000110100110110010101111100000110011110111", "00000000000000000000000000000000000000000000100000", "00000000000010000010101000010010000000000000100000", "11000110101110001010001101111100010111010100110111", "00001100011101001101010001101111100101000000010101", "00010000011000010000000000000000000000100000100000", "00100001001000000001000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00111101000111000000010100011100010100010001000010", "10001111101100101101110100010111000011011101010101", "01111000000011010001110010110110010100110000100001", "01100100010010000001100010001010100100010011000001", "01100101000011000000100010000000000000000010100000"};
    vector<int> startPoints = {8, 6, 47, 21, 39, 24, 22, 18, 2, 10};
    int endPoint = 44;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 49385635;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> paths = {"00000000100000000000000000000000000000000000000001", "10110100111111100100001111001010101100101111111000", "00001010101001101000001001000000110110000000100110", "00001000001100010000000000001010000010000000100010", "00000010101101010001000000000010100100010010000110", "10110010001111000001011111100010011001101100010011", "00000000000001100001000001000001000010000000000000", "11111110010111000000111110111100111101100100001010", "00000000000000000000000000000000000000000000000001", "00011100101001001111011110100001000001010011111001", "00000010100001101001000000000010000010000000000111", "00000000000001100000000000000001000100000000100000", "10011000000000010010010001000000110110001001000101", "10000000000000000000000000000010000100000010000000", "10000000100000000000000000000000000100000000000001", "10000010000001101011000001000000000010000010000010", "10000000000000000000000000000010000000010000000000", "10000000100010000001001001000000110001000001100001", "10000000000000100000000000000000010000000000000100", "00000000000000001000000001000000000100000010000000", "11001110010101001111001110100110011110000101011110", "10111010001101001000001000000000100000011000100011", "00000000101001101011000000000000000000000000000110", "00000000000100111111011001100001111010111000100001", "00101010001010100110001100100010101011110100110100", "00000000000000100000000000000000010000000000000000", "10100010000101111001001001000000110000111000100010", "01000100011001001110100110101111000111111101111000", "00000010000100011011001001000001000010000000100010", "11111110010101001101001110101001110000101011011101", "00000000000000000000000000000000010000010000000001", "00000000000000101010000000000000000000000000000110", "00000010001001100001001000000000000100000010100100", "00000000000000000000000000000000000100010000000001", "00101010000010100100010001101000100011000001100101", "00000000000000000000000000000000000000000000000000", "00000000000001000000000001000011000000000000000010", "00100000000100001001011000101011100000101001000110", "00000000100001000000001000001010110000000010000000", "00000000000000000000000000000000000000000000000001", "00011010100001010010000001001000100010000000000101", "00011010001110010100010100101000101101011011010000", "00000000000000000000000000000000010000010000000100", "00110010000101100000011000101001000100101010000001", "10000000000000101010000000000001010100000010000100", "10101010100111011100000101101000101011001001100001", "10110100000110110101010111000011001001000100110101", "00000000000000000000000000000000000100010000000001", "00000000100000100000000000000000000000000000000101", "00000000000000000000000000000000000000000000000000"};
    vector<int> startPoints = {9, 46, 34, 17, 40, 31, 48, 49};
    int endPoint = 35;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 22736791;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> paths = {"00000000000010000000000000000100000000000000000000", "00000001011001110100000000001011100111010000111011", "01000110111010111111110001101000101111001000100100", "00000000110110000001000100000010100001110000001010", "01110011001000011100101001111001001100001101100111", "10000000000000100000001000000000000010000000000000", "10000000111000010001000101101110101001000010111001", "00000000000000100000000000000000000000010000000001", "00000100010011100000001000000000000001010000000001", "00000000000010000000001010000100000000000000010000", "00010100100000100000000101010000110010100000001010", "00000000000010100000010000000000000001000000000001", "00000000000000000000000000000000000000000000010000", "00000000000000000000000000000000000000000000000000", "00000000010000000000000000000000000010000000000000", "00000101000100100100000010110110001111100010001000", "01010111011100010110000100101111111100101000111010", "10010000010011100000000011000111100001000010001000", "00000001100100100000000000000100001000100000000001", "00000000010000000000010000000000100011100000010001", "11010010011101111010010101101010010100011010111001", "10000000000001000000000000000100000000000000010000", "00000000000010000000000000000000000000000000000000", "10000001000000100000011000000100000000000000010000", "00000000000011000000000000000100000000000000000000", "00000000100101100000001110000000011001110000000001", "10000000001010000101000100010111100110100010000011", "10000001100000000000011100000100001011010000000010", "00010001001010110001011011100011110110010010000001", "00000000000001000000000000000000000000000000000000", "10000101100101000000011111010101111011010000001000", "00000000010001100000000000000100000001000000000001", "00000000000010100010011100010000001000100000000000", "00000000000000000000000000000100000010000000000000", "10000100100000000000011000000000000011010000000011", "00010100111000100011000111010000101000100000000000", "10000000000001000000000000000100000000000000000000", "00000000000010100000000010000100000010010000010001", "10000101110000100000000100000000010000010000000010", "10000000000001000000001000000000010010000000000000", "01010100011011010010000011111010000101100000001011", "01110111011001001111100001101100000001001000101101", "00000101000101100001011100010010010001110000001010", "01100111101110011101111100010001000010101110101100", "10000001101000010011000000001011010101110010001001", "00000000000000000000000000000000000000000000000000", "10000101000111000000010001010001001001000000010001", "01010010001001011101111001011101001101111010110001", "10000001100100100000001010000001000010000000000001", "00000000000001100000010000000100000010000000010000"};
    vector<int> startPoints = {4, 43, 1, 17, 30, 31, 21, 33, 0, 45};
    int endPoint = 13;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 880081180;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> paths = {"01001000010001000000001000010000000110000110011110", "00000000000011001110100100000010000000001000000001", "00000000000000000000000000000000000000000000000000", "01000110000001000000100001110010110010000011000111", "00100000010010000011100011000000000010101000001000", "00100000000000011100000001000010100100010110010011", "11001100000001000101001001010010000100000101111101", "11011110000011000010010000100000110111110110000101", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000100000", "01111111000111001110011000101100110010010001010110", "11010111000001000000011000101110110011000111100011", "00000000010001000000000111000000000000001000001000", "00000000110000000001001100000000000000010000001001", "10010011101100010011110010111000111011101110010101", "00000000000000000000000000000000000000000000000000", "00000000100010000000000100000010000000010000000000", "00000000100000000000000000000000000000000000000000", "00000000000000010000001111000000000000000000100000", "00100000010000000000001000000000000000010000000001", "00000000010010000100000110000010000000000000000001", "10110000000000010101101000100110110011110110110111", "00100000100000000100000011000000000000000000101000", "00000000000000000000000010000000000000000000000001", "00000000100000000000000000000000000000000000100000", "00000000000000010000000000000000000000000000000000", "11100010000000011011100111010000000100011010110110", "00101100100011011010000100000010100010101111101001", "11011111000010010001111000110010000001000110011110", "10100100000010010000100101110000100100110110001010", "00100000100001000000001010000000000000010000000000", "10011101011110111111011101111100101111101111010010", "00001000010010000001001000000000000100000110110011", "00001110010010001001101000110110100110100011001000", "01010011101110000100111000101110110001101011000110", "00001000000001011100101000000010000000000100010001", "01100000000011000101000101000000000000011000000001", "11111100000011000100000101110110010000001101110111", "01000000000011000100101100000000000000010000101001", "00000000010000000000000000000000000000000000000000", "00100000010001000111000101000000000000010000001000", "00001000000001010010000010000010000010100000001000", "01001000100000000000000101000000000100101101010011", "01000000100010000001001101000010000010011000101001", "00000000000000000000000000000000000000000000000000", "01101000000001001010100100000010000000100000000001", "00000000100000000100000000000000000000000000000000", "01001100100010000010001100000000000100001101110001", "01001000110011000001100110000010000110011001001001", "00000000100000010100000011000000000000000000000000"};
    vector<int> startPoints = {28, 3, 27, 35, 43, 4, 23, 49, 25, 24};
    int endPoint = 8;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 145195452;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> paths = {"00010010000001000100100000000000100000000000000100", "00100010011000001101100010100100100111010111000111", "00000000100010000000000000000000000000000000000000", "00000000100010000000001000000100001000000000000000", "00000000000000000000000000000000000000000000000000", "10000010000010001011001111101010100100010101001001", "00100000100001000100000000000000000000000010000100", "00101010100000000000101101000000100000100010000110", "00001000000000000000000000000000000000000000000000", "10100001100010000100000101000000001000000011000000", "10000001100100000000101101100000001000110011001000", "10100010110000000100000000000000000101000000000100", "00001000100000000000000000000000000000000000000000", "00000000100000000000001000000000000001000000000000", "01000111011010011111100111100010001100110101011011", "11101111001111001111000001101010000010101011011011", "00001010011000000111001001101100101101011001011000", "00000000000001000000000000000000000000000000000000", "00010010010100000101001000101000000110010011001010", "00100001010100000100101100000100000000000000000010", "00000000000010000000000000000000001001000000000000", "11100100110010111111000010010010100100111101001101", "00000000000000000000100000000000001000000000000000", "00110010000000000000100000000100000000000010000110", "00010001011110001010001100101100100001111001011100", "00110000100000000000000000000100100000000000000100", "00010011010011000100100100000000000110000010010110", "00001101111101011011100110101010101000111110011111", "00000000010010000101000000100000101000100001000000", "00000000000000000000000000000000000000000000000000", "01011011010100001011000010001100100101101101000001", "11000100001011110111110000110110010101111100111011", "00100000000010000100000000000100000000000000000000", "11001110100110111011110010111010000011011101100110", "00000000000000000000000000000000000001000000000000", "00100001100001000000001100000100100000100011000000", "10101010000000000000000100000000101000000011000100", "00000000000010000000000000000000000000000000000000", "00001000000000000100100000000000000000000010000100", "00011000010110000000000000001000001101100000000000", "00011011011101000110000100001000000111010001011000", "10100011101101001111001111100000000010011000010001", "00010000000000000000000000000000001000000000000000", "10010011100011000000000001000100100001100000000100", "11001111001111110011111110011110100110001101011111", "00010000000010000000101101000000001011000010000110", "10100010000101000000000100000000000000010000000000", "00000000000000000000000000000100000000000000000000", "00010000000000000000000000000000100001000000000000", "10010011001101001011000111001000001000100010011010"};
    vector<int> startPoints = {33, 21, 27, 16, 40, 11, 36, 0, 38, 29};
    int endPoint = 4;
    int n = 880446885;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 880446879;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> paths = {"00001000001101110101100000101011000000100010010010", "00100000000000000000000000000000000000000000100000", "00010000001000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "01000101011010100001001100011010100000000000000010", "00000001000000000000001010000000000000100010100000", "01011100010100110111111000011110010000010000000101", "00100000001000000001000100000000000000000000000000", "10101111001101001110001001010011110101110100110110", "00000000000000000000000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "00111101010010000000001000111100110000010000100011", "00000101000000000010001100010000000000000001000000", "00010001011000100010100100010000000000000000000000", "00000000000000000001001000000000000000000010000000", "00010000000000000000000000000000000000100000000000", "10000110010110010111011011111101010001110000010101", "00000001001001000000110010101001110000010001110111", "01000000001000000001000100000000000000000010000000", "00000000000000010000000000000000000000000000000000", "00110101001010110010000000000000000000000010100000", "01101100010011100011001000011010110000000001000010", "01000000001000000001000100000000000000000000100000", "01010000000000000001000000000000000000000000000000", "00000001001000110010001100000000000000000011000000", "10001110001101000000010010001101110001010010010001", "01001100001010000001000010001000110000110011100011", "00000001011000000000000010000000000000000010000000", "00000100001011010000101010000000000000000000000000", "00001100001001100000100100111010010100000010000001", "01110101010011110001100100000000100000000010100000", "01001000001010010010001100010110010100110001110011", "01100000001010000010100010001000000000000000000000", "01000000000001000011001100001000100000010000100001", "11001110100011001100100111100111100111101111111111", "00000000001000110000100000000000000000000000100000", "10001110100110001111100011011111010101110101010110", "11101011000110100110110010101111100000110011110111", "00000000000000000000000000000000000000000000100000", "00000000000010000010101000010010000000000000100000", "11000110101110001010001101111100010111010100110111", "00001100011101001101010001101111100101000000010101", "00010000011000010000000000000000000000100000100000", "00100001001000000001000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00111101000111000000010100011100010100010001000010", "10001111101100101101110100010111000011011101010101", "01111000000011010001110010110110010100110000100001", "01100100010010000001100010001010100100010011000001", "01100101000011000000100010000000000000000010100000"};
    vector<int> startPoints = {8, 6, 47, 21, 39, 30, 27, 24, 22, 2};
    int endPoint = 10;
    int n = 31982602;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 31982602;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> paths = {"00110000000101011100110011100010100001011010000000", "10011000100101010101110010100011100000110011100000", "00010000000000000000000000000100000100100000000000", "00000000000000000000000000000100001001100000000000", "00000000000100000100100000000110110001110000001001", "11011010110001000101000011000000110110011101000011", "00110000000000001001000001100110000100100100000000", "00100010010000000101010000000000000000000110000100", "10011000010100000101000001000000010100111000101101", "00100010000001001010010001000110001100010110000000", "11100101110010101100101111011000111011011010110101", "00010000000000000000100000000000000000000000000000", "11001101010000111010100111111011100101111010001110", "00000000000000000000000000000000000000100000000000", "01011111100100011110000110011100111011011110001110", "00000001010100001001010001000100000100110001000100", "00000000000000000010000000000000001001000100000000", "00010000000000000010100000100001001101000001000000", "00000000000001000000100000000000000100000000000000", "00100000000100001000000000000001000000000100000000", "00000000000001000000000000000000001000100000000000", "00110000000100001011000001100010000001000001000000", "11101100110010101001100101111010101111000111001010", "11100111100100011000100011000010110011101110100011", "00000000000000001010100000000100100000010100000100", "00010000000100001001000000000011000000000000000000", "00000000000001000000000000000000000001000100000000", "11001111010001001110000100101111100000100001101011", "01011101100100000100010100000011010111101110100011", "00000000000000000000000000000000000000100000000000", "00000000000100000010000000100000001000000000000000", "00110000000000000000000000100000000100000001000000", "00110010000000001000000000100110000100000001000000", "00000001010100010001110000000000001101110001101000", "00000000000000000000000000000000000000000000000000", "00000000000001000000000000000000001000100000000000", "11001011110001010010010001000000011000010010101111", "00000000000000000000000000000100000000100000000000", "00000000000000000000000000000000000000000000000000", "00010010000000001110000001000010101100000000000000", "00110010010100001101100001100100101100010000000000", "00000000000001000000100000000000000000100000000000", "00010000000000001100000000000001001000000000000000", "00010000000000000000100000000000000101000000000000", "00100011010001011100000001100000100001111010000000", "11001110000011111101001110111001001010000101001111", "10010001000000011010000011000001101000101010100100", "00100000000100000101010001100011100000000011000000", "11001000110100011101010001100100010001111010001101", "10100000000000010000000010100011100100011110101100"};
    vector<int> startPoints = {27, 28, 4, 9, 6, 31, 2, 29, 38};
    int endPoint = 34;
    int n = 22593665;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00000011001100001010010001111100000101010000011111", "00000100000100000001000100000001000100010000001011", "01000110000100010011000000000000010000000000001001", "10001111101110001010111000011101101000101100110110", "10000101001100011111000100010000101001010000010100", "00000000000000000000000001000000000000000001000000", "00000100000000000000001000000000000000100001000000", "00100110000000010011110100100001110110110001001101", "11000001001110010100010001011100111110100000110000", "11111000101101100000010110011110000010011110110001", "01000000000000000101110000100100110010000000001110", "00000010000000000000001000000000000000100001001010", "00000000000000000000001001000000000100000001000001", "00000101000010011000010001100100100100110001000010", "00011010101001001101100111010011110011011110101001", "00000000000100000010001001000000000100000001001010", "01000011000000010110100100000001110011100000000111", "01000100000010000011100100000000010000000000000110", "00000100000000000000000000000000000000100000001101", "00000000000110010010000001000000010000100000000011", "00000110000000000000001100000000000000000001000011", "00100000000100010111100000000001000100100000000111", "00010000000000000000000000000000000000000000000000", "00000000000100000010000000000000000000000000000010", "10111010101011010001010001011010011001001100111010", "00000000000000000000001000000000000000000000000000", "00100010000000000100100001000000001010000000000011", "00100001000001011100000100001001110110000001011010", "01000101001101001100100001100000000011010001011000", "01000001000010010111100001100001100001000000000000", "10111010101101011110011000010100000011111101110001", "00000010000100010000000001000000000000000000000010", "00100110000100010000011101000001010010110000000000", "00000100000000000000000000000000000000000000001011", "00100000000100000101000100000001000000000001000010", "00000000000000000000000001000000000000100001000000", "01100110000000010011100100000000000000000001001001", "00000010000110010100001000100000000000000000001000", "00000000000000000000000000000000000000000000000000", "00000000000110010000000000000000000000100001000010", "11101001101011000100101100111101111000010101110100", "10101101001110011001111000111000100001000001000000", "10011000101111010000010110001110111001101101100010", "00000000000000000000000000000000000000100000000000", "11001001001111010010001100110000100000110000011010", "00100000001010000101110000100100011111000000000010", "00000100000000000000000000000000000000100001000000", "00000000000000000000000000000000000000000001001000", "00000000000010000000000000000000000000000000001000", "00000000000000000000000001000000000000000000000000"};
    vector<int> startPoints = {9, 14, 37, 34, 39, 20, 6, 5, 49, 22};
    int endPoint = 38;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01000000100110100000001000101110011100110101101101", "00000000100101001000010000001100110010000000110100", "00000000000100010000001010011100100100100000100000", "11100000000100100110010001010000100001000001101101", "11110001100001101111000100001011101000111111011011", "00000000000001000000100010100000001100000000100000", "11111101111010011101010111001111010010111110111110", "11110000000100111110001001010000110010011110010001", "00000000000110000000000000010100100111000101010000", "11000000000000011100101001000110010100010001111100", "00000000000000000000000000100000000000000000000000", "00000000000010010000000010011100100001000101000000", "00000000000001010000001000000100000001000000000000", "00000000000000000000000000000000000000000000000000", "00000100100100001000110011110000110011110000101001", "00000000001000000000100000011100001000000000100000", "00100000000000000000100000010010001011000100010000", "01100100101000011000000000100000110010100000000100", "11100100011010110100110001000000010011100001011000", "10110101110110110110011111010001000110001100000101", "00000000000001000000000010000000000000000000000000", "00100100000101010000101000101100100001100000100000", "00000000001000000000000000000000000000000000000000", "11010101100100111000100001000010000011111011001101", "00000000000001000000000000000000000000000000000000", "01000000100010001100001010000010110101000000100100", "00000000000000000000000000000000000000000000000000", "00000100001001000000101000000100100000100000000000", "00000000001000000000101010010100000100100100100000", "00000000000000000000000000000000101000000000000000", "00000000000000000000000000000000000000000000000000", "11110101010100101110010101110000100001011010000100", "00000000000001000000000010000010001000000000100000", "00000100100010001000000010010010100011000001000000", "00000000000001000000000000100000000000000000000000", "00000000000000000000000000000000000000000000000000", "00100000001000010000100000001000001100100101110000", "00000100000001000000001000010000001100000000000000", "00000100001000000000001000000000100100000000000000", "01100100101100001000100000010000010010000000001101", "11110100110000001110001010100010100101110011010101", "00000100000000000000000000100110001000000000100000", "10010000110100011010010011111100100111010000101101", "00000000001000010000000010000100101001000000000000", "00000000000000000000000000000010000000000000000000", "00000100000100010000101010110100100000000001000000", "01100000000011011100110001111110100111000100010000", "00100000001101010000111000011100111011100001000000", "11010101010101110111010110001001000001001011010101", "00000100100101011000010001101100110010000100000000"};
    vector<int> startPoints = {25, 17, 33, 16, 45, 12, 41, 10, 20, 32};
    int endPoint = 13;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 176539;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> paths = {"01010000000110110001011110011101111001111111111011", "00000000000000000000000000000000000000000000000000", "01001000101000000000000000000000110010100001000001", "01000101101000100001111101001101100100010000110010", "00000000000100000010000000000000000000000000000000", "00001001001100000001000000100100100000100000001001", "11110000111111100110110110011001011110010110010010", "00000000000000000000000000000000000000000000000000", "00001000000100001000000000000000010000000000001001", "10011100001101101011011110000001111111010010110000", "00000001100100000011100001000110110010000000001000", "01000000000000000000000000000000000000000000000000", "00000000000000000010100000000000000000000001000000", "00010100101010111011001110010111001101111111110000", "00101000100100011000010110101111000010111000111000", "00100000000010000010100001110010010000100001000001", "00000000000000000000000000000000000000000000001000", "11110101111011110010010100111100111111111010111010", "01000000000100000000000000000000000000000000000000", "01000000000010001000000000000000010000000000000001", "00000000000000000010000000000000000000000000000000", "01100100101000011000101011001100000001111000001010", "00001000001100001010000000000110000010100001000001", "00000001001000010011111011101101110001111100000010", "01000100000000000011101001001000000000000001000010", "00000001000100000010000000100000000000000001000000", "00000000000010000000000000000000000000000001000000", "00000000000000000000100001000010100000000000000000", "00001100100100001000101000000000010010000000000000", "01001000100110000001000000110010110000100000000001", "00001001000100000000000001000000110000000000000000", "01000101101000011000111010100010100001011101010010", "00001001000000001010000000000000000000000000000000", "00000001000000000000000000000000000000000000000000", "00010100101000100010000110100011100011110100110010", "00101101101010101000101110010001110000001100110001", "00000000100010001000000001000000110000000000001000", "00001000100000000000000010001000000010100000001000", "00001001100010000000000001010000010000000000000001", "00100100101000001000001011111000000001000100010011", "00000000001110000001000010101110000011100101000001", "00100100100010011010001001010100010000100000001001", "01111000101000011011010000011111001111011100111011", "00000000000000000000100000000000000000000000000000", "00000000100000010001000101011111000011111001011011", "00001001000010001000001000111100000000100000000000", "00000000000100000000100000100000000000000000000000", "10010111011011111111110010010000001111011110111000", "00000000001000001011001000000000100000000101010000", "00000000000000000000000001000000000000000001000000"};
    vector<int> startPoints = {9, 35, 44, 23, 24, 2, 36, 27, 49, 25};
    int endPoint = 26;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 12805929;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> paths = {"01111111011111110111111110111111110100110011110111", "00110000011000000000000000000000000000000000100000", "00010000011000000000000000000000000000000000100000", "00000000010000000000000000000000000000000000100000", "01110101011011110011101110011010110100110011100011", "01110001011000110011001110010000000000100011100000", "01111101011111110111111110111111110100110011110111", "01110000011000010011001100000000000000100010100000", "11111111011111111111111111111111110101110111110111", "00000000000000000000000000000000000000000000100000", "00010000010000000000000000000000000000000000100000", "01111101011011110011111110111110110100110011100011", "01110101011000110011001110010000000000100011100000", "01110101011010110011101110010000000000100011100000", "01110001011000010011001100000000000000100010100000", "01110000011000000000000000000000000000100000100000", "11111111011111110111111111111111110101110011110111", "01111101011111110011111110111111110100110011110111", "01110000011000010001000100000000000000100010100000", "01110000011000010000000000000000000000100000100000", "01110101011010110011001110010000000000100011100000", "01111101011011110011101110111010110100110011100011", "01110000011000010011000100000000000000100010100000", "01110000011000010001000000000000000000100000100000", "01110001011000110011001100000000000000100011100000", "11111111011111110111111110111111110101110011110111", "01111101011011110011101110011010110100110011100011", "01110001011000110011001110000000000000100011100000", "01110101011011110011101110010000000000100011100000", "01111101011011110011111110111010110100110011100011", "01110101011011110011101110011000100000100011100000", "01111101011111110011111110111110110100110011110111", "01110101011011110011101110011000000000100011100000", "01110101011011110011101110011010100100110011100001", "11111111111111111111111111111111110111111111111111", "01110101011011110011101110011010100000100011100000", "11111111111111111111111111111111110101110111110111", "11111111011111110111111110111111110100110011110111", "01110000011000000000000000000000000000000000100000", "01110101011011110011101110011010100100100011100001", "11111111111111111111111111111111110111110111110111", "11111111011111111111111111111111110101110011110111", "01110000011000010001000100000000000000100000100000", "01110001011000110011001100000000000000100010100000", "00000000000000000000000000000000000000000000000000", "01111101011111110011111110111110110100110011100011", "11111111111111111111111111111111110111111111110111", "01111101011111110011111110111110110100110011110011", "01110101011011110011101110011010110100110011100001", "01110101011011110011101110011010100100100011100000"};
    vector<int> startPoints = {34, 46, 40, 36, 8, 41, 16, 25, 37, 0, 6, 17, 31, 47, 45, 11, 29, 21, 26, 4, 48, 33, 39, 49, 35, 30, 32, 28, 13, 20, 12, 5, 27, 24, 43, 14, 7, 22, 18, 42, 23, 19, 15, 38, 1, 2, 10, 3, 9};
    int endPoint = 44;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> paths = {"00000110101001001001010100110000101010110100011000", "10000110101001001001010100110000101010110100011001", "11000110111101011001111100111100111011110101011111", "11100110111111011001111101111111111011110101011111", "11110111111111011001111101111111111011110111011111", "00000010000000000001000000000000000000000100000000", "00000000000000000000000000000000000000000000000000", "11110110111111011001111101111111111011110101011111", "00000110001001001001010100110000101010110100011000", "11000110101101001001010100110000111010110100011101", "00000110000000000001010100010000100010000100011000", "11000110101001001001010100110000111010110100011001", "11100110111101011001111101111100111011110101011111", "00000110001000000001010100010000100010000100011000", "11111111111111011011111111111111111111111111111111", "11000110111101001001110100110100111011110101011111", "00000110001001000001010100110000101010110100011000", "11111111111111111011111111111111111111111111111111", "11111111111111011001111111111111111111110111111111", "00000010000000000000000000000000000000000000000000", "11000110111101001001010100110100111010110100011101", "00000110000000000001000100000000000000000100011000", "11000110111101011001110100111100111011110101011111", "00000110000000000001000000000000000000000100001000", "11111111111111011001111101111111111011110111011111", "11100110111101011001111100111100111011110101011111", "00000110001001000001010100010000101010010100011000", "00000110000000000001010100000000000000000100011000", "11000110111101011001110100110100111011110101011111", "11000110111101001001010100110000111010110100011101", "11100110111111011001111101111101111011110101011111", "11100110111111011001111101111100111011110101011111", "00000110000000000001010100010000000010000100011000", "11000110101001001001010100110000101010110100011001", "00000110001001000001010100010000100010010100011000", "11111111111111011001111111111111111011110111111111", "00000110000000000001010100010000000000000100011000", "11000110111101001000110100110100111010110101011111", "00000110001001000001010100110000101010010100011000", "00000110001001000001010100010000100010000100011000", "11111111111111011011111111111111111111110111111111", "00000010000000000001000000000000000000000000000000", "11110111111111011001111101111111111011110101011111", "11000110111101001001110100110100111010110100011101", "11111111111111011001111111111111111011110111011111", "00000110000000000001000100000000000000000100001000", "00000110000000000001000000000000000000000100000000", "11000110101101001001010100110000111010110100011001", "11000110111101001001110100110100111010110101011101", "10000110101001001001010100110000101010110100011000"};
    vector<int> startPoints = {17, 14, 40, 18, 35, 44, 24, 4, 42, 7, 3, 30, 31, 12, 25, 2, 22, 28, 15, 37, 48, 43, 20, 29, 9, 47, 11, 33, 1, 49, 0, 8, 16, 38, 26, 34, 39, 13, 10, 32, 36, 27, 21, 45, 23, 46, 5, 41, 19};
    int endPoint = 6;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> paths = {"01001000000000000000000100000000000000000000001000", "00001000000000000000000100000000000000000000001000", "11001000000000000100001110011010000000000000101100", "11101111111110011111111111111111111111111111111111", "00000000000000000000000100000000000000000000001000", "11101010000000010101001111111011010100000110101110", "11101000000000010101001111111011010100000100101110", "11101110001100010111101111111011010101000110101111", "11101111011100011111111111111111111111111111111111", "11101111001100010111111111111111111111010111111111", "11101110000100010111101111111011010101000110101111", "11101110000000010111001111111011010101000110101111", "11101111111100011111111111111111111111111111111111", "11111111111110111111111111111111111111111111111111", "11111111111110011111111111111111111111111111111111", "11101000000000000101001111111011010000000100101110", "11101111011100010111111111111111111111011111111111", "11001000000000000000001110011010000000000000101000", "11101110000000010101001111111011010100000110101110", "11101000000000000100001110111011000000000100101110", "11101110000100010111001111111011010101000110101111", "11101111001100010111101111111111111111010111111111", "11001000000000000000000110011010000000000000101000", "00000000000000000000000000000000000000000000000000", "11001000000000000000000100011010000000000000001000", "11101000000000000101001110111011000000000100101110", "11101000000000000100001110011010000000000000101100", "11001000000000000000000100000010000000000000001000", "11001000000000000000000100010010000000000000001000", "11101111001100010111101111111011110101010111111111", "11001000000000000000000100000000000000000000001000", "11101000000000000100001110111010000000000100101110", "11101111001100010111101111111011010101000110111111", "11101000000000000101001111111011000000000100101110", "11101111001100010111101111111111110111010111111111", "11101000000000010101001111111011010000000100101110", "11101111001100010111101111111111110101010111111111", "11101110000000010111001111111011010100000110101110", "11101111011100011111111111111111111111011111111111", "11101111001100010111101111111011110101000111111111", "11101111011100010111111111111111111111010111111111", "11101000000000000100001110111010000000000000101100", "11101010000000010101001111111011010100000100101110", "11101111001100010111101111111011110101000110111111", "11001000000000000000000110011010000000000000001000", "11101111001100010111101111111011010101000110101111", "00000000000000000000000100000000000000000000000000", "11001000000000000100001110011010000000000000101000", "11101000000000000100001110111010000000000100101100", "11101110000000010111001111111011010101000110101110"};
    vector<int> startPoints = {13, 14, 3, 12, 8, 38, 16, 40, 9, 21, 34, 36, 29, 39, 43, 32, 45, 7, 10, 20, 11, 49, 37, 18, 5, 42, 6, 35, 15, 33, 25, 19, 31, 48, 41, 26, 2, 47, 17, 22, 44, 24, 28, 27, 30, 0, 1, 4, 46};
    int endPoint = 23;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> paths = {"01111111011111110111111110111111110100110011110111", "00110000011000000000000000000000000000000000100000", "00010000011000000000000000000000000000000000100000", "00000000010000000000000000000000000000000000100000", "01110101011011110011101110011010110100110011100011", "01110001011000110011001110010000000000100011100000", "01111101011111110111111110111111110100110011110111", "01110000011000010011001100000000000000100010100000", "11111111011111111111111111111111110101110111110111", "00000000000000000000000000000000000000000000100000", "00010000010000000000000000000000000000000000100000", "01111101011011110011111110111110110100110011100011", "01110101011000110011001110010000000000100011100000", "01110101011010110011101110010000000000100011100000", "01110001011000010011001100000000000000100010100000", "01110000011000000000000000000000000000100000100000", "11111111011111110111111111111111110101110011110111", "01111101011111110011111110111111110100110011110111", "01110000011000010001000100000000000000100010100000", "01110000011000010000000000000000000000100000100000", "01110101011010110011001110010000000000100011100000", "01111101011011110011101110111010110100110011100011", "01110000011000010011000100000000000000100010100000", "01110000011000010001000000000000000000100000100000", "01110001011000110011001100000000000000100011100000", "11111111011111110111111110111111110101110011110111", "01111101011011110011101110011010110100110011100011", "01110001011000110011001110000000000000100011100000", "01110101011011110011101110010000000000100011100000", "01111101011011110011111110111010110100110011100011", "01110101011011110011101110011000100000100011100000", "01111101011111110011111110111110110100110011110111", "01110101011011110011101110011000000000100011100000", "01110101011011110011101110011010100100110011100001", "11111111111111111111111111111111110111111111111111", "01110101011011110011101110011010100000100011100000", "11111111111111111111111111111111110101110111110111", "11111111011111110111111110111111110100110011110111", "01110000011000000000000000000000000000000000100000", "01110101011011110011101110011010100100100011100001", "11111111111111111111111111111111110111110111110111", "11111111011111111111111111111111110101110011110111", "01110000011000010001000100000000000000100000100000", "01110001011000110011001100000000000000100010100000", "00000000000000000000000000000000000000000000000000", "01111101011111110011111110111110110100110011100011", "11111111111111111111111111111111110111111111110111", "01111101011111110011111110111110110100110011110011", "01110101011011110011101110011010110100110011100001", "01110101011011110011101110011010100100100011100000"};
    vector<int> startPoints = {34, 46, 40, 36, 8, 41, 16, 25, 37, 0, 6, 17, 31, 47, 45, 11, 29, 21, 26, 4, 48, 33, 39, 49, 35, 30, 32, 28, 13, 20, 12, 5, 27, 24, 43, 14, 7, 22, 18, 42, 23, 19, 15, 38, 1, 2, 10, 3, 9};
    int endPoint = 44;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> paths = {"00001000001101110101100000101011000000100010010010", "00100000000000000000000000000000000000000000100000", "00010000001000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "01000101011010100001001100011010100000000000000010", "00000001000000000000001010000000000000100010100000", "01011100010100110111111000011110010000010000000101", "00100000001000000001000100000000000000000000000000", "10101111001101001110001001010011110101110100110110", "00000000000000000000000000000000000000000000000000", "00000000010000000000000000000000000000000000000000", "00111101010010000000001000111100110000010000100011", "00000101000000000010001100010000000000000001000000", "00010001011000100010100100010000000000000000000000", "00000000000000000001001000000000000000000010000000", "00010000000000000000000000000000000000100000000000", "10000110010110010111011011111101010001110000010101", "00000001001001000000110010101001110000010001110111", "01000000001000000001000100000000000000000010000000", "00000000000000010000000000000000000000000000000000", "00110101001010110010000000000000000000000010100000", "01101100010011100011001000011010110000000001000010", "01000000001000000001000100000000000000000000100000", "01010000000000000001000000000000000000000000000000", "00000001001000110010001100000000000000000011000000", "10001110001101000000010010001101110001010010010001", "01001100001010000001000010001000110000110011100011", "00000001011000000000000010000000000000000010000000", "00000100001011010000101010000000000000000000000000", "00001100001001100000100100111010010100000010000001", "01110101010011110001100100000000100000000010100000", "01001000001010010010001100010110010100110001110011", "01100000001010000010100010001000000000000000000000", "01000000000001000011001100001000100000010000100001", "11011110100011001100100111100111100111101111111111", "00000000001000110000100000000000000000000000100000", "10001110100110001111100011011111010101110101010110", "11101011000110100110110010101111100000110011110111", "00000000000000000000000000000000000000000000100000", "00000000000010000010101000010010000000000000100000", "11000110101110001010001101111100010111010100110111", "00001100011101001101010001101111100101000000010101", "00010000011000010000000000000000000000100000100000", "00100001001000000001000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00111101000111000000010100011100010100010001000010", "10001111101100101101110100010111000011011101010101", "01111000000011010001110010110110010100110000100001", "01100100010010000001100010001010100100010011000001", "01100101000011000000100010000000000000000010100000"};
    vector<int> startPoints = {34, 46, 40, 36, 8, 41, 16, 25, 37, 0, 6, 17, 31, 47, 45, 11, 29, 21, 26, 4, 48, 33, 39, 49, 35, 30, 32, 28, 13, 20, 12, 5, 27, 24, 43, 14, 7, 22, 18, 42, 23, 19, 15, 38, 1, 2, 10, 3, 9};
    int endPoint = 44;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> paths = {"00000000100000000000000100000000000000000000000000", "10100000100000000000100100000000000000000100000000", "00000000000000000000000100000000000000000000000000", "10000100100000001010000100000001100000110100011110", "00100110011001110011101110100111001110011000101000", "00000010000000110100101100000001110010000100110001", "01100000000011011000001100000000010000000000100010", "01111110110110100101001010111110100110111100001001", "00000000000000000000000000000000000000000000000000", "00110000001000110100001100101011101001110100110110", "11100000000101110100101000000000110010100100010101", "10100000000010010000001010000000100011000000000000", "10000000000000000000100100000000000000000000000000", "00000000100000000000000010000000000000000000100000", "11000000100001001010000010000000000000001100100000", "01000000000001000000001000000000010000101000000010", "00000000100000000000100100000000000000000000000000", "11100010100000111000001000000001110011100000100010", "11000000000000001000000010000000000000000100000000", "01010010011110110110100000111011101010000000010010", "00000000000000000000000100000000000000000000000000", "11001001111011011001001000111111010110010110100011", "00000000100010000000000010000000000000000100000000", "00000000000000000000000000000000000000000000000000", "00000000000000001000100000000000000000000000000000", "10011101111100010101111000011111111111010111001001", "10110000000001100000000100000000101010010100000010", "00010110111000010000100000100011101001010000011101", "11010100001000111100000100100001101001110000000010", "10010110011110010101001100111010011010100100011001", "11000100001101100010100100101000100010101000110111", "10100010100011011000101010000000110000000000000001", "01000010100001111000001000000000000010000000000000", "00000000000000001000000100000000000000000000000000", "00000100001101001100000000000000110011011000110010", "01010100011011101101100100111110001000101100001101", "01100010000001001010001000000000010000000000100000", "00000000000001110010000000000000010010101000100111", "11000000000000000000000000000000000000000000000000", "01000100101100010100001110000000000011001000011001", "01000000100000001010000000000000010000000000100000", "00100000000000000000000100000000000000000000000000", "10001001011101011101001110100110100110011100111001", "00001011111110100001111000110110001101011010110010", "00000000000010000000100000000000000000000100000000", "00100000000000011010001100000001110001100000001110", "00000010000011100000000000000001010001000000000111", "00100000000011010010001010000000010000100100100010", "00000000000000000000001000000000010000101000000000", "00000000100000100000001000000000000000101000000010"};
    vector<int> startPoints = {25, 43, 21, 42, 7, 4, 35, 29, 19, 27, 9, 30, 28, 26, 34, 3, 39, 10, 5, 17, 45, 11, 46, 37, 31, 49, 32, 14, 36, 6, 47, 15, 48, 22, 13, 40, 18, 38, 33, 24, 44, 1, 12, 0, 41, 16, 2, 20, 23};
    int endPoint = 8;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 920559946;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> paths = {"00000000000000100000000000100000000000000000000000", "00000000000000000000001101010000000010000000000010", "00001000000000000000000001100000000000100000000000", "01000001000001100100000100100011000100000000000000", "00000000000000000000000000000000000000000000000000", "11000001011010001010001110001101000000011110000001", "00001100110010010001001010111111111100001110011100", "00001000000000000000000001100000000000000000000000", "10011100010011011010001100011001111010111010110101", "10100000000110101100001001011111000000111110001101", "00000000000000000000001000010000000000000000100000", "01010001000000001100000011000011000100000000100001", "11010001000101110000000010010001000000001010100011", "01100001001000100010000000010010000010000000101000", "00001001000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "01000000001000000010000110100000000100000000100000", "00000001001000000000000000100011000000000000100000", "00000000000000000000001101010001000010000000100000", "00100011000100111000000111100100000010001010001001", "00001110110010001011010100111000111010111110110011", "01000111110010101001001001001101111110101100110010", "10001001000000100000000000000010000000000000000000", "00000000000000100000001001110000000000000000000000", "11000001001000000100001000000000000010000000001010", "00001000000000010000000000000000000000000000000000", "00001000000000000000000000000000000000000000000000", "00001000000000110000000000100001000000000000100000", "00010000001001100011000110110100000100110000100111", "10011000000101000110000110000011000100010100100011", "00000000000000010000000001000000000000000000000000", "00001001000000010000000000100000000000000000000000", "00011100011011100001001100011000000010000000101101", "10000100011111011111000010001000101110110010011111", "01000001010001010110000100111100000110111100000001", "11000001001001100000001100000011000010000000000010", "00100000000000010000000001100010000000000000000000", "01110110101010100111110001001111111000000100011111", "00010001000111100101000001110101000100010100000100", "11111001001100100100001100100011000100001000001011", "11100000000000000010001110010010000100000000100000", "00000000000100110000000111010001000010000000000000", "01010000000101000110001100000010000010010100000001", "00010110111111000000110000011011111101001010011100", "00000000000000100000000000000000000010000000000000", "10111000010011001000000111011000101010010010000111", "00001000000000000000001100110000000000000000000000", "01110000000110001100000010000000000110010110100010", "00000001000000000000000100000010000000000000100000", "00010001000000110010000110010001000100001000001010"};
    vector<int> startPoints = {43, 37, 20, 21, 6, 8, 33, 45, 32, 34, 5, 9, 28, 38, 47, 12, 19, 42, 29, 39, 41, 11, 49, 3, 40, 16, 35, 24, 13, 46, 1, 17, 48, 18, 10, 23, 22, 27, 31, 44, 0, 14, 36, 2, 7, 30, 25, 26, 15};
    int endPoint = 4;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> paths = {"01000000000010000001000100000000000000000001000100", "00000000000000000000000000010000000000000000000000", "01000001001000000101000100000001001000000000000000", "01101000001000000100000101010000001000000110010000", "01100000001011000001000001010001001000000001001100", "00010010001010101111000010010100001011101010111010", "11010000000010000101101000010000001000000011110100", "00000000001000000000000000000001000000000001000100", "10010000001010000100001010000001000000001001110001", "00100111101110111010110011101011110111111011111110", "01000000000000000000000000010000000000000000001100", "10110110000001101000011011000101010001101101110011", "00000000001000000000000000010001000000000000000001", "00000000000000000000000000000000000000000000000000", "11000010101000000100101000010000000000001000110000", "01101101100100001110011100101101110111011001110011", "00000011101001100100001011000001000001101110011100", "01000000001011000000000000010000001000000000000001", "10100001001001000000100000000000000000000001110101", "01000000000001000000000000000000000000000000001000", "01100000000000000000000001000001000000000000000000", "10101000000000100110001000010100011001101000111010", "00001001000000000000000001000000000000000000000000", "01000000001001000000000000000001000000000000000000", "10010000001001000000101000000000000000000011010101", "00000000000001000000000100010000001000000000001101", "10011110001111101100111010000000000011100111000111", "00000000000000000000000000000000000000000000000000", "00111110100111101010010100100100110011100000101010", "10011010100000001011001001010000010011101000111101", "10000100100111111001110100101000110111010010010100", "01000000000000000000000000000000000000000000000000", "00001100101101101111010110100100010010100111010000", "10110010001010100100001011010001000000101010100011", "00000000000000000000000000000000000000000000000000", "10010100000101001111110101101100110010011111001110", "01000010101010000011101111010000001001000010010010", "00100011000001000001000010010001000000001101110010", "10100010000011100110101101010000000011001010000001", "01000010100110100101101101101100100011101011111101", "00011011000000000111100110000000000000000010010100", "00100001000000000000000000000001000000000001000101", "10000001001000000100100001000000000000000000000100", "00000000000011000001000001000001000000000000000000", "10001000000001000100001000000000001000000101000101", "10100001001011000000100000000000000000000110101100", "01000000000001001000000000000000001000000000000000", "00000000000000000000000000000000000000000000000000", "00100011001001100011101111010000000000001001111100", "00000000000000000000000000000000000000000000000000"};
    vector<int> startPoints = {9, 30, 15, 35, 39, 28, 32, 26, 11, 5, 21, 29, 16, 33, 38, 36, 37, 48, 14, 8, 40, 6, 18, 24, 3, 45, 44, 42, 22, 41, 4, 20, 2, 7, 0, 17, 43, 25, 19, 12, 23, 49, 10, 46, 31, 34, 47, 13, 1};
    int endPoint = 27;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> paths = {"00000000000010000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "01000101011110000110110000110000111000010010110000", "00000000000100000100000000000000000000000000000001", "11000000101000010010110001000000001001000000110100", "10011001101100000110101000011000100000010100110000", "00000101000100000110101000101000100010100000100110", "00000000000000000100000000000000000000000000100001", "00010000000100000110101000010000000010000000010001", "00001011000001000000001000011000100000110000100101", "00000001000000010111000001010000000010000100000001", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000010000000000001000000000000000000000001", "00011111110111010011101000100000101010110110100100", "10000000000000000111000000010000000000000000000000", "11101111000000110110110001011000001011110101110000", "10000000000001000000000001000000000000000000000000", "01010000000111000000000000000000000000000100010010", "11000000000000000000000001000000000000000000000001", "00010001000001000100000000000000000000000100000011", "10000000100000010010001001010000001000000100100011", "00010001000000010111100000010000000000000100000010", "01101111100101111111110000000000010011101011001110", "01110011110110101011100101101101101110111101001100", "00000000000100000000000000000000000000000000000001", "00011100101000010000001000000000001011010000010111", "01000000000010000100000000000000000000000000000001", "00000001101110010110101000010000101011010100000011", "00110011010001111011110101101000110011101010101100", "10101110111100111010111110110101110100111011101101", "01000110011010111110111100100100111011111010101010", "10000001101100000110010000010000001010000100010001", "01011111010001000100001000101000100011000000100101", "01010000000010000010000000000000000000000000110000", "00100010011010101101001101101101001010111011001000", "01010000000011000000001001010000000000000100000010", "00010001101000000111011000000000100000010100100011", "01011001101000010101110000001000101010000100000110", "11010000000000000010100001010000001010000000100001", "00000011010000111000100000110000111001110011111100", "00010000000001000101000000000000000000000000100010", "00011110010010000010110001001000111001110000000001", "10100111111100100011011000100000110011110010101001", "10000000000001000001000001000000000000000000000001", "00000000000001000001000001000000000000000000000010", "10100111011000100011010000101000110011010010010100", "01010001101000010000101000010000001010010100110000", "00000000000010000001000001000000000000000000000000", "11000000000010000000000000000000000000000000000000"};
    vector<int> startPoints = {30, 24, 35, 31, 29, 23, 40, 16, 43, 46, 14, 2, 42, 33, 9, 6, 26, 38, 5, 28, 4, 37, 47, 32, 21, 39, 34, 10, 8, 36, 22, 15, 20, 7, 18, 41, 44, 45, 27, 48, 19, 3, 17, 13, 25, 49, 0, 11, 1};
    int endPoint = 12;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> paths = {"00000000101001000000000000000001001100000000010000", "00000000001010101000010011010000000100000001101010", "00000000000000000000000000000000000000000000000000", "10001000001010101100011011000111011110011000110001", "00000000100010111000100000010011000000011001111000", "10000000001001001000010001100000010100000001111010", "00011101110010010100111100111100100011011000100011", "10111000111000010000111101011010010011010001000000", "00000000100000000000000000000000001000000000000000", "00100000001000000000000000000000001000000000000000", "00100000000000000000000000000000001000000000000000", "00011101011001011100001111011011101011110000100101", "00000000000000000000000000000000000000000000000000", "00000000011000000000000011010000001000000001110000", "00100000010000000000000010100000001000000000000010", "10100100010000000000001001000001000110000000000000", "00100000000010000000000010000100000000000001010010", "10000100100001010000101000010111000010010001110011", "11111010100111011000111101001101111111111101100111", "01111110000111110110011011000011010101111110101110", "01100100000011000000000000010000010110000001110000", "00000000010000001000000011100000001010000001000010", "01100000000000001000010001100100010110000000010000", "11001100100011011100101010010001000110010001000001", "00100000100010000000000000000100000000000000000000", "00000000110000000000000000100100001010000000111000", "00000000000000001000000010010000001000000000000000", "00000000000010000000000000000100000000000000010000", "01111100000000011000010110000101110100010000101000", "00000000001000000000000000000000000000000000000010", "11000100000011000000000000100001011010001001111011", "01000000010011000000001000010100001000000001100000", "11101100001001010100101110100111001110011000011001", "00000000010000000000000000000000001100000001000000", "00000000000000000000000000000000000000000000000000", "00100000010000101000000000010000000000000001101010", "00000000000010100000000010110000000000000000011010", "11011000101001111100110111101001001100011000000000", "10001101000001110000101110111000100011011000110110", "11100000000010000000100001010011010000001000100001", "11000100111000111000001010110000010100000000011011", "11010011110101010000100101101011110101110000000101", "10111111100101010110110011101010011001101101111101", "00000000011000000000000000000000000000000000000000", "00000000101000101000000000010000001000000000001000", "00100000100010000000000010000000000000000000000010", "00000000101000000000000000000000000000000000000010", "10101111101001011100001100100011000101001001000010", "00100000000000000000000000000000000000000000000000", "01100100000001000000011011000001011110000001101000"};
    vector<int> startPoints = {19, 42, 18, 41, 11, 38, 47, 6, 7, 37, 28, 3, 32, 23, 4, 17, 39, 30, 20, 40, 15, 49, 5, 0, 31, 13, 22, 1, 21, 33, 35, 25, 36, 44, 14, 26, 16, 27, 45, 46, 43, 24, 29, 9, 10, 8, 48, 12, 34};
    int endPoint = 2;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00000010011000000000000100110010000000000001101001", "00100100010000010010000100101001100000001110101001", "00000000001001010001100100101000000000000011001101", "00000000000000000000000000000000000000000101000100", "00000100010011011000100100001000010010000011000101", "00000001000010000000000110000010000000000101001100", "00101000000111000010100010101010010000000110001000", "00000000000010000001000000010000000010000001000100", "10111001010111110110011001001011111001110010110011", "00000001000001001000000110010010100010000000001000", "00000000000010000000000000010000000010000001100000", "00000100010000011000100000110000100010000010001000", "00000000000000000000000000000000000000000100000000", "00010101000010010001000000100000000010000110001001", "11011110011101011111011000001100001011100010111100", "00000000000000000000000000000000000000000000000000", "00000000000011000000000100110000000000000101000001", "11111000011010001011100100000111000001111100110010", "00000000000011010000000100000000000010000100100100", "00000000000000010000000000010000000000000001000000", "00000000001000001001000100011000000010000111000100", "11001110000101001110100010000011110001111000011100", "11010110010111001111010100000101101011101011010010", "00000001001010010000000010010000000000000100101000", "00000000000000000000000000010000000000000100100000", "01100110111001110100111100000010011000111001011011", "00010000000010000001000110010000000000000000000000", "00000000000000000000000000000000000000000001000000", "00000000001001000000000000110000000000000000001001", "00100110010001011011000000000001110011000001100100", "00000000000000000000000000000000000000000000000000", "10010010011011001000100100101010100000001100001000", "00000000000000011011000100110000000010000111000001", "00000101000111010011000100101010100000000010000100", "10101110011101010111010010001001100011111110010100", "00001110111110101110111001000001111001110011010111", "00000000000010010000000000010010000000000100000000", "01111011000010000011100000100001110000000010101101", "10110000011110001000000100010111010011011001110010", "11011110001111011000100110011101000001001000100010", "10110011010010001001100010011010010000000000100000", "00000000000000010000000000010010000000000000000000", "00000001000000000000000000000000000000000001001100", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000000000000000000000000", "00101010011101011010000000100101000001010111001011", "00000000001000000000000000000000000000000101000000", "00000000000010000000000010010010000000000000100000", "11110000001010001001100110000110000001001000000000", "00000000001000000001000000010010000010000000001000"};
    vector<int> startPoints = {35, 8, 25, 14, 22, 34, 21, 17, 38, 45, 39, 48, 29, 37, 1, 31, 40, 0, 6, 4, 33, 11, 2, 9, 32, 20, 18, 28, 16, 13, 5, 26, 42, 49, 23, 46, 7, 3, 10, 36, 47, 24, 12, 41, 30, 19, 27, 44, 43};
    int endPoint = 15;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01010000101000000010000000000110001100010110010000", "00010110000000000000100000100000000000000000000000", "01010110000011000000000000000000011000000000100010", "00000000000001000010000000100000000000000000100001", "01110010001000000000000000000001000000000000000000", "00000000000000000000000000000000000000000000000000", "00000000000000000000000000000010000000000000000010", "01100100001100010010000000000100000100000010010000", "01110000000111010010100010101000000100010110110011", "00110011000111110000101010100001111100001100111010", "00010110000000000010000000000000000000000000000001", "00000110001000010010100010001001000100010010010001", "00000010001000000000000000000000010000000000000000", "00000000000000000000000000000000000000000000000000", "10101111001101000110111000001110000100000010100011", "01111010001000000000000000001001001000000000100000", "11011001100101100100111010000100001100010110111001", "10001111000100000000010010101100001000010010100000", "00000000000001000000000000000000000000000000000000", "10100001111011101110101000010101110110011001101011", "01010000000000010000000010001101000000000110110000", "00000000000011000010000000100000011000000000000000", "00011001000001000110100000001100000100010000110010", "10011001101100111101111010011000000110010101111011", "00000010000010010010000000001001011000000010100000", "00000000110011101101001110010010100110010011010011", "00000000000000000000000000000000000000000000100001", "10110001111110011100101010000110110100011101100010", "00011100000010000000010000000001000000000000100000", "01010010000010000000000000100000000000000000000011", "00000000000001000000000000000000000000000000000000", "00000100001011000000000000000000001000000000000000", "11001010000111000100101010001001001100010000000010", "00000000000000000000000000000000000000000000000010", "00000000001010000000000000000000000000000000000010", "01010100001011000000000010001000001000000000100010", "00101111111110111100001100001100101100010101001001", "10101001111010111001000101010110100010111011011100", "00111011111011111111011111011100100110011011100110", "01111000000010000010010000101011011000000000010011", "00100000000001000010100010101111010100010110000001", "01001000001010000000010010101001010000010000000000", "00101010000010010000000000101110000000000000000010", "11001001100010111110001010101110100100001100011010", "00000000000000000010000000000000000000000000000001", "00110100001000010010010000101001000000000000100000", "10010000001011100100101010001101100000000110010001", "10011011000100011101111101010000101010001101000000", "00000000000000000000000000000000000000000000000000", "00000000000001000000000000000000000000000000000000"};
    vector<int> startPoints = {37, 38, 47, 25, 23, 19, 27, 36, 43, 16, 9, 46, 32, 14, 22, 17, 7, 0, 40, 8, 11, 35, 20, 41, 39, 45, 24, 42, 15, 28, 29, 4, 2, 1, 21, 31, 34, 12, 10, 3, 26, 44, 18, 6, 49, 30, 33, 48, 13};
    int endPoint = 5;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00000000000000000000010100000010000000100000000000", "10000100100010000010001100000000000010010000000000", "10011011011111111001100010111100111011011100110110", "01001111011010100000001001101110100010110010000110", "00000101000100100000110010001111100110000010000000", "00000000000000000000010010000000000000000000000000", "11001001101000000111100101101100100010000011101001", "01000000111010110111001001000000100010010001000001", "00000000010000000000000000000001000100100000000000", "00000000000010000000000100000010000000000000000100", "10000000000100110100010001000010000010110001001000", "10000000100000010010001011000010100000000001001111", "00000000000000000000000010000000000000000000000000", "00011010000100110100110000111110010011010101101001", "00000100010010010000000111000000000110000000000000", "10000100000000000001000110000000000000010000000110", "00011110101001110110100000111100111101011111111000", "01000100100000010000001001000011100010110000000010", "00000100110000000001011001000010000100010000000010", "00000000000010000000010010000010000000000000000000", "00000000111010110000001010000101000010110000000011", "00000000000000000000000000000000000000000000000000", "10000000000000000000000000000010000100000000000010", "00000100000010000000000000000010000000000000000000", "00000000000000000000000000000000000000000000000000", "00000010100000000000010010000010000100100000000000", "00001101100100010101101011000000100100010111000011", "00010010101100010100101011100001110001010111100001", "11000100101100010100010001000111100000010011000111", "11000000101010100000010101000010000000110001000000", "00000000000000000000010000000000000000000000000000", "10000000000010000000000110000000000000000000000100", "11000100110010110000000001000000000100100000001100", "10011011101110010101110001101010000010100001100110", "01011111111011100001001000011001000011011111100000", "10000000000000000000000110000000000000100000000000", "00000100010010000000000001000011000000010000000110", "01011111101110110111001001100110010100010010100100", "00000100000000000000000010000010000000000000000000", "00000000000000000000010100000000000000100000000010", "00011010100101110010101100011000010111010111100011", "00000101011100000100101011001110100110000000001101", "01000000100000100000001101000011100010110000000100", "01000000000000000110000011000001000100110010001100", "01001001010100010010111110101110100000110110000001", "10011111111001110001111101111101011011001100101000", "00000000110000010000011001000001000010000000000100", "00000000000010000001000010000010000000000000000000", "00000000000010000000000010000000000000000000000100", "00000100010000110001011000000000000010010001001110"};
    vector<int> startPoints = {2, 16, 45, 34, 40, 13, 27, 37, 33, 3, 6, 44, 26, 41, 4, 7, 20, 28, 29, 10, 11, 49, 43, 42, 17, 32, 1, 18, 14, 46, 36, 25, 15, 22, 39, 8, 35, 48, 9, 31, 47, 0, 19, 23, 38, 30, 12, 5, 21};
    int endPoint = 24;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00000000000000000000000100010000000100000000000000", "00000000100000000000000000000000000000000000000000", "01010000100000000000010000001000000000000000000000", "01000000100100000000010000001000000100000000001000", "10010010011001100110010000111000010001000010100110", "00101010001111110011101001000101010111010111010111", "11100001100011001001100000100110010100110010000010", "00000000000100000001000110000000001000001000100010", "00000000000000000000000000000000000000000000000000", "00000000000100000000000000000000000000000100000000", "00000001100011001000000010011100001000010000000000", "01000000100000000000000000000000000000000000000000", "00010000000100000000010000001000001000000000000000", "00010000010000000000000010010100000000001100000000", "11000000000011001000000000010000001100011000101000", "00011011011001101111101111101111010111111011011100", "01110000000000000000000000000000000000000100001010", "00000001001000001001010110010000010100011000000010", "11000010110111000100000110100000111001101010000110", "00000000000000000000010000001000000000000000000000", "00000001011100001001010000001010101000100010000000", "00000000000100000000000000000000000000000100000000", "01101011010011001010100111001111010111111011010100", "00100000000000000000010000010000000100000000000000", "00000000100010000000000100010000001000001100100000", "10101010110001001010100010101110000001000110001100", "01110001000111100101110000000000111100101010000000", "01010000100000000000000000000000000100000000000000", "00000000000000000000000000000000000000000100000000", "00100000010100001001000010010000001000011000001000", "00100001100110001000000110000000000100011100000000", "00010011011000000100110000100010100001110110001100", "11000000010101101100010000001000010100101010001000", "01100000000011100000000100010100000000111100000010", "00000000110100000001000000010000000000000000001000", "01000000000100000001010000001000000000000100000010", "11101010001000001010100011010101011001000111110010", "11010011000001000100100100111010010100011000101000", "00110000000001101000000000000100010100000000100010", "11100000110000000000000110000000001100000000100010", "10010000110000001000010100000000001000000100000000", "00000000000000000000000000000000000000000000000000", "11010000001000001100000110010110011000100000001000", "10001011000001100010000110110001110000111010010110", "11010000000010001000000000010000001100000000001000", "11011010001110100110000000111011100001100100000110", "00000000000000000000000000001000000000000000000000", "01000011010000100101110000100010110000011100100000", "01000000100000000000010000000000000000000000000000", "01011011010111110110101011101010111111010001011000"};
    vector<int> startPoints = {5, 49, 15, 22, 36, 43, 45, 25, 4, 18, 31, 37, 47, 6, 26, 20, 32, 42, 38, 17, 33, 10, 14, 13, 29, 30, 39, 7, 24, 44, 40, 12, 34, 0, 23, 27, 16, 2, 3, 35, 48, 19, 46, 9, 21, 28, 11, 1, 8};
    int endPoint = 41;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01001", "00100", "00000", "10001", "10000"};
    vector<int> startPoints = {4};
    int endPoint = 2;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00010", "00000", "00011", "01000", "01000"};
    vector<int> startPoints = {3};
    int endPoint = 4;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> paths = {"00001", "00000", "11010", "00000", "01000"};
    vector<int> startPoints = {2};
    int endPoint = 3;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> paths = {"00000", "10100", "00001", "10001", "10100"};
    vector<int> startPoints = {4};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"00101", "00100", "00010", "11000", "00000"};
    vector<int> startPoints = {3};
    int endPoint = 2;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01000", "00000", "00000", "00100", "11000"};
    vector<int> startPoints = {3};
    int endPoint = 0;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> paths = {"00000", "00000", "11000", "00000", "01110"};
    vector<int> startPoints = {2};
    int endPoint = 1;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> paths = {"01100", "00000", "01000", "11101", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 2;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01000", "00000", "10000", "01000", "00110"};
    vector<int> startPoints = {2};
    int endPoint = 3;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> paths = {"00001", "00010", "10001", "10100", "00000"};
    vector<int> startPoints = {3};
    int endPoint = 1;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> paths = {"010000", "001100", "000010", "000000", "000001", "001000"};
    vector<int> startPoints = {0};
    int endPoint = 3;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> paths = {"010000", "000100", "000110", "000000", "000001", "001000"};
    vector<int> startPoints = {0};
    int endPoint = 3;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> paths = {"01000", "00100", "00010", "01001", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 4;
    int n = 10;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> paths = {"010", "100", "001"};
    vector<int> startPoints = {0};
    int endPoint = 2;
    int n = 10;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> paths = {"000111000000000", "000111000000000", "000111000000000", "000000111000000", "000000111000000", "000000111000000", "000000000111000", "000000000111000", "000000000111000", "000000000000111", "000000000000111", "000000000000111", "000000000000001", "000000000000001", "000000000000000"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 14;
    int n = 1000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 243;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> paths = {"01000", "00100", "00010", "01001", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 4;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> paths = {"00011100000000011111111111111111111111111", "00011100000000011111111111111111111111111", "00011100000000011111111111111111111111111", "00000011100000011111111111111111111111111", "00000011100000011111111111111111111111111", "00000011100000011111111111111111111111111", "00000000011100011111111111111111111111111", "00000000011100011111111111111111111111111", "00000000011100011111111111111111111111111", "00000000000011111111111111111111111111111", "00000000000011111111111111111111111111111", "00000000000011111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000111111111111111111111111111", "00000000000000011111111111111111111111111"};
    vector<int> startPoints = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 34};
    int endPoint = 33;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> paths = {"011", "010", "000"};
    vector<int> startPoints = {0};
    int endPoint = 2;
    int n = 10000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> paths = {"01100", "00000", "00111", "00111", "00111"};
    vector<int> startPoints = {0};
    int endPoint = 1;
    int n = 47;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01", "10"};
    vector<int> startPoints = {0};
    int endPoint = 1;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> paths = {"0100", "1010", "0001", "0001"};
    vector<int> startPoints = {2};
    int endPoint = 3;
    int n = 2;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> paths = {"11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111", "11111111111111"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 13;
    int n = 100000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> paths = {"000111000000000", "000111000000000", "000111000000000", "000000111000000", "000000111000000", "000000111000000", "000000000111000", "000000000111000", "000000000111000", "000000000000111", "000000000000111", "000000000000111", "000000000000001", "000000000000001", "000000000000000"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 11;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> paths = {"01000", "00101", "00010", "01000", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 1;
    int n = 1000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> paths = {"01001", "00100", "01000", "00000", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 4;
    int n = 10000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> paths = {"1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010", "1010101010101010101010101010101010101010"};
    vector<int> startPoints = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36};
    int endPoint = 38;
    int n = 999999999;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> paths = {"000111000000000", "000111000000000", "000111000000000", "000000111000000", "000000111000000", "000000111000000", "000000000111000", "000000000111000", "000000000111000", "000000000000111", "000000000000111", "000000000000111", "000000000000001", "000000000000001", "111111111111111"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 12;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> paths = {"01111111111111111111111111111111111111111111111111", "00111111111111111111111111111111111111111111111111", "00011111111111111111111111111111111111111111111111", "00001111111111111111111111111111111111111111111111", "00000111111111111111111111111111111111111111111111", "00000011111111111111111111111111111111111111111111", "00000001111111111111111111111111111111111111111111", "00000000111111111111111111111111111111111111111111", "00000000011111111111111111111111111111111111111111", "00000000001111111111111111111111111111111111111111", "00000000000111111111111111111111111111111111111111", "00000000000011111111111111111111111111111111111111", "00000000000001111111111111111111111111111111111111", "00000000000000111111111111111111111111111111111111", "00000000000000011111111111111111111111111111111111", "00000000000000001111111111111111111111111111111111", "00000000000000000111111111111111111111111111111111", "00000000000000000011111111111111111111111111111111", "00000000000000000001111111111111111111111111111111", "00000000000000000000111111111111111111111111111111", "00000000000000000000011111111111111111111111111111", "00000000000000000000001111111111111111111111111111", "00000000000000000000000111111111111111111111111111", "00000000000000000000000011111111111111111111111111", "00000000000000000000000001111111111111111111111111", "00000000000000000000000000111111111111111111111111", "00000000000000000000000000011111111111111111111111", "00000000000000000000000000001111111111111111111111", "00000000000000000000000000000111111111111111111111", "00000000000000000000000000000011111111111111111111", "00000000000000000000000000000001111111111111111111", "00000000000000000000000000000000111111111111111111", "00000000000000000000000000000000011111111111111111", "00000000000000000000000000000000001111111111111111", "00000000000000000000000000000000000111111111111111", "00000000000000000000000000000000000011111111111111", "00000000000000000000000000000000000001111111111111", "00000000000000000000000000000000000000111111111111", "00000000000000000000000000000000000000011111111111", "00000000000000000000000000000000000000001111111111", "00000000000000000000000000000000000000000111111111", "00000000000000000000000000000000000000000011111111", "00000000000000000000000000000000000000000001111111", "00000000000000000000000000000000000000000000111111", "00000000000000000000000000000000000000000000011111", "00000000000000000000000000000000000000000000001111", "00000000000000000000000000000000000000000000000111", "00000000000000000000000000000000000000000000000011", "00000000000000000000000000000000000000000000000001", "00000000000000000000000000000000000000000000000000"};
    vector<int> startPoints = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48};
    int endPoint = 49;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> paths = {"000111000000000", "000111000000000", "000111000000000", "000000111000000", "000000111000000", "000000111000000", "000000000111000", "000000000111000", "000000000111000", "000000000000111", "000000000000111", "000000000000111", "000000000000001", "000000000000001", "000000000000000"};
    vector<int> startPoints = {0, 1, 2};
    int endPoint = 14;
    int n = 200;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> paths = {"0100", "0010", "0001", "0100"};
    vector<int> startPoints = {0};
    int endPoint = 1;
    int n = 999999999;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> paths = {"011000", "000000", "000001", "001000", "000100", "000010"};
    vector<int> startPoints = {2, 0};
    int endPoint = 1;
    int n = 6;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> paths = {"0101", "0010", "0100", "0000"};
    vector<int> startPoints = {0};
    int endPoint = 3;
    int n = 20;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    vector<int> startPoints = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int endPoint = 49;
    int n = 1000000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> paths = {"100001", "001000", "000100", "000010", "000001", "000000"};
    vector<int> startPoints = {0};
    int endPoint = 5;
    int n = 1000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"000", "110", "100"};
    vector<int> startPoints = {2};
    int endPoint = 0;
    int n = 470000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> paths = {"11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111", "11111111111111111111111111111111111111111111111111"};
    vector<int> startPoints = {0};
    int endPoint = 40;
    int n = 100000000;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
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
    vector<string> paths = {"01001", "00100", "00010", "01000", "00000"};
    vector<int> startPoints = {0};
    int endPoint = 4;
    int n = 100;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> paths = {"00", "10"};
    vector<int> startPoints = {0};
    int endPoint = 1;
    int n = 5;
    BikeRiding* pObj = new BikeRiding();
    clock_t start = clock();
    int result = pObj->countRoutes(paths, startPoints, endPoint, n);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22629261&rd=10669&pm=6763
********************************************************************************
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
#define maxn 100
 
class BikeRiding {
public:
    int A[maxn][maxn];
    int B[maxn][maxn];
    int D[maxn][maxn];
  int countRoutes(vector <string>, vector <int>, int, int);
};
 
int BikeRiding::countRoutes(vector <string> paths, vector <int> start, int end, int N)
{
  int i,j,k,l;
  int n = paths.size();
  int ans = 0;
  bool ok;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
      A[i][j] = paths[i][j]-'0';
        B[i][j] = A[i][j];  
        }
        
    for(i=0;i<n;i++)
    {
      for(j=0;j<start.size();j++)
        ans += B[start[j]][end];
        
        if(ans>N)
        {
          ans = -1;
          break;
        }
        for(j=0;j<n;j++)
          for(k=0;k<n;k++)
            D[j][k] = B[j][k];
            
         for(j=0;j<n;j++)
           for(k=0;k<n;k++)
           {
             B[j][k] = 0;
             for(l=0;l<n;l++)
               B[j][k] += D[j][l]*A[l][k];
           }
        
    }
    if(ans == 0 || ans == -1)return ans;
    ok = true;
    for(i=0;i<n;i++)
    {
      for(j=0;j<start.size();j++)
        if(B[start[j]][end])ok =false;
        if(ok == false)break;    
      
        for(j=0;j<n;j++)
          for(k=0;k<n;k++)
            D[j][k] = B[j][k];
            
         for(j=0;j<n;j++)
           for(k=0;k<n;k++)
           {
             B[j][k] = 0;
             for(l=0;l<n;l++)
               B[j][k] += D[j][l]*A[l][k];
           }
        
    }
    if(ok)return ans;
    return -1;
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/