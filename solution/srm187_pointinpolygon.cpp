/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2384
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

class PointInPolygon {
public:
    string testPoint(vector<string> vertices, int testPointX, int testPointY);
};

string PointInPolygon::testPoint(vector<string> vertices, int testPointX, int testPointY) {
    string ret;
    return ret;
}


int test0() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 5;
    int testPointY = 5;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 10;
    int testPointY = 15;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 5;
    int testPointY = 10;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> vertices = {"-100 -90", "-100 100", "100 100", "100 -100", "-120 -100", "-120 100", "-130 100", "-130 -110", "110 -110", "110 110", "-110 110", "-110 -90"};
    int testPointX = 0;
    int testPointY = 0;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> vertices = {"0 0", "0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0"};
    int testPointX = 100;
    int testPointY = 500;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> vertices = {"0 0", "0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0"};
    int testPointX = 300;
    int testPointY = 300;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> vertices = {"0 0", "0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0"};
    int testPointX = 0;
    int testPointY = 500;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> vertices = {"0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0", "0 0"};
    int testPointX = 0;
    int testPointY = 500;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> vertices = {"0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0", "0 0"};
    int testPointX = 322;
    int testPointY = 333;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> vertices = {"0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0", "0 0"};
    int testPointX = 555;
    int testPointY = 999;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 200;
    int testPointY = 200;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 400;
    int testPointY = 200;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 400;
    int testPointY = 400;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 400;
    int testPointY = -400;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = -400;
    int testPointY = -400;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = -400;
    int testPointY = 400;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 42;
    int testPointY = 42;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> vertices = {"500 0", "500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0"};
    int testPointX = 499;
    int testPointY = 1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> vertices = {"500 100", "400 100", "400 200", "300 200", "300 300", "200 300", "200 400", "100 400", "100 500", "0 500", "0 400", "-100 400", "-100 300", "-200 300", "-200 200", "-300 200", "-300 100", "-400 100", "-400 0", "-500 0", "-500 -100", "-400 -100", "-400 -200", "-300 -200", "-300 -300", "-200 -300", "-200 -400", "-100 -400", "-100 -500", "0 -500", "0 -400", "100 -400", "100 -300", "200 -300", "200 -200", "300 -200", "300 -100", "400 -100", "400 0", "500 0"};
    int testPointX = 200;
    int testPointY = 200;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 1;
    int testPointY = -1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 1;
    int testPointY = 1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = -1;
    int testPointY = 1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = -1;
    int testPointY = -1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 5;
    int testPointY = -10;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 10;
    int testPointY = -15;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 15;
    int testPointY = 0;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 15;
    int testPointY = -5;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 10;
    int testPointY = 5;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = -5;
    int testPointY = 5;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = -15;
    int testPointY = 15;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 0;
    int testPointY = -1;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> vertices = {"0 0", "10 0", "10 -10", "20 -10", "20 10", "-10 10", "-10 -30", "40 -30", "40 30", "-30 30", "-30 -50", "60 -50", "60 50", "-50 50", "-50 -70", "80 -70", "80 70", "-70 70", "-70 -90", "100 -90", "100 90", "-90 90", "-90 -110", "120 -110", "120 110", "-120 110", "-120 120", "130 120", "130 -120", "-100 -120", "-100 100", "110 100", "110 -100", "-80 -100", "-80 80", "90 80", "90 -80", "-60 -80", "-60 60", "70 60", "70 -60", "-40 -60", "-40 40", "50 40", "50 -40", "-20 -40", "-20 20", "30 20", "30 -20", "0 -20"};
    int testPointX = 1;
    int testPointY = -20;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> vertices = {"1 0", "2 0", "2 1", "3 1", "3 0", "4 0", "4 -1", "5 -1", "5 0", "6 0", "6 2", "0 2", "0 3", "-1 3", "-1 4", "0 4", "0 6", "1 6", "1 7", "0 7", "0 8", "-2 8", "-2 2", "-8 2", "-8 0", "-7 0", "-7 -1", "-6 -1", "-6 0", "-4 0", "-4 1", "-3 1", "-3 0", "-2 0", "-2 -6", "0 -6", "0 -5", "1 -5", "1 -4", "0 -4", "0 -3", "-1 -3", "-1 -2", "0 -2", "0 -1", "1 -1"};
    int testPointX = 0;
    int testPointY = 0;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "INTERIOR";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 5;
    int testPointY = 10;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> vertices = {"0 1000", "1000 1000", "1000 800", "200 800", "200 600", "600 600", "600 400", "200 400", "200 200", "1000 200", "1000 0", "0 0"};
    int testPointX = 322;
    int testPointY = 333;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 10;
    int testPointY = 15;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> vertices = {"0 0", "3 0", "3 4", "-2 4", "-2 0", "-1 0", "-1 3", "2 3", "2 1", "0 1"};
    int testPointX = 1;
    int testPointY = 2;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> vertices = {"0 0", "0 10", "10 10", "10 0"};
    int testPointX = 10;
    int testPointY = 10;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "BOUNDARY";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> vertices = {"0 0", "0 1", "1 1", "1 0"};
    int testPointX = 0;
    int testPointY = 10;
    PointInPolygon* pObj = new PointInPolygon();
    clock_t start = clock();
    string result = pObj->testPoint(vertices, testPointX, testPointY);
    clock_t end = clock();
    delete pObj;
    string expected = "EXTERIOR";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7351173&rd=4755&pm=2384
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
 
using namespace std;
 
int a[2005][2005];
 
class PointInPolygon 
{
public:
  string testPoint(vector <string> vertices, int testPointX, int testPointY) 
  {
    testPointX += 1000;
    testPointY += 1000;
 
    int i;
 
    for (i = 0; i < vertices.size()-1; i ++)
    {
      int x0, y0, x1, y1;
 
      istringstream it(vertices[i]);
      it >> x0 >> y0;
      istringstream it2(vertices[i+1]);
      it2 >> x1 >> y1;
 
      x0 += 1000;
      y0 += 1000;
      x1 += 1000;
      y1 += 1000;
 
      if (x0 == x1)
      {
        int y = y0 < y1 ? y0 : y1;
        int Y = y0 > y1 ? y0 : y1;
 
        for (int j = y; j <= Y; j ++)
          a[x0][j] = 1;
      }
      else
      {
        int x = x0 < x1 ? x0 : x1;
        int X = x0 > x1 ? x0 : x1;        
 
        for (int j = x; j <= X; j ++)
          a[j][y0] = 1;
      }
    }
 
    int x0, y0, x1, y1;
    istringstream it(vertices[0]);
    it >> x0 >> y0;
    istringstream it2(vertices[vertices.size()-1]);
    it2 >> x1 >> y1;
 
    x0 += 1000;
    y0 += 1000;
    x1 += 1000;
    y1 += 1000;
 
    if (x0 == x1)
    {
      int y = y0 < y1 ? y0 : y1;
      int Y = y0 > y1 ? y0 : y1;
 
      for (int j = y; j <= Y; j ++)
        a[x0][j] = 1;
    }
    else
    {
      int x = x0 < x1 ? x0 : x1;
      int X = x0 > x1 ? x0 : x1;        
 
      for (int j = x; j <= X; j ++)
        a[j][y0] = 1;
    }
 
    string ret = "";
    if (a[testPointX][testPointY] == 1)
    {
      ret += "BOUNDARY";
      return ret;
    }
 
    int nl1 = 0;
 
    for (i = testPointX; i < 2005; i ++)
      if (a[i][testPointY] == 1) nl1 ++;
 
    if (nl1 % 2 == 0)
    {
 
    int nl2 = 0;
 
    for (i = testPointY; i < 2005; i ++)
      if (a[testPointX][i] == 1) nl2 ++;
 
    if (nl2 % 2 == 0)
    {
 
      ret += "EXTERIOR";
      return ret;
    }
    else
    {
      ret += "INTERIOR";
      return ret;
    }
    }
 
    else
    {
      ret += "INTERIOR";
      return ret;
    }
    return "";
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/