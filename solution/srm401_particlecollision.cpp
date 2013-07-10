/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8315
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

class ParticleCollision {
public:
    vector<double> collision(int vx, int vy, int vz, int x0, int y0, int z0);
};

vector<double> ParticleCollision::collision(int vx, int vy, int vz, int x0, int y0, int z0) {
    vector<double> ret;
    return ret;
}


int test0() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 0;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int vx = 2;
    int vy = 4;
    int vz = 1;
    int x0 = -1;
    int y0 = -1;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.5};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int vx = 4;
    int vy = 4;
    int vz = 2;
    int x0 = 5;
    int y0 = 4;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int vx = 0;
    int vy = 0;
    int vz = 6;
    int x0 = 0;
    int y0 = 1;
    int z0 = -9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 0;
    int y0 = 1;
    int z0 = -6;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int vx = 0;
    int vy = 0;
    int vz = 3;
    int x0 = -1;
    int y0 = 0;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int vx = 0;
    int vy = 0;
    int vz = -6;
    int x0 = -1;
    int y0 = 0;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int vx = 0;
    int vy = 0;
    int vz = -9;
    int x0 = 0;
    int y0 = -1;
    int z0 = -2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int vx = 0;
    int vy = 0;
    int vz = 7;
    int x0 = 0;
    int y0 = -1;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int vx = 0;
    int vy = 0;
    int vz = -6;
    int x0 = -1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int vx = 0;
    int vy = 0;
    int vz = -5;
    int x0 = 1;
    int y0 = 0;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int vx = 0;
    int vy = 0;
    int vz = -2;
    int x0 = 0;
    int y0 = 1;
    int z0 = 5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int vx = 0;
    int vy = 0;
    int vz = 8;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int vx = 9;
    int vy = -1;
    int vz = 4;
    int x0 = -10;
    int y0 = 1;
    int z0 = -7;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -3.0};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int vx = -8;
    int vy = -4;
    int vz = -4;
    int x0 = -1;
    int y0 = -1;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int vx = 3;
    int vy = 6;
    int vz = 3;
    int x0 = 5;
    int y0 = 8;
    int z0 = 8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 4.0};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int vx = 3;
    int vy = -5;
    int vz = 7;
    int x0 = 1;
    int y0 = 0;
    int z0 = 8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 8.0};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int vx = -5;
    int vy = -4;
    int vz = 0;
    int x0 = -4;
    int y0 = -4;
    int z0 = 6;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 6.0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int vx = 4;
    int vy = 4;
    int vz = 2;
    int x0 = 7;
    int y0 = 8;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, -3.5};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int vx = 2;
    int vy = 4;
    int vz = 10;
    int x0 = -6;
    int y0 = -10;
    int z0 = 10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 35.0};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int vx = 3;
    int vy = 1;
    int vz = -1;
    int x0 = 5;
    int y0 = 2;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 11.0};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int vx = 3;
    int vy = 0;
    int vz = 9;
    int x0 = 7;
    int y0 = 0;
    int z0 = 5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -19.0};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int vx = -5;
    int vy = 4;
    int vz = -2;
    int x0 = -9;
    int y0 = 8;
    int z0 = 10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 14.0};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int vx = 0;
    int vy = 6;
    int vz = -9;
    int x0 = 0;
    int y0 = -2;
    int z0 = -7;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int vx = 4;
    int vy = -4;
    int vz = 10;
    int x0 = 3;
    int y0 = -4;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int vx = 2;
    int vy = 0;
    int vz = 9;
    int x0 = -5;
    int y0 = 0;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int vx = -10;
    int vy = -10;
    int vz = 5;
    int x0 = 5;
    int y0 = 6;
    int z0 = 8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int vx = 8;
    int vy = 0;
    int vz = 4;
    int x0 = -1;
    int y0 = 0;
    int z0 = 7;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int vx = -2;
    int vy = 0;
    int vz = 9;
    int x0 = -7;
    int y0 = 0;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int vx = 2;
    int vy = -2;
    int vz = -1;
    int x0 = 9;
    int y0 = -8;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int vx = 0;
    int vy = -4;
    int vz = -2;
    int x0 = 0;
    int y0 = -10;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int vx = 0;
    int vy = -4;
    int vz = 6;
    int x0 = 0;
    int y0 = -8;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int vx = 2;
    int vy = 0;
    int vz = 5;
    int x0 = 1;
    int y0 = 0;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int vx = -9;
    int vy = -6;
    int vz = -1;
    int x0 = 9;
    int y0 = -2;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int vx = 0;
    int vy = -1;
    int vz = 5;
    int x0 = 0;
    int y0 = -8;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int vx = 10;
    int vy = -6;
    int vz = 10;
    int x0 = -3;
    int y0 = -7;
    int z0 = 5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int vx = 6;
    int vy = 6;
    int vz = 7;
    int x0 = 4;
    int y0 = 2;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int vx = -8;
    int vy = -5;
    int vz = -5;
    int x0 = 3;
    int y0 = -9;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int vx = -5;
    int vy = -10;
    int vz = -7;
    int x0 = 2;
    int y0 = 7;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int vx = -9;
    int vy = -3;
    int vz = 6;
    int x0 = 6;
    int y0 = 5;
    int z0 = 8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int vx = 2;
    int vy = 4;
    int vz = 10;
    int x0 = 0;
    int y0 = 10;
    int z0 = -8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int vx = -8;
    int vy = 5;
    int vz = 7;
    int x0 = 9;
    int y0 = -3;
    int z0 = -2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int vx = -2;
    int vy = -1;
    int vz = 1;
    int x0 = 1;
    int y0 = -9;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int vx = -1;
    int vy = -4;
    int vz = 1;
    int x0 = 2;
    int y0 = 7;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int vx = 9;
    int vy = 8;
    int vz = 0;
    int x0 = 4;
    int y0 = 2;
    int z0 = -7;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int vx = -1;
    int vy = -7;
    int vz = 7;
    int x0 = -1;
    int y0 = 1;
    int z0 = 4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int vx = -1;
    int vy = 4;
    int vz = -3;
    int x0 = -7;
    int y0 = 2;
    int z0 = 4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int vx = 1;
    int vy = 8;
    int vz = -10;
    int x0 = -8;
    int y0 = -2;
    int z0 = -9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int vx = -10;
    int vy = -10;
    int vz = -10;
    int x0 = -10;
    int y0 = -10;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int vx = 10;
    int vy = 10;
    int vz = 10;
    int x0 = 10;
    int y0 = 10;
    int z0 = 10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int vx = 0;
    int vy = -1;
    int vz = -1;
    int x0 = 1;
    int y0 = -10;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = -9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -9.0};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int vx = -7;
    int vy = -9;
    int vz = -4;
    int x0 = -5;
    int y0 = -5;
    int z0 = -10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -5.0};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = -4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = -1;
    int y0 = 0;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = -1;
    int y0 = 1;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = -1;
    int y0 = -5;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -5.0};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = -1;
    int y0 = -5;
    int z0 = -4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int vx = 0;
    int vy = 1;
    int vz = 1;
    int x0 = -5;
    int y0 = -5;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int vx = 0;
    int vy = 1;
    int vz = 1;
    int x0 = -1;
    int y0 = -5;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int vx = 0;
    int vy = 1;
    int vz = 1;
    int x0 = 0;
    int y0 = -5;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int vx = 0;
    int vy = 4;
    int vz = -5;
    int x0 = 0;
    int y0 = -3;
    int z0 = -2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, -1.0, -4.5};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int vx = 0;
    int vy = 4;
    int vz = -5;
    int x0 = 0;
    int y0 = -1;
    int z0 = -3;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, -5.5};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 0;
    int y0 = 1;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int vx = 2;
    int vy = 2;
    int vz = -1;
    int x0 = -3;
    int y0 = -2;
    int z0 = 4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 10.0};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int vx = 1;
    int vy = 0;
    int vz = 1;
    int x0 = -10;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 9.0};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int vx = 0;
    int vy = -1;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 2.0};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int vx = 0;
    int vy = 1;
    int vz = 1;
    int x0 = 1;
    int y0 = 1;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = 3;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int vx = 0;
    int vy = 0;
    int vz = 2;
    int x0 = -10;
    int y0 = 10;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int vx = 0;
    int vy = 0;
    int vz = 2;
    int x0 = 1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 0;
    int y0 = 1;
    int z0 = 5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = 1;
    int y0 = -1;
    int z0 = 2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 2.0};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int vx = -4;
    int vy = 0;
    int vz = 7;
    int x0 = 6;
    int y0 = 1;
    int z0 = 2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 12.5};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int vx = 0;
    int vy = 0;
    int vz = -1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int vx = 0;
    int vy = 0;
    int vz = 3;
    int x0 = 1;
    int y0 = 0;
    int z0 = 4;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int vx = 0;
    int vy = 1;
    int vz = 1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int vx = 0;
    int vy = 0;
    int vz = 10;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int vx = 4;
    int vy = 8;
    int vz = 2;
    int x0 = -1;
    int y0 = -1;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 0.5};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int vx = 5;
    int vy = 2;
    int vz = -5;
    int x0 = 9;
    int y0 = 4;
    int z0 = -5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 5.0};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 5;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 1;
    int y0 = 0;
    int z0 = -2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, -2.0};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = -1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, -1.0};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 9;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 9.0};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int vx = -2;
    int vy = 0;
    int vz = 1;
    int x0 = 7;
    int y0 = 1;
    int z0 = 7;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 1.0, 10.5};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = -1;
    int y0 = -1;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int vx = 0;
    int vy = 1;
    int vz = -1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int vx = 1;
    int vy = 0;
    int vz = 0;
    int x0 = 0;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int vx = 0;
    int vy = -3;
    int vz = -3;
    int x0 = 1;
    int y0 = 6;
    int z0 = 8;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 2.0};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int vx = 0;
    int vy = 1;
    int vz = 0;
    int x0 = 1;
    int y0 = -10;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 1;
    int y0 = 0;
    int z0 = 2;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int vx = 1;
    int vy = 1;
    int vz = 0;
    int x0 = -1;
    int y0 = 0;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {-1.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int vx = 0;
    int vy = 0;
    int vz = 0;
    int x0 = 0;
    int y0 = 1;
    int z0 = 1;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int vx = 5;
    int vy = 6;
    int vz = 7;
    int x0 = 1;
    int y0 = 0;
    int z0 = 10;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0, 10.0};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int vx = 0;
    int vy = 0;
    int vz = 1;
    int x0 = 0;
    int y0 = 0;
    int z0 = 0;
    ParticleCollision* pObj = new ParticleCollision();
    clock_t start = clock();
    vector<double> result = pObj->collision(vx, vy, vz, x0, y0, z0);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=309453&rd=12173&pm=8315
********************************************************************************
using namespace std;
 
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <string>
#include <sstream>
#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <algorithm>
#include <functional>
 
#define PB push_back
#define SZ size()
#define REP(v, hi) for (int v=0; v<(hi); v++)
#define REPD(v, hi) for (int v=((hi)-1); v>=0; v--)
#define FOR(v, lo, hi) for (int v=(lo); v<(hi); v++)
#define FORD(v, lo, hi) for (int v=((hi)-1); v>=(lo); v--)
 
typedef vector<double> VD;
 
/* ############################ THE REAL CODE ############################ */
 
class ParticleCollision {
  public:
  vector <double> collision(int vx, int vy, int vz, int x0, int y0, int z0) {
 
    double A = vx*vx + vy*vy;
    double B = 2*x0*vx + 2*y0*vy;
    double C = x0*x0 + y0*y0 - 1;
    double D = B*B - 4*A*C;
 
    if (A==0) {
      if (x0*x0 + y0*y0 != 1) return VD();
      if (vz!=0) return VD(3,0);
 
      if (fabs(cos(M_PI*z0)-x0) + fabs(sin(M_PI*z0)-y0) > 1e-11) return VD();
 
      VD res;
      res.PB(x0);
      res.PB(y0);
      res.PB(z0);
      return res;
    }
 
    if (D<0) return VD();
    
    VD s;
    s.PB((-B+sqrt(D))/2/A);
    if (D!=0) s.PB((-B-sqrt(D))/2/A);
 
    int n=0;
    VD res(3);
    
    REP(i,s.SZ) {
      double t = z0 + vz*s[i];
      if (fabs(cos(M_PI*t) - x0 - vx*s[i]) + fabs(sin(M_PI*t) - y0 - vy*s[i]) < 1e-11) {
  res[0] = x0 + vx*s[i];
  res[1] = y0 + vy*s[i];
  res[2] = z0 + vz*s[i];
  n++;
      }
    }
 
    if (n==0) return VD();
    if (n==1) return res;
    if (n==2) return VD(3,0);
    return VD();
  }
 
  
 
};
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/