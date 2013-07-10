/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3064
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

class RevolvingDoors {
public:
    int turns(vector<string> map);
};

int RevolvingDoors::turns(vector<string> map) {
    int ret;
    return ret;
}


int test0() {
    vector<string> map = {" ### ", " #E# ", " ## # ", "#### ##", "# S -O-#", "# ### #", "# #", "########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> map = {"########", "# | #", "#S O #", "#-O- | #", "#E # #", "# #", "########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {"#### ", "#S|##", "# O #", "##|E#", " ####"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {" | | | | | | | | | ", " O O EO -O- O O O O OS O ", " | | | | | | | | | "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> map = {"###########", "# # #", "# S | E #", "# O #", "# | #", "# #", "###########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {" # ", " #### # ", "##| |# ", "E O O ", "# |##| ", "## ", " #S "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> map = {" E", " | ", " O ", " | ", " -O-S-O- ", " | ", " O ", " | ", " "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> map = {" ### ", " #### ##", " ### # -O-#", " #E### # #", "## ##| # #", "#-O- O ##", "# ## |## # ", "# #### # |##", "# S O #", "#########|##", " ### "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> map = {" #### S | ", "##| |# O ", "E O O #| ", "# |##| ", "## ####"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> map = {"##E# ", "# ## ", " -O-## ", " # ## ", " ## ##", " -O- ", "## ## ", " # ### ", " # S "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> map = {"S | | # ", " O O # ", " | | # ", " -O- -O-## ", " # | # ", " # O -O-# ", " # | # ", "########################## # ", " -O- ", " ", " ", " -O- ", "################### ############################", " # # ", " #-O-# ", " # # ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> map = {"S ", "############################### ################", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> map = {" ", " ", " ######## ", " # S# ", " # ## # ", " # # | # ", " ## # O # ", " #E|## |## ", " # O ## # ", " #| # ", " ####### ", " ", " "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> map = {" ##########E # ", " # S -O- ", " # ## # ## ", " # # | # # ", " #### # O # # ", " # |## |## # ", " # O ## ## # #####", " # #| # # # ", " # ## #### ## # # ", " # #| ##| # |## ", " # O # O # O # ", " # |# |# ###| # ", " # # # # ", " ######### ########## ", " # "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> map = {"###################################", "#S #", "# ## ##### ##### ##### ##### ## #", "### |##| |##| |##| |##| |## | #", "#E O O O O O O O O O # O #", "####| |##| |##| |##| |##| # |##", " # # # # # ## # ", " ########################## # ", " ###### "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> map = {"S ", "####### ####### ####### ### ", " # |# ## |# ## |# ## | ", " #| O |##| O |##| O |## O ", " EO | O O | O O | O # |#", " |####| |####| |####| ## #", "## # #### # #### #", " # #"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> map = {"S ", "####### ####### ####### ### ", "E# |# ## |# ## |# ## ", " #| O |##| O |##| O |## ", " O | O O | O O | O # #", " |####| |####| |####| ## #", "## # #### # #### #", " # #"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> map = {"S | | # ", " O O # ", " | | # ", " -O- -O-## ", " # | # ", " # O -O-# ", " # |-O- # ", "######################### # ", " #-O- ", " ", " ", " ", "################### ############################", " # # ", " #-O-# ", " # # ", " ## # ", " # | # ", " # O # ", " # |## ", " ## # ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> map = {"#############", "# #|##|# #", "# O O #", "# E || || S #", "# O O #", "# #|##|# #", "#############"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> map = {" S ", "-O--O--O-#", " ", "#-O--O--O-", " ", "-O--O--O-#", " E "};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> map = {" ########", " # | #", "##### O #", "# | | #", "#SO #### E #", "# | | #", "##### O #", " # | #", " ########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> map = {" # ", " -O- | ", "-O- O ", " |-O-| ", " O -O-", " S | | ", " | O ", " O -O-| ", " |-O- ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> map = {" | ", " OE", "S|#"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> map = {" | ", " OS", "E|#"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> map = {"######## ###", " # #-O-|E", " # #-O-| O ", "#-O-| O |#", "#| O |-O-#", " O |-O-# # ", "S|-O-# # ", "### ########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> map = {"######## ###", " # #-O-|E", " # #-O-| O ", "#-O-| O |#", " | O |-O-#", " O |-O-# # ", "S|-O-# # ", "### ########"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> map = {"S ", "############################### # ##############", " ## #| # ", " # | # O ", " # O # |# ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # # ", " ############### ", " ", " ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> map = {"S ", "############################### # ##############", " ## #| # ", " # # O ", " # # |# ", " # ## # |###########", " ## # # O ", " # | # ##| ", " # O # # ", " # |## #### ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # # ", " ############### ", " ", " ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> map = {"S ", "############################ # ###### ", " ## #| # # ", " # # O # ", " # # |# ### ", " # ## # |##### ########", " ## # # O #| # ", " # # ##| # O ", " # # ### |# |####", " # ## #### #### O ", " ## # # ###| ## ", " # # # # ### ", " # # # ", " # ## ################ ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # | # # ", " # O # # ", " # |## # ", " ## # # ", " # # ", " ############### ", " ", " ", " ", " E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> map = {"S ", " ", " ", "-O--O--O--O--O--O--O--O--O--O- ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " #", " #E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {"S ", " ", " ", " ", " ", " -O--O--O--O--O--O--O--O--O--O- ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " #", " #E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> map = {"##################################################", "#S #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "#################################################E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> map = {"##################################################", "#S #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# #", "#################################################E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> map = {" ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " S ", " -O- ###", " #E#", " ###"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> map = {" ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " S ", " -O- ###", " #E#", " ###"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> map = {" ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " S ", " -O- ###", " #E#", " ###"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> map = {" ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " ", " -O- ", " ", " ", " ", " S ", " -O- ###", " #E#", " ###"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {"##################################################", "#S #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "# #", "# -O- #", "# #", "#################################################E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
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
    vector<string> map = {"S ", " ", " ", "-O--O--O--O--O--O--O--O--O--O- ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " ", " #", " #E"};
    RevolvingDoors* pObj = new RevolvingDoors();
    clock_t start = clock();
    int result = pObj->turns(map);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
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
*    http://community.topcoder.com/stat?c=problem_solution&cr=7479769&rd=5869&pm=3064
********************************************************************************
#include <string>
#include <algorithm>
#include <sstream>
#include <iostream>
#include <deque>
#include <vector>
 
using namespace std;
 
int dist[55][55][1<<10];
int otacam[55][55];
int ho[55][55];
int ve[55][55];
int dx[]={1,-1,0,0};
int dy[]={0,0,1,-1};
class RevolvingDoors {
public:
  int turns(vector <string> map) {
    for (int i=0;i<map.size();i++) {
      map[i]='#'+map[i]+'#';
    }
    memset(otacam,-1,sizeof(otacam));
    string s(map[0].size(),'#');
    map.push_back(s);
    map.insert(map.begin(),s);
    memset(dist,-1,sizeof(dist));
    memset(ho,-1,sizeof(ho));
    memset(ve,-1,sizeof(ve));
    vector<pair<int,int> > dvere;
    int si=0,sj=0,ei=0,ej=0;
    int poc=0;
    for (int i=0;i<map.size();i++) {
      for (int j=0;j<map[0].size();j++) {
        if (map[i][j]=='O') {
          if (map[i-1][j]=='|' || map[i+1][j]=='|') {
            poc|=1<<dvere.size();
          }
          otacam[i+1][j+1]=dvere.size();
          otacam[i+1][j-1]=dvere.size();
          otacam[i-1][j+1]=dvere.size();
          otacam[i-1][j-1]=dvere.size();
          
          ve[i-1][j]=dvere.size();
          ve[i+1][j]=dvere.size();
          
          ho[i][j-1]=dvere.size();
          ho[i][j+1]=dvere.size();
          
          dvere.push_back(make_pair(i,j));
        }
        if (map[i][j]=='S') {
          si=i; sj=j;
          map[i][j]=' ';
        }
        if (map[i][j]=='E') {
          ei=i; ej=j;
          map[i][j]=' ';
        }
      }
    }
    for (int i=0;i<map.size();i++) {
      for (int j=0;j<map[0].size();j++) {
        if (map[i][j]=='-' || map[i][j]=='|') 
          map[i][j]=' ';
      }
    }
    dist[si][sj][poc]=0;
    deque<pair<pair<char,char>,int> > q;
    q.push_back(make_pair(make_pair(si,sj),poc));
    while (!q.empty()) {
      int ai=q.front().first.first;
      int aj=q.front().first.second;
      int as=q.front().second;
      if (ai==ei && aj==ej) return dist[ai][aj][as];
      q.pop_front();
      for (int d=0;d<4;d++) {
        int ni=ai+dx[d];
        int nj=aj+dy[d];
        if (ho[ni][nj]!=-1 && ((1<<ho[ni][nj])&as)==0) continue;
        if (ve[ni][nj]!=-1 && ((1<<ve[ni][nj])&as)) continue;
        if (map[ni][nj]==' ' && (dist[ni][nj][as]==-1 || dist[ni][nj][as]>dist[ai][aj][as])) {
          q.push_front(make_pair(make_pair(ni,nj),as));
          dist[ni][nj][as]=dist[ai][aj][as];
        }
      }
 
      if (otacam[ai][aj]!=-1) {
        if (dist[ai][aj][as^(1<<otacam[ai][aj])]==-1 || dist[ai][aj][as^(1<<otacam[ai][aj])]>dist[ai][aj][as]+1) {
          q.push_back(make_pair(make_pair(ai,aj),as^(1<<otacam[ai][aj])));
          dist[ai][aj][as^(1<<otacam[ai][aj])]=dist[ai][aj][as]+1;
        }
      }
      
 
    }
 
    return -1;
  }
  
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/