/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12364
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

class EqualSums {
public:
    int count(vector<string> board);
};

int EqualSums::count(vector<string> board) {
    int ret;
    return ret;
}


int test0() {
    vector<string> board = {"1-", "-2"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> board = {"123", "4--", "--9"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> board = {"9--", "-9-", "--9"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 271;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> board = {"11", "12"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> board = {"---98--5--------12-2-8------7--------1--72-------5", "--628---------9-40-14-------------0------2-----6--", "5----0--6--------------2----0-----73-----46-94----", "--8--33-------5-9-8-89----------0--6------2-8-----", "-6---56------6-------2--0----1-------6--2----92---", "--58----7--------6-2----1------85-1----6-------99-", "4-------8---------4-9---------2--3------31--5---2-", "-0-3------6---4-9-4-------890-6----7--9---------32", "--7---0-0------08-1--3-----8--773---8-5152---6----", "----2-75------6---4-7-3-----5---------------------", "--35-13-------8333-8--2---8---------4---51---2--1-", "---3------4-9-75-----3-------4----80-------8-3--6-", "-----558---27------9--3-3-----20---6----8-3------8", "----5-------4-2---86---5-5--6---28----------------", "22-----87--08----33----2--2-----9----2----------1-", "------17-----8----45-------76--1---4-1-------59---", "--6--91--6----0----9---1-----8----6---6--2--8-1---", "-59--------2----7-------0--8-5---7--10----07---1--", "---9-------4--7--9--------7--41----7-08--3462-4---", "------0--6---5---8--6-----2--42-41-----------2-2--", "53--6-----776------33--0--0-6-----8-37---3-55-----", "-1--4-------2-------1---------------1--3---8------", "---------7--------0836----22-42-54------23----4---", "8-0-----3147--5-0-------7-0-------28-7---4----0--2", "1---0-90-70-----------6-----------3-5-2---5---1-6-", "--4--6-----21------7-------1------------6---------", "----69-----43-3------11---8-4-------376-------3---", "---------9-6-----2-5-----6--74-99----8-7------0---", "--1--6-7--13---7-2-2--5----7--------4---163-01-190", "------5--56---9255---6--06--6---50----155-6------8", "-7--------9-----3------4-3-4-------39-0-----------", "--35------------------2-4---1--1-----------1------", "4----0--3--1---------0-------8--2----65---4----5--", "9---51-65-4--1----1----------9--8--------1--------", "---------6-------9------81--------------1-8-5----1", "-1-5--1-----4-----------------8-----2--1---8------", "30---2-----4--4----3--------9---3---1176-58-------", "0----7-8----9---1-04--1----9-3----------------3---", "------9-----------9-0---8---8-----1----5--2-------", "--33------7--9-------9--------36-32-9------9------", "---85----0-5------------2--52-6-----5---7----4----", "-15-----7----9------------5-38--3-------8-------11", "--56---4----7----3-9---7-2---7-4-------9---4--5---", "4------------74-7-6--9--988----7-1----69-1--5--13-", "------11----7-1------5323----2-----1-0-7--3----1--", "-------2-----3---------84--9---8-3--2---7----4---1", "4---5219-----41-68---4-----13-------9-----73-----3", "-------------8---1----0--0---9-8--------03------0-", "-----9--6-----8----------5--------------4--7---2--", "-0-9-0--32---------3-----81----2---20-4-----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
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
    vector<string> board = {"---9----------------------------------------------", "-----------2--2----90---------6------------------7", "-------9-----1-------0---7----------------3-1--9--", "-----1--6-----------8--------7------9-------------", "------8-6------------7----------------------------", "----0---------------------------------8-----------", "-------------------------------------3--------5---", "-------------------7----3----3--------------------", "--73-0---6--0-------------------7675--------------", "---2--------2-6-----0---1--3-----8--7------0----1-", "---3----------------------------------------------", "--------6---8-------------3-------------3---7-----", "8-7-5---4--------------------3-----------8-----7--", "-----1-4-------5-----------------------5--1-----3-", "---9---------------1----9-0-----------------------", "-------------------------------------1----0-------", "-------------0--5-------------2-------------------", "-1----------1-----9-----4-5----8---------3----1---", "--------8---6---------------6---------------------", "--4---3---------------------------------------28--", "--5----------9---07---------------------5-------33", "-7----------------8------------4----------5------5", "---------2--2--------4---------3------------------", "----7-----------------1--5------------------------", "-----8-9-----------1---2--3-------2---8---3--2----", "------4--------------0----6-9---------------------", "2------47-8--7--------47--5--9------7--2--------8-", "---7-------3---------5---8---7-1--------------7---", "------------------------------------2--------7----", "---1--5-9----------1-------------------3----------", "----------------------6-1----------3---3--------1-", "---5-----------4---------------9---0-----1-----7--", "-------------2------------------------------0-----", "---1---------56---------5---6---0---6---5-7-------", "-----------------0-----9-------------4-------5----", "--981--3--------------2---------------------4-----", "-------5-----------------9-------3--6----9-----4--", "-2----------------------------1---5----6---4----9-", "--------------------------------------62--7-9-----", "-8------------------6----------------9-------4----", "-33---8--------2-----------------3-1------------4-", "------1--------------21--7---5---------0----------", "-------8---2-----0-----3--4----2----73---------9--", "8----------0---8---8---------8----2---------------", "-1------------------------------------1-7---------", "---8-------0---------0-------------------5---7----", "----46-5------------------------------8-----------", "-----------1--------------------------------2-----", "-------2------4---------4----2----------------9-4-", "--------7--------------------13--------------4----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> board = {"------------8--------------------1----------------", "-7--------8---------------------------------------", "---------4---------------------2------------------", "----------------------------------------6--------2", "7---6---------------------------------------------", "---------0-----------------7----------------------", "------------------------------------9-----------3-", "------------8------------------3------------------", "-----------------------------1--------------0-----", "---------------------------------------------9---1", "---2--------------8-------------------------------", "-------------5--------------------------------6---", "--------------------------------5--------------0--", "-----------------9----------------------0---------", "-----------------------2--4-----------------------", "-----------7---------------------8----------------", "--------------------8-----6-----------------------", "-------------------------3---------------0--------", "----------------------------------5-------------2-", "-----------------4--------------1-----------------", "--------8-----2-----------------------------------", "------------------------------------0----------6--", "----------------------5------------------1--------", "----------------------------------0-----------6---", "------------------------------9------------4------", "-------0--------------0---------------------------", "------0-----------------------------------6-------", "--------1--6--------------------------------------", "-----1-----------------------------8--------------", "----3--------------9------------------------------", "-88-----------------------------------------------", "----------------4----9----------------------------", "------1-----------------------------------3-------", "---------------4-------------------4--------------", "--3-------4---------------------------------------", "-----------------------9---------------6----------", "-------------------------0---8--------------------", "8--6----------------------------------------------", "-------------------------------------------6-0----", "----------------1--------------------8------------", "---------------------------7----------8-----------", "-----7-------------------------------4------------", "--------------9------8----------------------------", "-------------6----------------3-------------------", "-------8----------------3-------------------------", "---------------7--------3-------------------------", "----------------------------7---------------------", "------------------18------------------------------", "--------------------2------------------0----------", "--------------------------------------7-----9-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> board = {"855--4---", "------7-3", "---74-76-", "-----4--4", "-55---874", "63---2-5-", "96---5985", "---6-265-", "4---1---0"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> board = {"--77-66-", "-7---22-", "-6664554", "---7----", "-5---55-", "-766----", "-7-3-22-", "---8---6"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> board = {"--25---2", "26-4341-", "2-1--41-", "-9-76-4-", "-57-95-7", "2-1--411", "5-4767-4", "483--6--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> board = {"6---2", "96-7-", "---6-", "-9-75", "4-1--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> board = {"----6-", "6-----", "5--5--", "-89-89", "--8-7-", "5-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> board = {"---85-874", "744743-6-", "744--3--3", "85585-87-", "8--854---", "--363-6-2", "--696----", "633-3---2", "-114-043-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
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
    vector<string> board = {"37--452-", "--1----1", "-6-43--1", "5-4--7-4", "8-----7-", "-6-43---", "-9----4-", "---65-33"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> board = {"7--85--", "-3-----", "---9--5", "5----4-", "4255--1", "97---86", "--77-5-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> board = {"-7-6--7", "9-9-8--", "-877-8-", "343---4", "-9-8-99", "89-879-", "89---9-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> board = {"382788", "7-----", "6-----", "4-----", "3-----", "6-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> board = {"4677585", "2------", "3------", "1------", "5------", "6------", "1------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> board = {"---8--", "--4---", "-5----", "5-----", "-----2", "----1-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8120;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> board = {"---6---", "6------", "----6--", "-----4-", "-0-----", "------3", "--4----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 34300;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> board = {"--7------", "-4-------", "------2--", "-----6---", "5--------", "-------2-", "---6-----", "--------8", "----8----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7282800;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> board = {"---2-", "----3", "4----", "-3---", "--3--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 744;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> board = {"----8---", "--9-----", "4-------", "-------1", "-----4--", "------2-", "---6----", "-6------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 578556;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> board = {"4----", "----0", "--7--", "-7---", "---3-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1280;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> board = {"----3-", "7-----", "--5---", "-6----", "---4--", "-----5"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 27720;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> board = {"------4", "--7----", "-7-----", "-----6-", "---5---", "----2--", "3------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 126000;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> board = {"--2---", "-6----", "3-----", "----6-", "-----4", "---8--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19548;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> board = {"------------9-------------------------------------", "-9------------------------------------------------", "---------9----------------------------------------", "-------------------------------------------------9", "9-------------------------------------------------", "---------------------------9----------------------", "------------------------------------9-------------", "-------------------------------9------------------", "-----------------------------9--------------------", "---------------------------------------------9----", "------------------9-------------------------------", "----------------------------------------------9---", "--------------------------------9-----------------", "----------------------------------------9---------", "-----------------------9--------------------------", "---------------------------------9----------------", "--------------------------9-----------------------", "-----------------------------------------9--------", "------------------------------------------------9-", "-----------------9--------------------------------", "--------9-----------------------------------------", "-----------------------------------------------9--", "----------------------9---------------------------", "----------------------------------9---------------", "------------------------------9-------------------", "-------9------------------------------------------", "------9-------------------------------------------", "-----------9--------------------------------------", "-----9--------------------------------------------", "----9---------------------------------------------", "--9-----------------------------------------------", "---------------------9----------------------------", "------------------------------------------9-------", "-----------------------------------9--------------", "----------9---------------------------------------", "---------------------------------------9----------", "-------------------------9------------------------", "---9----------------------------------------------", "-------------------------------------------9------", "----------------9---------------------------------", "--------------------------------------9-----------", "-------------------------------------9------------", "--------------9-----------------------------------", "-------------9------------------------------------", "------------------------9-------------------------", "---------------9----------------------------------", "----------------------------9---------------------", "-------------------9------------------------------", "--------------------9-----------------------------", "--------------------------------------------9-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 433258310;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> board = {"---", "111", "112"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> board = {"-11", "-11", "-12"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> board = {"-4--", "-0-2", "--1-", "4---"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> board = {"--2", "02-", "-10"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
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
    vector<string> board = {"4---", "-04-", "3---", "---3"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> board = {"71-", "-2-", "--5"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> board = {"0-0", "-2-", "0-0"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> board = {"4---", "2---", "-2--", "--01"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> board = {"---1", "-4--", "2---", "--0-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> board = {"-06", "2--", "8--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> board = {"-4-", "--4", "04-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> board = {"0-2", "-3-", "-3-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> board = {"---8", "7---", "-377", "-0--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> board = {"-1-", "1-2", "-6-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> board = {"--7", "-4-", "8--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> board = {"-1-", "5-4", "-3-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> board = {"-5-3-", "---6-", "2----", "---5-", "2-3-2"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> board = {"--1", "9--", "-1-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> board = {"--------3", "------3--", "--0------", "-1-------", "3---0-01-", "-----00--", "---2-----", "-1----0--", "---0-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> board = {"4-5", "-2-", "-0-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> board = {"----2", "----0", "0----", "-2---", "1-11-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> board = {"--2", "--3", "34-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> board = {"-0-", "1-1", "-0-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> board = {"4-5", "--1", "-1-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> board = {"354-5343546534233545622565362535535235524335324--6", "354553435465342335456-2565-625355352355243-5324456", "13233121324312011323400-4314-313313013302113102234", "-54553435465-4-33545622565362535535-355-4335324456", "24-44-32435423--243-511-5425-424-24124413224213345", "132331213243-2011323400343140313313013302113102234", "1323312-32-31201132340034314031331301330211310223-", "243442324354-31-2434511454251424424124413-242133-5", "24344-32--54231224345114542514-4424124413224--3345", "35-55343546534233545622565362535535235524335324456", "4656645465764534465673-67647364664634-63-446435567", "35455343546534233-45622565362535-352-5524335324456", "24344232435423-22434511454251424424-24413224213345", "46566454657645344656733676-7364-646346635446435567", "46566-5465-64534465-73367647364-6463-6635446435567", "35455-4-546-34233545622565362535535235524335324-56", "4-566454657-4534-6567-3676473646646346635446435567", "465664546576453--656733676473646646-46635446435567", "243-4232435423122434511-54-5142442412441-22421-345", "354553435465342335-562256536253553523-52433532445-", "13233121-24312011323400343140313313013302-131-2234", "-3233121324312-113234003431403133130133021131-2234", "46566454657645344656733676473646646346635446435567", "2434423243542312243451145425142442412441-224213-45", "3545534354653423354562256536253553523552433532445-", "1323312132431201132340034-1403-331-0133-21-3102234", "243442324354231224-451-454-51424424124413224213345", "354553-35465342335456225653625355352-5524-35324456", "1323312132431201132340-343140313313013302113102234", "--5664-465764534465673-676473646646346635446-355-7", "1-2331213243120113234-034314031-31301-302113102-34", "46566454657-45-44656-33676473646646346635446435567", "243442324354-312243451145425142442412441-2242133-5", "46566454657645344656733676473646646346635446435567", "3545-343546534233545622565-62535535-3--24335324456", "24344232435423122434511454251-24424124413224-13345", "2434423243542312243--1-45-2-1424424124413224213345", "13233121324312-1-32340034314031--130133021131-2234", "4-566454657645344656733676473-4664-346-35446435567", "3-455343546534-3354562256536-53553523552433-324456", "13233121-2431201132340-34314-3133130133021-310223-", "465--4546576-534465673367-473646-46346635446435567", "-54553435465-423354562256536-5355-5235--433532--56", "243-42324354-312-43451145425-424424124-1322-213345", "3545534354653423354562-565362535535235524335324456", "35455343546534233545-22565362535535235524335324456", "-656-454657645344656733676473646646346635446435567", "2434423243-423122-3-511454251424424124413224213345", "24344232435423-2243-51145425142442412441-22-213345", "13-33121324312011323400-4314031331-01330211310223-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> board = {"---------------4----9-------2---------9---7-------", "-----------------------6-----0---6---4----------4-", "--688-----0------3--8-------1--------------3----4-", "-----------74------------2------6-------0---------", "--6-------0----3--------------------------6-------", "--------1----------89--------1-------59-----------", "---------------------4------------9---------------", "--------------3------------3---------5------------", "-9----------5------------------7----6----5--16----", "-------------------------------7----6---1---1----6", "--------1-------------------2--------5----7-------", "-----------7---------3------------------0----5----", "------1-0-----------8-----------------------------", "4---------------------------------------0----57---", "--6------------3---------------------------3----4-", "--7-----1------4---8---------1-----------------85-", "---9-----------4-4----7----3-1--------------------", "----------1------4---------------7---59-----------", "4-----------------2--3--------------5--------5----", "-8-------8-7---------3------------8------4-------5", "---------9-85-------------------7---6-------------", "-9-----------3----------33----5-------------------", "--------------2-------------1----------5----------", "---------8----------------------------------0-----", "------------------------2-----4-6-----------------", "---------8-------------------------------4---5----", "-----8---------36--7---6--------------8-----------", "-9------------------------------7-9---------------", "---------9--------3---------------------1---------", "4--------------------3---------6---------4----7--5", "--6----------------7--6----2----------------------", "------13-----------------------------4---------74-", "-------------2----------------46---2-----4--0-----", "-8---------7------2------------6---2--------------", "4-----------------------2-----46------------0----5", "--------------34-----------------7----------------", "--68---3-----------7-------2---------4----6-------", "---9---4---------4--9-------2----7--------------5-", "----------1---34---------------------5-6----------", "----------1-----74-----------1--------------------", "4-------------------------------------------------", "-----------7-2-----------------6----5--------5---5", "---------9----------------------7-93--------------", "----------------------------------------------8---", "--7-----------------------------------------------", "---------8---2----2-------1----6--------04--------", "--688----------363-----6------------------6-----4-", "4--------------------3------------8---------------", "---------9------------------------93-----5--------", "---------------4----9--------1-------------4------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> board = {"-2---2-2----22--2-------------22--2-------2-222---", "---2-----2----22--------2--2----2----2-2--------22", "-2-----2-----2--2-------------22----------2--2----", "------2--------2---2----2-------2----222----------", "--2-------22-----2--2-----2--2---2--2------2------", "-------2----2---2-----22-------2--22------2--2----", "22---2-2-----2--------22-------2--22------2-2-2---", "---22-2--2----22--22----2---2---2-----2---------2-", "22---2-2----22--2-----2-------22--22------2-22----", "22---2-2----2---------22-------2-------------22---", "--2-----2-2------2--2----22--2---2--2---2--2------", "---22-2--2----22--22--------2---2----2-2----------", "--2--------------2-----------2---2--2------2---2--", "--2-------2------2--22---22------2--2---2--2---2--", "--2-----------------22---22--2------2-------------", "2----2-2----2---2-----2-------2---22---------2----", "-----------2-----2--22----2--2----------2--2------", "----2-2--------2--22-------22---2----222--------22", "--2-----2-22-----2--------2--2---2--2---2--2---2--", "-----------2-----2---2---22--2---2--2---2---------", "------2--2----22--2-----2--22---2----2-2---------2", "---22---------2---2--------2----2----22----------2", "--2-----2-----------22---22--2---2------2------2--", "2----2-2--------------2--------2--22------2---2---", "----2----2----22---2-------22---2------2--------2-", "22---2-2----22--2-----22------2---22----------2---", "2----2-2----2---------22----------2------22-22----", "2------2--------2-----2-------22--2------22-222---", "--2-----2--2--------2----2---2------2----------2--", "--------------------------2------2--2------2---2--", "---2-----2----22--22----2--2----2----222--------2-", "---22-2--2----2---22----2--22--------222--------22", "--2-------2--------------22------2--2------2------", "-----2-2--------2------2------2---2------22-2-2---", "----------22-----2--2-----2--2---2--2---2------2--", "2-----------22--2-----2------------------22-2-----", "--2-----2-2------2--2-----2--2------2----------2--", "2----2-2-----2--2-------------22--22-----22---2---", "-----2-------2--------22------22--22------2-222---", "--------2-22-----2--2-----2--2---2--2---2--2------", "---22----2--------22----2--2---------222--------22", "2----2-2----2---------22-------2--------------2---", "2---------------2-----22------22--22------2-2-2---", "---22-2--2----22------------2---2----22---------22", "2------2----22----------------22--2-------2-222---", "--2-----2--------2--22----2--2---2--2------2---2--", "22---2-2-----2---------2------22--22-----22--22---", "---22----------2--22----2--2----2---------------22", "--------2-22-----2--22----2--2------2---2---------", "---------2----22--22-----------------22-----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> board = {"-------------42---1-1-33---1--------1---23--31----", "----------------4---------1---0-------0----1---4--", "2--1----3--4-----0-3-0---3---2-------3--------4-0-", "----225--4--2--3---------------2-3-----5----------", "-2--------------5---------2---1---1---1----2---5--", "--1---------------------------0---0---0----1---4--", "2--1----3--4-----0-3-0---3--32-------3--------4-0-", "2-------3--4-----0-3-----3--32-------3--------4-04", "-------------42---1-1-333--1----5---1---233-31----", "2--1----3--4-----0-3-0-------2-------3--------4-04", "--------------2---1-1-333--1----5---1-----3--1----", "2--1----3--------0-------3--32-------3--------4-0-", "--------4--5---------1---4---3-------4-----------5", "-----140-31-1--2---------------1-2-----4----------", "----1140-31----2---------------1-2-2---4----------", "-22-------------5-------------1---1--------2---5--", "-1------------------------1---0---0---0----1---4--", "----2251-4-----3---------------2-3-3---5----------", "3--2----4--5-----1---1------43-------4--------5-15", "-22-------------5---------2---1---1---1----2---5--", "-22-------------5---------2---1---1---1----2---5--", "--1-------------4---------1---0---0------------4--", "-11-------------4---------1---0---0---0--------4--", "--------------2---1---333--1----5---1---233-31----", "----1-40-3--1--------------------2-2---4----------", "-------------42---1-1--33--1--------1---233-3-----", "----1140-31-1--2-----------------------4----------", "----22---42-2--3---------------2-3----------------", "----2251--2-2--3-----------------3-3---5----------", "----2251----2------------------2-3-3---5----------", "2-------3--4-------3-0---3--32------------------0-", "3--2----4--------1-4-----4--43-------4--------5-15", "-22-----------------------2---1-------1----2---5--", "----1140-31----2---------------1---2---4----------", "-----140-31-1--2---------------1---2---4----------", "2--1----3--------0-3-0---3--3-----------------4-0-", "--1-------------4-------------0---0---0--------4--", "--1-------------4---------1---0---0---0----1------", "-1--------------4---------1---0---0--------1---4--", "----22-1-4--2--3---------------2-3-3---5----------", "----1-40-31-1--2---------------1-2-2---4----------", "--------------2---1-1-333--1----5---1---233-31----", "----1140-31----2---------------1-2-2---4----------", "3--2----4--5-----1-4-1---4--43-------4--------5-1-", "-----14--3-----2-----------------2-2--------------", "2--1----3--------0-3-0---3--3--------3--------4-04", "-22-------------5---------2---1---1---1----2---5--", "----------------5---------2---1---1---1----2---5--", "--------------1---0-0-222-------4---0---12--20----", "-------------42---1-1-333--1----5-------2-3-31----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> board = {"---1------0---------0-0-----1------101--1----0--1-", "-2-----1----22---11--2----------------1----12-----", "--1-2---1--1---2---------------1----------2---2---", "2----1--------1--------1---2----1-2------------1--", "---2------1---------1-1-----2------212--2----1--2-", "-1-----0----11---00--1----------------0----01-----", "--0-1---0--0---1---------------0----------1---1---", "---1------0---------0-0-----1------101--1----0--1-", "1----0--------0--------0---1----0-1------------0--", "------1--1------0-------001--00--1-----0-0-------0", "--0-1---0--0---1---------------0----------1---1---", "------1--1------0--1----001--00--1-----0-0-------0", "---2------1---------1-1-----2------212--2----1--2-", "2----1--------1------------2----1-2------------1--", "-1-----0----11---00--1----------------0----01-----", "------2--2------1--2----112--1---2-----1-1-------1", "------2--2------1--2----112--11--2-----1-1-------1", "2----1--------1--------1---2----1-2------------1--", "------2--2------1--2----112--11--2-----1-1-------1", "-1-----0----11---00--1----------------0----01-----", "---2------1---------1-1-----2------212--2----1--2-", "---1------0---------0-0-----1------101--1----0--1-", "------1--1------0--1----001--00--1-----0-0-------0", "---1------0---------0-0-----1------101--1----0--1-", "--0-1---0--0---1---------------0----------1---1---", "---1------0---------0-0-----1------101--1----0--1-", "------2--2------1--2----112--11--2-----1-1-------1", "-2-----1----22---11--2----------------1----12-----", "1----0--------0--------0---1----0-1------------0--", "2----1--------1--------1--------1-2------------1--", "--0-1---0--0---1---------------0----------1---1---", "---1------0---------0-0-----1------101--1----0--1-", "---2------1---------1-1-----2------212--2----1--2-", "---1------0---------0-0-----1------101--1----0--1-", "--1-2---1--1---2---------------1----------2---2---", "-2-----1----22---11--2----------------1----12-----", "2----1--------1--------1---2----1-2------------1--", "------1--1------0--1----001--00--1-----0-0-------0", "------2--2------1--2----112--11--2-------1-------1", "2----1--------1--------1---2----1-2------------1--", "------1--1------0--1----001--00--1-----0-0-------0", "--1-2---1------2---------------1----------2-------", "------2--2------1--2----112--11--2-----1-1-------1", "------1--1------0--1----001--00--1-----0-0-------0", "------2--2------1--2----112--11--2-----1-1-------1", "---1------0---------0-0-----1------101--1----0--1-", "--1-2---1--1---2---------------1----------2---2---", "---1------0---------0-0-----1------101--1----0--1-", "2----1--------1--------1---2----1-2------------1--", "---2------1---------1-1-----2------2-2--2----1--2-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
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
    vector<string> board = {"--3-----3--3---------5----5-------4-------------33", "---1--3--1------------------3---3---3-------------", "75-------------77--7--------------------5---7-----", "------------7-----7-----------5---------------56--", "---0--2--0----------0-----------2---2--------2----", "----21----1---1-------1201-2-0-------2------------", "42-----------------4-----------4------------4-----", "-----3----3---3-------3-23-4-----4---4------------", "---1--3--1----------1---------------3--------3----", "---2--4--2----------2-----------4---4--------4----", "---4--6-------------4-----------6---6--------6----", "----54----4------------53--5-3---5---55-----------", "--2-----2--2---------4----4-------3-------------22", "----3-----2------------312-3-1---3---33-----------", "--4-----4------------6----6-------5-------------44", "---------------------------------------4--6-------", "---------------664-6------------------------------", "-------4----5-----5----------------------3-4--3---", "-------4----------5-----------3----------3-4--34--", "-------------1---------------------2---0--2-------", "-------------5---------------------6---4----------", "2---------------2--2-----------2--------0---2-----", "-----------------------------------7---5--7-------", "64-------------6-4-------------6--------4---6-----", "---5--7--5------------------7---7---7--------7----", "---4--6--4----------4-------6---6---6--------6----", "---3--5--3----------3-------5---5---5--------5----", "-------3----4-----4-----------2----------2----23--", "-------------5----------------------------6-------", "-------------5-------------------------4--6-------", "-----------------------------------7------7-------", "-------4----5-----5-----------3---------------34--", "64-------------664-6--------------------4---6-----", "-3-------------5-3-5-----------5--------3---------", "--4--------4---------6----6-------5-------------4-", "---------------553-5-----------5--------3---5-----", "-3-------------5-3-5--------------------3---5-----", "-----6----6---6---------5----5-------77-----------", "---3-----3------------------5-------5--------5----", "--4-----4--4---------6----6----------------------4", "-----3----------------3423-4-2---4----4-----------", "---3--5--3----------------------5---5--------5----", "31-------------33--3-----------3------------------", "-------------2---------------------3---1--3-------", "--------0--0--------------2---------------------00", "---2--4--2----------2-------4---4---4--------4----", "-------------6---------------------7------7-------", "3--------------3-1-3-----------3--------1---------", "-------1----------2----------------------0-1--01--", "----7-----6---6-------67-6-7-5-------7------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> board = {"-----------3---------------------21---------------", "-------3--------------------3------------------2-2", "3----------4---3------------------2------3--------", "---3------------4-----3-22------------------4---3-", "-----------4---3-----------------32------3--------", "------4----------2--2------------------33----2----", "----------3-4-2--------4------------------2-------", "---3---------3-----2--3-22------------------4-----", "-3--------------------------3------------------2-2", "-------4--------------------4--------------------3", "3--------------------------------3-------3--------", "-3-----3--------------------3------------------2-2", "---3---------3--4--2--3-22------------------4---3-", "------3----------1--11-----------------22----1----", "-4--------------------------4--------------------3", "------4--------------2----2-----------333----2----", "--3-13--3--------------------32-3--12------2------", "---------43-4-2---------------------------2-------", "---------32-3-1---------------------------1-------", "-------4-----------------------------------------3", "---3---------3--4--2----2-------------------4---3-", "---3---------3--4--2--3-22------------------4---3-", "------------------3--------2---3-----4--------3---", "---------32-3-1--------3------------------1-------", "---------------------------2---3-----4------------", "2----------3---------------------21------2--------", "------3----------1--11----1-----------222----1----", "-4-----4--------------------4------------------3-3", "---------3--3-1--------3------------------1-------", "3----------4---3-----------------32------3--------", "---------32-3-1--------3------------------1-------", "------------------3------------------4--------3---", "-----------------1---1----1-----------222---------", "2----------3---2-----------------2-------2--------", "2--------------2-----------------2-------2--------", "---2---------2-----1--2--1----------------------2-", "-3-----3--------------------3------------------2-2", "------4----------2--22----2-----------333----2----", "-----------3---------------------21------2--------", "---2------------3--------1------------------3---2-", "---------4--4-2--------4------------------2-------", "--4--4--4---------------------3----2-------3------", "------4----------2---2----2-----------333---------", "-------4--------------------4------------------3-3", "3----------4---3-----------------3-------3--------", "3----------4---3-----------------32------3--------", "---2---------2--3--1--2-11------------------3-----", "---------32-3-1--------3------------------1-------", "----13--3--------------------3--3--12------2------", "------------------2------------2-----3--------2---"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 190;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> board = {"------------1-------2---------------0-------------", "------------1-------2-----------------------------", "---3-3----------------0------0-----0---2----------", "3-1-3--1--3-----301------------------0------0-----", "------0---------------------------------1---------", "3---3--1----------1------------------0-----30-----", "-----------------------2-0------------------------", "--------0----------2------3----0--0------------01-", "------0---------------------------------1---------", "3-1-3-----3------01-------------3----0-----30-----", "----------------------------------------1---------", "-----------1------------1---3----------------11---", "------0---------------------------------1---------", "3------1--3-----301-------------3----0------------", "-----------1----------------3----------------11---", "------0---------------------------------1---------", "--------0----------2-1----3--------------------01-", "-----3-------0---------------00----0---2---------3", "---------------2---------0------------------------", "------------------------1---3----------------11---", "--------------0------------2-----2----2--30-------", "--------0----------2-1----3----0--0------------01-", "3-1----1--3-----301-------------3----------30-----", "---------------2-------2-0------------------------", "--------------------2---------------0-------------", "------------------------1---3----------------1----", "-------------------2------3-------0---------------", "-2----------1-----------------------0-------------", "-2----------1-------2---------------0-------------", "--------0----------2-1---------0------------------", "3-1-3--1--------301-------------3----0-----3------", "---------------2-------2-0------------------------", "--1----1--3-----301-------------3----0-----3------", "3-1-3--1--3-----3-1------------------0-----30-----", "------0---------------------------------1---------", "-2----------1-----------------------0-------------", "---------1----0------------2-----2-------30-------", "----------------------------------------1---------", "-2----------1-----------------------0-------------", "3-1-3-----3-----301-------------3----0-----3------", "-----3-------0---------------00----0---2---------3", "--------0------------1----3----0--0------------0--", "------------------------1---3----------------11---", "--1-3--1--3------01-------------3----0-----3------", "--1-3-----------30--------------3----0-----30-----", "---3-3-------0--------0------------0---2---------3", "-----------------------2-0------------------------", "---3-3-------0---------------00----0---2---------3", "3-1----1---------01-------------3----------30-----", "-------------------2---------------------------01-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> board = {"4-7-74-7--------------------7-------------5----4--", "------------3-3--------5---2------33-----4--------", "----------2---------3-----3------1----3-----1-----", "------3--5-----------------------------6---------5", "------------1-1--------3---0-------1-----2--------", "---3-------------0-1-3--0------1------------------", "4-7-74----------------------7-------------5----4--", "----------4---------5-----5------3----5-----3-----", "------0--2-----------------------------3---------2", "---------------1-------------4-------------1------", "------------5-5--------7---4------55-----6--------", "----------4---------5-----5------3----5-----3-----", "---------------2-------------5-------------2------", "----------3---------4------------2----4-----2-----", "---7-------------4-5-7--4------5------------------", "----------5---------6-----6-----------6-----4-----", "-2-----------1-----------2-----------1------------", "--------7--6------------------5---------6----76---", "-2-----------1-----------2-----------1------------", "------------5-5--------7---4------55-----6--------", "------1--3-----------------------------4---------3", "------------2-2--------4---1------22-----3--------", "--------------3--------5---2------33-----4--------", "----------3---------4-----4------2----4-----2-----", "----------------3-4-------------4---2-----------2-", "----------------3-4-------------4---2-----------2-", "------------1-1--------3---0-------1--------------", "4-7-74-7--------------------7-------------5----4--", "3-6-63-6--------------------6-------------4----3--", "4-7-74-7--------------------7-------------5----4--", "--------4--3----------3-------2---------3----43---", "---------------0-------------3-------------0------", "--------------4--------6---3------44-----5--------", "------3--5-----------------------------6---------5", "------4--6-----------------------------7---------6", "2-5-5--5--------------------5-------------3----2--", "--------4--3----------3-------2---------3----43---", "----------2---------3-----3------1----3-----1-----", "----------------2-3-------------3---1-----------1-", "---6-------------3-4-6--3------4------------------", "-----------------------------3-------------0------", "----------------5-6-------------6---4-----------4-", "---4-------------1-2-4---------2------------------", "----------------4-5-------------5---3-----------3-", "3-6-63-6--------------------6-------------4----3--", "----------5---------6-----6------4----6-----4-----", "--------5--4----------4-------3---------4----54---", "4-7-74-7--------------------7-------------5----4--", "--------7--6------------------5---------6----76---", "--------4--3----------3-------2---------3----43---"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> board = {"-----3------1-----------5-------------3--1-------5", "-----------4----------6--------36-----------------", "----------0----------------4-----0--3--------3----", "------------2-------------------------4--2-------6", "------1------------------4--252---------2-----2-1-", "-3-5-------------------1--1----------------2------", "----------2----------------6-----2--5--------5----", "-----3------1-----------5-------------3--1-------5", "3------6-------5----6---------------------5----6--", "-----2------0-----------4-------------2--0-------4", "---------3---5-------3----------------------------", "----4--------------4-----------------5------------", "----3--------------3-----------------4------------", "-3-5-------------------1--1----------------2------", "1------4-------3----4---------------------3----4--", "----------0----------------4-----0--3--------3----", "----------2----------------6-----2--5--------5----", "-----------2----------4--------14-----------------", "3------6-------5----6---------------------5----6--", "-2-4-------------------0--0----------------1------", "----------1----------------5-----1--4--------4----", "---------2---4-------2----------------------------", "-----------2----------4--------14-----------------", "1------4-------3----4---------------------3----4--", "-----------4----------6--------36-----------------", "--2-----3-------151----------------3---3----4-----", "--------------2-------------------3---------------", "--2-----3-------151----------------3---3----4-----", "----2--------------2-----------------3------------", "----------0----------------4-----0--3--------3----", "----3--------------3-----------------4------------", "3------6-------5----6---------------------5----6--", "3------6-------5----6---------------------5----6--", "--------------0-------------------1---------------", "--1-----2-------040----------------2---2----------", "---------3---5-------3----------------------------", "------1------------------4---52---------2-----2-1-", "-----------2----------4--------14-----------------", "--------------1-------------------2---------------", "------2------------------5--363---------3-----3-2-", "------1------------------4--252---------2-----2-1-", "-----------2----------4--------14-----------------", "-4-6-------------------2--2----------------3------", "--------------2-------------------3---------------", "------2------------------5--363---------3-----3-2-", "-2-4-------------------0--0----------------1------", "----2--------------2-----------------3------------", "----------2----------------6-----2--5--------5----", "----------0----------------4-----0--3--------3----", "----4--------------4-----------------5------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 72;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> board = {"2--1--------2-------------------------------------", "------0----------------------0------2-------2-----", "-------------0----------------------------1------1", "--2-------0-----1---2-----------------1---------2-", "----2--0------------------------2--------2----0---", "------0----------------------0------2-------2-----", "------0-----------------------------2-------2-----", "---------1----------------0-2-----2---------------", "2--1--------2--------------------------0----------", "-----------1------1-------------------------------", "--------2--------2-----1------2----0-2-------1----", "---1--------2--------------------------0----------", "-----------1------1-------------------------------", "-2----------------------2--1---2--------1--1---2--", "-----------------------------0------2-------2-----", "-----------1------1-------------------------------", "---------------------2----------------------------", "-----1-------------1-----1-------0----------------", "-----------1------1-------------------------------", "-----1-------------1-----1-------0----------------", "---------------------20---------------------------", "-----------1------1-------------------------------", "-------------01---------------------------1------1", "---1--------2--------------------------0----------", "----2--0------------------------2--------2----0---", "-----1-------------1-----1-------0----------------", "-----------1------1-------------------------------", "-----1-------------1-----1-------0----------------", "--------2--------2-----1------2----0-2-------1----", "-2-------------1--------2--1---2--------1------2--", "2--1--------2--------------------------0----------", "---------1----------------0-2-----2---------------", "--2-------0-----1---2-----------------1---------2-", "---------------1--------2--1---2--------1--1---2--", "-2----------------------2--1---2--------1--1---2--", "-----1-------------------1-------0----------------", "-----------1------1-------------------------------", "-2-------------1--------2------2--------1--1---2--", "---------------------2----------------------------", "------0----------------------0------2-------2-----", "--------------1---------------------------1------1", "--------2--------2-----1------2----0-2-------1----", "-----1-------------1-----1-------0----------------", "-----1-------------------1------------------------", "-----1-------------1-----1-------0----------------", "-----1-------------1-----1-------0----------------", "------0----------------------0------2-------2-----", "---------------------20---------------------------", "----2--0------------------------2--------2----0---", "---------1----------------0-2-----2---------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> board = {"-----------------------3--3---3-----------------3-", "--------------------5--5--5---------------------5-", "---6-----6------------------------------------6---", "------------------6-------------6-----------------", "------------------4---------4---4-----------------", "----------------------------6---6-----------------", "-----0-------00-------------------0-----0---------", "--6--------66--------------------6----------------", "--------------------4--4--4---4-----------------4-", "---------------------5---5-----------------------5", "------0-----------------------------0------0---0--", "----------------6-------6----6-6------------------", "----6------------6-----------------6---------6----", "-----5-------55-------------------5-----5---------", "---------------------0---0---------------0--------", "-----0-------00-------0-----------0-----0---------", "-3-------------3--------------------------3-------", "--------6----------6-----------------6-6----------", "-3-------------3----------------------3---3-------", "----------2----------------2----------------------", "------------------1---------1---1-----------------", "----------2----------------2----------------------", "-5-------------5----------------------5---5-------", "---0-----0----------------------------------0-0---", "-4-------------4----------------------4---4-------", "-----5-------55-------5-----------5---------------", "----------5----------------5----------------------", "--5--------55--------------------5----------------", "3---------------3------------3-3------------------", "------5-----------------------------5------5---5--", "--------------------3--3--3---3-----------------3-", "------------------4---------4---4-----------------", "---------------------3-------------------3-------3", "-----3-------33-------3-----------3-----3---------", "--1--------11--------------------1----------------", "--------------------6--6--6---6-----------------6-", "-0-------------0----------------------0---0-------", "---4-----4----------------------------------4-4---", "1---------------1-------1----1-1------------------", "--0--------00--------------------0----------------", "---------0----------------------------------0-0---", "----4------------------------------4---------4----", "-1-------------1----------------------1---1-------", "-------11----------1-----------------1-1----------", "--2--------22--------------------2----------------", "------5-----------------------------5------5---5--", "---------5----------------------------------5-5---", "---------------------6---6---------------6-------6", "---------------1----------------------1---1-------", "------------------6---------6---6-----------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> board = {"-------------------------1------------------2-1--1", "-------0------------------------------------------", "-------1------------------------------------------", "-------1------------------------------------------", "--3---------------------------------1--------1----", "--2---------------------------------0--------0----", "-------------------------1------------------2-1--1", "---------------------3-----2-----2---1----1-------", "-----0----------------2-1--------------1---0------", "--------------32-2--------------------1-----------", "-----1----------------3-2--------------2---1------", "-------1------------------------------------------", "-------1------------------------------------------", "2-----------------------------1----2-----------1--", "----------------------------------------1-------2-", "-------0------------------------------------------", "------2-11---------2---------2--3-----------------", "3-----------------------------2----3-----------2--", "------1-00---------1---------1--2-----------------", "--3---------------------------------1--------1----", "----------------------------------------1-------2-", "------1-00---------1---------1--2-----------------", "-----------1-1---------------------------3--------", "-----0----------------2-1--------------1---0------", "---02-------0----------2--1----2------------------", "--------------21-1--------------------0-----------", "2-----------------------------1----2-----------1--", "-0------------------2-------0---------------------", "---02-------0----------2--1----2------------------", "-1------------------3-------1---------------------", "3-----------------------------2----3-----------2--", "-----------1-1--------------------2------3--------", "----------2-----1-2-------------------------------", "----------1-----0-1-------------------------------", "-------1------------------------------------------", "--2---------------------------------0--------0----", "-------0------------------------------------------", "--3---------------------------------1--------1----", "2-----------------------------1----2-----------1--", "--------------21-1--------------------0-----------", "--------------21-1--------------------0-----------", "-------------------------1------------------2-1--1", "----------2-----1-2-------------------------------", "-----------1-1--------------------2------3--------", "----------2-----1-2-------------------------------", "-------0------------------------------------------", "2-----------------------------1----2-----------1--", "-----------0-0--------------------1------2--------", "--------------21-1--------------------0-----------", "-1------------------3-------1---------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> board = {"----5---5----------------------------------------3", "------------0--------3--------2-------------------", "-4-------------------------4----------5-----------", "---------------3--------2------------3--3---3-----", "--------------------------5------------3--------2-", "-----------2-----3-----------------3----------3---", "-4-------------------------4----------5-----------", "-----24-------2-4--------1--3--1-4----------------", "-------3----------3-2-----------3-----------------", "---------------3--------2------------3--3---3-----", "----------3---------------------------------------", "---------4--------------------------------1-------", "------------2--------5--------4-------------------", "------------------------------------5--------5----", "3-------------------------------------------------", "--1-------------------41----------1------------1--", "5-------------------------------------------------", "------------------------------------3--------3----", "--02------------------30----------0------------0--", "----3---3----------------------------------------1", "--24------------------5------------------------2--", "------------------------------------4--------4----", "-------1----------1-0-----------1-----------------", "-----13-------1-3--------0--2--0-3----------------", "--------------------------3------------1----------", "------------1--------4--------3-------------------", "----------3--2------------------------------------", "-----------2-----3-----------------3----------3---", "-------------------1---------0-----------2-3------", "----------3--2------------------------------------", "------------------------------------4--------4----", "-----1--------1----------0--2--0-3----------------", "-------------------1---------0-----------2-3------", "----------3--2------------------------------------", "5-------------------------------------------------", "------------1--------4--------3-------------------", "----------1--0------------------------------------", "---------------2--------1------------2--2---2-----", "------------1--------4--------3-------------------", "-----------2-----3-----------------3----------3---", "-----------2-----3-----------------3----------3---", "-----2--------2-4--------1--3--1-4----------------", "------------------------------------4--------4----", "---------------2--------1------------2--2---2-----", "------------0--------3--------2-------------------", "---------4--------------------------------1-------", "------------------3-2-----------3-----------------", "--02------------------30----------0------------0--", "-----------2-----3-----------------3----------3---", "4-------------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1920;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> board = {"----------------------------------1------------40-", "-------------3----3-------------------------------", "5----4---------36----4--------2---------6---------", "--------------------------------5--------5----2---", "--------------------------------7--------7----4---", "---------5---------------------------------4-4----", "------5-------------------------------------------", "---------5---------------------------------4-4----", "-----2---------14----2--------0---------4---------", "----------------------------------3------------62-", "--------------------------------7--------7----4---", "---------------------------------------3--6-------", "---22---------5-------------42--------3-----------", "--------------------------------7--------7----4---", "--3-----4--------2--------------------------------", "---44---------7-------------64--------5-----------", "4----3---------25----3--------1---------5---------", "---4----------7-------------64--------5-----------", "-----------------------01-------------------0-----", "-------------3----3------------------5------------", "-6--------52--------------------------------------", "4----3---------25----3--------1---------5---------", "------6-------------------------------------------", "--1-----2--------0--------------------------------", "--------------------4----3-----------------------6", "---------------------------2---5---6--------------", "-------1-------------------------------1--4-------", "---------7---------------------------------6-6----", "3----2---------14----2--------0---------4---------", "--1-----2--------0--------------------------------", "-------------3-----------------------5------------", "-------------4----4------------------6------------", "--------------------------------6--------6----3---", "------------2------1------4------4----------------", "----------------------5-------------6-------------", "----------------------------------2------------51-", "----------------------4-------------5-------------", "-------3-------------------------------3--6-------", "---33---------6-------------53--------4-----------", "------6-------------------------------------------", "--1-----2--------0--------------------------------", "-----------------------12-------------------1-----", "------7-------------------------------------------", "------5-------------------------------------------", "-----------------------12-------------------1-----", "-6--------52--------------------------------------", "------7-------------------------------------------", "-------2-------------------------------2--5-------", "---------------------------2---5---6--------------", "---------------------------3---6---7--------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 777600;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> board = {"--------------5------------------5----------5-----", "----6-7-------------------6-----------------------", "--------------6------------------6----------6-----", "------------------------------7-------------------", "---------4----------------------------------------", "--------4-------------------------6------------6--", "--3----5----3----------------------------3--------", "-------------------3------------------------------", "----2-3-----------------2-2-----------------------", "----4-5-----------------4-4-----------------------", "-----------------------------2--------------------", "-----------------------------3--------------------", "-----------------3---------------------------4----", "---------3----------------------3-----------------", "---------------------------------------4--------53", "-------------------------------------53-3---------", "-----------------------------4--------------------", "----------1----3-------1------------1-------------", "4-----------------4---3----5-------4--------------", "-3---------------1---------------------------2----", "-----------------------------2--------------------", "--------5-------------------------7-------6----7--", "----------1----3-------1------------1-------------", "--------1-------------------------3-------2----3--", "-------------7------------------------------------", "3-----------------3---2----4-------3--------------", "----4-------------------4-4-----------------------", "2-----------------2---1----3----------------------", "----------------------------4--5------------------", "--4----6----4----------------------------4--------", "-------------------------------------31-1---------", "---------3----------------------3-----------------", "---5-5-----3----3----5----------------------------", "-----------------------------5--------------------", "--------2-------------------------4-------3----4--", "---------2----------------------2-----------------", "--------------------5----7-----------------6------", "----------------------------2-43------------------", "-------------------4------------------------------", "---7-7-----5----5----7----------------------------", "-------------6------------------------------------", "---------------4-------2------------2-------------", "---------------------------------------5------6--4", "--------------------3----5-----------------4------", "---------------------------------------5------6-64", "---------5----------------------5-----------------", "-3---------------1---------------------------2----", "----2-3-----------------2-2-----------------------", "-------------3------------------------------------", "----------4----6-------4------------4-------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 63642672;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> board = {"--------4------3--------------------------------4-", "----1-----------------------------2-------2-------", "------4---------------------------------36--------", "-------------4------------------------------------", "--------------------3---4---33---------3----------", "---------------------2----------------------------", "------------------------3---22---------2----------", "----4-----------------------------5-------5-------", "-----------------2------------------2-------------", "---------4--3-------------------------------------", "-------------------------------------------------6", "--------------5-----4-------44---------4----------", "-----------------------------------8--------------", "--------------------------5---8------------5------", "--------3------2--------------------------------3-", "-----2---4--3-------------------------------------", "------6---------------------------------5---------", "-----------------------------------5--------------", "-------------1------------------------------------", "------------------------------7------------4------", "-------------------------------------------------3", "-----------------2--------------------------------", "------------------------------3------------0------", "---5----------------------------------------------", "-------------------------------4-----4--------2---", "----------------------6------------7--------------", "--------------------------1----------------1------", "-------------1------------------------------------", "--------------7-----6---7---66---------6----------", "----------------------5------------6--------------", "---------------------2----------------------------", "---------------------7----------------------------", "--2-----------------------------------------------", "------4----------------------------------6--------", "----------------------2------------3--------------", "-------------------------2-------0----------------", "-----------5----5-5-------------------------------", "--------------------------------------5-----4--3--", "-----------3----3-3-------------------------------", "-4------------------------------------7-----6--5--", "-------------6------------------------------------", "----------------------7------------8--------------", "3------2-----------5---4---4----3------------4----", "5------4--7--------7-------6-----------------6----", "-------------------------------------5--------3---", "--76----------------------------------------------", "-----------------3------------------3-------------", "-------------5------------------------------------", "-------------------------7------------------------", "--------5------4--------------------------------5-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10077696;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> board = {"----------------------2----2--------2------------2", "----2-------------------2--------2---2------------", "----------------------2----2---------------------2", "-------2--2---------------------------------------", "-------------------2------2--------2------------2-", "-----------------2----------------------2---------", "---------2-2--------------------------------------", "--------------------------------2-----2-------2---", "----------------------2----2--------2------------2", "2-----------------2-------------------------2-----", "---2-------------------2----2---------------------", "-----------------2----------------------2---------", "----------------------2----2--------2------------2", "----------------------------------------2---------", "---2-------------------2----2---------------------", "-------------2--------------------2---------------", "-2-------------2--------------------------2--2----", "--------------------------------2-----2-------2---", "-------2--2---------------------------------------", "-----------------------2----2---------------------", "-------------------2---------------2------------2-", "----2---------2---------2--------2-------2--------", "---2------------------------2---------------------", "---------2----------------------------------------", "--2-----------------------------------------------", "---2-------------------2----2---------------------", "----2---------2---------2--------2---2---2--------", "------------2---2---------------------------------", "---------------------------2--------2-------------", "---2-------------------2--------------------------", "------------------------------22-----------2------", "-----------------------------2--------------------", "---2-------------------2----2---------------------", "--------------------2-----------------------------", "-----2--2------------------------------2----------", "-----------------------------------------------2--", "--2-----------------------------------------------", "--------------------------------2-----2-------2---", "-------------------------------------------2------", "---------2-2--------------------------------------", "-------------2--------------------2---------------", "-------------------------2----2------------2------", "2-----------------2-------------------------2-----", "2-------------------------------------------2-----", "-----2--2------------------------------2----------", "---------------2--------------------------2--2----", "------2----------------------2--------------------", "---------------2-----------------------------2----", "-----------------------------------------------2--", "-------------2-------2----------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 387158345;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> board = {"----------1---------------0-----7-----------------", "-----4--------------------------------------------", "--------5-------------5-3---5---------------6-----", "-------2----------1-------------------------------", "-----4--------------------------------------------", "-----3--------------------------------------------", "-6----------5-------------------------------------", "-------------------------------7---5----------6---", "--------6-------------6-4---6---------------7-----", "-------------4----------------5-------------------", "3------------------------------------------6------", "3------------------------------------------6------", "-------------4----------------5-------------------", "---------------2-------------------------3--------", "--2------------------------------------------2----", "---8---------------1-------------------3----------", "---------------3----------------------------------", "----7----------------5---0-----------------------5", "----------------5-------------------------3-----1-", "----------1---------------0-----7-----------------", "-------------5----------------6-------------------", "-7----------6-------------------------------------", "---8---------------1-------------------3----------", "-----------------------3--------------------------", "----8----------------6---1-----------------------6", "------------------------------------------4-----2-", "-----------5---------------5----------------------", "-----------------------------6--------------------", "----8----------------6---1-----------------------6", "----------------5-------------------------3-----1-", "-------------------------------6---4--2-------5---", "-6----------5-------------------------------------", "--------5-------------5-3---5---------------6-----", "-------------5----------------6-------------------", "-----3--------------------------------------------", "---------------2-------------------------3--------", "---------4---------------------------6------------", "-------------------------------6---4--2-------5---", "------2-------------1------------22---------------", "--------5-------------5-3---5---------------6-----", "-----------5--3------------5----------------------", "--2------------------------------------------2----", "---------5---------------------------7------------", "-------------4----------------5-------------------", "-----------------5------------------4---6------2--", "-------------------------------6---4--2-------5---", "-----------------------2--------------------------", "----------------6-------------------------4-----2-", "-------------------------------6---4--2-------5---", "--------5-------------5-3---5---------------6-----"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 45094393;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> board = {"--4------------------2---------------------------2", "------6----5---------------------3---------3-4----", "---1----------------------------------7-----------", "-------2------------------------------------------", "--4------------------2-2-------------------------2", "71--5---5------7---------------3------------------", "-----------------------------8--------------------", "------7----6---------------------4---------4-5----", "------------7----0--------------3----5----7-------", "----------------------------------------3---------", "------------8----1--------------4----6----8-------", "----------------------------------------------2---", "---------7--------------------------6----------5--", "----------------------------------2-----3---------", "------------------------------5-------------------", "------5----4---------------------2---------2-3----", "--------------1--------------7--------------------", "----------------------3--4------------------------", "93--7---7------9---------------5------------------", "---------8--------------------------7----------6--", "---------9--------------------------8----------7--", "------------------------2--4----------------------", "------------------------------6-------------------", "-------3------------------------------------------", "------------------6----------------------8--------", "------------------7----------------------9--------", "-------------5--3---2------------------8----------", "---1----------------------------------7-----------", "----------------------2--3------------------------", "---2----------------------------------8-----------", "-----9--------------------------------------------", "----------------------------------------------2---", "-------------------6----------------------------7-", "-------------------7----------------------------8-", "--------------------------4-----------------------", "------------------5----------------------7--------", "---------9--------------------------8----------7--", "----------1------------------------2--------------", "82--6---6----------------------4------------------", "------------------6----------------------8--------", "----------2------------------------3--------------", "----------------------------3---------------4-----", "------------------5----------------------7--------", "-------------3--1---0------------------6----------", "----------2------------------------3--------------", "------------------7----------------------9--------", "----------------------------------------------2---", "--------------------------4-----------------------", "----------------------------------------------2---", "-----8--------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 523422657;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> board = {"--------------------------------------2-----------", "---1----------------------------------------------", "-----------------------3--------------------------", "3------------0--------------------0---------------", "------------------0----------------------0--------", "----------2---------------------------------------", "-------------------1---------------4-----------3--", "------1-----------------------------------2-----2-", "---------------------------------4----------------", "-----0--------------------------------------------", "-------------------------0----2-------------------", "-----------------------2--------------------------", "--2------1-----------------2----------------------", "-------------------0---------------3-----------2--", "------------------1----------------------1--------", "------------------------2-------------------------", "----------------3---------1-----1-------2----1----", "-3------------------------------------2-----------", "------------------0----------------------0--------", "--------------4-----3-2--------1--------------2---", "-2------------------------------------1-----------", "------------2----------------0--------------------", "----------2--------------------------------3------", "---------------2----------------------------1-----", "------------2----------------0--------------------", "---------------2----------------------------1-----", "---------------------------------4----------------", "--3------2-----------------3----------------------", "---------------3----------------------------2-----", "-------1---------2-------------------------------2", "------1------------------------------1----2-----2-", "------------------1----------------------1--------", "---------------------0----------------------------", "4------------1--------------------1---------------", "--------------3-----2-1--------0--------------1---", "----------------3---------1-----1-------2----1----", "-------------------------1----3-------------------", "------------------0----------------------0--------", "---------------3----------------------------2-----", "---1------------------------2---------------------", "----1----------------------------------4----------", "----------2--------------------------------3------", "-----------4------------------------1-------------", "--------------4-----3-2--------1--------------2---", "------2-----------------------------------3-------", "-------0---------1-------------------------------1", "-----------3------------------------0-------------", "3------------0--------------------0---------------", "--------0------------0----------------------------", "--------1------------1----------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 17280;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> board = {"0--------1----0-----1---------------0-------------", "------------------1---------------------0-----1---", "----------------------------0---------------1-----", "--------1--------------------------1--------------", "--1-----------------------------------------------", "--------1--------------------------1--------------", "-------------1---------------0--------------------", "-------------------------------------0------------", "--------------------------------------1-----------", "-----------0-------------------------------0------", "0--------1----0-----1---------------0-------------", "-1--0---------------------------------------------", "------------0------0-------------------------1---1", "-------1---------------1--------------------------", "0--------1----0-----1---------------0-------------", "--1-----------------------------------------------", "------1--------------------1----------------------", "------1--------------------1----------------------", "----------------------------0---------------1-----", "--------------------------0----0--1------------0--", "-------1---------------1--------------------------", "----------------------------0---------------1-----", "-----1-----------------------------------01-------", "-------------------------1------0-----------------", "--------------------------0----0--1------------0--", "-----------------0---------------------1----------", "-----1-----------------------------------01-------", "---------------1----------------------------------", "-----------0-------------------------------0------", "---------------------10---------------------------", "----------1---------------------------------------", "-----------------0---------------------1----------", "-------------1---------------0--------------------", "--------1--------------------------1--------------", "---1------------1-------------1--1----------------", "0--------1----0-----1---------------0-------------", "-----------0-------------------------------0------", "-----1-----------------------------------01-------", "------1--------------------1----------------------", "---------------------10---------------------------", "-1--0---------------------------------------------", "---1------------1-------------1--1----------------", "----------------------------0---------------1-----", "--1-----------------------------------------------", "----------------------------0---------------1-----", "------------------------0-----------------------1-", "---------------------10---------------------------", "------------------1---------------------0-----1---", "---------------------10---------------------------", "-------1---------------1--------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 256;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> board = {"-------------------------9----9-------------------", "---------------------9----------------------------", "--------------------------------99----------------", "-------------------------------9----------9-------", "------------------9------------------------9------", "----------9---------------------99----------------", "---------------------9----------------------------", "-------9--------------9---------------------------", "-------------------------------9----------9-------", "-----------9--------9-----------------------------", "------------------9------------------------9------", "-----9------9-------------9-----------------------", "------------------------------------------------9-", "-----------------------------9-----------------9--", "---------------9----------------------------------", "-------------------------------------9-------9----", "--9-----------------------------------------------", "-----------------------------9-----------------9--", "---------------------9----------------------------", "-----------------------99---------------------9---", "-----------------9----------9---------------------", "-----------------9----------9-----9---------------", "-------------------------------9----------9-------", "-----------------9----------9-----9---------------", "---------------9----------------------------------", "------------------------------------------------9-", "-----------------9----------9-----9---------------", "---------------------------9----------------------", "--9-----------------------------------------------", "-------------------------------------9-------9----", "-------------------------------------9-------9----", "----9-------------------------------9--99---------", "-9------9-----------------------------------------", "---9------------9--------------------------------9", "---------------9----------------------------------", "------------------------------------------------9-", "---9------------9--------------------------------9", "-------------9---------------------------9--------", "-------------------9------------------9-----9-----", "-----9------9-------------9-----------------------", "----9-------------------------------9--99---------", "-----9------9-------------9-----------------------", "---------9----9--------------------9--------------", "----------9---------------------99----------------", "-------------------------------------9-------9----", "9-----9-------------------------------------------", "-----9------9-------------9-----------------------", "-------------------------------9----------9-------", "----------9---------------------99----------------", "---------------------9----------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 70207355;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> board = {"-----3---------------2--2-------------------------", "--------------4-----------------------------------", "-----2---------------1--1-------------------------", "---------3----------------------------------------", "-----------0--------------------------------------", "----------------------------------------4---------", "-4-----------------------------3------------------", "-----------2--------------------------------------", "-------2------------------------------------------", "-----------2--------------------------------------", "--------2-------------------------------------1---", "--------------------------2------------2----2-----", "------2------2---------------------2---------2----", "------------------------------------2-------------", "----3---------------------------------------------", "------------1------------------------------1-----0", "-----------------21------------------1------------", "------------4------------------------------4-----3", "------------------------------------4-------------", "--------------1-----------------------------------", "------------3------------------------------3-----2", "--------4-------------------------------------3---", "-------------4---------------------4---------4----", "-----------------------3------------------4-------", "-------------------2----------1---1---------------", "1-------------------1-----------------------------", "2---------------1---2-----------------------------", "---------------------------0----0-----------------", "--------1-------------------------------------0---", "--------------2-----------------------------------", "----------------------------------------3---------", "---0-------------------------------------0--------", "---------------------------------1----------------", "----1---------------------------------------------", "----------4----4-------------------------------3--", "--1-------------------1---------------------------", "----3---------------------------------------------", "--1-------------------1---------------------------", "-1-----------------------------0------------------", "-------------------------1--2---------------------", "---2-------------------------3--------------------", "---------1----------------------------------------", "--------2-------------------------------------1---", "------------------------------------2-------------", "-------2------------------------------1-----------", "---1-------------------------2-----------1--------", "------------------------------------------------1-", "---------------------------------------3----3-----", "----1---------------------------------------------", "--3-------------------3---------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 3538944;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> board = {"------------------------------------------3-------", "----------------------4---------------------2-----", "------------------------------------------3-------", "-----------1-------------------0-----------------1", "----------5------3-3--------0-3-------------------", "--2---------------------------------3-------------", "-----------------------------------------------4--", "----------6------4-4--------1-4-------------------", "-----------------------------2---------3----------", "-------4-5----------------------------4-----------", "-----------2-------------------1-----------------2", "---------------------------------3----------------", "----------------------------------------------1---", "--2---------------------------------3-------------", "---5--------------6--3----------------------------", "--------0-------4---------------------------------", "---4--------------5--2----------------------------", "-----------1-------------------0-----------------1", "-------------------------------------------4------", "-----------------------------------------3--------", "----4------------------6--------5-------5---------", "3----------------------------------2------------7-", "--------------1---------3-------------------------", "------0-------------------------------------------", "-------------------------------------------4------", "------------2--------------------------------6----", "--------------------3-----------------------------", "---5--------------6--3----------------------------", "----------6------4-4--------1-4-------------------", "---4--------------5--2----------------------------", "---------------------------------4----------------", "-------------------------------------6------------", "----------------------------------1---------------", "--2---------------------------------3-------------", "----------------------------------------------0---", "-4-----------------------5------------------------", "----4------------------6--------5-------5---------", "------0-------------------------------------------", "-----2-------2-1-----------6----------------------", "----------------------4---------------------2-----", "2----------------------------------1------------6-", "-----------------------------------------2--------", "--------------------------3-----------------------", "---------------------------------3----------------", "---5--------------6--3----------------------------", "-4-----------------------5------------------------", "------------------------------------------4-------", "--------------------------3-----------------------", "-----------------------------2---------3----------", "-------------------------------------6------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 318399545;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> board = {"-----------3--------------------------------------", "----------------2---------------------------------", "2------------------------------------------2---3--", "------------------------------2----2--------------", "--------------------------2-----------------------", "-2----------------------------------------------2-", "------2-------------------------------------------", "----------------------2---------------------------", "---------------------------1--------------------1-", "--------4-------------------2-------------4-------", "-----1--------------------------------------------", "-------------------------1---------------3--------", "--------3-------------------1-------------3-------", "-2-------------------------2--------------------2-", "----------1------------------1-------2------------", "--------------------------------1------------1----", "------------------0-------------------------------", "----2--2-------------------------------2----------", "1------------------------------------------1---2--", "------------------------1-------------------------", "-----------2--------------------------------------", "----1--1-------------------------------1----------", "---------------------------2--------------------2-", "------1-------------------------------------------", "----2--2-------------------------------2----------", "------------------------------2----2--------------", "--2-------------------------------------------1---", "--2------3------------------------------------1---", "---1----------------0-------------------1---------", "----------------1---------------------------------", "----------------------1---------------------------", "-------------------0-2----------------------------", "-------------------------1---------------3--------", "------2-------------------------------------------", "------------1-------------------------------------", "-----3--------------------------------------------", "-----------------2--------------------1-----------", "------------------------2-------------------------", "---------------1----------------------------------", "------------1-------------------------------------", "------------------------------------2-------------", "------------------0-------------------------------", "--------------------------------3------------3----", "-----------------------3-------4--3---------3-----", "-------------0-------------------0---------------2", "--------------0-----------------------------------", "--1------2------------------------------------0---", "-------------------------1---------------3--------", "------------------------------3----3--------------", "-------------------1-3----------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 10616832;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> board = {"---------3-----------------4----------------------", "-3------------------------------------------------", "------------5---------------------------3---------", "-------5-----------------------4-------3---------5", "--------------------------------4---3-----------3-", "-3------------------------------------------------", "-------------------3------------------------------", "-----4----------------4---5----------5------------", "-----------------------------------------3----3---", "-----------------------------------------3----3---", "----------------------------3------------------4--", "----4------------64-------------------------------", "-----------------------5--------------------------", "--------------5------------------3----------------", "-------------------3------------------------------", "----4------------64-------------------------------", "-----------------------------------4--------------", "------4-5--5--------------------------------------", "---5-----------------5----------------------------", "----------------------------3------------------4--", "--5-----------------6-----------------------------", "-------5-----------------------4-------3---------5", "------------------------------4--------------5----", "-------5-----------------------4-------3---------5", "-----------------------5--------------------------", "----------------------------3------------------4--", "4-------------------------------------------------", "-----------------------------------4--------------", "--5-----------------6-----------------------------", "------------------------------------------6-------", "-------------4------------------------------------", "--------------------------------------4-----------", "----------------4---------------------------------", "-----------------------------------------3----3---", "------4-5--5--------------------------------------", "4-------------------------------------------------", "--------------5------------------3----------------", "---------------4---------5------------------------", "------------------------------4--------------5----", "-------5-----------------------4-------3---------5", "--------------------------------------------3-----", "---------------4---------5------------------------", "----------------------------------6---------------", "4-------------------------------------------------", "-----------------------------6--------------------", "----------4-------------3------------------3------", "----------------------------------6---------------", "----------4-------------3------------------3------", "--------------------------------------------3-----", "-------------4------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 290451936;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> board = {"-------------------------------2------------------", "--3-----------------------4-----------------------", "-------------------------------------2------------", "-------------------------------------------------1", "-------------------1------------------------------", "--------------------------------1-----------------", "-------2----------1-------------------2-----------", "-------------33--------------------------2--------", "----4------4----------3---------------------------", "----------------4---------------------------------", "-------------------------------------------------0", "----------------------------4---------------------", "--------------------------------1-----------------", "---------------------------------1----------------", "------------2------------------------------2------", "---------------------------------3----------------", "---------3----------------------------------------", "---------------------1----------------------------", "------------------------------4-----4-------4---3-", "---------------0--------1-------------------------", "---------------0--------1-------------------------", "--------2------------------------------------1----", "-------------------------------------------------0", "--------------------0--1----------0---------------", "-------------------1------------------------------", "-2---1---------------------1----------------------", "----------------------------1---------------------", "---------1----------------------------------------", "---------------------------------------2----------", "---------------------------------0----------------", "----4------4----------3---------------------------", "-------------------0------------------------------", "---------4----------------------------------------", "--------------------0--1----------0---------------", "----------------3---------------------------------", "---2----------------------------------------------", "----2------2----------1---------------------------", "------------4------------------------------4------", "-1---0---------------------0----------------------", "--------------------2--3----------2---------------", "-----------------2--------------------------------", "-----------------------------------------------2--", "----------3-----------------------------------3---", "------1-------------------------------------------", "1------------------------0--------------0---------", "---------------2--------3-------------------------", "--0-----------------------1-----------------------", "-----------------------------3-----3------3-------", "-------3----------2-------------------3-----------", "-----------------------------------------------0--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 143327232;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> board = {"------------2-------------------------------------", "----------------------------------------5---------", "---------2--------------1-------------2-----------", "----------------------------------------------5---", "----------------4---------------------------------", "-2--3---------------------------------------------", "----------------------07------0-------------------", "---------2--------------1-------------2-----------", "------0---0---------------------------------------", "------------2-------------------------------------", "-----------------------------5--------------------", "----------------4---------------------------------", "------------------------------------------6-------", "-------1-----------------------3------------------", "--------------------------------------------6-----", "---5-----------------------------------------3----", "0---------------------------6---------------------", "-----------------------------5--------------------", "-------------------5------------------------------", "----------------------------------------------5---", "--------------2--------------------------------2--", "--------4-----------4-----------------------------", "--------4-----------4-----------------------------", "---------------------5----------------------------", "-------------2---------------------5---2--------6-", "------------2-------------------------------------", "-------------------------------------------------6", "---------------3----------------------------------", "-----1------------------------------2-------------", "---------2--------------1-------------2-----------", "----------------------07------0-------------------", "--1---------------1-------7-----------------------", "-----------5--------------------------------------", "---------------------5----------------------------", "--------------------------------------------6-----", "--1---------------1-------------------------------", "---------------------------0-----7---7------------", "-------1-----------------------3------------------", "---------2--------------1-------------2-----------", "--------4-----------4-----------------------------", "--1---------------1-------7-----------------------", "-------------------------0------------------------", "--------------------------------3-5---------------", "-----------------3-------------------------7------", "-----------------------------------------6--------", "-2--3---------------------------------------------", "----------------4---------------------------------", "-----------------------------5--------------------", "-------1-----------------------3------------------", "----------------------07------0-------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 440382371;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> board = {"----------------5-------------------------------4-", "-----------5--------------------------------------", "----------2-----------------3------------------5--", "----------------------------------------1---------", "------------3------1------------------------------", "------------------3---------------------------6---", "---------------------------------------------4----", "0--------------------------------0----------------", "--------------------------------------------4-----", "-------------------------------------5------------", "---5--------------------------2-------------------", "--------------------------4-----------------------", "-----------------------1---------------0----------", "--------------2-----------------------------------", "----4---------------------------------------------", "-------------------------4---------64-------------", "-------4------------------------------------------", "---------------3-5------4----5-3------------------", "--------------1-----------------------------------", "-----0----------------2---------------------------", "--------------------4--------------------1--------", "--------------------4--------------------1--------", "---------------3-5------4----5-3------------------", "---6--------------------------3-------------------", "----------------------------------------1---------", "-------4------------------------------------------", "----------1-----------------2------------------4--", "--3-----------------------------------------------", "-0-------------------------0----------------------", "---------------------------------------------4----", "--------------------------------------5----4------", "-------4------------------------------------------", "-----------------------2---------------1----------", "--------0-----------------------5-----------------", "--------------------------------------------4-----", "-------------5------------------------------------", "------------------------------------------6-------", "-----------------------1---------------0----------", "--------0-----------------------5-----------------", "---------6----------------------------------------", "------5-------------------------------------------", "--------------------------4-----------------------", "-------4------------------------------------------", "-----0--------------------------------------------", "--------------------------3-----------------------", "----------------------------------1--------------5", "---------------------4----------------------------", "0--------------------------------0----------------", "-----1----------------3---------------------------", "----4---------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 791465068;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> board = {"-----1--------------------------------------------", "---2----------------------------------------------", "-----------------0--------------------------------", "----------------------1---------------------------", "-------------------------------------0---0--------", "------------------------------------------00------", "----------------------------------------------4---", "-------------4------------------------------------", "-------11-------------------1---------------------", "-------------------------------4------------------", "--------------------------0-----------------0-----", "------4-------------------------------------------", "1---------1----------1----------------------------", "-----------------1--------------------------------", "-------------------------------1------------------", "2---------2----------2----------------------------", "---------------------------------------1----------", "----------------1------1-----------1--------------", "---------------------------------------0----------", "---------------------------0----0-----------------", "--2------------2----------------------------------", "-4---------------------------4--------------------", "---------------------------------------------1----", "------------------------------------3-------------", "----3-----------------------------3-------------3-", "------------------4-------------------------------", "----------------------1---------------------------", "---------0----------0-----------------0-----------", "-----------------1--------------------------------", "------------------------------1----------------1--", "------------------------------0----------------0--", "------0-------------------------------------------", "------------------------------------------33------", "--------------2----------2------------------------", "---------------------------------------0----------", "----------------------0---------------------------", "-----4--------------------------------------------", "-------11-------------------1---------------------", "----------------------------------------3---------", "---4----------------------------------------------", "-----------4--------------------------------------", "2---------2----------2----------------------------", "------------4------4------------------------------", "------------------------0-------------------------", "------------------1-------------------------------", "---------3----------3-----------------3-----------", "--------------2----------2------------------------", "-------------------------------------------------4", "---------------------------------1----------------", "------------------------------------2-------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 183999965;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> board = {"-------------------------------------------3------", "---------------------------3-------3--------------", "3---------3---------------------------------------", "3---------3---------------------------------------", "---3-----------3----------------------------------", "-------------------------------------------------3", "--------------3--------------------------------3--", "--------------------3---------3-------------------", "---------3------------------------3---------------", "------3-------------------------------------------", "---------------------3-------3---------3----------", "------------3-------------------------------------", "---------------------------------------------33---", "-----------3--------------------------------------", "----------------------------3---------------------", "---------------------3-------3---------3----------", "----------------------3-----------------3---------", "---------------------------------------------33---", "-----------------3--------------------------------", "----3--3------------------------------------------", "3---------3---------------------------------------", "-------------------3------------3-----------------", "-------------------------------------------------3", "-----------------------3--------------------------", "-----3--------------------------------------------", "------3-------------------------------------------", "------------------------------------------------3-", "----------------------------3---------------------", "------------------------------------------3-------", "--------3----------------3------------------------", "--------------3--------------------------------3--", "---------3------------------------3---------------", "--3-----------------------------------------------", "-------------3----------3-------------------------", "--------------------------3----------3------------", "------3-------------------------------------------", "--------------------------------------3-----3-----", "------------------------------------3-------------", "-------------3----------3-------------------------", "------------------3----------------------3--------", "-------------------------------3------------------", "---------------------------------3----------------", "-3--------------3---------------------------------", "---------------------3-------3---------3----------", "------3-------------------------------------------", "--------------------------3----------3------------", "-----3--------------------------------------------", "-------------------------------------------3------", "------------------------------------3-------------", "-----------3--------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 406463307;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> board = {"---------------------2----------------------------", "---------------------3----------------------------", "-------------------------3-----3------------------", "----------3-------------------------4---------4---", "---------------------------------------3----------", "------------------------------------------------1-", "---------1----------------------------------0-----", "------------------------4-------3--------4--------", "--------------------------2----------2------------", "------3-------------------------------------------", "------------------------------1-------------------", "-3------------------------------------------------", "-----------3--------------------------------------", "------------------------------------------------2-", "----1--0---------1--------------------------------", "-----------------------------------3--------------", "--2------------------------2----------------------", "------2-------------------------------------------", "---------------------------------------------0----", "-2------------------------------------------------", "---------------------------------------2----------", "-----0--------------------------------------------", "------2-------------------------------------------", "---------------1----------------------------------", "--------------------3-----------------------------", "--------------------------------------2-----------", "-------------------1------------------------------", "----------------------------------2-------2-------", "--------------2-----------------------------------", "---4-------------------4-----3--------------------", "----------------1----------------1----------------", "-------------------------------------------1------", "4-------------------------------------------------", "-----------4--------------------------------------", "-------------------------------------------2------", "--------1---------2-------------------------------", "----------------------------------------2---------", "----------------------------2---------------------", "---------------1----------------------------------", "-------------------------1-----1------------------", "----------------------------------3-------3-------", "--------------3-----------------------------------", "---------------1----------------------------------", "---------2----------------------------------1-----", "------------3---------3---------------------------", "----1--0---------1--------------------------------", "-------------------------------------------------3", "-------------0---------------------------------1--", "-------------------------------------------------4", "-------------------0------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 83654870;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> board = {"----6----------------------------------------4----", "---------------------4----------------------------", "-----------------------------------6--------------", "---------------------------6--1-------------4-----", "------4-------------------------------------------", "-----------------------------------------------54-", "-----------------------4----------------5---------", "7-------------------------------------------------", "----------------------------------3-5-------------", "------------------------4---------------------6---", "-----------------62-------------------------------", "-4-----------------------------1------------------", "-----------------------------------5--------------", "----------------2---------------------------------", "-------------------------------------------------1", "-----------------------------------------2--------", "-----------0--------------------------------------", "-----6--------------------------------------------", "-----------1--------------------------------------", "----------------2---------------------------------", "7-------------------------------------------------", "--------------4-----------------------------------", "---------------------------6--1-------------4-----", "---------------------------------------2----------", "------------------------5---------------------7---", "----7----------------------------------------5----", "----------4---------------------------------------", "-----------------------------------------------43-", "-------------------------2------------------------", "-------3---------------------7--------------------", "------------------------3---------------------5---", "---------------4------4---------------------------", "-------------------------------------5------------", "---------------------------6--1-------------4-----", "-----------------------------------7--------------", "-5-----------------------------2------------------", "---------------4------4---------------------------", "----------------------------3----3----------------", "------------3-------------------------------------", "----------------2---------------------------------", "---2----------------------------------------------", "--3------5----------------------------------------", "-------------------4------------------------------", "----------------------------------3-5------1------", "--------------------------------------3-----------", "--------------------------5-----5-----------------", "------------------------5---------------------7---", "------------------------------------------5-------", "--------3-----------------------------------------", "-------------7------2-----------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 107376140;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> board = {"-----------------5---------5----------------------", "-----------------------2--------------------------", "----------------------------4---------------------", "-------3------------------------------------------", "-------------------------------------------------4", "------5-------------------------------------------", "----------------------------------5------3---5----", "--1-----------------------------------------------", "--------6--------------------------6--------------", "--------------------------------------7--------5--", "-----------------------4--------------------------", "--6-----------------------------------------------", "-----------2--------------------------------------", "----------------5---------------------------------", "---------4--------------6-------------------------", "-6------------------------------------------------", "-------------------------------7------------------", "---------------------------------2----------------", "-------------------------------------4------------", "--------------3--------------6--------------------", "---------------4----------------4---2-------------", "----------------------------8---------------------", "---4--------------------------------------6-------", "-------------------2------------------------------", "-----------2--------------------------------------", "----------------------6---------------------------", "--------------------3-----------------------------", "---------0--------------2-------------------------", "------------------5--6----------------------------", "-------------------------5------------------------", "--------5--------------------------5--------------", "-----6--------------------6-----------------------", "-------------------------------------------------3", "------------------3--4------------------------4---", "------------------------------5-------------------", "--------------------------------------------6---3-", "-------------2------------------------------------", "----------8---------------------------------------", "---------------------------------------4----------", "--------------------7-----------------------------", "--------------1--------------4--------------------", "-----3--------------------3-----------------------", "----3---------------------------------------------", "----------------------------------------3---------", "--------------------3-----------------------------", "-----------------------3--------------------------", "7------------------------------------------5------", "------------3-------------------------------------", "-----------2--------------------------------------", "-3------------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 631447797;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> board = {"----------------------------2---------------------", "--------6-----------------------------------------", "--------------------------------------5-----------", "-----------------------44-------------------------", "------------------------------------6----5--------", "-------------------------23-----------------------", "-------------------------------3------------------", "--------------------5-----------------------------", "-----6--------------------------------------------", "------------------4-------------------------------", "---------4----------------------------------------", "3-----3---------2---------------------------------", "-------------------------23-----------------------", "-----------------------------------4--------------", "-------------------------------------6------------", "-------------------5------------------------------", "-----------------------55-------------------------", "--4--------------------------------------------2--", "-2-----------------------------------------3------", "------------------------------------------------2-", "-----------------------------3--------------------", "----------------------------------4---------------", "------------4--------------------------3----------", "----------------------------------------3---------", "--6--------------------------------------------4--", "--4--------------------------------------------2--", "---------------6-----------4----------------------", "----3---------2-----------------------------------", "-6-----------------------------------------7------", "------------------------------------------------5-", "--------------------------------4-----------------", "---------------------3----------------------------", "----------3---------------------------------------", "----------------------------------3---------------", "--------------------------------4-----------------", "---------------7-----------5----------------------", "-----------------2---------------------------3----", "-----------------------------------4--------------", "-------------3------------------------------------", "------------------------------------------6-------", "-----------2----------3---------------------------", "--6--------------------------------------------4--", "---5---------------------------------------------7", "----------------------------------------------3---", "-------6-------------------------5----------------", "--------7-----------------------------------------", "6-----6---------5---------------------------------", "--------------------------------------------7-----", "------------------------------6-------------------", "---------------7-----------5----------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 246774373;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> board = {"------------------------------------------------3-", "-----------------7--------------------------------", "----------------------------------------5--5------", "------------------1-------------------------------", "-----------4-4------------------------------------", "-------------------------6------------------------", "-6---------------------6------------6-------------", "----------------------2---------------------------", "-2---------------------2------------2-------------", "------------1-----------1-------------------1-----", "-----------------------------------0--------------", "5-------------------------------------------------", "--------------0-----------------------------------", "-------------------8------------------------------", "---------------8----------------------------------", "------------------8-------------------------------", "---------------------------------------3----------", "6-------------------------------------------------", "--------------------------------7-----------------", "-----3---------------------------------------3----", "----------------------------------------6--6------", "-----------------------------0--------------------", "-------6------------------------------------------", "---------5-------------------------------------5--", "------------------------------------------5-------", "------6-------------------6-----------------------", "-7---------------------7------------7-------------", "----------------------------2---------------------", "---8-------------------------------------8--------", "--3-----------------------------------------------", "---------------------------7---------------------7", "-------------------------------------7------------", "--------------------------------8-----------------", "----------------------------------9---------------", "------------------------------0--0----------------", "---------------------2----------------------------", "----------------------------0---------------------", "------7-------------------7-----------------------", "--------------------4-----------------4-----------", "----6---------------------------------------------", "----------------0---------------------------------", "--------2-----------------------------------------", "---------------------------------------1----------", "----------------------------------------------6---", "--4-----------------------------------------------", "----------------------3---------------------------", "----------------------------------6---------------", "-------------------------------1------------------", "----------0---------------------------------------", "----6---------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 670275552;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> board = {"--------------------------------------------5-----", "----------------2--5-----------------------5------", "---------2----------------------------------------", "-3------------------------------------------------", "--------------1-----------------------------------", "2-------------------------------------------------", "--------------------4-----------------------------", "------------------1----------------4--------------", "----5---------------------------------------------", "---------------2----------------------------------", "-------------------------2------------------------", "--------------------------2-------2---------------", "--1-----------------------------------------------", "-----3--------------------------------------------", "---------4----------------------------------------", "-------------------------------------------------3", "-----------1--------------------------------------", "-4------------------------------------------------", "------42-----------------------------3------------", "1-------------------------------------------------", "-----------1--------------------------------------", "------------2---------------5---------------------", "------------2---------------5---------------------", "----------------------------------------3---------", "--------------------------------------------5-----", "------------------------------------------------5-", "---------------------------------------------2----", "---------------------3----------------0-----------", "--------0-----------------------------------------", "-----------------------------------------------3--", "----------------------------------------------2---", "-----------------------------2--------------------", "-----------------1--------------------------------", "-------------------------4------------------------", "--------------------------------5-----------------", "---2----------------------------------------------", "----------0-------------0-----------------3-------", "----------0-------------0-----------------3-------", "--------------------------0-------0---------------", "---------------------------4----------------------", "-------------------------------3---------5--------", "------------------------------------2-------------", "-----------------------1--------------------------", "--------0-----------------------------------------", "-----2--------------------------------------------", "----3---------------------------------------------", "------------------------------2--5----------------", "-------------1------------------------------------", "----------------------3---------------------------", "---------------------------------------4----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 813326776;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> board = {"-----------------5--------------------------------", "------------------------------------------3-------", "--------6---------4-------------------------------", "-----------------3--------------------------------", "-----------------------------------7--------------", "-------------------------------------------------6", "-----------------------------------8--------------", "--------------------3------------------6----------", "------2--------------------------------------5----", "--------------5---------3-------------------------", "----------------5---------------------------------", "----------------6---------------------------------", "-----------------------------------------------4--", "-------------------------------------------8------", "-------------2-----------------4------------------", "---------------------6----------------------------", "----------------------------------3---------------", "----------------------------------------------6---", "----4---------------------------------------------", "-------4------------------------------------------", "-----------------------------------------6--------", "-------------------------5------------------------", "------------------------------------------3-------", "-----4--------------------------------5-----------", "----------3---------------------------------------", "---4---------------4------------------------------", "-6--------------------4---------------------------", "--------------------------------6-----------------", "----------3---------------------------------------", "----------------------------------4---------------", "----------------------------------------5---------", "--------------------------------7-----------------", "--------------------------------------------4-----", "----2---------------------------------------------", "----------------------------2---------------------", "-----------------------4--------------------------", "-----------4------------------4-------------------", "--7-----------------------------------------------", "-------------------------------------6------------", "------------5-------------------------------------", "---------------4----------------------------------", "8-----------------------------------6-------------", "------------------------------------------------6-", "------2--------------------------------------5----", "-----------------------------3---6----------------", "-5--------------------3---------------------------", "---------------------------7----------------------", "---------5----------------------------------------", "--------------------------5-----------------------", "-------------------------5------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 651917829;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> board = {"-------------------------------------3------------", "--------------------------------------------0-----", "---------3----------------------------------------", "---------------------------2-------------2--------", "--------------------3-----------------------------", "-------------------4------------------------------", "--3-----------------------------------------------", "0-------------------------------------------------", "--------------3-------------------------3---------", "---------------------3----------------------------", "-----------------------3--------------------------", "---------------------------------32-----------2---", "-----------------------3--------------------------", "---------------1----------------------------------", "--------------------------1-----------------------", "-----1---------------------------------1----------", "-----------3--------------------------------------", "----------------4---------------------------------", "----------------------3---------------------------", "-----1---------------------------------1----------", "----------------------------2---------------------", "----------------------2---------------------------", "-------------------------------------------------4", "-----------------------------------------------21-", "-2------------------------------------------------", "-----------------3--------------------------------", "--------0--------------------0--------------------", "------------------1-------------------------------", "---------------3----------------------------------", "------------------------------------3-------------", "---------------------------------21-----------1---", "----1---------------------------------------------", "3-------------------------------------------------", "------------3-------------------------------------", "------------------------------2-------------------", "-----------------------------------4--------------", "-----4---------------------------------4----------", "----------0---------------------------------------", "--------------------------------4-----------------", "---3---------------------3------------------------", "---------------------------------------------0----", "-------------3------------------------------------", "------------------------3-------------------------", "--------0--------------------0--------------------", "---2----------------------------------------------", "--------------------------------------2----2------", "-------------------------------2----------1-------", "--------------------1-----------------------------", "-------0------------------------------------------", "------0-------------------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 816252169;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> board = {"----------6----------------------6----------------", "-----------------------------------------------6--", "-------------------------------------------------5", "------6-------------------------------------------", "------------------------------5-------------------", "------------------------5---5---------------------", "-------------------------------------------5------", "-----------------5------------------------5-------", "---------------------------------------------6----", "-------------------------------------6------------", "----5---------------------------------------------", "----------------------5---------------------------", "------------------------------------------------5-", "--6-----------------6-----------------------------", "5-------------------------------------------------", "---5--------------------------------5-------------", "-5------------------------------------------------", "----------------6----------6----------------------", "-----------------------------------------------5--", "------------------------------5-------------------", "----------------------------------------5---------", "--------------------------5-----------------------", "-------6------------------------------------------", "----------------------------------------------5---", "---------------------6----------------------------", "-------------6-----------------6------------------", "-----6--------------------------------------------", "-------------------------5------------------------", "-----------6--------------------------------------", "----------------------------------------5---------", "---------------------------------------5----------", "-----------------------------------6--------------", "---------------5----------------------------------", "----------------5----------5----------------------", "---------6----------------------------------------", "-----------------------5--------------------------", "--------------------------------------------5-----", "---6--------------------------------6-------------", "--------6-----------------------------------------", "------6-------------------------------------------", "-----------------------------6--------------------", "------------------6-------------------------------", "-------------------5--------------5---------------", "--------------6-----------------------------------", "--------------------------------5-----------------", "---------------------6----------------------------", "--5-----------------5-----------------------------", "------------5-------------------------5-----------", "------5-------------------------------------------", "-----------------------------------------5--------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 377486913;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> board = {"-------------------------------------------------1", "-----4--------------------------------------------", "------------------------------------2-------------", "------------2-------------------------------------", "-----------------------8--------------------------", "-----------------------------------------2--------", "---------------------8-----------7-----5----------", "-------------------------1--------------6---------", "----1--4------------------------------------------", "-1-------------5----------------------------------", "----------------------------------------------8---", "--7-----------------------------------------------", "--------------------------------------2----1------", "-----------------7--------------------------------", "----------------------------7---------------------", "--------------------------------------2----1------", "------------------------------------------------2-", "------------------------6-------------------------", "-----------------------------4--------------------", "--------4-----------------------------------------", "-----------5---------------5----------------------", "------3-------------------------------------------", "7-------------------------------------------------", "--------------------------------------------2-----", "-------------------------------4------------------", "--------------------------3-----------------------", "---------------------8-----------7-----5----------", "-----------------------------------------------1--", "--------------5-----------------------------------", "----------8---------------------------------------", "-------------------------------4------------------", "---------------------------------------------7----", "------------------------------6-------------------", "---3----------------------------------------------", "---------2----------------------------------------", "------------------57------------------------------", "---------------------8-----------7-----5----------", "----------------5---------------------------------", "--------------------4-----------------------------", "----------------------6---------------------------", "-----------------------------------2--------------", "---------------------------------------------7----", "-------------1------------------------------------", "--------------------------------2-----------------", "----------------------------------8---------------", "-------------------------------------1------------", "----------8---------------------------------------", "------------------------------------------8-------", "--------------------------------2-----------------", "------------------57------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 99201653;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> board = {"-----------7--------------------------------------", "-------------------------7------------------------", "--------------------------8--------------8--------", "--------------------------------------7-----------", "----------------------------------7---------------", "---------8----------------------------------------", "----------------------------------7---------------", "----------7---------------------------------------", "------------------7-------------------------------", "---------------------------------------------7----", "---------------7----------------------------------", "----------------------------------------7---------", "----8---7-----------------------------------------", "--87----------------------------------------------", "---------------------------7----------------------", "---------------------------------7----------------", "----8---7-----------------------------------------", "-------------------7------------------------------", "----------------------------------------------7---", "--------------------------------------------8-----", "--------------8-----------------------------------", "-----------------------8--------------------------", "----------------7---------------------------------", "-----------------8--------------------------------", "------------------------------------------------8-", "-----------------8--------------------------------", "-------------------------------------------8------", "-------------------------------7------------------", "8-----------------------------------------8-------", "-----------------------------------7--------------", "-----7--------------------------------------------", "-------8------------------------------------------", "--------------------8-----------------------------", "---------------------------------------7----------", "--------------------8-----------------------------", "-8------------------------------------------------", "----------7---------------------------------------", "-------------------------------------7------------", "------8----------------------------------------7--", "------------7---------------8---------------------", "----------------------8---------------------------", "---------------------8----------------------------", "----------7---------------------------------------", "-------------------------------------------------7", "-------------7---------------8--------------------", "------------------------7-------------------------", "------------------------------------7-------------", "--------------------------------7-----------------", "------------------------------7-------------------", "---------------------------------------7----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 651614558;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> board = {"-------------------------------5---------7--------", "--------7-----------------------------------------", "----------------------------------------------5---", "---------------------6----------------------------", "------------------------------------4-------------", "----------4---------------------------------------", "---------------------------------------5----------", "----------5---------------------------------------", "----------------5---------------------------------", "-----------4--------------------------------------", "-5------------------------------------------------", "-----------------------------3--------------------", "-----------------4--------------------------------", "-------------5--------5---------------------------", "----------------------------------4---------------", "---------3----------------------------------------", "------------------------------5-------------------", "--------------------6-----------------------------", "-----------------------6--------------------------", "4-------------------------------------------------", "-------------------------------------5------------", "-------5------------------------------------------", "--------------------------------------5----------6", "--------------------------------------------5-----", "----------------------------7---------------------", "-------------------------------------------6------", "------------------------------------------5-------", "----------------------------------------5---------", "---------------------5----------------------------", "--------------------------------------------5-----", "-----5--------------------------------------------", "---------------------------5----------------------", "------------------5-------------------------------", "------------7-------------------------------------", "---7---------------------6------------------------", "----------------------------------6---------------", "--------------3-----------------------------------", "---------------------------------------------5----", "-------------------5------------------------------", "------------------------5-------------------------", "-----------------------------------------------4--", "-----------------3--------------------------------", "-----------------------------------4--------------", "--------------------------------5---------------6-", "------6-------------------------------------------", "---------------4----------------------------------", "----6---------------------------------------------", "--7-----------------------7-----------------------", "-----------------------------5--------------------", "---------------------------------6----------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 832871757;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> board = {"----------------------------------3---------------", "------------6-------------------------------------", "------------------2-------------------------------", "------------------------5-----------------4-------", "----------4------------------------------------6--", "-----------------------------------------5--------", "-----------------------------5--------------------", "------------------------------------------------6-", "----4---------------------------------------------", "-------3------------------------------------------", "---------------------6----------------------------", "-----------------------------------2--------------", "------------------------------6-------------------", "----------------------------6---------------------", "--------3-----------------------------------------", "-------------4------------------------------------", "-----------------------------------------4--------", "------------------------------------4-------------", "---------------------------5----------------------", "-----------------------4--------------------------", "---------------------------------4----------------", "--5----------------------------------------------5", "-----------6--------------------------------------", "-----------------5--------------------------------", "-------------------------------6------------------", "6-------------------------------------------------", "------------------------------------5-------------", "----------------2---2-----------------------------", "-4------------------------------------------------", "--------------------------------4-----------------", "---------------3----------------------------------", "----------------------------------------------2---", "---------------------------------------5----------", "-------------------------------------5------------", "--------------6-----------------------------------", "----------------------------6---------------------", "---------3------------4---------------------------", "------3-------------------------------------------", "-------------4------------------------------------", "---5----------------------------------------------", "--------------------------------------5-----------", "-------------------------4------------------------", "-------------------7------------------------------", "---------------------------------------------4----", "----------------------------------2---------------", "-------------------------------------------3------", "--------------------------------------------4-----", "----------------------------------------4---------", "-----5--------------------------------------------", "--------------------------3-----------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 292248064;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> board = {"------------------------5-------------------------", "--------------------------------------0-----------", "--7-----------------------------------------------", "------------------------------0-------------------", "---------------7----------------------------------", "----------------------------------------------5---", "-------------------------------------------2------", "-------6------------------------------------------", "------------------------------------3-------------", "--------------------2-----------------------------", "------------46------------------------------------", "---------------------------------------------4----", "----2----7--------------------------------------7-", "-----------------------------------------------7--", "-------------------------------1------------------", "--------2-----------------------------------------", "----------5---------------------------------------", "--------------------------------------------8-----", "-------------------------7------------------------", "--------------------------------6-----------------", "--------------------------------7-----------------", "--------------------------6-----------------------", "--------------------4-----------------------------", "------------------4-------------------------------", "-----------------------------------------5--------", "-----------------------5--------------------------", "------7-------------------------------------------", "------------------------------------------6-------", "---------------------------4----------------------", "----------------------------------4---------------", "--------------2-----------------------------------", "6-------------------------------------------------", "-------------------3------------------------------", "-----6--------------------------------------------", "----------------------------------------7---------", "----------------------------2---------------------", "-----------3--------------------------------------", "---------------------------------------1----------", "----------------------7---------------------------", "-4--------------4---------------------------------", "----------------6---------------------------------", "-----------------------------------------3--------", "---------------------7----------------------------", "-----------------------------------0--------------", "-------------------------------------------------1", "---6----------------------------------------------", "-------------------------------------8------------", "-----------------6--------------------------------", "-----------------------------0--------------------", "---------------------------------5----------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 851893375;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> board = {"-----------------------4--------------------------", "-----------------------------------------0--------", "---------------------------------4----------------", "----------------------------3---------------------", "-------------------------------------------------5", "------------------------------------------------1-", "--------------7-----------------------------------", "--------------------0-----------------------------", "----5---------------------------------------------", "----5---------------------------------------------", "-----------------------------------5--------------", "--------------------------5-----------------------", "----------------------------------------------3---", "---------4---------3------------------------------", "--3--7--------------------------------------------", "--------------------------------------2-----------", "2--3----------------------------------------------", "-------------------------5------------------------", "------------------------------------------5-------", "----------1---------------------------------------", "--------3-----------------------------------------", "---------------2----------------------------------", "-------------------------------------1------------", "-------------------------------5------------------", "------------------------7-------------------------", "-------0------------------------------------------", "-------------8------------------------------------", "-----------------------------------------------6--", "------------------4-------------------------------", "----------------------------------1---------------", "----------------------------------------2---------", "---------------------6----------------------------", "---------------------------------------------5----", "----------------6---------------------------------", "-------------------------------------------6------", "------------------------------------3-------------", "---------3---------2------------------------------", "---------------------------------------3----------", "---------------------------3----------------------", "--------------------------------5-----------------", "-----------------6--------------------------------", "-------------------------------------------6------", "-----------7--------------------------------------", "------------------------------5-------------------", "----------------------5---------------------------", "-2------------------------------------------------", "--------------------------------------------3-----", "------4-------------------------------------------", "------------6-------------------------------------", "-----------------------------7--------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 960838295;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> board = {"-------1------------------------------------------", "------5-------------------------------------------", "---4----------------------------------------------", "----------------------------3------------------7--", "------------------------------------1-------------", "------------1-------------------------------------", "----------------------------------------------5---", "-----------------------------------0--------------", "----------6---------------------------------------", "4-------------------------------------------------", "-------------------------------4------------------", "---------------------------3----------------------", "-----------------------4--------------------------", "-------------------2------------------------------", "----------------3---------------------------------", "----------------------------------1---------------", "--6------------------------------------------3----", "--------------------------6-----------------------", "-------------4------------------------------------", "------------------------4-------------------------", "--------------------------------------------1-----", "----------------------6---------------------------", "----5---------------------------------------------", "-----------4--------------------------------------", "-----------------------------3--------------------", "-------------------------4------------------------", "-------------------------------------------1------", "------------------------------------------1-------", "---------------2----------------------------------", "-------------------------------------------------3", "--------6-----------------------------------------", "--------------------------------------4-----------", "------------------------------7-------------------", "--------------------5-----------------------------", "---------------------------------5----------------", "---------3----------------------------------------", "---------------------4----------------------------", "-----------------------------------------5--------", "-------------------------------------2------------", "-----------------2--------------------------------", "--------------------------------3-----------------", "------------------4-------------------------------", "-----------------------------------0--------------", "-------------------------------5------------------", "-3------------------------------------------------", "---------------------------------------5----------", "----------------------------------------5---------", "------------------------------------------------2-", "-----3--------------------------------------------", "--------------2-----------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 948256524;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> board = {"-----------------------------2--------------------", "----------------------1---------------------------", "-------5------------------------------------------", "-3------------------------------------------------", "-------------1------------------------------------", "----------------------------------------------3---", "-----------------------2--------------------------", "------------4-------------------------------------", "-----------------4--------------------------------", "---3----------------------------------------------", "----------------------------------4---------------", "---------------3----------------------------------", "------------------------------------------0-------", "---------------------5----------------------------", "------------------------4-------------------------", "---------2----------------------------------------", "------1-------------------------------------------", "---------------------------------2----------------", "---------------------------------------1----------", "--1-----------------------------------------------", "--------5-----------------------------------------", "-----------------------------------------2--------", "----3---------------------------------------------", "------------------------------2-------------------", "-----------------------------------0--------------", "--------------------------22----------------------", "-----------3--------------------------------------", "-----3--------------------------------------------", "-------------------------5------------------------", "--------------------------------------3-----------", "-------------------------------------1------------", "-------------------------------------------------4", "------------------------------------0-------------", "------------------------------------------------3-", "--------------------1-----------------------------", "4-------------------------------------------------", "-------------------------------------------3------", "----------3---------------------------------------", "-2------------------------------------------------", "--------------------------------1-----------------", "--------------------------------------------2-----", "----------------------------------------2---------", "----------------------------0---------------------", "--------------3-----------------------------------", "------------------2-------------------------------", "---------------------------------------------2----", "-------------------3------------------------------", "-----------------------------------------------4--", "-------------------------------1------------------", "----------------3---------------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 127940738;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> board = {"-7------------------------------------------------", "--------6-----------------------------------------", "--------------3-----------------------------------", "---------------------------------------------8----", "---------------2----------------------------------", "---------------------------2----------------------", "-----------------------------6--------------------", "------------------------------------------------2-", "---------------------------------2----------------", "-----------------------------------0--------------", "3-------------------------------------------------", "--------------------------------------8-----------", "------------------2-------------------------------", "-------6------------------------------------------", "------------------------------------------3-------", "----------------------------------------6---------", "--------------------------4-----------------------", "----0---------------------------------------------", "-------------------------------3------------------", "----------------4---------------------------------", "-------------------8------------------------------", "------------------------------0-------------------", "---3----------------------------------------------", "---------------------------------------7----------", "-------------------------------------------8------", "----------------------------9---------------------", "--------------------------------4-----------------", "--8-----------------------------------------------", "--------------------1-----------------------------", "-------------------------------------9------------", "----------------------------------------------1---", "-----2--------------------------------------------", "---------1----------------------------------------", "-----------------------------------------7--------", "------1-------------------------------------------", "--------------------------------------------5-----", "----------------------------------4---------------", "----------3---------------------------------------", "-------------2------------------------------------", "------------------------3-------------------------", "----------------------6---------------------------", "-----------------1--------------------------------", "-----------------------------------------------1--", "------------------------------------6-------------", "-----------------------6--------------------------", "---------------------2----------------------------", "-----------2--------------------------------------", "-------------------------3------------------------", "------------0-------------------------------------", "-------------------------------------------------3"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 464375795;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> board = {"-2-----3---22--3---3-2------3-3--2-2----2-2--32-33", "--------11--1---2------1---1--2---2-----1---22-1--", "--3--23----2-------3--2-22----------3-2-2--33-2---", "2--2----------3----------22------2----2--3--------", "-0---0-10---0-1---1---00---0-01--0---00-----------", "2---2--------23--23--2---2---23---3-3-------3-2---", "-1--11--1--------------1-------22--1---11--22--1-2", "-2-2-2---2-2-----233--22----3--3-----2--2----3--3-", "----0--------01-10------0----0----1-10-----1------", "-1----22--------2-2-----1------2-12-------1------2", "--32--3-2---------3--------2-23---3--2-22---33-2--", "11-1112--1------------1----12--2-1-1--1--------122", "-1-1---------1--------1------1---12----11---2211-2", "-1-----2-111---2--------1-----2-----------1-------", "0---0----00-------1----------0-1--1---0-----1---1-", "--10--1-0-0--0----------000-1--1--1--0--0--1----1-", "--1--0-1-00-0------1-0---0--------1-10-0-10-----1-", "---22---2--2-23-3---3--2---232--3----22223----2---", "2---2-----2------233--2--------33--2--------3-2-33", "1--111-2----1---2----11--1-------------1--1--2----", "---0-0-10---0-11--11------0---------1-0---01------", "2-3-2------2--------------------3-3-3----32------3", "00----1---0----------0------10--1----0--0---1-----", "--211-2---11----2------1-----1--2-------1-1-2--12-", "----0-----------1-1--0--------1-----1--001----0---", "-1------1---11----2--1----1-2--2------11--------2-", "------1--------1---1---00-0-1-----------0--1----11", "11---1-2---1------2--1-1--1-------------1---------", "1-2--1--1-1----2---------1--2-2--1------1-1-----2-", "22--2-3-2-22-2-----33-222------------2--2--------3", "----------2----------------23--3--3----22------23-", "2------------2-33---3-----------32-2--2-----3-----", "22-222------22-33--------2----3-32--------2-------", "0--0--1--0-----1---11----0------1-----------11----", "--3-------2-2-----33---2--------3-----22---3-----3", "0-1---11000--0-------0-----0---11-10----010-1---1-", "-----0-1-0--0---------0------0-1--1--0-0--------11", "-2--2---2------3--3-3--2-2---233------2--3-33---3-", "----1-22----1-2--12---1--1-------1----------------", "---2--3----222----3---2---2---3------------3--2---", "--3---------2---32-----------23---3-3-2---2-----3-", "---2--3-2-2-2-------3--2222---33----3-222---------", "--------------33--------2--23---323--2----23---2--", "---2-2----------3---32-2--22-2--3-----2-----3----3", "2-----------2---32-3--2----2---3-----2-2----3-22--", "-0-0----0--0----101-1-0--00--------0-------11-0-1-", "----2-33--2---3-3---3--2-------3---2-222--2--3---3", "-12--1-2---111-----2--1--11----2----2---12---2--2-", "-2----3-2-2--2-----3----2-2----3-2-2------2----2-3", "---------000-0---------0---0-01-101--00-0---11-0--"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> board = {"----56----5---6-5-------------5----6-------6--5---", "-----5----4---5-4-5--4--4--5--4----5------4-------", "--4-4------5--5------4--4--------4--------4---4---", "--4-45-----5---------4--4--5-----4--------45--4---", "--5-56----------5----------6--5--5--------56--5---", "--4-------45--5-4-5--4-----5--4--4--------45--4---", "---3---4-----3-3-4-34-34-4------4---43--4---4---43", "-5-5--56-6--55-5---56-56-66--5-6----656665---6----", "43-------4--33--------34-44--3-44-3-4344--------4-", "---4--454----4-4----5-4-----5--55-4-5455-4--55-554", "--4--5----45----4----4-----5--4----5------45--4---", "----------3-----3----3--------3--3-4------3---3---", "-----5----4---5---5--4--4-----4--4-5------45------", "-----6-----6------------5-----5--5-6------5---5---", "-4-4--4545---4---5----4--5---4-5--4-5455-4--55--54", "--5--6----56----5-------5-----5--5-6------56--5---", "5--4--4545---4-4-5----4--55-----5----45554--55-5--", "-4-4---545--4----5-45-45----5--55---5-5-54--5--554", "------34----3--3-4----34--4-4--44-3-4-444----4--43", "----45----45--5-4-5--4--4--5--4-----------45--4---", "5--4--45-5--4--4-5-45-4-----5-----4-5-55----55-554", "65-5----56--55--------56-------66-5---66-5--66----", "--4--5-----5--5-4-5--------5--------------45--4---", "--------3----3-3---3--34-4--4--4--3-4--4----44-4--", "6--5--5-56---5-5----6-56--6--5--6-----666---6---6-", "------3434--33-3-4----34----4---4-3-4-44----44-4-3", "54----4545--44-4-5-45-4--55--4------54-554--55---4", "--3--4--------4------3-----4-----3-4------34------", "----3---------4-3----------------3-4----------3---", "--3--4--------4-3-4--3------------------------3---", "-----4-----4--4-3-4--3-----4-------4------34--3---", "----34----34--4-3-4--3-----4--3--3-4------3---3---", "65-5--5-56--55-5-6-56-5-----65-66---6-66-5--66--65", "--5--6----56----5----5--5--6-----5-6----------5---", "----4-----45--5-4-------------4--4-5----------4---", "--5-5-----------5-------5----------6-------6--5---", "-----------4--4------3-----4--3-----------34--3---", "--5-------5---6-5-6--5--5--6-------6-------6--5---", "-4-4---545--44---5-4--4--5--5--5--4--4-554--5--5--", "--5-56-----6----5-------------5--5---------6--5---", "-----5----4---5------4--4--5-----4-5------45------", "--4-45----45----4----4--4--5-------5------4---4---", "-3----3434-----3---3---4-4-----4--3---4--3---4---3", "4--3--3--4--33-3-4--4-3--44-43-44-3---4443--4---4-", "--5-56----56--6---6--------6--5----6------5---5---", "-5-5--5--6---5---6----5--66-6--66-5--56665--66-665", "----45-----5--5---5-----4--------4-5------4---4---", "-----6----56--6-5-6--5-----6--5----6------56--5---", "--4-45----------4-5--4-----5--4----5-------5--4---", "--3--4----34------4--3-----4--3--3-4------34--3---"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> board = {"-------------------1----3-1---0----2---------2----", "-------------------1------1---0---12-----------00-", "--------------3-----------1-------1---------------", "---5------6---------------------------------5-----", "-------------4------5--6-6------------5--4-------5", "-------6---3-3------43---------4--------4---------", "-------------------3----5-3---2----4-3---------2--", "--6---------------4--------6----------------------", "----------------------------------45---------5--3-", "-------------2-----------4-----3--------3-43------", "-----5-6---3-----4-------5-----4-5------435------4", "6--------------7--5--------7-6--------------------", "----3-------------1--------------------1----------", "------3------------------------------4---------33-", "-----------------4-------5-----4-5------4-5------4", "--------5----------4--------------4--4-------5----", "-----2-----0-0---1--1--2-------1--------1-2-------", "------3---------------5------------5---------5----", "-------7------------54-6-6-----5-----------5------", "---3--------------3--------5-----------3----------", "----------------------5-6-4-----4----4-------5-33-", "------------------------6-4-----4----4-------5----", "---------------------4----------------5-5--------5", "------2-------------------------3------------4-2--", "-3---2-------------------2-----------------1-----1", "---------------43----------42---------------------", "5--------6--5---5-4--------6----------------------", "---------7--6----------------6----------------7---", "------------------3--------53-------4--3----3-----", "-------------------2----------1-2----2------------", "--------2---------------3-------------------------", "6-75------6-----6----------------------5----------", "----------------------2---------------------------", "--------------4----2----4-----1------2------------", "--3------3--2--------------3-2---------1------3---", "------2-4-----5----3------3---2-3----3----------2-", "----3-----2----32------------2---------1----------", "-3-----3-----0-----------2--------------1-2-------", "------4-6---------------7-5-----5--6------------4-", "-4---3---------------1---------2-----------2------", "--------------6---------6-4-----4-4-------------3-", "----3-----2-2-----1---------1-----------------3---", "-----4-------2--------------------------3---------", "--------6-----7---------7-------5------------6----", "------1----------------------------3---------3----", "----------------------6-7-5--------6---------6----", "-------4-------------1---3-------3-------13------2", "-----5-----------4-------------4-----------------4", "------3-----------------------3---4--4------------", "-----4-----2--------------------------3-----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> board = {"---------1---2-------4------2---4-1----3-3--------", "-----3--------2-----1--2-----------0--------------", "-034---4---------3-2------34-03-----02--2-------0-", "-0-4---44--1----4--2------34-0------02--2-------0-", "----13------0-------1--------------0--------------", "-----3------0-2----------------1---0-----------4--", "-0------4--1----43-2------3--03------2--2-------0-", "----1---------2-----1--2-------1---0--------------", "-034---4---1----43-2------3--03---------2-------0-", "------1---2-------------34-------2--------43021--0", "---------1---2-------4------2---4-----03-3--------", "---------1---2--------------2---4-----03-3--------", "---------1---2-0-----4------2---4-1---03-3--------", "---4---4--------43-2-------4-03-----0---2-------0-", "-------------2-0----------------4-----03-3--------", "-03----4---1----43-2-------4-03-----------------0-", "--34----4--1----43-----------03-----02--2-------0-", "---------1---2-0------------------1---03-3--------", "-03--------1-----3-2------3--0------0---2-------0-", "---------1---2-0-----4------2---4-1---------------", "------1---2-------3---3--4-------2---------30----0", "---------1---2-------4------2-----1----3-3--------", "----13------0-2-----1----------1---0-----------4--", "------1---2-------3-----34-------2--------430-1--0", "---------1---2-------4------2---4--------3--------", "-----3--------2----------------1---0--------------", "-034---44--1----43-2------34-03-----02--2-------0-", "-------------2-------4----------4-1---03-3--------", "---------1---2-0-----4------2---4-1----3----------", "-0-4---44--1----43-2-------4-03-----02----------0-", "---------1---2-0-----4------2---4-1---03-3--------", "----1-------0-------1--2-------1------------------", "------------------3---3-34----------------43021--0", "----1-------0-2----------------1---0--------------", "---------1---2-------4------2---4-1---03----------", "-0-4---4--------4---------34-03-----0-------------", "----13------0-------1--2-------1---------------4--", "---------1---2-0----------------------0-----------", "---------1-----0-----4------2---4-----03-3--------", "---------1---2-0----------------4-1----3-3--------", "-034---4---1----4---------34-03-----0---2---------", "2-----1---2-------------3--------2--------43-21--0", "2-----1-----------3---3--4-------2--------43021--0", "----13------0-2-----1--2-------1---------------4--", "-034---4---1-----3--------34-03-----0---2-------0-", "----13--------2-----1----------1------------------", "----13------0-2--------2-----------------------4--", "2---------2--------------4-------2--------430----0", "-034----4--1-------2------34-03-----02--2---------", "-----3-------------------------1---0--------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
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
    vector<string> board = {"---3---1------2-----1-3----------11--2------3-----", "---2---0------1-----0-2----------00--1------2-----", "---------3--3--32------2---------------3--2-----4-", "---3---1------2-----1-3----------11--2------3-----", "---------1--1--10------0---------------1--0-----2-", "2-------1-1------2-1----3--1-1222--------1----23--", "---4---2------3-----2-4----------22--3------4-----", "---------3--3--32------2---------------3--2-----4-", "2-------1-1------2-1----3--1-1222--------1----23--", "--------1-1------2-1----3--1-1222--------1----23--", "2-------1-1------2-1----3--1-1222--------1----23--", "-21------------------3---3---------3--2-2--------1", "-21------------------3---3---------3--2-2--------1", "---------3--3--32------2---------------3--2-----4-", "---4---2------3-----2-4----------22--3------4-----", "----423----2-4----2-------4-3-------2------2-3----", "---3---1------2-----1-3----------11--2------3-----", "---4---2------3-----2-4----------22--3------4-----", "---------1--1--10------0---------------1--0-----2-", "---------2--2--21------1---------------2--1-----3-", "-32------------------4---4---------4--3-3--------2", "----423----2-4----2-------4-3-------2------2-3----", "----201----0-2----0-------2-1-------0------0-1----", "3-------2-2------3-2----4--2-2333--------2----34--", "-32------------------4---4---------4--3-3--------2", "---------3--3--32------2---------------3--2-----4-", "---3---1------2-----1-3----------11--2------3-----", "2-------1-1------2-1----3--1-1222--------1----23--", "1-------0-0------1-0----2--0-0111--------0----12--", "2---------1------2-1----3--1-1222--------1----23--", "----312----1-3----1-------3-2-------1------1-2----", "---2---0------1-----0-2----------00--1------2-----", "----201----0-2----0-------2-1-------0------0-1----", "----201----0-2----0-------2-1-------0------0-1----", "-10------------------2---2---------2--1-1--------0", "---4---2------3-----2-4----------22--3------4-----", "---3---1------2-----1-3----------11--2------3-----", "---2---0------1-----0-2----------00--1------2-----", "-21------------------3---3---------3--2-2--------1", "-32------------------4---4---------4--3-3--------2", "---2---0------1-----0-2----------00--1------2-----", "-------2------3-----2-4----------22--3------4-----", "---3---1------2-----1-3----------11--2------3-----", "---------2--2--21------1---------------2--1-----3-", "---------2--2--21------1---------------2--1-----3-", "-32------------------4---4---------4--3-3--------2", "-21------------------3---3---------3--2-2--------1", "----423----2-4----2-------4-3-------2------2-3----", "----312----1-3----1-------3-2-------1------1-2----", "---------1--1--10------0---------------1--0-----2-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> board = {"2-6-----------------3-----5-----61----------------", "----6------3-2----------3---------------13-6------", "---1-54--1--5---------4------4---------0--0--5----", "2-6-------------2---3-----5-----61----------------", "2---------------2---3------------1----------------", "---------------1---------------4----5---------3023", "--------2----------6-3------0--------55-----------", "-4-1-541-1--5---------4----4-4---------0--0-15----", "----6------3-2---------63---------------13-6------", "-4-1-541-1--5---------4----4-4---------0----1-----", "----6------3-2---------6----------------13-6------", "----6------3-2---------6----------------13--------", "-----------3-2---------63---------------1---------", "2-6-------------2---3-----5-----61----------------", "2---------------2---------5-----6-----------------", "----6------3-2---------6----------------13-6------", "-----------------31------3----6----5--------------", "---1-541-1--5---------4----4-4---------0--0-15----", "-------------2---------6----------------13--------", "----6--------2---------6----------------1--6------", "--------------2----------------4----5---------3023", "----------4------31------3----6----5--------------", "2-6-------------2---3-----5-----61----------------", "----6------3-2---------63---------------1---------", "--6-----------------3-----5-----61----------------", "----------4------31------3----6-------------------", "----6------3-2----------3---------------13--------", "--------2----------6-3------0-----0--55-----------", "----------4------31-----------6-------------------", "-4---541-1--5---------4------4---------0--0--5----", "----------4------31------3----6----5--------------", "--------------21---------------4----5---------3023", "----6------3-2---------63---------------13-6------", "--------------2----------------4--------------3023", "----6------3-2---------63----------------3--------", "------------------1------3---------5--------------", "---------------------3------0-----0--55-----------", "---1-54--1--5---------4----4-4---------0----15----", "----6------3-2---------63---------------13-6------", "-4-1-54--1--5---------4----4-4---------0----15----", "2-6-------------2---3-----5-----61----------------", "---------------1---------------4--------------30--", "----6------3-2---------6----------------13--------", "---1-54--1--5---------4----4-4---------0--0-1-----", "----6------3-2---------63---------------13--------", "-4-1---1-1--5---------4----4-----------0----15----", "----------4------31------3----6----5--------------", "--------------2----------------4----5---------30-3", "--------------21---------------4----5---------3023", "2-6-------------2---3-----5-----61----------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> board = {"------------------------5---5-------------4--5----", "----------------4-----------------------3---------", "4----3------------------------------44-----4-----3", "--4-----4----------554---------4---4--5---------5-", "-------3---------3-----------3----------------3---", "------------------5--------------5-------5-----5--", "---5-----4-4---5-------5--------------------4-----", "5---445------------------5------4---5------------4", "--5-----5----------6-5-------------5------------6-", "------------6-----------------6---6-----5---------", "--------3----------4-3-------------3--4---------4-", "-4-----------4------------3--3---------3------3---", "----------4-------------5---5-------------4--5----", "--3-----3-----3-----43-------------3--4---------4-", "--------3-----3------3---------3---3--4---------4-", "6---556---------------5--6------5----6-----6------", "--5-----5-----5----665-------------5------------6-", "-------4-----5---4-----------4---------4------4---", "---6-----5-5---6-------6--------------------5-----", "----------4-------------5-----------------4--5----", "------------5---------------------5---------------", "---------4-4-----------5--------------------4-----", "-6-----5------------------5------------5----------", "---------3-----4-------4--------------------3-----", "----------5-------------6---6-------------5--6----", "--5-----5-----5----66-----------------------------", "----445---------------4---------4---55-----5-----4", "--4------------------4---------4---4--5---------5-", "-------3-----4---3-----------3----------------3---", "------------6---6-----------------6---------------", "------------5---5-------------5---------4---------", "6---556---------------5--6------5---66-----6-----5", "------------5---5-------------5---5-----4---------", "------------------------------6---6-----5---------", "----------4-------------5---5----------------5----", "---5-----4-4---5-------5--------------------------", "--3-----------3-----4----------3---3--4---------4-", "--------4----------5---------------4------------5-", "--3-----3-----3----443-------------3--4---------4-", "------------5---5-----------------5-----4---------", "5---44----------------4--5------4----5-----5-----4", "--5-----------5-----65---------5---5--6-----------", "------------6---6-------------6---6-----5---------", "----------------6-----------------6-----5---------", "------------------3--------3-----3-------3-----3--", "------------------5--------5-----5-------5--------", "------------------5--------5-----5-------5-----5--", "----------3-------------------------------3--4----", "------------------4--------------4-------4-----4--", "-6-----------6---5--------5--5--------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 14197;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> board = {"--------1--------1----01-----------------0------0-", "--------1--------1----01-----------------0-----10-", "--------1--------1----01-----------------------10-", "-----------------1----01-----------------0-----10-", "-----1-------0--1-------------------1-------------", "-----------------1----01-----------------0-----10-", "1--0--0---------------------------0-----1--0--1--0", "-----1----------1-------------------1-------------", "11-0--0---------------------------0-----1--0--1--0", "1--0--0---------------------------0-----1--0--1--0", "-------------------10------1-----0---0------11----", "----------1-0-------------0--1100-----------------", "-------0---------------------------1--------------", "-------0---------------------------1--------------", "----1----1-1--1------0--1---0----------1--1-------", "11-0------------------------------------1--0--1--0", "-1-0--0---------------------------0-----1--0--1--0", "-------------------1-------1-----0---0------11----", "--------1--------1----01-----------------0-----10-", "----------1-0-------------0--1-00-----------------", "--0-1----1-1--1---------1---0-------------1-------", "---------------1--1------1------------1-----------", "-------------------10------1-----0---0------11----", "11-0--0---------------------------0-----1--0--1---", "--------1--------1----01-----------------0--------", "------------------1------1------------1-----------", "-------0---------------------------1--------------", "----------1-0-------------0--1100-----------------", "-------------------10------1-----0---0-------1----", "-------------------10------1-----0---0-------1----", "----------1-0-------------0--1100-----------------", "-------------------10------1-----0---0------11----", "-------0---------------------------1--------------", "-------0---------------------------1--------------", "--------1--------1----01-----------------0------0-", "--0------1-1--1------0--1---0----------1--1-------", "---------------1--1------1------------1-----------", "11-0--0---------------------------0-----1--0--1--0", "-----------------1----01-----------------------10-", "---------------1--1------1------------1-----------", "-----1-------0--1-------------------1-------------", "--------1--------1----01-----------------0-----1--", "------------0-------------0--1100-----------------", "-------0---------------------------1--------------", "----------1-0-------------0--1100-----------------", "------------------1------1------------1-----------", "-------0---------------------------1--------------", "--0-1----1-1--1------0--1---0----------1--1-------", "-------------------10------1-----0---0------1-----", "---------1-----------0--1---0-------------1-------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> board = {"6------6-----6-6-------------6---6----------------", "7------7-----7-7-------------7---7----------------", "----7---------------------7---------7----------77-", "--6--------6-------------------------6-6-6--------", "----5---------------------5-------------5------55-", "-----6-----------6-------------6--66--------6-6---", "---------5-----------------------------------5----", "----------------------66--------6-----------------", "----7---------------------7---------7---7------77-", "------------------5---------5---------------------", "----6-------------------------------6---6------66-", "---6------6---6---------------6-------------------", "---------6--6--------------------------------6----", "---7------7---7---------------7-----------7-------", "-----------------6-------------6--6---------6-----", "--------------------7-77--------7-----------------", "----------7---7---------------7-------------------", "-----7-----------7-------------7--77--------7-7---", "------7-----------7---------7---------------------", "6------6-----6-6-------------6---6----------------", "----7---------------------7-------------7------77-", "--------------------7-77-7------7-----------------", "------7-----------7---------7--------------------7", "------5-----------5---------5---------------------", "-5------5-------5--5----5--5----------5----5------", "------------7-------------------------------------", "----6---------------------6---------6-----------6-", "------------------5---------5---------------------", "-----5-----------5-------------5--55--------5-5---", "------6-----------6---------6--------------------6", "------7---------------------7--------------------7", "----5---------------------5---------5---5------55-", "-6------6-------6--6----6--6----------6----6------", "--7------------------7---------------7-7-7--------", "7------7-----7-7-------------7---7----------------", "---5------5-------------------5-----------5-------", "------------7--------------------------------7----", "------7---------------------7--------------------7", "--------------------5-55-5------5-----------------", "-5------5-------5--5----5--5----------5----5------", "--------------------5-55-5------------------------", "6------6-----6-6-------------6---6----------------", "---5------5---5---------------5-----------5-------", "------------------7---------7---------------------", "-5------5----------5----5-------------5-----------", "6------------6-6-----------------6----------------", "------------------6---------6--------------------6", "-------------------------------5--55----------5---", "--5--------5---------5---------------5---5--------", "--5--------5-------------------------5-5-5--------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 9413562;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> board = {"----------3--1------4--2----1---------3-----------", "----------5--3------6--4----3---------5-----------", "-----------------31---3------------4--------------", "-4----------------------6----7-------6--7---------", "--4------------6-----------3-----4--4-------4-----", "---13--1---1---------0--------0-------------------", "1-----0-------------------------0----------3------", "4-----3-------------------------3----------6------", "-----------------75---7------------8--------------", "-----2--------1-------------------1-------2--21---", "----------4--2------5--3----2---------4-----------", "-----------------75---7------------8--------------", "----------------3--------5-----2------------------", "-----4--------3-------------------3-------4--43---", "-2----------------------4----5-------4--5---------", "--6------------8-----------5-----6--6-------6-----", "----------------1--------3-----0------------------", "---------2--4------1------4--------------------4-2", "-----3--------2-------------------2-------3--32---", "----------2--0------3--1----0---------2-----------", "---13--1---1---------0--------0-------------------", "--2------------4-----------1-----2--2-------2-----", "-----4--------3-------------------3-------4---3---", "--6------------8-----------5-----6--6-------6-----", "-----------------20---2------------3--------------", "--3------------5-----------2-----3--3-------3-----", "----------6--4------7--5----4---------6-----------", "---------3--5------2------5--------------------5-3", "-----------------42---4------------5--------------", "---------2--4------1------4--------------------4-2", "-----------------20---2------------3--------------", "5-----4-------------------------4----------7------", "6-----5-------------------------5----------8------", "--1------------3-----------0-----1--1-------1-----", "--------6------------------------------4-7------7-", "---13--1---1---------0--------0-------------------", "2-----1-------------------------1----------4------", "---57--5---5---------4--------4-------------------", "---24--2---2---------1----------------------------", "-----------------42---4------------5--------------", "-4----------------------6----7-------6--7---------", "6-----5-------------------------5----------8------", "---24--2---2---------1--------1-------------------", "---24--2---2---------1--------1-------------------", "---13--1---1---------0--------0-------------------", "---------1--3------0------3--------------------3-1", "6-----5-------------------------5----------8------", "--------7------------------------------5-8------8-", "----------------4--------------3------------------", "---------1--3------0------3--------------------3-1"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> board = {"-----0-0---0---0------------0-----------0-----00-0", "-------0----0---------0---0--0-------0------------", "-0-0---0-----0--0--00--0--------0-----------------", "----0-00--0--------------------0-0-0---------0----", "-0---0-0----0---------0------------------00-0-----", "------------------0----0------------------------0-", "----------0----0------0-0--------------------0--0-", "-------------------------------------0--0-----0--0", "0---------------------0----------0----------0-000-", "--------0--------------0---------0--0---0------0--", "---00-0---------------0-------0-------------------", "--------------------0-----------00----------------", "-0------------0---0---------------------------0---", "--------------0------------0-----------------0-00-", "-----0----0-00--------0---0------------0-----0----", "------------------------0--0-0---0----------------", "---0----00-------0-----------00--0-----0----------", "-----0--------------0-----------------------------", "-----0--0------------00----------00---0-----------", "0----------00--0--000--------0---------0----------", "----0---0--0---------0---0--------------0-------0-", "0-----------0--0---0-0--0--0----0-0-0--0-------0--", "-------0--0--0--0----00-------------000-----------", "--0----0-------0---0--------------------0--------0", "------------0-----0-----0-------------------------", "--------------0----------00---0-------------------", "---------0--------------------0------0-00----00---", "--00---------0--------------------------0-----0---", "----0-0-----------------------0----0-0--0---------", "----0--------------------------------00-----------", "---0--0--------0------------0--------------0------", "------0-----------00--0-0---------0--0--0------0--", "---0------00-0-----0---0-------0----0---------0---", "--0---0-----------0-------0---------0--0-00-------", "---------0-------------------0-0----0------0--0---", "-0--------------0-----------0--0----------0-------", "---0--------------------0-0--------00-0-0----0--0-", "--00----0---------0-----0----0--------0-----------", "--0------0-----0-------0----0----------------0----", "-------0--------0-----------------0------00-----0-", "---0---------------0-0-0-----------0---0----------", "-----0---0---------0-0---0--------0---0-----0-----", "--------0--------0------0----0000----0-0---------0", "---------0---0-0-------0-------------------------0", "--00--0----------0----0---0---00-----------------0", "0------------0----0-0----0--------------0--0------", "---00--0--0----------0-----00-0-----0-------------", "0-0---0---0-----00---0-----------------0-0--0-----", "-------0--------------0--0-----00-----0-------0---", "-----00-----------00-00--------0-----0------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> board = {"3--4--3-0---23-2-2-1-1142-----1--43---2--1----0---", "3-----3-----23-2-2-1----2--2---2-4----24-1----0---", "---------------2-2-1--142--2--12-4----2--1--------", "-1---5-2---2--3-4-5-1----43-55--4---2---3-3524-1--", "-12-35-2-452--3-4-5-1----43-55-----1------3-24-1--", "--2-35---452--3-4-5-1--------5--4--12---3-3-24-1-4", "--------1----4-3-3-2--253--3--2--54--23--2----1---", "4--5--4------4-3-3-2-2-53--3-----54---3--2----1---", "-----4---341--2-3-4-0-----2--------01---2-2413---3", "----24-1------2---4------32-4---3--01---2-2--3-0-3", "------------34-3-3-2-2-53--3---3-54---3--2------2-", "3-----3-0---23---2-1-1142-----12-------4-1----0-1-", "------4-1---34-3-3----253-----2------235-2------2-", "-0---4---3----2-3-4-0----32--4--3--01---2-24-3----", "3-----3-----23-2-2-1-1142------2-43--124-1------1-", "--1------34---2-3--------32-44-----01---2--4-3-0-3", "----2--1--41----3-4-0-----------3--01---2-2-13----", "-1--3--2-45---3---5-1----43-5---4--12---3---24-1-4", "-0-----1-3-1--2-3-4------32--4--3--01---2-2-13-0-3", "----35-2-452--------1----4--55--4-------3-3-2--1-4", "---4--3-----23---2-1-1-42--2---2-43--1---1----0-1-", "-----5----52--3-4-5-1----43-55--4--12------5-4-1--", "-12-35---452----4---1----43--------1----3--5-4----", "3--4----0---23---2-1-1142--2---2--3--12-------0-1-", "--1--4-1-3-1----3-4-0----32-----3--01---2-24---0-3", "-01-24-1-3-1--2-3-4-0-------4---3-------2-2-13---3", "--2--5-2--5-----4-5-1----43-55--4--12---3--52----4", "3--4--3-----23-2---1-11-2--2--12--3--1-4-1----0---", "-01-24-1--4---2-----0----32-4-----------2-2--3-0-3", "3-----3-0---23---2-1-11-2--2--12-43---24-1----0-1-", "3--4----0---23-------114---2--12-43---24------0-1-", "-----5-2--52--3-----1--------------12---3-352--1--", "-0--2--1-341----3-4-0-------4-------1---2--413-0-3", "-01-24-1----------4-0----32-4---3-------2--4-3-0-3", "-01------341----3-4------32-4-----------2-2--3---3", "-12-35-2--52--3-4---1----4--55-----12-----3-24-1-4", "4--5--4-1---34---3-2--253--3--23-5---235--------2-", "4-----------34-------2253-----23--4----5-2----1-2-", "--2-3--2-452--3-----1----4------4---------3-24-1-4", "--2-35-2-4-2--3-4-5-1-----3-55--4--12---3-3524-1--", "-12-3--2--52--3-4--------43-55--4--1----3-35-4-1--", "-01-2--1-34-----3-4-0----32--4----------2-2-13-0-3", "4--5--4-1--------3---225-------3-54--23---------2-", "3--4--3-0------2---1-114---2------3---2--1----0-1-", "--2-3--2-45---3-4-5-1----4--55--4--12---3-3-24-1-4", "3--4----0----3-----1-114---2--1---3--12--1----0-1-", "---5--4-1---34---3---2253-----23-54--23--2----1-2-", "4-------1---34-3-3---22-3--3--2--54--235-2----1---", "3--4----0----3---2---1--2------2-43--124-1----0---", "------------2--2-----1-42--2--12-4----2-----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> board = {"4----4---3-4-3--54---4--5-5---34------5-----4---4-", "---3--11-----------2--------13--1----3-212----13--", "-76-----6-6---65----7-7----5--------7-----7--5---6", "-54-----4-4---43--4-5-5--3-3-----33-5-----55-3---4", "---7---5----7------6--------57--5--7-7--56----5---", "---7--55----7------6---5-----7-----7-7---6----57--", "5----5---4-5-4---5---5--6-6---4-------6-----5---5-", "---3--11----3------2---1-----3--1--3---212----13--", "---6--44----6------5---4----4---4--6-6--4-----46--", "-5--3---4-----4---4-5-5--3-3-----33-5------5-----4", "-43-2---3-3---3---3------2-------22-------4--2---3", "3----3---2------4----3--4-----23------4-----3---3-", "3----3---2-3-2--43---3----4---23------4-----3---3-", "------2-----4------3---------4--2--4-4--23----24--", "-32-1---2-2---21--2-3-3--1-1-----11-3------3-1---2", "---6--44----6------5---4--------4--6-6-545----46--", "---6--44----6------5--------4------6-6--45----46--", "-32-1---2-2---21--2---3--1-------11-3-----33-----2", "---------3-4-3-------4--5-----34------5---------4-", "-----4-----4-3--5----4----5---34------5---------4-", "---7--5-----7------6---5----57--5--7-7--56----5---", "-----4---3-4-3---4---4--5-5---34------------4---4-", "-4--2---3-3---32--3-4-4--2-------22-4-----44-2---3", "------22----4------3---2----24--2--4-4-323----24--", "-43-2---3-3---3---3---4--2-2--------------4--2---3", "2----2-------1--32---2--3-3---12------3---------2-", "-76-5---6-6---65--6-7-7----------55-7-----77-5---6", "-----6---5-6-5---6------7-----56------7-----6---6-", "---5--33----5------4---3----35--3--5-5--34----35--", "---3--1-----3------2---1----13--1----3-212----13--", "-----6---5-6-5--76---6--7-----56------7-----6-----", "3----3---2-3-2--43------4-4---23------4---------3-", "6----6---5-6-5--7----6----7---56------7-----6---6-", "---7--55----7------6--------57--5--7-7-65-----57--", "2--------1-2-1--3----2--3-3---12------3-----2---2-", "3----3---2------43---3--4-4---23------4-----3---3-", "3----3---2-3-2--43---3--4-4---23------------3---3-", "---------5-6----76---6--7-7---56------7-----6---6-", "-76-5---6-6----5--6-7----5-5------5-7-----77-5---6", "-6--4---5-5---54----6----4-4-----44-6-----66-4---5", "-54-3---4-4---43--4-5-5--3-3-----33-5-----5--3---4", "6----6---5---5--76---6--7------6------------6---6-", "---7--55----7------6---5----57--5----7--56----5---", "---7--5-----7------6---------7-----7-7-656-----7--", "----4---5-5---54--5-6-6--4-4-----4--6-----66-4---5", "3----3-----3-2--43---3--4-4---23------------3---3-", "---6---4----6------5--------46--4--6-6-5-------6--", "--3-2-----3-------3---4----2------2-------44-2---3", "---3--1-----3------2---1----13--1--3-3--1-----1---", "5----5---4-5-4--65---5--6-6---4-------------5---5-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> board = {"------9-------------67----------999------------87-", "--5---8------------45--58-------8-8---------6--76-", "---3-------5-----2----6------4-----3-------------4", "--6---9-------------67--9-------9-----5-----7---7-", "4---9----4---54-------------8-5--------5-4-9------", "--6---9-------------67-69-------99----5--------87-", "----9--------54-----------7---5--------5-4--------", "------------4---5-------------------3---2-4---6---", "--6----------------567-6---------99-------------7-", "---------4---5------------7---5--------5---9------", "------------4--65--------4----------3-----4--7----", "-----7-24--5-----2----6----6-------3-------------4", "---3-7-24-------------6----6---6------------------", "--5-----------------------------888---4-----6--76-", "----8----3---4------------6-7-4------------8------", "4---9----4---54-----------7-8----------5-4-9------", "-------------32-------------6----------3---7------", "-7--------7-5--7--6-----------------44--3---------", "----------7-5--76-6---------------------3----8----", "4---9----4---54--------------------------4--------", "---------4----------------7-----------------------", "---3-7-24--------2----6----6-------3-------------4", "---4----5--6-----3-----------5-7---4--------------", "---------4----4---------------5--------5-4-9------", "---5-9-46--7-----4-----------6-8-----------------6", "-------------------4---58----------------------76-", "2---7----2----2-----------5-6-3--------3-2-7------", "4---9----4---5------------7---5----------4-9------", "---------2----------------5-6----------3----------", "---4---3---6-----3---------7---7---4--------------", "--5---8------------4------------888---------6--7--", "---3-7--4--5-----2---------6-4-6------------------", "--4---7------------3-5-4---------77---------5-----", "-8--------8-6---7-------------------5--------98---", "-7--------7-----6-6-----------------44--3-5---7---", "-----8-35--------3----7----7-------4--------------", "--5---8-------------5--58-------8-----------6---6-", "----9----4---54-----------7-8-5----------4-9------", "------9------------567-6--------9-9---5-----7--8--", "-------2---5-----2-----------4-----3-------------4", "--------------------56-58--------8----------6-----", "-6--------6----6---------------------3--2----7----", "-------------------34--47-------77-------------65-", "-------------32-----------5------------3----------", "-6--------6----65-------------------33----4--76---", "--5---8-------------56-5--------888---4-----6---6-", "--------------------------------8-----4-----------", "---5-9-4---7-----4----8----8-6--------------------", "-6--------6----6--5---------------------2-4-------", "-------------------4-6-5--------8-8---------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> board = {"--01------6---7------5--7-----4---------0----5----", "----------------6--6--------2--32--6-6----5---8---", "--------86-2-----24----1------------3-0----3-----8", "--------8--2-----24----1------------3-00---------8", "----------------6--6--------2--32--6-6----5---8---", "--------86-2-----24----1---------8--3-0----------8", "1---7-5-------------0--------1--------------4-----", "---------6-------2-----1---------8--3--0----------", "----------------6--6-----------32--6-6----5---8---", "1---7452------------0--------1--------------4-----", "-------------------------4--------1------4-----4--", "--------86-------24-----------------3------3-----8", "-001------6---7------5--7-5---4---------0---------", "----------------6--6--------2--3---6-6----5---8---", "----------------6-----------2--32--6-6--------8---", "-------------8-1------3--4--------1------4-----48-", "-------------8-1---------4--------1------4-----48-", "----------------------3--4---------------4-----48-", "-------------8-1------3--4--------1------4-----48-", "1---7452------------0-----------------------------", "-00---------2--------5--7-57--4---------0----5----", "-0----------2-7------5--------4---------0----5----", "----------------6--6--------2--32--6-6--------8---", "--------86-2-----24----1---------8--3-0----3-----8", "----------------6--6-----------32--6-6----5---8---", "--01----------7------5--7-57--4---------0----5----", "---------------1---------4--------1------4--------", "1----4-2------------0--------1--------------4-----", "-001------6-2-7------5--7-57--4--------------5----", "----------------6--6--------2--32--6-6----5---8---", "1---7452---------------------1--------------------", "---------6-2---------------------8--3-0----3-----8", "-------------8-----------4--------1------4-----48-", "----------------6--6---------------6-6----5---8---", "1---74-2------------0-----------------------4-----", "-------------8-1---------4--------1------------48-", "--------8--2-----24----1---------8--3--0---3-----8", "----------------6--6--------2--32--6-6----5---8---", "----------------6--6--------2--32----6----5---8---", "1----452------------0--------1--------------4-----", "-------------8-1---------4--------1------4-----48-", "----------------6--6--------2--3-----6----5-------", "--------86-------24----1---------8--3--0---3------", "-001------6-2-7------5----57------------0----5----", "--------86-2-----2-----1---------8--3-0----3-----8", "---1------6-2-7------5----5-------------0---------", "---------------1------3--4--------1------------48-", "--------86-------24----1---------8--3-0----3-----8", "---------------1------3--4--------1------4-----48-", "----------------6--6--------2--3---6----------8---"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> board = {"----6-----4---------------------------------------", "-3--5-----3---4-----6-5---------------------------", "-----1-----03--------1---2------------------------", "5-78----67-------------------------------6-----8--", "-1--------1---2-----4-3---------------------------", "-----4------65-----3-4---5----------6-5-----------", "5--8----67--------------6-6----6---------------8--", "---------------30-----------------2---------------", "---------------------------------------41-1-1----2", "----------------5------7----------77-5------------", "2--------4--------------3-3----3---------3-----5--", "---------------30------2------0-------------------", "---6----45--------------4------4---------4--------", "-------------3-----1---------1---2--4------3------", "----3---------2-------3---------------------------", "-----2-----1-3-----1-2---3---1------4-3----3------", "-----------------5---------------------8----5----6", "-------------6-----4-5-----------5--7-------------", "------5-----------6--------44---------------------", "-----4-----365-----3-4---5---3---4----5-----------", "-----------------2--------------------------2----3", "------5-----------6--------44----------------3----", "------------------7--------55----------------45---", "-----2-3-----------------3---1---2----3----3------", "-----2------4------1---------1------4-3----3------", "5-7-----67--------------6------6---------------8--", "2-45----34----------------3--------------------5--", "----------------------------1----------------01---", "----------------5------7------5---77------------8-", "-4--6-----4---------7-6---------------------------", "-----------------0--------------1------30-0-------", "-----1-----03------0-----2-----------------2------", "1-34----23--------------2-2----2---------------4--", "-0--2-----0---1-----3-----------------------------", "----------------0------2------0------0----------3-", "------5-----------6--------44----------------34---", "--2-----12--------------1------1---------1-----3--", "-------------2-------1---2---0---1--3-2----2------", "-----6-7----87---------------5---6--8-------------", "4--7----56--------------5-5----5---------5-----7--", "-----------------4----------------------4---------", "-----------58------------7-------6----7----7------", "---------------7--------------4---66------------7-", "-----------------4--------------5------74-4-4-----", "-----------------0---------------------3--0------1", "------5-----------6--------44----------------34---", "----------------4------6------------------------7-", "-5--7---------------8-7---------------------------", "----3-----1-----------3---------------------------", "-1------------2-----4-3---------------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> board = {"-----00----0--------0------------------0-----0--0-", "--------------0----------0---0-------------0------", "0------0------------------------0-----------------", "--0-----0----0-----0------00--00--0--00----------0", "----------------------00-----------0------0-0-0---", "-0-00-----0----00-0-----0-----------0---00-----0--", "--------------0----------0---0-------------0------", "---------0--0----0---0------0----0----------------", "--0-----0----0-----0------00--00--0--00----------0", "---------0--0----0---0------0----0----------------", "----------------------00-----------0------0-0-0---", "--0-----0----0-----0------00--0---0---0----------0", "-----00----0--------0------------------0-----0--0-", "-0-00-----0-----0-0-----0-----------0---00-----0--", "0------0------------------------0-----------------", "----------------------00-----------0------0-0-0---", "--------------0----------0---0-------------0------", "---------0--0----0---0------0----0----------------", "0------0------------------------0-----------------", "----------------------00-----------0------0-0-0---", "----------------------0------------0------0-0-0---", "---------0--0--------0------0----0----------------", "0------0------------------------0-----------------", "--0-----0----0-----0------00--00--0--00----------0", "0------0------------------------0-----------------", "--------------0----------0---0-------------0------", "-----00----0--------0------------------0-----0--0-", "--0-----0----0-----0------00--00--0--00----------0", "-0-00-----0----00-0-----0-----------0----0-----0--", "-----00----0--------0------------------0-----0--0-", "----------------------00-----------0------0-0-0---", "0-------------------------------0-----------------", "--0-----0----0-----0-------0--00--0--00----------0", "-0-00-----0----00-0-----0-----------0---00-----0--", "---------0--0----0---0------0----0----------------", "---------0--0----0---0------0----0----------------", "--------------0----------0---0-------------0------", "-----00----0--------0------------------------0--0-", "----------------------00-----------0------0-0-0---", "--------------0----------0---0-------------0------", "---------0--0----0---0------0----0----------------", "-0-00-----0----00-0-----0-----------0---00-----0--", "-----00----0---------------------------0-----0--0-", "0------0------------------------0-----------------", "-----00----0--------0------------------0-----0--0-", "----------------------00-----------0------0-0-0---", "-0-00-----0----00-0-----0-----------0---00--------", "-----00----0--------0------------------0-----0--0-", "--------------0----------0---0-------------0------", "-----00----0--------0------------------0-----0--0-"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> board = {"-0-0------0----------------0-0----------0-----000-", "------0--------0---0--------0----0-------0--0-----", "------------2-------2-----2---2--------2---2-2---2", "4-------------4-------4---------------4-----------", "------------0-------0-----0---00-------0---0-0----", "----0---------------------------0-----------------", "-2--------22---------------2------------2-----222-", "----1---------------------------1-----------------", "------------0-------0-----0---0--------0---0-0---0", "-----4-------4---------4-4--------4-4-------------", "-----5-------5---------5-5--------5---------------", "----0-------------0-------------0-----------------", "-------5-5------5----5----------------------------", "----5-------------5-------------5-----------------", "-----0-------0---------0-0--------0---------------", "--5-----5--------5------5------------5------------", "-----5-------5---------5-5------------------------", "------------4-------4-----4---44-------4---4-4----", "-------0--------0----0----------------------------", "--4-----4--------4------4------------4------------", "------------------1-------------1-----------------", "------------5-------5-----5---55-------5---5-5---5", "----5-------------5-------------------------------", "------0--------0------------0----0-0-----00-0-----", "------0--------0---0--------0----0-0------0-0-----", "-------3-3-----------3----------------------------", "------3--------3---3-------------3-3-----33-------", "----0-------------0-------------0-----------------", "--2-----2--------2------2-------------------------", "-----------------------5-5--------5---------------", "-------4-4------4----4----------------------------", "----3-------------3-------------------------------", "-----4-------4-----------4--------4-4-------------", "----3-------------3-------------3-----------------", "-------------3---------3----------3-3-------------", "------5------------5--------5----5-------55-------", "---------------1------------1----1-1-----11-1-----", "--------------------------------1-----------------", "-----2-------2---------2-2----------2-------------", "4-------------4-------4---------------4-----------", "-----0-------0---------0-0--------0-0-------------", "-----------------1------1------------1------------", "-0-0------0----------------0-0----------0------00-", "------2--------2------------2----2-------22-2-----", "--1-----1--------1------1------------1------------", "-----5-----------------5-5--------5-5-------------", "------4--------4---4--------4----4-4-----44-4-----", "2-------------2-------2---------------2-----------", "------2------------2-------------2-2-----22-2-----", "2-------------2-----------------------2-----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> board = {"-----8----------------------------8---------------", "-------7----7---------7-7-----7-7-----7-------7---", "---8----------------8---------------------------8-", "----8--------------------------------8------8----8", "7-7---7--------7--------------------7------7------", "7-7---7------------------------------------7------", "----------------------------------------8---------", "----8--------------------------------8----8-8----8", "---------7---7-------------7----------------------", "-----------------88-8-----8---------------------8-", "---7----------------7-----7---------------------7-", "---------8---8------------------------------------", "----------8----------8---------8------------------", "----------8----------8---------8-------------8----", "---8--------------8-8-----8-----------------------", "----7-------------------------------------7------7", "-------7-----------------7----7-------7-------7---", "-------------------------------------7----7-7----7", "--------------8--------------8-----------8--------", "-----7----------------------------7---------------", "-----7----------------------------7-----7---------", "-----------------------------7---7-------7--------", "777---7-----------------------------7------7---7--", "--------------7--------------7---7-------7--------", "-------8--------------8-8-----8-8-------------8---", "-------7----7---------7--7------7-----7-------7---", "-------8----8---------8-88----8-8-------------8---", "-----------7----7------7----7----------7----------", "-----------------------------8---8-------8--------", "----------------------------------7-----7---------", "777---7--------7--------------------7------7---7--", "----------------------------------7-----7---------", "-7----7--------7---------------------------7---7--", "--------7------------7---------7-------------7----", "---7-------------77-7-----7---------------------7-", "-----------------------------7-----------7--------", "777---7--------7---------------------------7---7--", "---7-------------7--7-----------------------------", "-----------8----------------8------8---8----------", "----8--------------------------------8----8-8----8", "--------7-7----------7---------7-------------7----", "-----------8----8--8---8----8------8---8----------", "7-7---7--------7--------------------7------7---7--", "----7--------------------------------7----7-7-----", "--------------7--------------7---7----------------", "-------------------------------------7----7------7", "-------------------------------------7----7-7----7", "----7-------------------------------------7-7-----", "-----7----------------------------7-----7---------", "-------7----7------------7----7-------------------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 93864121;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> board = {"---------1------------2-----------6---------------", "--------------------1-----------------------------", "---05---1-----3-1------4-------------------4------", "------5------------------------------4----6-------", "----------8--8-5----------------55----------------", "-1---------5---------------7---------------------1", "--------------------------0---11-------6----------", "------------------6-------3---44------------------", "-------3---------------------5-----53---3----7----", "---162--2-------2------5-------------------5------", "---------4------------5-----------9---------------", "-------0-----------3---------------20-------------", "---1-2--2-----4-2------5--------------------------", "--------------------------1---22-------7----------", "-------1-----------4---------3-----31---1----5--4-", "------7------------------------------6----8-------", "---16---2-----4-2------5-------------------5------", "-----------------0------23------------6-----------", "---051--1-----3-1------4--------------------------", "-2---------6---------------8----------------------", "-------------------------3--3---------6-----------", "2-1-----------------------------------------5-2---", "----------5----------------------2----------------", "-------0-----------3---------2-----20---0----4--3-", "-3-------------------------9---------------------3", "----------7--7------------------------------------", "-------0-----------3---------2-----20---0---------", "------------------3-------0---11-------6----------", "-3---------7-------------------------------------3", "------------------4------------2-------7----------", "-3---------7---------------9---------------------3", "------------8-------3-----------------------------", "-------1---------------------3------1---1----5----", "------------9-------4-----------------------------", "-----------5---------------7---------------------1", "-------2-----------5---------4-----42---2----6--5-", "------7-----------------------------------8----4--", "------7------------------------------6---------4--", "------7------------------------------6---------4--", "---------3------------4-----------8---------------", "-------0---------------------2-----20---0-------3-", "--------------------4-----------------------------", "------------9-------4-----------------------------", "------------------4-------1---22-------7----------", "-------------6-3-----------------3----------------", "---------2------------------------7---------------", "-----------------2------45------------8-----------", "2-1------------------3-------------------1--5-----", "------------------6-----------44-------9----------", "------------------6-------3----4-------9----------"};
    EqualSums* pObj = new EqualSums();
    clock_t start = clock();
    int result = pObj->count(board);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22786105&rd=15488&pm=12364
********************************************************************************
#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
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
#include <cctype>  
#include <string>  
#include <cstring>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <ctime>  
using namespace std; 
  
class EqualSums 
{  
  int z[55][55]; 
  int n; 
public: 
  int count(vector <string> b)  
  {  
    n=b.size(); 
    queue<pair<int,int> > qu; 
    for(int i=0;i<n;i++)for(int j=0;j<n;j++) 
    { 
      z[i][j] = b[i][j] == '-' ? -999999 : b[i][j] - '0'; 
      if(z[i][j] != -999999) qu.push(make_pair(i,j)); 
    } 
    while(qu.size()) 
    { 
      pair<int,int> p  = qu.front();qu.pop(); 
      int x = p.first,y = p.second; 
      for(int i=0;i<n;i++)for(int j=0;j<n;j++) 
      { 
        if(x==i||y==j)continue; 
        if(z[x][j]!=-999999&&z[i][y]!=-999999&&z[i][j]==-999999) 
        { 
          z[i][j] = z[x][j] + z[i][y] - z[x][y]; 
          qu.push(make_pair(i,j)); 
        } 
        if(z[x][j]==-999999&&z[i][y]!=-999999&&z[i][j]!=-999999) 
        { 
          z[x][j] = z[i][j] + z[x][y] - z[i][y]; 
          qu.push(make_pair(x,j)); 
        }         
        if(z[x][j]!=-999999&&z[i][y]==-999999&&z[i][j]!=-999999) 
        { 
          z[i][y] = z[x][y] + z[i][j] - z[x][j]; 
          qu.push(make_pair(i,y)); 
        } 
      } 
    } 
    for(int i=0;i<n;i++)for(int j=0;j<n;j++) 
    { 
      if(z[i][j]<0&&z[i][j] !=-999999)return 0; 
 
    } 
    for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)for(int k=0;k<n;k++)for(int r=k+1;r<n;r++) 
    { 
      if(z[i][k]==-999999||z[i][r]==-999999||z[j][k]==-999999||z[j][r]==-999999)continue; 
      if(z[i][k] + z[j][r] != z[i][r] + z[j][k]) return 0; 
    } 
    vector<bool> vis(n,false); 
    vector<int> v; 
    for(int i=0;i<n;i++) 
    { 
      if(vis[i]) continue; 
      vis[i]=true; 
      int x = 0; 
      int val = 99999; 
      for(int j=0;j<n;j++)for(int k=0;k<n;k++) 
      { 
        if(z[i][j] >= 0 && z[k][j]>= 0) 
        { 
          val= min(val,z[k][j]); 
          vis[k] = true; 
        } 
      } 
      v.push_back(val); 
    } 
    int MOD = 1000000007; 
    int res = 0; 
    int dp[55][55]; 
    memset(dp,0,sizeof(dp)); 
    dp[0][v[0]] = 1; 
    for(int i=1;i<v.size();i++) 
    { 
      for(int s = 0;s<15;s++) 
      { 
        for(int k=0;k<=s+v[i];k++) 
        { 
          int t1 = s,t2 = v[i],t3=k,t4 = s+v[i]-k; 
          int t = min(min(t1,t2),min(t3,t4)); 
          dp[i][t] += dp[i-1][s]; 
          dp[i][t] %= MOD; 
        } 
      } 
    } 
    for(int i=0;i<15;i++) 
    { 
      res+=dp[v.size()-1][i]; 
      res%=MOD; 
    } 
    return res; 
  } 
         
  
        };  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/