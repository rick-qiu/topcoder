/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5878
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

class RobotCollision {
public:
    double probability(int xSize, int ySize, string commandsRobbie, string commandsSpeedy);
};

double RobotCollision::probability(int xSize, int ySize, string commandsRobbie, string commandsSpeedy) {
    double ret;
    return ret;
}


int test0() {
    int xSize = 1;
    int ySize = 10;
    string commandsRobbie = "L";
    string commandsSpeedy = "R";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.27;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int xSize = 2;
    int ySize = 2;
    string commandsRobbie = "DRUL";
    string commandsSpeedy = "DRUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int xSize = 2;
    int ySize = 2;
    string commandsRobbie = "DRUL";
    string commandsSpeedy = "RULD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4375;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int xSize = 10;
    int ySize = 10;
    string commandsRobbie = "D";
    string commandsSpeedy = "D";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int xSize = 20;
    int ySize = 50;
    string commandsRobbie = "";
    string commandsSpeedy = "";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "U";
    string commandsSpeedy = "D";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.97E-4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int xSize = 27;
    int ySize = 33;
    string commandsRobbie = "DRRLUUDLRD";
    string commandsSpeedy = "RDLURULDRL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006010976456169124;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "RRRRRRRRRR";
    string commandsSpeedy = "LLLLLLLLLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00189;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int xSize = 17;
    int ySize = 20;
    string commandsRobbie = "LLRRDRRDUL";
    string commandsSpeedy = "RULRLLRUDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03207612456747405;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int xSize = 48;
    int ySize = 82;
    string commandsRobbie = "LURUULUDUD";
    string commandsSpeedy = "LLUDLLLUDR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023561046871901645;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int xSize = 52;
    int ySize = 66;
    string commandsRobbie = "DUDLRRRULU";
    string commandsSpeedy = "DDULRDRUDU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012183935916453398;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int xSize = 42;
    int ySize = 8;
    string commandsRobbie = "R";
    string commandsSpeedy = "R";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003720238095238095;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int xSize = 92;
    int ySize = 52;
    string commandsRobbie = "LUDRDUDDUD";
    string commandsSpeedy = "RRLRUDUURD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018227651955794678;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int xSize = 16;
    int ySize = 16;
    string commandsRobbie = "LULRLULDUD";
    string commandsSpeedy = "RRUDLLULDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029327392578125;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int xSize = 98;
    int ySize = 48;
    string commandsRobbie = "RUUUULDRDD";
    string commandsSpeedy = "UDURLDLRRL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015163404860243418;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int xSize = 31;
    int ySize = 78;
    string commandsRobbie = "RUUDLD";
    string commandsSpeedy = "LDLULR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0032142786285105983;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int xSize = 10;
    int ySize = 83;
    string commandsRobbie = "DLDUDUDDRU";
    string commandsSpeedy = "LDDRLRLLUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008271156916823922;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int xSize = 78;
    int ySize = 24;
    string commandsRobbie = "LDLDLLULLL";
    string commandsSpeedy = "UDDULRDRRD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006387142504930966;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int xSize = 3;
    int ySize = 74;
    string commandsRobbie = "UUUUUUDURU";
    string commandsSpeedy = "RRULUULLRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04938722506290074;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int xSize = 99;
    int ySize = 93;
    string commandsRobbie = "RRULLRLRDL";
    string commandsSpeedy = "DLRDLDLLUU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0011619244706271758;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int xSize = 28;
    int ySize = 65;
    string commandsRobbie = "LDRDUDLDLU";
    string commandsSpeedy = "DRRLDDULUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0041465402729139;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int xSize = 79;
    int ySize = 40;
    string commandsRobbie = "LLRLLRUDDR";
    string commandsSpeedy = "UUDLDLULUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0028638239064252523;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int xSize = 35;
    int ySize = 99;
    string commandsRobbie = "DLUULLDLRL";
    string commandsSpeedy = "LUULDDLDUR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019096760222301347;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int xSize = 29;
    int ySize = 50;
    string commandsRobbie = "URRRUUDULU";
    string commandsSpeedy = "RURULDDRUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005792152199762188;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int xSize = 6;
    int ySize = 48;
    string commandsRobbie = "DRLUUURRUD";
    string commandsSpeedy = "DUDLULDRRL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01902488425925926;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int xSize = 5;
    int ySize = 43;
    string commandsRobbie = "LDLDL";
    string commandsSpeedy = "DRRLU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03344510546241211;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int xSize = 90;
    int ySize = 18;
    string commandsRobbie = "URULUUUDLU";
    string commandsSpeedy = "LDUUDULLUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004644871208657217;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int xSize = 82;
    int ySize = 28;
    string commandsRobbie = "DDLRR";
    string commandsSpeedy = "DRRLU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0021909790090932266;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int xSize = 22;
    int ySize = 46;
    string commandsRobbie = "UDUURLRLLD";
    string commandsSpeedy = "DUULRDURRU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.009351224046618443;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int xSize = 53;
    int ySize = 23;
    string commandsRobbie = "LDDUDRULRD";
    string commandsSpeedy = "DDRRLLDLRD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0059187286880342084;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int xSize = 55;
    int ySize = 23;
    string commandsRobbie = "DDLRRDDDRR";
    string commandsSpeedy = "UUURLLULRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008429439610054837;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int xSize = 80;
    int ySize = 72;
    string commandsRobbie = "LLDDDRLR";
    string commandsSpeedy = "URUDDDLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0015456814236111112;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int xSize = 46;
    int ySize = 14;
    string commandsRobbie = "DRRRULDUDU";
    string commandsSpeedy = "LRLLDRLRDR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015320589483430423;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int xSize = 77;
    int ySize = 15;
    string commandsRobbie = "RUDUUUL";
    string commandsSpeedy = "LDDLLRL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005972901557317141;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int xSize = 84;
    int ySize = 71;
    string commandsRobbie = "RLRDLULU";
    string commandsSpeedy = "LLLRDUDL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0013276900391843572;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int xSize = 73;
    int ySize = 61;
    string commandsRobbie = "RUD";
    string commandsSpeedy = "DRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 9.059867188852566E-4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int xSize = 72;
    int ySize = 18;
    string commandsRobbie = "RDUULUURRL";
    string commandsSpeedy = "DLDDLLDLRU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.008693653787532389;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int xSize = 54;
    int ySize = 38;
    string commandsRobbie = "RDULRULULU";
    string commandsSpeedy = "DLDLRRLLRD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00508893524693258;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int xSize = 51;
    int ySize = 57;
    string commandsRobbie = "DU";
    string commandsSpeedy = "DL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.947395401228948E-4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int xSize = 28;
    int ySize = 86;
    string commandsRobbie = "DRRULDDRLR";
    string commandsSpeedy = "LDLURLDLLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003330192271608481;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int xSize = 65;
    int ySize = 8;
    string commandsRobbie = "DRR";
    string commandsSpeedy = "UUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01003698224852071;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int xSize = 38;
    int ySize = 64;
    string commandsRobbie = "RLDDRLDDRL";
    string commandsSpeedy = "DDUDURURRD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004353953860803324;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int xSize = 18;
    int ySize = 75;
    string commandsRobbie = "URURRURRDR";
    string commandsSpeedy = "LRRRDLLURR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.006089986282578876;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int xSize = 24;
    int ySize = 4;
    string commandsRobbie = "DDRUDDRDUU";
    string commandsSpeedy = "RUDLRLDUDR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0886501736111111;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int xSize = 91;
    int ySize = 36;
    string commandsRobbie = "LDDDURUUDL";
    string commandsSpeedy = "RRRRRDLRUU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003129840584053038;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int xSize = 99;
    int ySize = 65;
    string commandsRobbie = "UDRR";
    string commandsSpeedy = "LDLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.141868146530151E-4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int xSize = 62;
    int ySize = 71;
    string commandsRobbie = "LRU";
    string commandsSpeedy = "RLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 9.022787337381856E-4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int xSize = 19;
    int ySize = 62;
    string commandsRobbie = "LRL";
    string commandsSpeedy = "DRD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002531556175613468;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int xSize = 91;
    int ySize = 37;
    string commandsRobbie = "LLDLUDRDDL";
    string commandsSpeedy = "LDLDRDRDDL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010592157904305217;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int xSize = 48;
    int ySize = 1;
    string commandsRobbie = "UULLUL";
    string commandsSpeedy = "LLDRUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08072916666666667;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int xSize = 60;
    int ySize = 83;
    string commandsRobbie = "RLDULLLDDR";
    string commandsSpeedy = "UDRRRRURDR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019329930162416736;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int xSize = 9;
    int ySize = 38;
    string commandsRobbie = "RDRUDRDL";
    string commandsSpeedy = "RULLLURR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024127081837146472;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int xSize = 28;
    int ySize = 91;
    string commandsRobbie = "";
    string commandsSpeedy = "";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.924646781789639E-4;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int xSize = 50;
    int ySize = 61;
    string commandsRobbie = "DDRUDUDUUR";
    string commandsSpeedy = "DRURLRRDUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0023935501209352327;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int xSize = 14;
    int ySize = 94;
    string commandsRobbie = "";
    string commandsSpeedy = "";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.598784194528875E-4;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int xSize = 65;
    int ySize = 87;
    string commandsRobbie = "URUDUDURRD";
    string commandsSpeedy = "DURDRLDRLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017174382270879116;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int xSize = 4;
    int ySize = 79;
    string commandsRobbie = "DDUDUDURUL";
    string commandsSpeedy = "DUUDLDLRLU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0196883512257651;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int xSize = 19;
    int ySize = 88;
    string commandsRobbie = "DURLDRLLLU";
    string commandsSpeedy = "LLRDDRLRLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.004312873446120739;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int xSize = 52;
    int ySize = 34;
    string commandsRobbie = "LRULUUULUR";
    string commandsSpeedy = "RRRRURDURL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0060844756454618044;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int xSize = 41;
    int ySize = 12;
    string commandsRobbie = "RRDDRLRUUL";
    string commandsSpeedy = "RLLRRRRLUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01716901315354617;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int xSize = 96;
    int ySize = 27;
    string commandsRobbie = "ULURRLDRDD";
    string commandsSpeedy = "DLDRURULDR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.003974569187242798;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int xSize = 74;
    int ySize = 7;
    string commandsRobbie = "DRDDUDUDDL";
    string commandsSpeedy = "ULULLDDDUU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015578181601347624;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int xSize = 31;
    int ySize = 33;
    string commandsRobbie = "DRRLUDRUDD";
    string commandsSpeedy = "UULURDLDUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00836001677927702;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int xSize = 86;
    int ySize = 43;
    string commandsRobbie = "LLDLUDRLRU";
    string commandsSpeedy = "ULLLDLRDRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.001832806296710455;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int xSize = 97;
    int ySize = 48;
    string commandsRobbie = "LULDDDDUDL";
    string commandsSpeedy = "URUDRRUULD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0017780885027337892;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int xSize = 65;
    int ySize = 1;
    string commandsRobbie = "DDDLRLRDDU";
    string commandsSpeedy = "DUDDRDUDDL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.050414201183431956;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int xSize = 56;
    int ySize = 71;
    string commandsRobbie = "RLURLLUDDR";
    string commandsSpeedy = "RURLRULLUR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018293867834775252;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int xSize = 3;
    int ySize = 13;
    string commandsRobbie = "DLLDDULRDU";
    string commandsSpeedy = "ULRDURDRLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2064431295200526;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int xSize = 98;
    int ySize = 88;
    string commandsRobbie = "ULDRL";
    string commandsSpeedy = "UULLD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.980589398012536E-4;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int xSize = 90;
    int ySize = 41;
    string commandsRobbie = "URRUURDLLL";
    string commandsSpeedy = "LLRRRDUULR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002791327913279133;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int xSize = 75;
    int ySize = 4;
    string commandsRobbie = "LLLRRUDDU";
    string commandsSpeedy = "RRRLUULUL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021977777777777777;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int xSize = 9;
    int ySize = 37;
    string commandsRobbie = "DRDULRRRUD";
    string commandsSpeedy = "RDLLDULURU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.03397090784478172;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int xSize = 88;
    int ySize = 34;
    string commandsRobbie = "LDLLUUDRUD";
    string commandsSpeedy = "RURRLRUUDL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0038851375504017844;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int xSize = 17;
    int ySize = 78;
    string commandsRobbie = "RRRLLUUUDL";
    string commandsSpeedy = "LLLRRLLUUR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.007706412417618167;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int xSize = 1;
    int ySize = 1;
    string commandsRobbie = "UDLDRRRU";
    string commandsSpeedy = "LLLLLLLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "DDDDDDDDDD";
    string commandsSpeedy = "RDDDDDDDDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.989E-4;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int xSize = 1;
    int ySize = 2;
    string commandsRobbie = "L";
    string commandsSpeedy = "R";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.75;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int xSize = 1;
    int ySize = 1;
    string commandsRobbie = "";
    string commandsSpeedy = "";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int xSize = 5;
    int ySize = 5;
    string commandsRobbie = "UULLDDRRUL";
    string commandsSpeedy = "URDLURDLUR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2992;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUULLLLL";
    string commandsSpeedy = "DDDDDRRRRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018955;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int xSize = 50;
    int ySize = 1;
    string commandsRobbie = "R";
    string commandsSpeedy = "D";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0396;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int xSize = 50;
    int ySize = 1;
    string commandsRobbie = "D";
    string commandsSpeedy = "R";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0396;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int xSize = 2;
    int ySize = 2;
    string commandsRobbie = "RL";
    string commandsSpeedy = "LR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int xSize = 2;
    int ySize = 2;
    string commandsRobbie = "UD";
    string commandsSpeedy = "DU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int xSize = 2;
    int ySize = 2;
    string commandsRobbie = "DD";
    string commandsSpeedy = "LR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int xSize = 4;
    int ySize = 3;
    string commandsRobbie = "LR";
    string commandsSpeedy = "UD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2013888888888889;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int xSize = 3;
    int ySize = 3;
    string commandsRobbie = "UDUDLRLRDU";
    string commandsSpeedy = "UDUDLRLRUD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5555555555555556;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "LRLRLRLRLR";
    string commandsSpeedy = "LRLRLRLRLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.02E-4;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UDRLUDRLUD";
    string commandsSpeedy = "RLUDULRDDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.02E-4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUUUUUUU";
    string commandsSpeedy = "LLLLLLLLLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00109615;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "DULRRLDUUD";
    string commandsSpeedy = "LRDLRRDURU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 7.9989E-4;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUUDDDDD";
    string commandsSpeedy = "LLLLLRRRRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 6.481E-4;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUUUUUUU";
    string commandsSpeedy = "UUUUUUUUUU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1E-4;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUURRRRR";
    string commandsSpeedy = "UUUUURRRRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.69E-4;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int xSize = 47;
    int ySize = 38;
    string commandsRobbie = "DURLLRUDUL";
    string commandsSpeedy = "LRLUDLDRUR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00501505425425325;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUUUUUUU";
    string commandsSpeedy = "DDDDDDDDDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00189;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "LULULULULU";
    string commandsSpeedy = "RDLUDLRULD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00107855;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "DDDDDDDDDD";
    string commandsSpeedy = "RRRRRRRRRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00109615;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UDLRUDLRUD";
    string commandsSpeedy = "LRUDLRUDLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0398E-4;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "LLLLLLLLLL";
    string commandsSpeedy = "RRRRRRRRRR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00189;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UDLRUDLRUU";
    string commandsSpeedy = "DUUDLRUDLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0299E-4;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "LLLLLDDDDD";
    string commandsSpeedy = "RRRRRUUUUU";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0018955;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "UUUUUDDDDD";
    string commandsSpeedy = "UUUUUDDDDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3E-4;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "RRRRDLLLLU";
    string commandsSpeedy = "UUUURDDDDL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0010034;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int xSize = 10;
    int ySize = 10;
    string commandsRobbie = "DDD";
    string commandsSpeedy = "DDD";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.022;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "LLLLLLLLLL";
    string commandsSpeedy = "LLLLLLLLLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1E-4;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int xSize = 3;
    int ySize = 3;
    string commandsRobbie = "LRL";
    string commandsSpeedy = "RLR";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3333333333333333;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int xSize = 100;
    int ySize = 100;
    string commandsRobbie = "RRRRRRRRRR";
    string commandsSpeedy = "LLLLLLLLLL";
    RobotCollision* pObj = new RobotCollision();
    clock_t start = clock();
    double result = pObj->probability(xSize, ySize, commandsRobbie, commandsSpeedy);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00189;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7574434&rd=8070&pm=5878
********************************************************************************
#include <iostream>
#include <vector>
#include <map>
#include <ext/hash_map>
#include <set>
#include <algorithm>
#include <complex>
#include <numeric>
#include <ctype.h>
#include <math.h>
#include <sstream>
#include <string>
#include <deque>
using namespace std;
using namespace __gnu_cxx;
typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
 
int xs, ys;
int dx[256], dy[256];
 
bool simulate(int x, int y, int xx, int yy, const string &s1, const string &s2){
  if(x == xx && y == yy) return true;
  for(int i = 0; i < s1.size(); i++){
    int nx = x + dx[s1[i]]; nx <?= (xs - 1); nx >?= 0;
    int ny = y + dy[s1[i]]; ny <?= (ys - 1); ny >?= 0;
    int nxx = xx + dx[s2[i]]; nxx <?= (xs - 1); nxx >?= 0;
    int nyy = yy + dy[s2[i]]; nyy <?= (ys - 1); nyy >?= 0;
    if(nxx == x && nyy == y && nx == xx && ny == yy) return true; // exchanged positions
    if(nx == nxx && ny == nyy) return true; // new positions are the same
    x = nx, y = ny, xx = nxx, yy = nyy;
  }
  
  return false;
}
 
class RobotCollision {
  public:
  double probability(int xSize, int ySize, string commandsRobbie, string commandsSpeedy) {
    dx['U'] = -1;
    dx['D'] = 1;
    dy['L'] = -1;
    dy['R'] = 1;
    xs = xSize, ys = ySize;
    int cnt = 0;
    for(int i = 0; i < xSize; i++)
      for(int j = 0; j < ySize; j++)
        for(int ii = 0; ii < xSize; ii++)
          for(int jj = 0; jj < ySize; jj++)
            if(abs(i - ii) + abs(j - jj) < 22)
            if(simulate(i, j, ii, jj, commandsRobbie, commandsSpeedy)) cnt++;
            
    return (ld)cnt/(xSize*ySize*xSize*ySize);
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/