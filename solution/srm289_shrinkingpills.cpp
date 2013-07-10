/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5904
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

class ShrinkingPills {
public:
    int escape(int pills, int pspeed, int dspeed, int door, vector<string> lab);
};

int ShrinkingPills::escape(int pills, int pspeed, int dspeed, int door, vector<string> lab) {
    int ret;
    return ret;
}


int test0() {
    int pills = 3;
    int pspeed = 50;
    int dspeed = 1;
    int door = 100;
    vector<string> lab = {"######################", "#@ X X X E#", "######################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int pills = 1;
    int pspeed = 20;
    int dspeed = 10;
    int door = 60;
    vector<string> lab = {"##########", "# # #", "# @ X E #", "# # #", "##########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int pills = 0;
    int pspeed = 1;
    int dspeed = 10;
    int door = 200;
    vector<string> lab = {"#########", "#@ X #", "####### #", "#E X #", "#########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int pills = 1;
    int pspeed = 1;
    int dspeed = 10;
    int door = 120;
    vector<string> lab = {"#############", "# ##### #", "# @ XXXXX E #", "# ##### #", "#############"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int pills = 1;
    int pspeed = 1;
    int dspeed = 10;
    int door = 120;
    vector<string> lab = {"#########", "#XX@XXXE#", "# ##### #", "# #", "#########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int pills = 10;
    int pspeed = 99;
    int dspeed = 1;
    int door = 200;
    vector<string> lab = {"##################################################", "#@ ###############################################", "## ################ ##################", "## ################ ########### ##################", "## ################ ######XXXX# ##################", "## ### ######X##X# ##################", "## ################ ######X## # ##################", "## ################X######X##X# ##################", "##X ######X######X## # ##################", "############ ###### ##X# ##################", "##### ###### ############# ## ##################", "##### ###### ############# ####X##################", "############ ############# #### ##################", "#####X###### ############# #### ##################", "############ X ###### #### ##################", "################### ###### #### #####", "################### ###### #### ############ #####", "################### ###### #### ############ #####", "####### X ###### ####X############ #####", "####### ############ ##### #### ############ #####", "####### ############# #### #### ############ #####", "####### ############## ### #### ############ #####", "####### ############### ## #### ############", "####### ################ #### ##### ############", "####### ################## #### ##### ############", "####### ################## #### ##### ############", "####### X #### ##### ############", "###############################X##### ############", "##################### X ##### ############", "##################### ############### ############", "##################### ############## ############", "##################### ############### ############", "##################### ############### ############", "##### ########### ############################", "##### ### ########### X X ##############", "##### ### ######################### X X X#####", "##### ### ######################### ######## #####", "##### ### ######################### ######## X####", "##### ### ######################### ######### ####", "##### ### ######################### ######### ####", "##### ### X X X X ######### ####", "##### ####################################### ####", "##### ####################################### ####", "##### ### ####", "######################################### ### X##", "######################################### ##### ##", "######################################### ##### ##", "######################################### #", "################################################E#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 274;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int pills = 10;
    int pspeed = 99;
    int dspeed = 1;
    int door = 200;
    vector<string> lab = {"###############################################", "#@# # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # #E#", "###############################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 1125;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int pills = 1;
    int pspeed = 1;
    int dspeed = 1;
    int door = 100;
    vector<string> lab = {"##################################################", "#@XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX#", "#XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXE#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int pills = 10;
    int pspeed = 1;
    int dspeed = 10;
    int door = 120;
    vector<string> lab = {"##################################################", "#@ #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #E#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 94;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int pills = 10;
    int pspeed = 1;
    int dspeed = 10;
    int door = 120;
    vector<string> lab = {"##################################################", "#@ #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #####", "# #E#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int pills = 1;
    int pspeed = 25;
    int dspeed = 125;
    int door = 200;
    vector<string> lab = {"#####", "#@XE#", "#####"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
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
    int pills = 2;
    int pspeed = 40;
    int dspeed = 1;
    int door = 100;
    vector<string> lab = {"###########", "#@ XXXX E#", "###########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int pills = 2;
    int pspeed = 40;
    int dspeed = 1;
    int door = 100;
    vector<string> lab = {"############", "#@ XX XX E#", "############"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int pills = 3;
    int pspeed = 76;
    int dspeed = 24;
    int door = 37;
    vector<string> lab = {"########", "#@######", "# ### #", "###### #", "# ## ##", "########", "## ## #", "# ######", "### ####", "#### #", "# ######", "## ## #", "### ##", "# # ####", "## # ##", "##### ##", "# ### ##", "# ######", "### # #", "## # ###", "### # ##", "### #", "# ## ###", "## E ###", "##### #", "########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
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
    int pills = 7;
    int pspeed = 1;
    int dspeed = 17;
    int door = 143;
    vector<string> lab = {"#########", "### ## #", "##E # #", "# ######", "# # @##", "# ## #", "# # #", "# ## # #", "#########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int pills = 3;
    int pspeed = 42;
    int dspeed = 132;
    int door = 149;
    vector<string> lab = {"##############################################", "# # ## ### # # # ## #### # # ###", "# # #### # # # ### # # ### # # ###", "## ## # # ## # # # ## #### # ### ##### ##", "## ## # # ## # # # # ##### #####", "# ### ## ## ## ## ## #### # # #", "### ## # # # # ##@ ## E# # # ### #", "## #### ## #### ## #### # # ## ## # ### #", "# # # # # # ## # # # # # ##### ## ##", "# ## # # # # # # # # ## # ## # ##", "### # # ## # # ### # # # # ## ###", "# # ##### # ### # # # # ### #", "## # ## # # # # ## ### # ## # ## ####", "# ## ### # #### ### ### ### # #### # ## #", "# ##### # ## ########## ## ## ## ### #######", "# # ## # # # ##### ## ## ## # # # #", "### ## # # #### # # # # ## #### ## # #", "# # # # ## ## #### # ### # # ## # # ##", "# # # ## # # # # # # # # # # #", "##############################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int pills = 5;
    int pspeed = 6;
    int dspeed = 63;
    int door = 185;
    vector<string> lab = {"##############################", "# # # ## # ### # ###", "# ## #### # # ## # #", "# ## # ######### # # #### #", "# ### # ## # ## # ####", "# ### #### # ## ##", "## #### # # ## # ## ###", "### E # ## ### ####### ## #", "### # # # # # # # ##", "#### ## # # #### # # # ####", "##### # ### ## # # ##", "#### ## # ### # # # # # #", "# # ## # # # #", "##### ## # ### # ## # ## #", "## # ## ### # ## # #", "## # ## ###### ## #### ##", "## ## # ### # #### ###", "# ## # # ### # # ## # #", "# ## ## ## ## # ###@ # #", "# # #### ### ## # ### #", "## # # # ## # ## # # ##", "# # # # # ## # # #### # ##", "# # # # ## # ## # ####", "# # ##### ### ##### ####", "# # # ### # ## # # # ##", "# # # # # ## # ## ###", "### ## # # ## # #", "# ### # # # # ### #", "# ### # # ## ######## # ##", "#### ## # ## # #### #", "##############################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int pills = 2;
    int pspeed = 15;
    int dspeed = 22;
    int door = 101;
    vector<string> lab = {"#########################################", "## # ## #### #### # ## # ## # #", "# ## # ## # ## ## # ## ### ###", "### # # # ## # ##### ## # ### ##", "## ## ### # # ## ## ## ##### #", "#### # # ##### ##### # ####", "# # # # # ####### # ### # #### # ###", "#### ## # # # # # # # ## # ##### #", "##### ##### ### # # # ## ##### # ####", "# # ### # # ## ######### ## ## ##", "## # ### ## # ## # ## ## #######", "# ### # # # ## # # # #", "# ####### # # # ## # ### ## ##", "# ## # # # # ## # ## ## ## # ###", "# ## # ## # # # ## ## #", "## ## # # #### ##### # #@ ###### ###", "## # # ### # ## ### # # ### # ##", "# ## #### ## ## # # # # ## ## #", "# # # # # # # ### ## #### ###", "# # ## # ## ## ## # # # # ## #", "## ##### ## ###### ### ## # # ####", "# # ### # ### ## ### # # #####", "### ### ## # ## ## ## # ## #", "## ## # # ## ###### ## # # ## #", "# #### # # # ##### # #### ### # ##", "# # #### # #### ### ## # # ##### ##", "# # #### ####### ##### ## # ## # #", "# ## ##E### ## ### #### ## ## ### #", "### ## # #### # # ### # # #", "# ##### # ### # ## # # #", "##### #### # # # # # # # # #", "######## #### # ### ##### # ## # ##", "######## # # ## # ## # ### ##", "## # # # # # ##### # ### # ## # #", "## ### # ## # # ## ### #", "# # # ## ############# # # # ## # #", "## ### # ## # #### # # # #", "# # #### # ## # # # # ## # #### ## ###", "# # ## # # ## # # # ##### ### #######", "#### # ### ### # ## ### # #", "# ### # ## #### ## # # # # ##", "#### # # # ## ## # # #### # #", "##### # # #### ## # # ### # ## ##", "### ## # # # ### # ## # # ###", "#########################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int pills = 4;
    int pspeed = 63;
    int dspeed = 34;
    int door = 138;
    vector<string> lab = {"################################", "### # XX #X #X## X X ## # # #", "#X# X XX X# ## # #### # ##X###", "# # # #### #XX######## ### #", "# ####XX# #XX XX ## # X # # # #", "## X# ## # X## # X X ### ##", "## # #X # X# ###X # ## #", "### ### ##X ##X ## # # #X### #", "# X## ## ##X### X# ## ###", "## X# XX## # #X ##X## #X #", "## #X##X # ### # X #X##", "# # X # ## ## X ## ## # #", "# ##X X## X X# # # ## ## #", "##X ## XX X #X# # X#XX###X###X#", "#X ##### ## # X X##X# #X #", "###X ###### # # ###X X# ###", "#X X## ## #### X# # # # ##X #", "# #X#E # X ### ##X#X#X# ##X #", "# # ## # X## # X# XX## X## #", "## ## # ####XX# X### ## ##", "#XX#X#X X X#X#X###X ## ## # #", "# X X # @X# # #X# X## # ###", "################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int pills = 4;
    int pspeed = 66;
    int dspeed = 1;
    int door = 79;
    vector<string> lab = {"######################################", "# #####X#X#X## # ###X ### ### #", "### # # # # ### ##X# ### ##XX#", "####X ## ###X## # # ##### #", "## #X ## # ## ## ###X # # # ##", "##X#X# #### X X####X# # ## #XX#", "# # ## # ### ### ## #X### # # #", "# # # X ###### # ## # ## ### # # #", "#X####X# ## # # # X ## X ## ###", "## # ## ## ####X X###X ## # ##", "#### ###X#X # # #X# # # ## # ## #", "##X# X ##### X # # X## X##X# X #", "# XX##### #X #X# ##### #X## ##", "# #### # X#X# #@##X #####X#####", "# #### X #### # # X## ## # # ##", "## X # ## # # ### ## X # #", "###### X #X ##X ## ## ##XX## #", "## # E# ## ## #XX# ##X # #", "# ######X# ## # ###### ## ## # #", "## ## # # ## X# # X # ## # #", "# ## # # # #X X# X# #####X## #", "# ##X # # # ## # X # # # ##X###", "# X# # X#X# #X# ###X ## # # X #", "## #X# # ## ## ##X # # # #", "# # ##X# # # ## ## X## ##", "#X # ### # # # # ###X### ## # # X#", "## # # # # ### # ### X# #", "##### # ### X# #X # ### X ## ##", "######################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int pills = 7;
    int pspeed = 90;
    int dspeed = 2;
    int door = 33;
    vector<string> lab = {"##############################################", "## # ## X # # # # # ### ## #X #E #", "## # XX # # # # #X # X ##X# ##", "# X X # ## # #X# X X # ## X#", "# # ## ### ### X X # X # #", "# X # # ## # #X # X #X # #", "# # # ## ##X # X # # # X ##", "# # #X# X# XX# # # # X # X# # #", "#X#X##### # # XX X X# ## X X ### #", "# X ## X ## ## # # X X# #", "# ## X##X # # # # # # # ## #", "# # ## # # # X # #X## # # ## ##", "# # # ## ## X #X # # # #X # #", "# #X## # ## # X # #", "#X # # # # # # X # # XX# # # #", "# # X X### ## # ### ####", "# # X # # X## ## ## # ## X# X X #", "# #X # # # #XXX X ##X#X#", "# ## # ## ## X XX #XX #X # # #", "# # # ## X ## # X #", "## # X XX## # #X # X X X ##", "#### # ##X X X #X # ## ###X # X##X #", "## ## # X# # # X # # #", "# X# # # ## # # # ## X # # # #", "# # X ## #X# # # # #X ## # #", "# #X X # ### # X X# # # #", "# ## # X##X#### #X# #X#X # X X# #", "# ### X # # # ## # X ## ### #X# X #", "## # X ## # # #XX X# ## ### X #", "## X# # X# X X# X###X X # X X X #", "# X ## # #X ## # # X # #", "# # #X #X # #### XX ### ##X# #", "# # ### ## # X## X ### ## # # #", "# # X# # # X X ## # X ## X# # X #", "#### X XX # ## ## # X# # ## #", "# X ### # X # ## # #X # #X## #", "# # #X # # # # # ###X X X # #", "# ## # X# # #X# X X# # X # #", "# # # ## # # X## XX ##X ##", "# # # # # # X# # # # X # # #", "# # # X##X # # ## ### # # #X#", "#X X #X # X # # ## #X ####X##X #", "## X# X XX # X ## X # # # ##X #", "## # ## ## # ## ## X # #X## #", "# X#X### # X### X ### ##X # # X#", "### X@ ## # ## X XX # #### # #", "##############################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int pills = 2;
    int pspeed = 19;
    int dspeed = 35;
    int door = 139;
    vector<string> lab = {"######################################", "## # # # X # # #X X## #X ## X#", "# X ## X# #X # # X ## ##", "#X # # X #X X## # #X X X#", "#X #### ## ## # # # ## ## #", "# X## # X X # #X #", "# ## ### ## X X#### X## ## # # #", "# ##### # X ## # ## #", "# X # # X## ## X ### #", "## # E #X X # #X ## # #", "# ## X X ## ## X ## #", "# # X X ## # # #### #X# X# #", "## X # #X # # ### # X # #", "#X @ X ## # # # # # # X#", "# #XXX # X # # ###X # X #", "# # X# # # ## ## X #", "# ## #X## #X### X # #### ## #", "# # # XX # ## #X# ###X#X # ##", "## ## # # # # ## # # #### ##", "## X # # # # #X ### #", "### X # ## # # X# # # X### #", "# # # # X#X X # ###X# # X ##", "# # ## X # X ## # ##X##", "# X # ### #X # # #X#X X #", "## XX ## # # ##X X #", "## ## ## ## # ## X # # # #", "#X ## # #X X # # # X#XX #", "# ##X # X # ## ##X # ##", "#X # # # # X ### ### #X X# #", "# # # # X # # ##", "# XX # # # # # # # #", "# X ## ### X # # ## # ##", "## ### # # # ## #", "## # ## # # ## # # # # # # # #", "# ## ## ## X## # # X#### # # ##", "# ## X X # X # #X # # ### #", "# ## # X ### ##X## ## X #", "# # # X# X # ## X ## ###", "# X # ## # # # XX ### #", "# # # # #XX # # # X#", "# X X # #X ### # # #", "# # ## ## # X## ## ## ###", "# #X X#X## X X #X ##", "######################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int pills = 5;
    int pspeed = 31;
    int dspeed = 1;
    int door = 7;
    vector<string> lab = {"#############################################", "# # # X# # X # ##X ##X# #X #", "# #X # ## #### # X ## X # # # X # X### #", "### # #X X X# # # # # # X # ## # #", "# ##X X X# ## #XX # #X # # #", "# X X # # #X # ##### ### #", "# X# # X# X# X ## # XX #", "##X #### # X## # # # ## # #X##", "## ## #X##X# # # # # # # ## # # # ##", "# # ### # #X## ## # # ## # ###", "#X#X # #### ## ## # # #### ##", "# XX## ## #### ### X #X X # X ###", "# X# # # ## # # #### X #X # XX#", "# # X #### X # ## # ##X # # # #", "## X X # # # ### ### X# ## X#", "# # # # # X # X ### X # X #", "## # # @ X#X ## # #### # # # X #", "#### ### X ### # X X #X ## # # #", "# # X # # ## ## ## ### # #", "# # # # #X #X # # X##### #### # #", "### # # ### # # # # X X # #", "# X# # ### #X# # # X## # ##", "###X # X# # #X X ## X ##X# ## # #### ##", "## X X#X # # # #X #X ### # ##", "#X #### ## # X ## #X #X #", "# # # # # # # # # XX ## # # #", "## # X # # # X ## # X## # X#", "# # # ## # ## # X##X # XX #", "# X## X # X# # # X X ## # #", "## ## # X## ### ##XX## X## #", "## ## # # # X# #X # ## # # ### # X #", "# X # # # ## X #X #X##X ## X X# # #", "# # # # X # ## # XX## # X## # # #", "# E# # # #X### X# # # # #X## #", "# # ## X# ## #XX ## # # #", "# X X## ### #X X ## X#X# ## # # #", "# X## ###X #X# # # ###XX ### # #X X# #", "# ## # # ##X ## # # # X # X# # XX #", "# # ### # X## ## X # # X## # # #", "# ## ## ## # #X# # X# # #", "# # #X X #XX# # #X # # X##X # ## #", "# #X# # # ### ## ### # X#", "# # #### #X # # X #X #X # # #", "# # ## ## X# XX X # ## ## ## # ##", "#X# # # ##### X X# # ## # #### #", "# X # X# ## X X# # X X ##", "#############################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 158;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int pills = 10;
    int pspeed = 94;
    int dspeed = 19;
    int door = 146;
    vector<string> lab = {"#################################", "## ## XX # # # # # ##", "## ## # X ##X # ##", "# X # # #### #X# # # # ##", "# #X # # # X ##X # #", "# XX## X# # ## # # #", "##### # ## # # X # #", "# X # # X# # #### #X# #", "## # # X # ### ### #", "# X ## X# ## # # X# #X #", "# # ## # ## # X X # ##", "#X X # #### # X X# X#", "# ## ## # #X# ## X ## # #", "# # # X# # ### #X #", "# #E# ###X # ## # # X ###", "## # # X X # XX # #", "### # # #X # # X# ##### #", "# ###X # X ####XX #X ##", "#XX #### ## # ### X###", "# # X###### # X#X # ##", "# # ## XX # ## #", "# ## # ## # # ## # # # # #", "## # ### ##X# # ## X # #", "## # ## # # # #X##", "#X # X## #X## X ##X ##", "## #X# ## #X# X X ### #X #", "## # # X# X## # # #", "### ## # X# # # ## X#", "# # #### # # #### ## #", "## # X XX # # ## ### X#", "# #X # X## ## ### # ## X#", "# X X # # ### # ## # ###", "# # X###X ##X# X X # #", "#X # # X# XX X ## # #", "# ### # X#X # # X ###X# #", "# ## #X #####X@ ## X X ##", "# # #X ## X ### # #", "# X ## # # # X### # # #", "## # X # XX X # # #", "#X#X # # ## # X#### X#", "#X X ### # X##X # # #", "#################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int pills = 8;
    int pspeed = 21;
    int dspeed = 2;
    int door = 129;
    vector<string> lab = {"##################################################", "# #X# XX # X##X#XX # XXX## ###X #X#X#X X ###", "### #X# # #X X # #X## ## X XX # ## XX####X##", "# XX# # #X# X #XX#X# X###X# # ## #X#XX #", "# XXX ## ########XX##X# #X###### #X## #X###X #", "## ## ## #X # #XX## # ###X #XX#X#X X# XX#", "# X## # # #### # # X ###X# # X# X X# XXX###", "# X# X ### XX X XX# X# ## X ##X# X# X#", "#X ### XX X X X## ## # X###### X#XX# # X #", "# ###X#X # ##X ## ## ##XX###### ## X#X # X# X##X#", "# ## X X # X#XXX XX ##X X X####### X# # X # #", "# # X##XX# XX####XX X#X X###X #X# X #X #", "# # ###### # ## X##XX #### ##XX ###X## # X#X#", "# # X#X # XX###X ## # # # ##X# # #### #####", "# X X # # #X #XX #X#XX ## ##XX#XX #X# X#", "#X#X #X XX X# X#X X###XXX ### # # # # #X##", "## #XX XXX # X# ## X X# X ## ## #X## X ## #", "# XX##X#X# #X#X#X XX XX #XXXX#XX###X# XX #", "# # X X## ## # XX# # # X XX #X### X X#", "#X# X # X### ## X X# X #X## ### ### # ##", "##X#### # # ## X# X X # # ## # #X XXX X ##", "## X#X X X# ### X# # # X# #X#X# X ## ##", "#X#X #X##X#X ##X#X#X#XX #XX #####X #X# # X # ##", "#X X XXX #@ X XX##### X X## X XXX # X#X XX##", "# #XXX# XXX X## ## ## # # #XX XX E # ## X#", "# X X # X X #X# XX X XXX# # X###X X #", "# X XXX##X # # XXX# X ## #X#XX # XX #", "## X #X## # #X #X # X X# X# XX #X# XX ## ##", "## # #XXX XX #### ## # #XX###X#X##### X X X#", "#X # XXX X# X #XX#XX ## X# X### # # #", "####XXX # # # #XXX###XX## X# XX X# # ###X#", "### X# # ##X # ##X# #X #######X ## # ###X#X##", "# #### X######## X # # XX # XX#XX##X# X #XX ##", "# X # X # X#XXX ####X #X####XX## ## XX #X#", "#X #X ## #X# ## X #X #### X# X## X## # # X ## #", "# XX # X X ##X ####XX##X# #X X ##X # # # ##", "# X X# X #X## # # #XX X X # # # #X # X#", "#XX#X# X # X#XX # # X #XX # X #", "# ### X #X #X## # #X# ##XXXX # ### #X# #X #", "##XX#X #XX# X# #XX# X#X#X#XXX X#### XX # # #XX #", "#X#X##X # ###X # # # # #X # X XXX### #XX #XX#", "# ## # # # #XX#X#XX X# X## # XX # #XXX #", "# X # #X## # X ### XX#X X#X# #X# ## # X# X X ##", "# ## #X X#X X# # # # ###X## # X# # ###", "##X # ##X#X# ## ### X##X###X #X# ## XXXX ##X#", "##X ##### # #X#### ##X # ## # X ##X # X #", "#XXX# XX# #X# # XX # # ### XX ##X #X #", "# # X #### XXX#X### # # X## X ## ## # ## X#", "## #XXX### # #X# X XX#XX # XX X X# # X # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int pills = 9;
    int pspeed = 42;
    int dspeed = 1;
    int door = 62;
    vector<string> lab = {"##################################################", "# X##XX#X ##X ### X #X#X X# #X ## X # # #", "## X # X #X X ##X ####X# #X X## # # X # X####", "###X # X # X ###X# #X##X# X X XXX #X X #", "## X ## X## #X# #### ## X #XXX## ##X X # # ##", "# #XX#### # # # XX X # ## # X # ####", "# ###X #X##X#X# ## # X # #XX## #X# ### X X X X#", "#X# #X#X#### ## X XX ##X###X# X##X #### ##", "##### X XX ## ### X#X#X # XXX# # X X# X #X #", "##X X# XX# #XX# X XXX # X## #### # #X ##", "#####X# ## X #####X X ## XX##X# # # XX # ##X#", "# ## X# ## # # # # #X# #XX## X## X ##", "# X###XX ## XX# X### ## ##X# X ### X# #X X#", "# X### X# X X# XX# #X# ## ### #XXX X#X##", "#### ## ### ##X## ## XX# X# XX# X###X# X #", "#X # # #X XX X ## #X ## ## # ##X## ###", "#XX# X #XX## # # #X# # # X X#XX ### ##X# X##XX#", "#X## X##X##X X ##XX X #X X#XX## X# ## ###XX#", "##X# ###XX# # X #XX #XX # ## # XX## X #", "# ### X #XXX##X#X# #X##X # #X####X ## XXX##", "#### X##X# # X #X ## X X# # # XXX# X#X#X XX#", "# ## X# XX## # #X XX#X X X # # X###X### # X#", "#### ##X # ##XX ## # XX# # #XX ##X ## #X# #", "# X ## # XX@## XXE # # X ## XX# #X#X#X# #X #", "# # #X XX XXX # X ##XX # ##XX #X #X X# ##X X #", "## X# # X # X###X X ## X ## X#X #X ##X ###", "# # # #X##### ###X ## X# # ###X# # X X ##", "#X #X X# X X#X ## ###X ## X ##X# ## X# ### #X#", "# ## ## #XX#XX X# # ### X ###X##X # X XX#", "### # XX###### X XXX#X X#X# # X X ##X X#", "#X# # # X X## X#X #X ##XXX# XX ## X#XX## ###", "#X#X ## X X X ### XX###### # ## XX X# X###X#", "## #X X #X # # X## XX X# # # XX# X X#XX# #", "##X##X# ## X# ### # ##X X # ## ##XXXX # XX#", "### XX###XX ## #X # #X ## #X X### X# XX##XX XX X#", "#XXX# X# ##XX# X# ## X #X #X XXX XX ##", "# #X## # # XX # X# #X# ### XX##X#X X# X#", "## ##X# #X #X X# ## ### # ### # ##XX #X #", "# # XX#X X### ## X# X #X## ### X###X #", "# ### # # X XX## #X###XX###X##X#X##X ### # X###", "## X ## # X#XX#XXX# ## ###X # #X# # X##XXXXX#", "### # XX## X# #X#X## # #X X# # X #### ##XX# #", "#X #X# # X ##X XXXX## ######X##X X#X ## XX###", "# # XX###X#X# X#XXX #X # XX X #XX ##X # ####", "#XX ###X # XX X X X X## XX##XX X X # # ##", "# # XXXXXX## X # ## X# X ## #X X# #", "#X## ##X # #XX #####XX ##X XX # # ## # #", "## X# ## X X# ##X X ##X# X XX##X## ## #XX #", "#### ### ## X XX X##X #### XX### #X###X #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int pills = 8;
    int pspeed = 27;
    int dspeed = 7;
    int door = 195;
    vector<string> lab = {"##################################################", "######X X XX# X # X# X# #X X #X ###X# X#", "# # ## #X X## # XX## # X## X##X##XX # X #", "# ###X##XX# ##X XXX # ### X XXX#X##XX #X###", "# # ##### # XX #X X# X# # #X ##XXX## # #", "##XX #XXX# XX X# X## X##X #XX## X #X###", "# XX# X ## # X XX#XX # XX ###X X# XX#X###X X#", "# # # X#X #X#######X#X#X # X # X #X ####X #", "## ## # #X ### #X #X# # X ###X#X XXX #X#", "## #XX ##X##X X## X#XX# ##X # XX # #XX XXX#", "# X X# X# X#XXX#X# # #X## # #", "#XXXX # X##X## X X ## # # X##### ####X X## X #", "# #X X X## X##X# ###X#X ##X # X X#", "## X# X X X#X##X X# X #X X#X# #####X #X# X #", "#X ### ### # X#XX X ### X# ##X## ##XXXX X## X##", "##X # X### ## #X #X# XX #X#XX#XX###X#X# #X# X#", "## X# ## X #XX##XX###XX#X ##XXX X #X # # # X######", "# XXXX # ## ## # XX#XX# # # # # # ## X#X ### ##", "# X#XX # #### X#X#X X# ##X XX # X XX#XX## #X # ##", "# X XXXXX#X ###X# #X# ## #X# #X# X# # ## # #", "## XX # X# X X###X X XX## # ## #X ## XXX#", "#X # ##X # ##X # ###XXXXXX #X# X # # ##X # #", "# # X # #E X X X ## ### X# # # # # # X #", "# X#### X XX X#### XX # # X ### X###X###### # #", "# XX### X# X# #X## ## #X### # ## X # X X# X#", "#X ##X #X # # ####X X # # #X ## X#X#X#XXXX ##", "# X## X X#X X ### ## XXX X X# ##X#X#X # #X #", "##X## X##X## # X # XX# XX X # X##XX # # XX#X ##", "# ###X## X X ### X# X X## # # X#XX# # X#", "### # # # X##X # X@# X X #X XX XX## XX XX# ##", "# # X X ###XX ##XX X#X X XX X## X#X ##", "# X XX####XX# # #X# X X# ##XX X ## #X ##X X##", "# # # #X ##X ## ##X # # X## X # ###X##", "# X# XX #X ###X# ## # #X X# ## ## # # ## ##", "# X#X# XXX #X #X X#XXX# ###XXX# X# # # X X#", "#X XXXXX ##X ### # X# # #X# X X X X# # # #X##", "# X#XXX XX X# #X# X#X# X## #XX ##XXX X ## XX##", "###X #X XX# #XXX X #X X#XX X#X# ### # X##", "## # #### ## # ## # X## XX# X# X # ##X#", "# # ##X# ## X X## XXX#X # # # XX ##X# X X#", "### X# ## #X#X##X#X### #X# X###X#X ##X# # XX# #", "# # ### ## X ##X#X# X X XX# X # X#XX ## # ##", "#X X ## XX #X ## X #### #X# X# #", "# XX### XX#X X XX XX X X X #X X###X#XXX X XX #", "### X #X# # # X ## #X# # X #X### X # X##", "## X## XXX # X # # # X #X#XX#X #X # X##", "## ## X XXXXX # # X## # ## X# XX#### X X##", "# ###XX# X ##### # X XX# X #X# #XX# # ####X XX#", "# X ## # X# X XX#### X # # X X ##X XX # ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int pills = 2;
    int pspeed = 54;
    int dspeed = 37;
    int door = 145;
    vector<string> lab = {"##################################################", "# X X# # XX# #X ## # # # #X XXX#XX #X # X #XX#", "# X##X X #XX X #X # @# X###X # X #X#", "# #X#X# ##XX X# # X ## # ##X X#X## ##XX# #", "# # ## ###XX X# X#X##X #### X E X## X# ## #X #", "#X ##X#### #X XX### X # #X # X # # #### ##", "##XX # X######XX XXX #####X#X# X#X # ##X # X X #", "#X # ## X#X# X XXX X ##### ####X# ## ### ## #", "## XX #XX## XX###X # ### #X # X # XX## #X ####", "#X X # X## ## # # # ## X # #X# #X# # # ### X #", "# #X #X ##XX###### #X X X ## ##X#X X ### #", "# ##X # # X# # # #X#X##X # X X# X #X ###", "# ##X # ##X #X# #XX # X####X# # XX #X #", "##X##X## X # ## XXX ### XX ### XX # #XX##", "# X# XX# X# # # # # # #X##XX # X#X##X # #", "##X#X #XXXX # X# #X X #XX# X# X XX XX ##X##", "# ## XX# #X XX# ##X # ## ## X # # X ## X ##", "# # ## ## # ## #X # X XX X###X #X###", "# # #X ##X X X #XX# XX#X # X### #X##X ### ###", "###X #X##X## X ###X #XX## ## ###X XXXX X####", "## # ### X X # X XX#X# X XX# #X XXX# #X#", "# XX #X##X#X X X # X # X## # X XX#XXX #", "#XX##XX ####X #X##XXXX X## #X ##X#X # # X #", "# # X# X#X X XX # XX#X# # X#X ### X XX X #", "###X##XX###XX ###X XX #X# # X#X #X #X## # #", "# ## ### ### XX ###XX X#XX X# X## X X X## #", "## #X X XX#XX###X X X#X XX ##X##XXX XX # #", "## #X X X# #XX X # X# #X ##XX# X X# X# #", "## # # X # ### # #X# ##X ###XX X #X#X## #", "##X# X# # # X #X#X X X X# ## # #X X # ## #", "###### # X # # ####XX# X## XX# # ##X# # ##", "#XX XX X##X#X X#X X # # # XX XX # X #X## X X #", "# ## ###X# X X X X #X # #X#X X X# #X##X #", "# #### # ### ### ## # # #XXX X ##X X # X# #", "# # # #### #XXX X#X # X ##X XX X## # XX# X# X#", "# #X#X #X## ##X# X ##X X XXXX## X ##", "# X## ### ##X## ## X #XX#X X #X X X XX X# X #", "# # #XXX X # # #X### XXX#X #X#X #X #XXX## ##", "#X###X #X XX X X ##X XX##XX# X### # #X###", "# #X### # X# X#X### ### ## XXXX ###X##X #", "#X#X #XX # X## ##X# #X# XX### X# X###X ##X X X#", "#XX#X###X ## # XXXX #X#X #X# # ##X ##X#", "# #X ####X #X# X ####XX ### X ## # # # #", "#X # # XX ##X#X X##XXXXX X X## X # # #", "### # #X# # ##X X # #XXX# # ##XX #XX##XX#X #X#", "##X ### # # ##X X X # # X# XX ##### X # # #", "# # X## X# X ## X#X# X X X# #X ## X#XX#X##", "#XX #X # XX X # ###X#X###X ##X # #X# X # ##", "##X X X XX#XX # # # X##X### #X# # # X# ###XXX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int pills = 2;
    int pspeed = 95;
    int dspeed = 12;
    int door = 179;
    vector<string> lab = {"##################################################", "#X## # # #X ## # X# X## X # # XX# #X ## ###", "# X #X ### ###X X#### XXX #XX##X#X XXX X ####X#", "# ##X#XX##XX# X ###X XX ####X### X X#X# ##XXX#", "# X # ##X X XX# X # #X X## X##X # XXX## XX X #", "##X X ##X#X X # X# ### ###X X #X#X## ### #", "# #X# #### #X# XX # XXXX X # ###XX #X # #", "# XX #X###X#X##X X# XX # #X# X # X ## XX #", "#X# ###### #X # # X# X# # ## #X#X#X# X#XX # #", "# XXX # # X ###X# #### # X #X # # #", "# ####X X XX # X XXX # #X X ##XX ## X XXX#", "#### # # # ##X#X## # X # ##X ### X##X# #X#", "#X # # ###XXX #X #XX ### XX X X XX X X ##", "##X#### ### ###X #X## X # #X## #X# #X# #", "#X ### XX X#X X#X X XX## X X# #X # X X X# #", "# # X # #X# # # XX X XX X X## X XXX# X# #", "# # # # #X ### XX ## ### X#X#### #XX X ##", "# X X #X ##XX X # #X ## #XX #X # ## ## X X####", "#X # XXXX# X#### X# # # ##XXXXX ## #X # X#", "# X#X X ##X X##XXX X## X#X## # X#X # # X #X###", "# ## X##XX X# # XX#X#X###X# # XX X##X X# ###", "#XX #XX### #X##X#X # ##X## ### X##XX #X ## ##", "# ### #X# X# ## X X#X X# # X# X#X ## X## ##", "#XX##X X# X X XXX X # ## X# X # # # X ####", "### ### XXX#X # ## #X# X X X## # # # X### #", "#XX #X# ## # #X ### # # ##XX##X##X #XXX### X X ##", "#XXX##XX##X## X #XX # #XX#X#X#X # X XXX # #X #", "### # XX X ##X ## #X ##X # # X# X # #### X##", "#XX# X####XX###X#X #XX # X# X X ## ## #X #", "# # XX #XXX### X#X# XX X#X##XX @X X # #X X X #", "#### # ## X # #X X # XX#X X #XX X#", "### # X# # XX###X # X # X #XXX# X# #### ## ##", "#X ## X ## # #X X X#X## X#XX # # #X X##X#", "# # XX#XX XX###XX # X ### X# ##X # ### ## ###", "# ##X XXX # XX # ### # X ###X###X# XXXX#X # #XX#", "#X#XX# #X X X#X# ##X #XX##X X EX ##XX## X#XX #", "#X # # #X # # X #X # X # # X X###### ## ##", "#XX #X #XX####XX #X#X## #X##### ### X #X #", "#XXX X X## # #X XX## ## X #X# XXX X## X##", "#X# X # XXX # XX# # #X# # # ## ### # # ##X##", "# # # ##XX##X #X X #### # X##X X#X# #XX #X ##", "#XX### #####X##X #X# X## ### # ##XXX ##X ##X## #", "# XX#X# X X#X# X#X X### # X ## X #### X##", "#X# X XX####X#XX###XX # # ## # # # #X# ####X# #", "# #### X X # X#XX#XX X ### XX## #XX# X#", "# #X X## #X## # XX# ##XX###X X X X## # #", "# X# # XX X## X XXXX X## # # # ##X ## # ##", "# X# # X## ## #X X#X ### X#XXXX XX ## #", "# ## XX X###X#XX #### X####X#X##X#X X X# XX##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int pills = 9;
    int pspeed = 84;
    int dspeed = 35;
    int door = 76;
    vector<string> lab = {"##################################################", "# # # #X ##X #X X# # X# ## # # ##XX X # # X ##", "#### #### # X#XX# # ### #X ##XXX ## X#XX# #", "##X XXXX X###X# #X## X## ## ### # X#####X # #", "##X#X# X XXX X#X# #X### X#X # X X# #X ######", "##XXX#X## XX# # X # XX## #X # XX# # X# X #X#X#", "## X# X#XXX X# X # # ###X# X# ## XXX# XX ##X###", "# ## # X# ##X X## # ## # ## #X X X#X## #", "#X ## # ## # # # XXX# X# # XX ## X# X # ##", "## #X#XX X## ### XX#X XX XX### # X # # ### X #", "#X X# #X ##X# X X XX #X# X# X#X # X X#XXX #", "#### X# ##@X X X# X# X# # #XXX #XX# #X#X#", "# X## X## XE#X#X # # X X X#X## #X XXXX#X #", "### X # ###X##X# X # # XX # #X X##X##X X# ##", "# ## ### X X#X#XX X ##X # #X# XX #X #### #", "# ##X# X#X X#XX X# X X X # # # # # X ##", "## # X# ##X##X# XXX XXX X#X# ##X ## X # ## #", "# # #X#X X XX X# # X # X # ###XX XXXX# #", "#### #X# # X #X X# # ## X # ## # # XX#XX#XXX# #", "# # X XX### #X## X##XX #X### XX #X ## #X#X##", "# # #X#X X # #X #X#XX#X ###XXX# X# ##", "## X# X # X XX#X# X##X# XX # XX ###XX#X###", "## X ##X ##X # #X X X # # XX #XX# ##X X#", "##### # ### X# ###XX# # X# #XX#XXXX##X #", "##X X # ## # ## X X X ## X# X ###### ##", "# X#XX# X ### #X # X X ##XX #X# #### X# ###", "#X X##X # X ### #X# # ####X X# # ## X#X#XX#", "# ##X X X###### X# # X###X # XXXX # # X# ##", "##### ## X ## X## #X# # #X## # X## # # X X#X#", "# # X # X# # X # # #####X ##X# ## ## XXX #", "## X # X XX ## ###X # # X##X# XX# ## X X#", "# X ##XX ## X # XX XXXXXX###X##XX X X # #", "# ###X #X # XX # ######X# X XX #X X X # ## # #", "# XXX # XXXX ### XX## X### ## X# #XXXX ##X X X#", "# ## #X X #### ### XX# # ## X XX## XXX ###", "#X ##X###X ## X## XX # #XX# ###X# ## X #", "#X X# ##X# X #X XX X ## X#XX #X#X ### ##", "# ### ## X# # #XXX# X #X ## #XXX#X#XX #", "### # ## X # #X # # #XX # ##XX#### ## X X##XX###", "## X## X X X#XX# ### X##X # XX ### ##### # ##", "####X#X##X XX# XX## X# #X#X## X ####X# ## ##", "### X# X # X#X XX # #### X## ########X XX ##", "#X # # # X# X# XXX # # ##XX#X# #XXXX#X X X ##", "#X##X X ###XX # ## XX#X### X## XX ## X## X #", "# XXX #XX #### #XX#X#X # XX #X# X ## XXX# X#", "## X ## ####X# # #X X## # X# #### # #X#", "# #X# ## # X# #X # # XX ## ###X X## # # #", "# X#X ## X # #XX # X# XX# # X## XX X # #", "# ###X#X### X X XX# ##XX ##XXX #X ## #X ### X###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int pills = 3;
    int pspeed = 31;
    int dspeed = 6;
    int door = 86;
    vector<string> lab = {"##################################################", "# ### XX X# X# # X# #### X ## X# ##X X# ##X #XX#", "# #X ## ### X### #X X#X ## X XX X # XX #X#X#", "#X #XX# ## # ##XX#X X### XX# # # ## X#X #X#", "#XX# ### ## X# # #XX## X # X #XX#X# #####", "##X# XX # X #X #X# XX#X X # # ## XXXX #", "# XX #### X ##XX ## # X # X #X# X##X#####", "## # X## XX#X # XX#XX#X# # #X ### # XX##X ##", "#X# ###X X#X X XX X XX#XX X# XX # ##X XX #", "# XX#X ##X # X####X #XXXXX#XXX#X## # ### ## XX#", "## X X #### ## # X###XX ## # X X X###X ## ##", "### #X#X## XX # #X ##X #X# XXX ## #X XXX X##", "#XXXXX X XX #X # X#XX# #X X #X## XXX## # # X#", "##X##X#X X X XXX ## # ## #### # X#X#XX X #X# #", "##XX XX# #X## X# # X # # XX## X XX#X X # XX#", "## XX XX### X XXX# ## # X #X## #XX## # ##", "## X #X # X ##X###X X # ## # #X#X#XX ## #X##X#", "#X# #X ## #X# ### ## XX# XX# X#X X## # X##", "###X###X#X X## ##X X# # X X##X# ##X X # #", "##XXXXXX X X# # #X XX ## ##X# # # ## # ## X#X##", "#### X # X#### # # # XX XX X###X#X X # #", "###X # ##XX# X ## X##X#X #### X X X # X#", "### ## # # ## ##XX#X## # X#XX##### X ######X#", "# ## # #X #X## #X # #X#XXX# ###X X #XX#X X##", "# X XXX X#X# ##X XX# ###XX## ## X # #X ## ## #", "# # ##X X X# # # XX##X # # # X###X X #X#", "#X#X#X X## XXXXX#X# X##X### # XX # # ##XX #X##", "## XX#X ### #XXX # X X XXXX X# ## ##### ##X #", "## # X#### ## ##XXX# ## # X### # # X#", "# X X#X # XX ## XX ### XX# ##XX## X ## ### # ##", "### X # #XX # # #X##XX#X## XX X X#####XX#", "# # ##X#XXX # #X # # X# #X # X## ### ## X##", "#### #XX # # X ####X# ## ## X#X XX X## X # ##", "##X# ##X#X# X # # X#XX###X# XX# ### ###XX##### #", "## X#XX #X ## ##X## XXXXX # ### X # X# XX ## X#", "#X ###X X X X #X ####XX# #X#X X # X #", "###X### ##X XXX# X # ##XX### XX# X#XXX## # #", "# XX# X #X X #XX##X#XX X# # #### XX# XXX# X# #", "#XX XX## X # X X#X # X XX# X# #### X## #XX#X#", "##X X#X #### # #X# ###X #XX#XX# #X## # #", "## # X XXX ## XX ## X## X # #X XX XX ##X## #", "# ### X# #X ## X#X#X XE XX###X X# X X##", "## # X # XX#X# # # X# X # X #X #XX# #X#X#XXX# #", "# X# # X X# ##X # # X X #XXXX# ## ##", "#####X #### # #####X X#XX # ## X X X#X ## # X #", "#X # ##X# ## XX X@X## #X XX XX# # ###X ##", "##XXX X##XX# X X# X X#X ##X # X##X # ##X X# #", "# X# ##X # ### X X X X#X X#X #X#X X#", "## ### # X ## #### ## XX XX##X X#X##X# # # # X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int pills = 3;
    int pspeed = 20;
    int dspeed = 10;
    int door = 175;
    vector<string> lab = {"##################################################", "## X## ###XX #X # ###X#X XX# ## X#X# X # ##", "##X#X## X # #X##XXXXXX## #XXX # # XXX# #", "## #XXX# ##X X #X###XXXX# XX ## # X #X X #", "## ### #XX# # #X# XX# # X#X# X# X# ###", "# X #X X X### X # ###X#XX ### XX#XXX X ###", "###X # X ### # # # #X# ## X#X# # XX## XXX X #", "## #X # XX X ##X# XX#X# XX##X#XX # #XX #X# #", "# X#X# ### X#X# # X# # X# X X X# X#X # X #", "### # # #X# # X X# # # XXX# ### #X X #X# #", "# X # X XX X X #X X X## XX# X #X#X##X# ##", "# #X# X X# ##XXX # X X XX# # X# # #X X X X ##", "# X X XX X # X X # # X X## #XXX ### X XX#", "#XX #XX XX#X X #X###X X X#X ## ### #X# # ##", "#####X ##X X XX ## ##X# X#X# XX####X #X# ## #", "# X# X ##### # ## X#X ##X##X #X# ### #XX### #X#", "## ## X X XX# #X X #XX# # # # # #X#", "# X#XX##XXX###X ## # # # ##XX ## ##X ## # ## ##", "#X# #X##X # ## # X X ##X## XX ## X## #X # # #", "#X## # XX# X #XX # X X### ### ## ##XX##X ## #", "#X # # X##XX # #X##X# ####X### X X## X #X #", "# X# ##X#X #X# ##X#X# # #X#X X# #X##X# # X#X#", "# #### X XXX## # #X# # # X XXX #X # #", "# # # #E# X # ## XX##X#XX#XX# # ###XXXXX###", "#XX## XX# ##XX# #### X # ##X# #X X###XX#XXX##", "# X # X##X## # ## # # # # ### #XX## #X#X# #", "# XXX#X# X ## XX#XX XXX #XXX### X # X## ##", "#X#X #XX# # ## XX# ##### # ###X #X####", "# # XX##XX# X #X# X#XXXXX# ###X# ## # X ##", "## ## X # XXXX ### XXXXX# #X #XX ##X X## #X#", "## X#X# X # #X#X # X X# X ##X###", "## #X####X XXX# XXX##XX # X## ## X## XX##", "# ## ##X # #@# X#X ## XX # # ### ##X #XX#X #", "##XX #XX # ## # X# X #X ##X# # X # ##", "# # X## ##X X# X## # # ## X# X X XX###", "### # # X ## XX##X #X #X X###X X# #X#", "## # # ### # X# ### # ######X##X # # #X#X ##", "###X ### # # XX ####X####X ## #X X # ####X ##", "## # # #X # ### #X# # XX XXX#XX##X X###X##", "# #X## # ## X #X #X#X # ### ## # ## ### ###", "#X ## #XX #XX X## XX # X# XX## X # X# ##X#", "###XXX# X X# XXX # ###XX X## #XXXX# X## XX X#", "###XXX## X#X ##XX ##X X XX#X # # ##XX# # # #", "#X##X#X# X##X X # #X# XX# XXX#X # XX# ## #X# #X#", "##X XX X# X #####X# X # X# X# X #X # ##", "## X ### X#### # X #X X # ## X ### # #", "### #X# # # #XXXXX ##X### # ##X## # #X# #X ##", "# X # X # ##XX##XX #X# X# ##X#XX ## ## #", "## # X# ### # # #XX X ######X ### X##### ###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int pills = 4;
    int pspeed = 85;
    int dspeed = 2;
    int door = 192;
    vector<string> lab = {"##################################################", "# # # # XX #X#X#XXX# ## #X # # #X # # #", "#X# X X X##X#X#XXX## X X ## X# X#X # XX X##", "#X #X# # X X X ###XXX XX # #X XX# #X # X##", "### #### ## X# ## # X#X X X# X#### #XXX #", "#X# # X X # X # ## #### XX# XX# # ## X # #", "###X ###X # # ## X X## # ### ##X# XX### # X#", "# ##### #XX X XXX#X ##X## # X##X# X ## # ###", "## # XX X #### ###X# X # # #X# #X#X#X# # # #", "#XX# # X## XX# # X##X#X# #XXX X #X ####X#", "#X X##X #X X X# X X# # X XX## # ##", "###X# XX X X### #X# # # ## X # X### X## X X#", "### #### ## # # #X E X# #X# X## #X ###X #", "# # X # ##XX#X#X #X# #XX###### ##X X# # #X#", "## ## # ## X### ##XX## X# # ## ## # X# X#", "# # X# X X # X ## ### X X## XXX##X X# ## X #", "# #XX#XX# X## # XX X # X# X##X#XX# X # ##", "#X # # ## # # X#### #X # X#X# XXX X # X#", "##X # #X## # ## ## ##X XXX ## X#X#### XX #", "## X ### XXXX X#X ## X##X X# ## ## X### ## ##", "# #X X # ##X ## # X###XX#XX#### #@### #X##", "# ## X X X X#X X# #X # ##X # # # X # #", "# X #X ## X# # X # # XX## # #X ##X### # #", "##X X ### # # X X#X#X XXXX # X# # ##XX#X ##", "### X X#X XX # X# #X ## XXX # X X # X #XX# ###", "###X X # X # XX## XX## XX#### #X# ###XXX X# ##", "## ### #X ##X# X# X X# ### X#X ## # # # XX#", "# X## XX## # X # ## #X## ###XXX## X ## ### #", "## #X ## #XXX## X # X# X X# # X X ##", "### ## # X ###X##XX ## #X X#X XXX XX# #XX ###", "# # XX XX # X# # # X X#X #####XXX## ### # ##", "## # X## X#X### X # X# ## X XX##XX# # #X####X###", "#X X# X## X## # XX# X X X# ## XX X # #", "# # X#XX XXXXX X##X XX XX## XX## #X# ## ##", "# X X # X ##X#X # # # X# X####X# #### #XX#X#", "##X # X #X## # X # ##X## # XXX# X#### X XXX #", "#X #XXX #XX #X X#X X#X# #X# X X XX# ####X####", "##X# ## X### ###X #X#X # # X# X# #XXX#", "# # X##X# XX##X X# X#X ##X #X X###X XX# #XX# #", "##X X# # X#X #X### # #XX #X # #X#X#X # ##", "###X##XX X#### X#X XX##### X# # #X##X# #X## # #", "### # # # #X####X #X# X #XX###X## X XXX# #XX# #", "##X# # # X X X# ##X#X# #X## ##X#X X # # #X#", "# ## # # X ## # X#X### # #XX X ##X ## #X #", "# # ## ###X###X ## X###X#X#X # X X# ## #", "# #XX#X# # # XX XX####X # XX # X #X X X #", "# ## XXX X#X#X##X # XX # #XX ##XXX XX # #### X#", "# ##X ### #X X # # X##XX# ## X##### X ###X###", "##XX## #XX## #X#X## # ### X#X##X## ### #X##X# ###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int pills = 3;
    int pspeed = 3;
    int dspeed = 2;
    int door = 182;
    vector<string> lab = {"##################################################", "#### # ### X# # ## ##X X #### ### X#X # ####", "##X ##X X## XXX# X X #X # X##XXX#X# X##XX# ##", "#X###X X#X##X#X# X# # ###XXXXX XXX X X# X# # #", "# XX X# ## # XXX#X #X #X #X XX# X X ###", "### XX# # #XX# # #XX ###X ## X X ## #", "#X#X# ## #XX # XXX # X XXX#XX##X X #X## #", "# X#### ##XXX# ### X##X X # XX#X#X# X# #", "# XX # # X##X X X E # ##X X # X ##X#X#X##X#", "### ## X ## #XX## ##X#X### X# # #X#XX XX#X#", "#X #X###### X##X#X#X XX#X# ## X## #X # # ### X#", "# ###XXX# # #X## # ### X #XX# #X#X #X # X##", "# # X X#XX ## X X # #X# # #X## #X##### #", "# #### X # X # #X# #X X #### # # X# #X# XX#", "#X # #X# #XX# # ###XX## X# ## #X# # XXX # X###", "## # X X##X #X## # X XX#X# ### X# #XXX# #", "# XX#X ##X # XX #X #X # ### X# ###X#X# # #", "##X #X## ### # X X##### #X #X X# ##X ## #", "#X#X XX# ### # # # #XX X ###XX#### X X# ##", "#####X#XX## ###X####X##X# ###### X## #X#", "## X###X# #X ##X X #XXX## #X # X ###X # ##", "## #XX #X#XX X ## #XXX ### # ## X# X ##X# ##", "## X##X## # # # X## X #X # ##X ## X X##", "## X# # X # #XX# # # #X ## #X X # #XX##", "# X## XX# #X #XX# # XXXX#XX#### # X##XX@X #", "### # X # #X XX X X ###X X## X# X X# #XX#", "## X# XXX#X ##XXX##X X###X XX# X # X# XX#", "# #XXX# XX#X# # # X# #X# X # # X #X ### #X#X#", "#X# # #X## ###X ##X X# #X XX##X XXX## #XX#", "###X # X # #X X#X# #X # X XX# # # ### #", "# #X###XX XXX #X X X# XXXX ##X X# X####X#X X #", "###X ####XX ### #### #X XXXXX## X#X#X### ## XX#", "#X####XX ## # ## # #X# #XX # X X # X # # #", "#X# # #X XX #X # #X## # X # #X ## #XX ## #", "# # # # # X #X# # ### X# ##X # # # # X X#X#", "### XX####X # # ## XX X## X #X#XX ##X#", "# X X # # XX # XXXXX#X## X X# ##X## X### #", "# X # XX##X # X X ########X ##XX ###X#X#X##", "#X X###### X# # # X# # ##X XX## ##X##XX #", "# ##X #XX XX ## #X#X ## X XX## X #X###X# ##", "# ## X# X XXX X#X# X# # # # ## # X##X# # #", "#X ####X # ## #X # #X # X# #X ## # #XX#", "# #X #X##XX X # # #X X# XX #X X# XX# #X # X##", "# ##### # XX ## X# X# #X X### # ##XX## X # #", "#XX # # X XX X # X # #XXX##XX X X#####", "## XXXXX# X#XX# X ## X## #X #X ##X XX##", "###X # # ####X X X# XXX X## X #X#XX####", "# # ### X ##X# X # X #XXX X #XX### XX# ## #", "## ####X#XX# # # # # X #X#X## X ##X## # X #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int pills = 1;
    int pspeed = 11;
    int dspeed = 11;
    int door = 155;
    vector<string> lab = {"##################################################", "##X# # #X##X##X X# ##X# ##X# # # ## #X### #", "######## # X##X # #X ##X # #X ## #X #X###", "# # X #X X#X XX # X #X # # X ##X## # X XX##", "#X X### #X# # # X XXX XX #### ## X X ##XX###", "# # #X XX ##X##X# # XX #X# X## XX X X## #X#", "# # ####X # X #X#X# # #X #XXX # # XXX ## X#", "## ###XXX##XXX ## #X # ##X XX #X# # X # X XX# #", "# # ### # # X# XX#X# X #X #X X X#X# ##", "## X # XX #XX #XX####X#X X## X##X # #### # ##", "### XXXX XX ##X#X## # # X# X ## # X ## X## ##XX#", "####XX XX# X X # #X # XX X ## X# XX # # #X#", "# #X## ### ##X#X #X # X#X # X XX #X## #X## #X#", "#X####### X# X#X# # #X #X ###X # # #X# X#", "#XX X ## # X X # X XXX# #X ##X# #X ##XX#XX## #", "#X # X # # X### #X# #XX# ##X XX XEXXX #", "#X## # # X X# # XXX#X## X# XXX # X# XXXX##", "###X ###X ### ## X XX# ## # XX## X XX ##", "# #### # XX#X ###X##X# ## XX X### XX # # #", "#X## ##X # X#X# ### XX ## X ## X#XXX#X#XXX## # ##", "#X X## #### XX##XX## # ##X XX ## #X#X#@ # #", "# # # X X XX # XX #X###X#X# XX #X###XX XX# #", "##XX# #### # ### # ### X## ## XX# #X# X##", "## ## ##X#XXXX##X X ####XX # ##XX X### #X##X##", "##X## #X # ## X X ##XX# X #X X# # X##XXX# #X ##", "## XXX #X X # X####### # XX## # ##XXXXXX #", "##X X ## #X X ### XXX# X ## #X# #X # # X# X##", "#X #X# X# #X # #X #X# #X # #X X## X#", "# # # #X## # # #X# # ####X##X ## #X #X# #", "## XX##X #XX XXXX #X###X### #X##X# X## XX # ## #", "## # #X# X # #X X# ##X#X# #X# # X ## # ###", "# X # X# ##X####### XX# #X X# #XXXX# X # #", "### #X# X X # # #X X# #XX###X X # ## XX#XX #", "# ### XX## X#X#X #X### ### X # ## # X X X # #XX#", "#X### #X ### #XXX ##X# # #XX#X X# XX# # #", "#XX##X ##X#X## # X X#### ###XX# ## ###X # X XX#", "#X #X#X ###XX # # # X# X #X ##X #X X###X # #", "# X XX X## #X#X ## X#XX# ### X # # # ### ## X #", "## X X ###X#X#X## X X##X # X X ## XX ##", "### # X#X #XX # # X ##X XX # ###X ##X#XX #X#", "# # X # X# # # X# ## X ### #XX #X# # ##", "###X X XX #XXXX #X X#X # X ## XXX # #X X#", "## XX##### # # ### XX# X# X# X# XX### XX##", "## # #X ##X# # X#X #XX# XX #X# XX##", "## # #X# ##X##X X# X ####X##X X# ###X #", "# X # ###X XX X#####X ####X ###X X XXXX XX#", "#####XX# ##X X X XX ## X# #X## ## #X#X# # XX ####", "# # # XX ##X X XX ## XX # # # XX###XX #", "#XX##X X#XXX#XX##X## X## ## ##X# ##X# # # XX# ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int pills = 8;
    int pspeed = 51;
    int dspeed = 21;
    int door = 81;
    vector<string> lab = {"##################################################", "####### ## # ##X#X X## X # ####X ##X X X# XX#", "#X# X ## X X #XXXX #X # ## # X XX##X#X # #", "# # X X## ### # #X##X# ### # ## X#XX#X X###", "# #X# X # # #X XX X X#X#X XX XXX# #XX####X #", "## # # #X#X#X # XX # X X## X# # X #X### #X #", "# #XXX## X# X X###XX## XX ## # #X X #X# #XXX ##", "# X ## X#X X# # X ##X X X##X # # ##", "###XX#X# X# X## # X #### # X # X ####", "#X ### #XX## X ####X ## # # ##X#X# ### X ##", "## XX# #X#X X X ## # # ## ### ### ## XXX #X#X #", "# # ### X #X#X ## X X # XX X ##X#", "#X###X#X X X ##X # X#X#### X#X X ## XXX### #", "#X## ##### X # X ##X XXX X## X X# X#XX X##X X#", "##X# # XX #XX #X # X XX # ##X ###X ##X# # X#", "# XXX#X#X##X # ##X # #X # ##X # X # ###X #X ##", "##X# X XX ##XX# XX #X####X ##X ####X X ###X ##", "#XX # ##X# XX X#####X# ####XX #XX#X#XX ###", "#X # # X # XX##X#X X # #X#X #XX #X X X# ##", "# # XX### # X X ## # #X X ### #X X#X #", "# X# ###XX# X # X#X #X###XX#X## #XX# XXXX ##", "##X# XX # #X X ## ## # X# X# ### X#X XX # #", "### X#X# X # #XXX#X #XX# ## # ####X # # X #", "### #X### XX #X# #X X X #X XXX#### X ##", "#### ## # X # # X# ##XX # X # ## ##X #X##", "# X # X# ## X## #X#XX X##X ## # ## #X #XXX#", "### #X ## ##X# ## X XX XXX # ##XX# #X X#X ## #", "## #X#### # X## ##X##X #X X#X # # # X # XX #", "# ## X X#XX#### #X ### #XXXX#X#XX# # # # ###", "##X X # ## XXX X# # # #XX # ### X## ## #X#", "# # X ####XXX# XX## # # # #X #X X ## #", "# XXXX###X##X# #X # X XXX X # #X XX### XX#X###", "#XX # # X # #X#### X X XXX X# # X# XX # #X#X#", "# X #X XX XX XX# X#### # X # # # X ###", "# X ##X# #X #X## ##X X X X# ##### # #XX X X#X ##", "### #X #XX X###XXXXXX #### XX#X XX ## #", "# # ## # ##X ##X X### ##XX X X@ X # ## ###", "### X# ## # # ## # #XX # # ## X# X#X#X# X##", "## # X X # # #XXX# XX## #X #X#XX ## ##", "# # # #X X X# X X### # # #X # # EXX #X#X ##", "#X XX# X XX#X##X # X#### # X# X ## X #", "## XX# XXX# ####X# #X## #X##### # #X# #X## ### #", "# #X X# #X#X## X# X### ## XXX ##XX # XX### #", "# # X ## ###XX# ## # # ###X### X##", "# X XX#X ##X#X# #XX # # ## # X #XX # ## #", "###X ### # ##XXX ##X#XX #XX # XXX## #X X #", "#######X ###X#X X# ###X ##X###XX #X # XXX#X X #", "###X#X ## #XX## XX #X# #X # X#X# X #X X #", "# ####X# # X## X#X # XX X # # ## #### # ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int pills = 3;
    int pspeed = 24;
    int dspeed = 3;
    int door = 135;
    vector<string> lab = {"##################################################", "####X# X XXXXX#XX # # # X##X ##X#X X #", "##X XX# X X ## #X # X # XX## ###X # # #", "# X## X # # #X#X# X X X# X X X XX X X X #", "## X#X#X #X#X X###X####X# # ## #X # # # # ####X#", "#X X## ## # X X## #X # ### # X ## #X# X#", "###X X # ##X X X #XX XX## ## X# XX# #X## ##", "# #X ## # ## X#XX# # #X# X# #X # #X#", "# #X # ##XXX ### X#X## #XXX# X X XX X# ##", "# #X#X# #XX### # #X #XXXX #X # # # #", "# ###X # # # #X# X# #X### XXX#X#X####X# X #X# #", "# ###X# # ##X #X# #X ###X##XX#XX #X X# # # # #", "## X ## # X# # # # # X XX## #X# ## ## X#X#", "#X #XXX ## # # ## #XX ##X XX# X#X#", "#X X #####X#X X ## XX X# X#X## ### # X #", "#X ###X# ## #####X XX #### #X#### #X XX###", "#X##X #X # # # # X ## # XXXXXXX XX XXX X ### #", "# X#XX#X X## # #X## X XX#X##X# # # X# # ##", "##X### ## XX### ## X## X #### #X XX EX X# ## ##", "# # ## X### X # X X ### ## X XX # # # ####", "### # #XX #X ### ##X #X #X X# ## X#X # ##", "#X### X #X # # #X X # X ## # ##X ##### # ##", "##X##X #XX## X#X# # XX# # X#### X #### X #", "#X X# XX ###X#X # # #X# ## XX ## ##XX # ##", "# X# # # #X####### X#### # ###XX# X X# X# #", "####X#X X #X###XXX ##X# X# X# X #X X ## #", "# # X # ## #X X# ## XX ### #### ##X# # X#", "#### #X# X#XX##X## X# X # X XXX # ## # # XX#", "# X## XX## # #XXX# ### X##XX### # X ##X X # #", "#X##XX X##X# # ##X### X X###X ########### #X##", "# #X # X# ##XX X## #XX# #XX #X# ### ### X #", "# X#XX ## X## X #X ##X### X# XX @ X#XX #", "# ###X#XX ###X#X XX## X## #X #### #X X# #X X#", "### # X X## X#X## X## # #X XX # X ## ### #", "# #X#### # ## XX X#######X X#XX # #X# ## X #", "###X #### X# #X# XXXXX ## ##XX## # X ### # XX #", "## ##XXX# X#XXX# X XX X # ##X#X X #X# X #", "# #XX XX ## X X X##X# # X# ## ##X X# ## X #", "#XX# #X ###X# ### ##XX# X# ## XX ###X X# #", "# XX# X# ##X # XX# # # XX X X# ## ##X#", "#X## #X # X ## # # X#X #X## #### # # # ##X ## #", "#X ###X#X# XXX X#X ###XXXX# X# ##X # #####X# #X#", "# ##X X ##### X # #X #X ### # ## X# # #X #", "##X X #X X ##X ### XX#XX #XX # # ## X XX XXX#X#", "#X# X #X ##XX #X ## # ##XX # # # X# ## # X#", "## X X # # XX# ## ### XX # #### X ## #X XX##X#", "#X ##X # # #X#XX# XX XX# X# X X# X#X# X## #", "#XX#X # # # ## ## X#X #X# # X X ##X##", "# # #X X# ### X##X## #X ####X ##X##X###XX# #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
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
    int pills = 5;
    int pspeed = 48;
    int dspeed = 4;
    int door = 187;
    vector<string> lab = {"##################################################", "# #XX # X# X ## ### ##X#X## # #XX# # # ## ##", "# X# #XX #XXX# XXXX###X X## XXX### # ## ###XX#", "## #X X #X###XX###XX X # # X X###X##X # #X#", "### XX### #X ### X X# # #XXXX X X ##XX# # #", "### # XX X # #XX# ####X # ###X###XX####X #X X#X#", "#XX X ## # # X X# ## #XXX#X X # #X # XX ## ###", "##X#X## #X ### #X # ### X X# X##X#XXX ## #", "# ##X #XX X X##X# X# ### X ### ## # # X X #X #", "## ##XX # X ##X##X # # XX XX# ## ## X## #", "### X# ##X##X # #X X# # #XX ## #X # #X## #", "#####X# # #X ### #X X XX# # X X X #X #XX # #", "# X XX######X X#X ## X# XXEX X# # #X#X X#", "#X X ## XX##XX # ##X #X # ##XX# XX# X#X#", "### X#X ## X####XX XX###X X# X## X X #", "# ##X # #X #X # # X X # #X X##XX###XXX # X #X#", "# XX #XX ## # ##XXXX #X X## ## ## ## X X# #", "#XX##XXXX### ### ## # # X # ## #X X #X X# X #", "#X XXXX# # # X X ###X # #XXX # X X#X XX#", "# # X #X##X X## X####XX#X X #X # #", "# X #XX # #X X ##XX ## # #X# X ###X###X #", "# # # X X#X X ## #XX ##### X#XX X#X X #X#", "# X# X # XXXX ##X## ## # XX# ### # X X##", "# # X##X# ## ### ##X # XX# # ## XXX#X#### #", "# ### #X## XX## # X#X X# X##X# ##X## # X X#", "#X X# X ## X #X ### ### #X #X # # X#X XXX#", "### # ## X# #X X XX##X # #X## X X #X#X ## X#", "### X # #X #X #X X# #####XX## XX #### X #X#", "## X X # XXX#X# # # ## # # ## XX#XX ###XXXX#", "# ### X##XX#X#X#X####### # # X#X #X ### X ##", "#### X## X### XXXX ## #X# X##X# #X XXX # X X#", "# X###X ####X # X##X #XX X X # #X # X X #XX#", "##X# X XX #X # #X X# X#### X # ##X# XX# ##", "# # ##X##XX X#X## #### ###XX X # # ###X ##X#", "#X ##X### XX X ### XX ## # X##XX####X # XX X#", "# #X# X #X # X#X # ## ###X##XX#X####X ##XX## ##", "## X # #X XX X # # X#X X X#X#X #XXX XX#X # XXX##", "# #X##XXX## # ###X## # X X # X #XX X ## #X##", "## X# # X X# # XXX # X# # XX X# #### # XX###", "# # # X# # X# #### XX#X # #@#XX X #XX ###X ##", "#X # ##X X# ## X X# # X### # ## X#X ### #", "#### XXX X X # # #XX# #X # X X ##### X # # # #", "#X X X ## #X#XX# #XX# X # X## # #X #X##X# X #", "## X X # ### #X # # X##XX# XX ###### # # XX#", "### # XXX# # X XX X # # # X X #X # #X #X## # #", "##X##XX# # # X X## # # ## X XX #X X##X XX## #", "##X###XX#X ### # X# X ##XX # # # X#XX #X#", "# #X##XX ## X #### ## XX # X XX# X X X# # ##", "# X## #X#X#X XX ##X #X #X### ### #XXXX ###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int pills = 7;
    int pspeed = 28;
    int dspeed = 1;
    int door = 62;
    vector<string> lab = {"##################################################", "# X #X X##### X X# # X#### #XX XX X X# X## #", "#XX X### X ##### XX#X #XX###X #XX#X #X#X #X # #", "#X XXXX# XX #X #X X#XX#X# # # ###X##X# X# # #", "#X ##X # # XX # X#X X # X#X## X X ## X #", "## XX#X #XX X # X X XX# ##X ## # ## #", "#X# #XX# # #X # #X# ##XXX# #XX ## # XX##X ##XXX #", "#XX X XXX ### X ## X###X## XX # XX## X X #", "## X X# ##X #X #X ##X X## X XX ### # # X#", "#XX XX## XX## XXX # ## X #X##X#### ##### #### #", "# # #X# #X #X XXXXX## #X ##X X# # X###", "#X # XX # X #XX#X ## # #X # XX XX ## XX ###", "# # XX XX XX X X #X X#X#XX## ### #X # X#XX X # #", "# #### XX# #XX # X## X# X# XX XXX# # XXXX##", "# X XX # XX X # # # #X#X # XX X # #", "# X X X # ## ##X### ## X X####X## #X#XXXX#", "# # # ## #XX XX #X#XX ## XXX # # XX#X## # #", "##X#X##XX # X# #X# X##X# ## ## ## #X X X# # #", "#X ## # X## # # X# XX X#X## X # X###", "# #X #X# X## X# # ### X### ##X X###", "# #X X# # # #X #X# X### # # X X## X#X#####", "# ## # X##X# #X##X#X## #XX ## # # XXX #X#####", "### # #X ##X XX#XX XXX X # X## X #XXX#X#XX# X#", "# ##XXX X # X #X### X X X # X###X#XX ###", "##X XX # X XX X# X##X #X# XXXXX#X #X # #", "#XX #X# # XX X # ###X X X# # X##XX## X #", "#X ## # # #X###X##X X ## ## #X X#X# X #", "# #X ##X# # # XX ##X X X # ## #X ## X # XX ##", "###X #X # ##X# X# X# X## # # XX X X ##X#", "#X X##X ## ## # X ###XX X #X# ## ###XXX#", "#X#X##XXX#X### X # XX X#XX# ####X XX#X ## # #", "#XX#X## #XX # ##X# X##X# XXX X#X # XX # #X#", "## XX# ###X# ##X# # X X # X X X# XX X#X##X#", "#X X ##XX##XX##X # XE# ### X X#X ## X #", "# ## # ##X#X #X X#X ## #X ## X X # #X ##", "## ### X X## X# XX##X# #X# # # X X XX XX ##", "# X XX## #XX X X## X# X###XX#XX##X#X # #", "## XX# # ### XX## X## # X# # X# #XXX ##X ##", "# XX X ## # # X ## XX## X # X# ####XX ##", "# #X X #X X X ## ####X # ##X## X ## X X#X # ##", "# # #X## # ## # ## # XX X#X# # X# #", "### X# #### ## X ##X#X X# ## X # ## #XX ### #", "#X# # ## XX #XX##X## # #X## #### X##X#X #", "###X# X XX#X## #X# #X X XX## ## X## #", "# ######X# # X #XX # # #### @### ##XXX #X ##", "#X# ### # X#X # # ## ##X### # ##X# X##X ###X XX#", "### X X X##X###X ## ## XX###X X######X X#", "#XX# # ## # XX X X # # ## #### #X ##X# ##", "### # # ## # #X#XXXX### # #### XX# ## # #X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int pills = 6;
    int pspeed = 33;
    int dspeed = 2;
    int door = 120;
    vector<string> lab = {"##################################################", "# # X###X# ### XX ######XX ## # X X# X XX #", "#X X# X## ### # #X # X ## # #X # #X#", "####X #X # # # X#X X# # X X ## X X X###X #", "#XX # #X# ##X X #X ## X## # # X#XX # ### #X##X#", "# XXX# # # ## # ## ##X XX # X X #", "# #X #X##X# X##X ##XX X #XX# XXX XXX X ### ##", "## X###X# XXXXXX # #X##X## X#XXX#X# # X #", "# #XX XX # # X### #X# ### X X X## XXX##", "# XXX XX## ## ##XXX XXX #XX #X#X X# X# #X#X#", "# #X #X X X# #X###X#X # X#X##### # # #X## #", "# #X## X## ## X## # #X## XX##X #X X #", "## ## X# X###X### #X X X## X X # X #X# X# X ##", "### #XX # ## X X X # X #XXX ## X ## XX# X#", "## X####X # XXX#XX # X# ## # #### # # # #", "# XX# ## X X## #X X## X# X ##X#X X# X#X## ##", "# X# # #XX##XXXXX # XX X ######X#X##X## ##X#", "# X X ## ##X# # # X## # X # # ### # #", "#X#X #X X#X# # ## # # #X# #X X# X #X#", "###X## X X# X# # ## XXX X # # #X X #X# X #", "# #X # ###X X ## #X## X X ##XX# # X#", "# X#X###X## XXX #X#### X # X XX## #X X# #X #", "## X#X X ### # X #XX #####X # #X##X # #X#", "# #X#X #X# X##X#X#XX## X ## X##X #XX# ## #X ##", "# X# X XX X###X X## X#X#X #X #X X # ## # ####", "# X# # XXX #X## X#### ###X## #X # E X# XXX#", "# ###X# ## X ## X # # X X# ## X ####", "# #####X X### # X#XX# #X##X X # X# # X #", "# # XX # ## # X# X X X # XX ## ##### XX #", "## ## X# # # # ### #X# X #XXX# #XX# # # # X # #", "## XX XXX#### X ## X####### # ##X# # #XX# X #", "## ### X# # X X ###X# X# X# X XX#X X ## # #", "# #X # # # X # X X##X#X X XX# # # X## ##", "### # X## # # XX# X # # ##X # # # X#X#######", "### #X # X##X X # # # ####X## ##X# ##### #", "# ###X# #X X ## XX## XX # XXX##XX X XX# ###", "#XX X## #X # #X X # ## X ## # XX X #X# #", "# # # XXXX### ##X X X # #X X#### # XX# X #", "##X### # ## X ### X# XX XX # ## XX#### XX#", "# X X# ## ####X # #XXX # # ##X#XX ### XX## X #", "### X ### XX# # ##XX X ### ######X#X# ## ## #", "# # #XXX## ###XXXXX## # X ## X X #XX X# ######", "##X X ### @## X## # # X# X X ## # X# XX#", "##X #X X#X X## ### X# # ##XXX#X X XX # # X##", "#X# #X X X # ###XX XX# #XX ###XX# ## X####X#", "#X##XX ## X # X X X# ###X# #### ###", "# # ### # X#XX ## X#XX##X# # XX##### ##", "### #XX ## XXXXX X## #### ## #X### X### X# # #X#", "# # ### X #X###X## # X X##X X# X#XX # # #XXX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int pills = 1;
    int pspeed = 47;
    int dspeed = 21;
    int door = 92;
    vector<string> lab = {"##################################################", "## ##X# # X XX# #X####XX X ## #XX # ## #", "#X#### X #X#X# ## #X# ### X # # # ## ## #", "# X#X##X # X # X # #X #X # # ##", "## ## ## # X X### # X X # ### X #X X X X##", "#X#X X## #X## X### XX X##X # X ## # ###", "## # #XX ## X# #X###X# ## # #X###XX# #X #", "# # # # X# XX#X##X XXX X##X# ## #XX# # # ####", "##XXX# ##X X #X # X X##X # X# #### # X #", "#X##X #X#X X # X # # XX X XXX## #X#X #X# # X #", "# X X XX ##XX XX # # X## X## # ####XX X #", "# # ## X### # X #X # XX X ## X####X## XX# #", "#XX ## X #X X ##X## X#X# ## X # #X X # XX#", "# ## # # ##X##X # X#X# ### X#X#X ### # #X#", "## X XX## ##X #X# X X# XXXX # # X### #X # ##", "# XX### ## X X# X### #XX# ## XXX XX## X # # X #", "# X# # #X # # #XX ##XXX XX#X # X#X##", "##### # ##X# # X#X#X XX #XXX##XXX# ### #####", "# ## X#X #X# #X#XX # X #X# #X## #XX # ##", "# #X# ## # #X# # XX ## #X# X # # #XX##XX #### #", "# # # # XX # X ## #X ## ## XX##XX #X X ##", "# ## ## #### X X# X# ###XX##X #XX# ### #XX X#", "#X # ## XXX# X # # # XX # # ###X##X#### #X# #", "#XX# X### #XX## ##### ####X #X##X##X# X#", "## ##XX#X ## # XX # #X #X## ## X##XX # #X#", "#XX # # # X X# XX### # X#X # #X X## ##", "#X##X## X#XX #X # X# X#XX# X ###X # #X X#", "# #XX#X ## XX# X # #####X##X ### X# ###X#X# # #", "# ## XX# XXX## #X# # X # ##X#### # X X## #", "#X X#X X ### X ### #X# #XX##X ## ##X ##", "# # X ## # X # X ### #X## #X #XX #X ## #X #", "####### X #XX# X X#X ##XX X # # ##XX#X #", "####### #XX ## ###X XX# X## X# #XXX #X# #X#", "#XXX# #X#X X###X# X #X X X X#####X X# XXX#XX#", "# X ## # X X# XX # X##X# X#XXXX# # X XX # X#", "# # #X ### XXX X#X # X## # X#X # X X ##", "#XX #X#X## X## ### # X# ###X #X # ## X#X #", "# XX# # ### X#X# #X # X# X#XX X ## X##", "#X#### XX# ##XX X ##X XX#X #X# X### X X ##", "# #X X### #X###X### ##### #X# # # ### #", "# X# ## # # # ######X#### # #XX X####X ## X #", "## X #X# #X XX ##X# ## ## #XE### X ###X#X ##", "# ## ## X #### XXX## ### X# # X#### X##", "### # # XX# #X X #X X## #X##X#X X X# ##X #", "#X X# XXXXX X ### X# X X# # X# ## ### # X#", "#X#X ### # ## #X X# ## XXX#### #XX#XX## X ##", "##### # XX#XXX #X X # X### XX##@X##XXX## ## #", "# #X# XX #XX##XX XX X# # ###X# X X# # # #", "# X# #XX #X#X# # XXX# ##X # #XX#X# X X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int pills = 9;
    int pspeed = 73;
    int dspeed = 1;
    int door = 135;
    vector<string> lab = {"##################################################", "# # X X# #X #XX X X ##X###XX# ## #X #X ##", "###XX ##### X #X XXX# X# XXX # #XXX XX # #", "##X ##X# #XX## X #XX X X #X###X X X #X XXXX#", "# ##X X X X####X# ## X ##X## X## XXX#X #", "#### X# # #X X # #X # X#X##X # #X## X#", "#X #X#X X##X#XXX#X ## XX#X # X XX X#XX####X X#", "## #X X X # # XX X X# ##X# X##X#XX #X ###", "### X##X## #X X###X###X# #XX# XX # X# X# # X# #", "# XXX#X##X X # # #X X#X ####X# XX# XX## XX#", "## #XX# X X# #### X #@ X XX# XX## # X #XX#", "# ## ## X# X# X #X# ####### #### X #XX#X # #", "## # XX## XX # X### #XX##X# #X #X# ## #X # ###", "### # XX#XX #X# ### ##X ## XX # X X##X X # # ##", "## X # #XX # ### ##X# # #X## X X# XXXX## X#", "#### #X #X # ####XXXX # # ## #X # X X X# ## X#", "#####X ##X# ## # # #X # ##X # XX## ## # ## #", "# ##X X ## # ##X X XX# ### X## X X XX#", "#X ## # ####XXX X#XX XX X## ##### #X# X # X##", "# # X ### XXX X XX# X# #X XX## #X #X### X #", "## XX######X # # #X # # ### XX X X# X# ##", "#### ## ##X# ##XX X X# # #XX ## X#X # # #X XX#", "##X#X## #X #X#X# X ## # X # XX### # ###X#", "#X#XX XX###X X#X## XX# X #X# ### ## ### #X#", "#X XX X### X# X#### X## XX #X### XX# #", "# #X# ## ##X## #X## ## X ### XX# # XX X##", "# #XX# X### XX X # X## ##XXX# #X #XX## XX # # #", "# # # X # # # X#X##XXX# #X # X# #XX#X###X X ##", "# X ## X# X##XX#X #X# # #### # ##X#XX# #X#X ##", "# # # ## X#X# ###X# #X ##X X # # #X##XX #", "## # X# ##XX #XX X # XX X#### ## # # #X#", "# ## ## #X## X### X # X # X X X## # X X#", "##X ### #X X# X #X # X ## ##XX #XX#XXEX #", "# X ### #X# #X# X# # # #X# XX X ##X# #", "# #X #X# X ##X### ### # X##X X X X XX# #", "# ##X#X## X ##X#X# #### # X# # ## # X#XX# #", "# X ##X XX#X# ##X #X##X X X##X#X######XXX #", "# X # XX # X X X##X X# #XXX ### # X #", "#X ## XX X#X XX##X# ##X# ## X X ## #X## X ##", "#XX### ## #X# ## #X #X# ##X# # X # #X# #", "# X## X# X ## XX ##X#X## X #XX X ##X # #", "# X## #X ## ## # # # #X# X X#XX#X #X XX #", "# XX#XX# ## X#XX #XX# # X# X# X #X ## ###", "# #X## #X #XX XX ##X## X# ##X X #X# X X X#", "# XXXXX #### #X# X# # # ##XX # XX XX# #", "# X ###X# # ##X# ##X##X ## # #X ##X XX## #X##", "###X#X #### X X # ###XXX #X ###### # ####", "###X## X# XX #X X##X# X##X#X# # ### XX# X X #X# #", "####X X## X##X # ##X#X X ###### ##X X # X ##X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int pills = 9;
    int pspeed = 29;
    int dspeed = 16;
    int door = 170;
    vector<string> lab = {"##################################################", "##X## ###X # #X##XX ### #X ###XX X # #X ##", "#X # # X X# #X # #X#X ## # X# #X X X##", "# # X # ## # ###X# ##X X# # #X## ##X ##", "# ## ## XX #X ## # #X# #X # X#X ##X # # #", "#X XX##X X#XX# X## X X X## # # X # X X # XX#", "## # # # # ##X #XXX # # # #X ## X# # #", "# #XX ##X ## X# ##X # ### #### XX# #### ## X###", "###X #XX X##X XX X# X##X## # X ## # ##XX X ##", "# X # ## X #X ## # #XX X# # X## X##@ X ## X#", "# X# X## X # XX# # X# X##XX X## X # X#XX#", "# ## # X # # X XX# X#X# ## #X# X ####", "#X##XX # # X #XX## ## X# X X #X#X# ## #", "# ##X X #X XX#X X ### X ## #X###### # X#X #", "## ##XX X#X#####X #X## X#XX## X### ##X#X XX##", "# X## X XX# #X X ### #X##X X X #X#### EX #", "# #### #### # ## X#X#X ##XXX###X#X #X## XX##X##", "### X #XX# XX #X # ## ####XXX# X # #X #X##X #", "#X # # XXX## #X XX ## # #XX X#X # # #", "##X X# X #### # # X#XXX X # ### ## # X #XXX#", "## # XXXX# # X## X##X X##X#X #XX X ## #X#####", "### ### #X X# #X X X X X#XX X # X#XX ##X ###X#", "# # X#X#X ## X#X#### X X# # #####XX# # #X# X #", "# X# X #X # #XX ### X XX# X # ## # X#", "### # ## # X# X# ###X # # X ## XX #", "##X# # X X #X ### X## XX #X# XX X## # ##X #X#", "####X ##X X# #X # XX X###X# X### # # X### #", "# XXX X #X X X # ## # X##XXX# ## XX # #", "###X###X#X X#X# XX# X# ## X## X # #X### XX X#", "#X XX## # ##X ######X# #X # #XX # XX # #", "# #X# #X# # # ###XX # X#X#####XXX X X ##", "##X #X # #X ##X # # # # XXXX # ## # X### ##X###", "# ### # X#XX#### #X# ## X# XX###X####X ## X X #", "#XX### # XXX #X## # X# X#X ### # X X#XX X####X#", "# # # ## #X #X ##X XXXX X X ##X #X X# #X##X##", "###X#X # # ##X# ##X#XX#X# X XXX X# ###", "## XX #XX #X ##XXX X## XX##XX ### ####X X #", "# ##X# # #X#X # ##X## X#X# ## X X X X # # #", "#X X XX#X# #X## # ##XX # X # # X ## X# #", "# XX #X X #XXX# X## X ### X# ## X#### X##", "#X# X X #X## # # XX XX# X#XX ##X##X## X #X #", "### #X# # ## #X# XXX X XX# # X XXX####X #", "# # #### #X#X #X# #XX X X## # #### XX##X# X# #", "#X# # X XX # X# X # X#XX## X# X # #XX X #", "## # ## # X XX X # # # X X X###X X XX#X#", "####X #X # # ## X# X# X##X ## # # #X#XX# X X#", "# # ##XXXXX#X##X #XX#X X# ##X# X # ###XXXX#X#", "##X#### # # X### #X #XXX###### X X ##### X# #", "#### X## X# # ## X## X#XX# ## X # ###XXX # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int pills = 5;
    int pspeed = 37;
    int dspeed = 8;
    int door = 54;
    vector<string> lab = {"##################################################", "##X # X# ## # XX# # X ##X XXX X XX# # X#X #", "##XXX ## ##X ###X#X X # ## #XXX####X X#", "# X XX XX XX#X#X # # ##X######X# X### ###", "# # # X X # # ## X #X #####XX# X X # # #X #", "# X#X# # #X##X X#X# # ### # X##XX# XXX X#", "#XX# X # X X ##X X# # #XX# # X #X #X## X#", "# X#X##X X#XXX # X# # XX ## X#X X#X X#X # ###", "# X XXX # ###X XX XX####X#X###X#X###X X #", "# X X ## ###### ####X #X # # ##X ## # X # ###", "## #X #X##X #X # # X #X ## X XX# # X# X ## #", "## ## X ## ## ### ## X# ## X X#X# #XX#XX X# #", "##XX##X #X X#XX#X#X#X #X # ### #X #######X##", "# ##X XX## X#XXX ## #X ## X X# ## ## #X#X#", "# X#X # ##X XX# # # X### XX ####X X XX##", "## X## #X# XX## #XX #X## # X##### XX X# ### #", "#X X ## X X## ## XX X X X#X#X # X XXXX#X# X#X##", "##X## X# # E # #X#XXX X X#XXXXX X X#X#X#X # #", "# X# XX ## # X ##X ## ###X# # ##XX#X##", "### XX# # #X X# #XX# X X### XX#X# # # X #X #", "#XX XX#X# XX X@XX#X X ##X###X ## ##X ###X X#", "# ###X X## X X# # X ## X### # ## # ### #X#", "## #X###X#X XXXX## # ##X# ## ## ##X##XX # XX#XX ##", "### # ##XX##X#XX#X # #XX# XX##X# X #XX #####XXX#", "# X####X # # X X XX ##X ## X # X X X X X##", "## ##XXX# X# #X XX##XX ###XX X XX# ##X##X X ###", "#### # ### ### X ##X# # # X X X# XX X ##X #", "#X# X ####XXX ##XX# X X# X ## ##X X#X XX X #", "### X# #X##X# XXXXX X X #### X# ## X### #", "##XXX#X#XX ## #X X# ## X# # X# # X #XX### # X #", "# XX X # ## # # X XX#X # X X #X### XX # # # #", "#X XX ##X# ## # #X##X # # X ## ## # ##", "# X# ## X # #X #X#XX # ##X X### X XX #X XX #", "# # # XX ## #X# X ### X### X ##XXXXXX ### X X#", "### #X##X X X# XX# ###X##X XX### #XXX#X## X# #", "### ## X #X XX ## # XX#X XXX #X X ## X X#XX#", "####XX X# #X# # X # ## X ## ##X X#X #XX## #", "# X X#X #XX #X X## X X### ## # #X # # # # #", "#XX# # # X # # # #X X X#X# # X # X X X #", "### XX##X #X X ##X # X X#X X# # #X# XX# X# #", "#XXXX## X##X## X# # X#X X# ## X X # X XX# #", "## XXXX XX# X XX## X ## # #X X # X XX## X# ###", "##XXX## X #X XX # # ##X # X #XX # #X# XX##", "##X#X#X# XXX#XX#X## # # #X# X###XXXXX# #X#### X##", "# XXX## X### X# X## X XXXX#X X# XX# X##", "### ####X### XXX X# #X #X ##X X# X X###", "# ## ## X X X # X# # #X#### ## # ## ##", "#XX # #X X# X#X # #X# X XX# X## # # # ## #", "##X ## # X### # XX# X## X #X # ## # ## XX# #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int pills = 8;
    int pspeed = 84;
    int dspeed = 1;
    int door = 125;
    vector<string> lab = {"##################################################", "## # # #X#X# X###X#X X# # X X### XX #X #X#", "#X###X## X# X ## X XX X XXXXX ## ##X # X#", "#X#X#X##XX#X X X ### # # #XXXX#X###XX##X## X#XX #", "## X X ### # # #X#X X## # X#X##XX # # ###", "#X### #X#X# X## # X# X#XX ## # ## X X##X# XX#", "# X XXX#X#X X#X# ## # X ##X XXXX#X# # ## #", "# X X# # #X # # X## ##X X ## #X X ###X XX X#", "#X#X##XX ## #X X# # ## X ###X#X# XX X # # ## #", "##XX#X ## XXX ## #X#X XX # #X#X##X # # XX # # X#", "# # ## ###X## #XX # ## XX X#XXXX X # ## XX X X#", "# # ## X# X ### X# #XXXX##X # #X##XX# # X X# #", "##X#X X #X X## X XXXX## X####### X# # X #X #", "## X# ##X X##XXXX##X# # X ### # X XX # # XE#", "# ### # ## # ### ## ## #####X# #X ####XXX X ##", "#X# ### #XX # XXX X X XX # # X X##### X X#", "## # # X#XXX # X#X# ####X ## XXXX ### X X #", "# ## X# ### #X XXX ##X#X# # X #X # XXX #", "# # # X#X X # X # #X X ##X # # # X #", "### X ##X X#X### # ##X#X# # ## XX##XX#X#", "#X # #X## X #X XX X #X XX X### ##X # X #X #", "# ## X X #X##X ## # # ## #######X X #XX #", "##X##### # #X###X# # X #X#X # # ##X### X #", "#XX## ## #X # #XX# X ##XX #X## X# XX ## X# ## #", "#X X ##XXX#####X### X# # # X X##XX##X## X ###", "##XX X# #X X####X# ##X# # # ##X#X # # #### X #", "### ##X XXX X# #X X# X ###X # XX#X X #", "#XX## #X #XX# X###X## ####X X# ######X##X# #", "#X # #X# X X ##### # X#X X# ## # X#X# ##XX#", "# X ## # # #X##XX #X####X### XXXX #### X#X ###X#", "# XX #X X X X ## X## # # ####X#X# XX #XX# ##", "#### # #X# # X X# #X # #X XXX ##X X XX #X#", "## X #X # #XX XX X ## X# X##XX### X#XX X##X X#", "# #X #X##X#X# X## ##X ##XX X# ## # #X#X##X #", "# ####### # # #X#XX #X # XX# # XX X X ##", "##XX XX## # XX X ## # ##X X# ## #X##X# ###", "# XX### X## #### #XX#X# X#X #X X XXX XX###X #", "# X #X## X# # # #XX ## XXX## ###X#X X#X # #", "# # X #X#XX ## # ## XXX## ## X## # X #", "##XX #X X## X# ##X# ##X X XX X ##X ## X#XX# #", "### X ## X X#X ## #XX### # XX#X # XXX##@#X #", "#XX#X # ## X## ##X##X## X X##X## X # X# #", "###X # ## X X# # # X# X X ###XX X X # #", "# X#XX ##X # # # X ## # # # ##X# #####X##", "# ## X X#XX # # # #XX#X#X# X # #X#X X# #X#", "# #X## # #X# # # # X #X# XX XXX##X ## #X# ##", "## ## ## X##X# X # XXX # X### ##", "###X#XX #### X #X#X # ## #X# #X #X#### # # # #", "## ###X X # # X X # X #X#XXX###XX#X #XX X X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int pills = 6;
    int pspeed = 60;
    int dspeed = 2;
    int door = 142;
    vector<string> lab = {"##################################################", "#X###X## X#X # #X XXX X # # # XX#", "# X##X# ####XX# X ### #X # XX#####X XXX#", "# # ## XXX # ### X XX#X XX #X# #X###", "# X X XXX# ## XXX# ## #X #XX#X# ###X # X#", "##X X# ## X# # XX### XXXX # ## #X# #X#", "#X X # XXXX X## #X## X # #X#X ## #### X ##", "# ##XXX # # E X #X #XX X X # #X XX## # #X# #", "# ## ##### X X X # ## X#XXX#X XX #X ####", "# XX XX ## X X ### # XX##X#XXX ## X X #", "#X# # X# X XX#X ## #X###X## #X#X #XX # X##X X #", "#X#XX# X# XXX# X # XX#X##XX X## #XXX# # # ##", "#X# XX #X X #X# ####X X # X X# X# X ##X # #", "#XX#XX# # # # ### XX#XX #X######X#X# # XXX#", "# ## X##### ### X#### #X## # ## ##XX XXXX# X # #", "#### #XX X#X X # ### # # # ## ## #XX # #", "### X#X## # ## X # #X ### X# #X##X#X#X X#XX #", "#X ## ### #XXXX ##### # X X X XXXX #X ##X #", "#XXXX##XX ##XX # X # # # #X XX XX X XX X#X# X#", "### #X X X #### # XX# XX X# ###XX X# X ##X X##", "#X# X### ####X #X X ##### #X#X# ## ### # ##", "###XX #X## #####X X@#X XX X #XXXXXX X XX X #", "#X#X# ##XX ### ## X # # ### X###X ## # X # ##", "#X XX ## # # # XX# # X ## XX #X## ##XX X #", "#XX X###X#X #X## XX ###X# # ## X ### X ##", "# # #X #X# #XX# X #XXXX## X###X X #### ##X #", "### X X# X X XX# #XX #X# #X X# X X#X ## ## ##", "#XX X X X ##X # X X # ### ## X XX XX## ##", "##X# #X# # X #X#X#X## #X#X XX X # X # #X#X##", "#X##X#X X# XXX# #XXX X# X## #### # ##X#", "##X # ####X #XX X# ####X X### XX# XX# X X#", "#X#X #### # X X X#XXX #X X#XXXX # X#X## #X ##", "# # X## ##X X X## ##X##X ## #X# ## # XX X #", "# #X# X #### # ## ## X# # ## X #X X#X X#", "# #X X XX ### #X #X## #X#####XX # # ## XX#", "#### X # X X#X# X#X ###X ## ### ## ## X X#X##", "# # X##X ##X ##X### X X X # X X#X #", "# # #XXX X # X # ## X # X#X #XX #XXX #", "# # X #X #X #X###X ##X X # ### # # ## X# #", "###X#### # #XX # #####XX#X# ## XX # # # #", "# #XXXX X X # XX # XX#XX # X#X#X XX# # XXX#XX#", "# # ## X X # #X XX# # X ## # # X#", "# ## XX ## # ## X # XX## #X #### ## # ##X##", "#X# # X### #X# X# ##X#####X#X#X XXXX X # XXX#", "#### X## X X #X X##X # X #X ### ###X#", "## X# ##XX ## X# ### X## # #XX# #", "# #X #X #X X ### #X# #X #X ##X## #X ###", "#X# ## ### # X X#XX##XXX X# X X # #", "## # XX#X # X # #X### X XXX ## # X### #XX ####", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int pills = 2;
    int pspeed = 25;
    int dspeed = 5;
    int door = 191;
    vector<string> lab = {"##################################################", "#X # #X ##X # XX# # #X# #X## #XX# X#XX# X##", "## XX# X#X X #X XX ## ###XX # ##X# # ##", "## # # X ##### #X X XX# X # XX#XXXX # X##", "# XXX#XX#X ## X #X X # ##X # X X XX#X#", "## ## # #X# ## # X#X X ## # # X #X X#X # # ##", "#X## XX##XX## X XX X XX# # X #XXXX## #", "# X##X## ## X## X # # X##X###X ### X X #", "#XX# ## #X##X #X# # # ## XX# # X# X##", "# ## # X XXXX X X#X#X# XX X## X ##X##XX#", "# # #X X # X##X X### X# #X## ## # X ##X ##", "# #X# ### X## XX # X# # X#X###X# #X ##", "### # # # ### # ###XX XX XX #X X # ##XX #", "### ### X# ## ##XXXX ### X#X #X#XX#XX #X#X #", "## #X# #### ## # X #X ## ##X## XX # X#", "#X XXXXX ##X X # XXX### # X### #X#X## # ###", "## # # #XX X X # XX# X # # ##XX# X## # #X#", "#X X ## # ## # ## X XX##X ###X ##X# # #XX###", "# #X# XX ##XXXX ### X# X ###### XX#X#X # ##", "### # #X # # XX ## ##XXX ## #X XX# ##X## #", "#X# X XX# X X X# ##X #### ## ##X XX # X# X ##", "# #X X X XX X#XX# # X X X# #X X #", "### XX#X## X # ## #X ## ## ##X X# X# ## #", "## X## # XX ## #X#X XX# XX# XX X ####X #X#", "# X# # X #XX# X # # # X ## ### ### ### #", "##X # X##X XX #XX ###X#X # # # XX ## # X ##", "#X# # X# XX#X X #X # ##X #X X # X # X#X X#", "#X# X## # XX X # ## # # ### #X #XX#", "##X X # # # #X##X##### #X ## ## #XX # XX#", "##XX#X # # ### # ##X #X X ##X # XX# # #", "# X## # ##### # ####X ## X## # # X# X #", "#X X ### # X X# ##X## ### ##XX XX # # ##X####", "## XX X X## # XX## X X### X X### # XX ### X#", "##XX X ### X#### ### # # X# ## #XXX XX# #", "# #X#XX##X # # ##X X# X## XX X# XX## # X #", "#X## ## X#X#### #XX # ###XX XX ## X X X ##", "# ##X## # ###XXX ##XXX ##E# # ### X X X ###", "# #XX# # # ##X X# X## X #X## ## X# X##X ##", "## ##XX #X #X # # # X #### ##X #X# X#", "# ## # ##X#XXX ##X X## #X X X #X ##X####X#", "### #X# XX ###X # X## X# X ####XX XX XXX# #", "# # #X# # X#X# #X #X XXX# # XX#X @ ## X# ##", "##X# # X#X#X#X #XX X# XX # #X## XX # XXX#", "#X# #XX X#XX### X ## # X X##X X# ##X #X# #X#", "#X# # X ### # #X# X XX# # #X X#X## # # #", "#X # X## # #X# X X# ###X # XX## ### #### ## #", "#X # #X ###X XX X XX# ##X X X XX### #X #", "# #XXX## ##### ##X # # X # XX # X###X X##", "# # X# #X ###X #XXX #X X XX X#X#X## #X X#X # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int pills = 4;
    int pspeed = 66;
    int dspeed = 13;
    int door = 155;
    vector<string> lab = {"##################################################", "# ### # # XXX# #X X#X###XXXX ###X## X## X #X#", "#X### ##X#X## X#### ## #X # X X#X#X# ##XX#XXX#X#", "#XX X### X XXX X X ### ###X## #X### # #X #", "#X####X # X X X### ####X### X# ## X# ### # X# #", "# X X## X ## ## X # ## #X# ## # # X# #XX X# ##", "# ####XX X ## X X ####X###X #X ## XX #X #X### X#", "##XX#XX##X## ##### X# # # # XX # X## ## #X ##", "# #X X## X# #XX #XX X# # # X# # #XX #XX #", "### # X# ### ### X ### #XXXX #X XX# # X X #", "##X X## #X##X #X XXX## ### XX# # ## X # XX#", "# ## ## #X ### # # X ### X X## X # X#", "### #X X# X### X X# # ##XX # XX XXXX#X# X####", "# #X# X #X X## X## X XX X # X##X#X ## # X# #", "#X # ##XX X # XXX#XX# ###X X #X# X ####X#", "##XX # #XX# ## ##X ## X#X X X # X# X X##", "#X #XX##### X #X # X #X # # # #X##X# ####", "## XXXX# # X # # X# X#XX XX# ## # X#X#X #", "##X X#X## # XX ####X# ##X## # # X#X ##X## #X ##", "##X# X ## X# # # X X# X # X #X # XX# # #", "# ## X X## # #XX X #X# # # X # ## ###X## X ##", "# # # X X#X#XX#XX X X XXX XXX# X XX# # XX# X#", "#X # # X## # # # #X X# ###XX# # X X #", "#X##XX ##X ## #X#X# X## # X # X #XXX## # X#", "# # XX## X## X# X#X # X# ## X ###X #X ##X #", "#XX # # #X## X ## # ######X # # ##XX X # ##", "#X X XXX### X# X X## X # # XX#XX # X XX@X #", "## XX####X ##XX# XX XX # X # #X#X # X X##", "# #X ###XX# XX## XX X # X # X# ### # X###X# #", "# #X # ## X## X ### X#X#### #X X#X# X #X #XX#", "### # X#X## #X# X# X #XX # #X#XXXX# EX ###", "# ##X X##XXX## # #X### #X XX ## X ## #X X ##", "# XX# # ##X ##X #X # X# X #XX X####X# ###", "# # XX# #X# # ####X ### X#### XX# XX# X# XX#XX#", "## # # XXX ## # # X## X# ### # #X X X##", "#X # X#XX # X#X# ####XXXX##### X # # XX# ###", "###X#X # # X X # X### X X# # X# #XXXX #", "#XXX #XXX##X X# X##X #XXX X #XX# # X###### X#", "### X ## X #XXX#XXXX#X# X### X ### # # #X # ##", "# # X#X#X # ## # XX## # X# X###X#X#### X#X # #", "#X###X X#X### X #X# #X X## # # X XX# # #", "##X X# #X X X#X## #X# # ##XX #XX## ##X### #", "# X XX# ###X # ### ## #X# ### ## ## X#", "#X X##X XX#X X # X#X #X #X#X##X## XX X X###", "#### X## ## X # X ## X# #### X# X ## #X#", "# X X X # # X# # ###X# # # #X##X XX# XX# #X# X#", "# ##X## #X#X## # #XXX# X X X# ###X## XX #X# ##XX #", "# ### #X X X XX## #XX X # X# #X XX ##", "#X# X X#X XX ### XX # ## X#XX # # X # ####", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int pills = 10;
    int pspeed = 36;
    int dspeed = 4;
    int door = 114;
    vector<string> lab = {"##################################################", "#XX # # XX# ## ##X X## # XX#X X ##X #XX# X#", "### #XX # XX# X #X#XX # X ## X #X# X#XX#", "## #X ## # X# # ###X## #XX# ##X# X# # X##", "# ## #X#### ##X ## X#XXX #X##XX# #X##X#X #XX#", "# ## ##X#X# X X ## X # X X XX#X ##X #X # ######", "#X# X ## X####X## # X##X # X X## X # #X #X XX#", "# X#XXX ########X### X #X##X##X # ## X ###X #", "#X# ###X### X ## # ## # X #X X # #X## #", "## #X##X## # XX X# # #X#X#X#X XX #XX #X#", "## X#X #X# X# X## XXX X#X ##X # ## # ###", "# X## X# XXX# X # ##X X# #X# X X# X #X #", "#X #X# #X X## ## ##XXX# X # # ## #XXXXX #", "# #X# ## # X # # #XXX XXX XXX### ## X# @#", "# # ##X##X # # X# X ## X #X # X # X X#", "###X#X ## ##X # X ## #X#XX # X ## # # #", "# # X# X XX # X##XX# # X #X # #XX # #X # # #", "## # ##### X XX## XXX# # X X #X##X # # X #", "#X## # X ## X X##XX X # X X#XX#XX ## X #", "#XXXX# # X # X# X###X#X # # #X## # #X # X###X #", "# XX#XXXX# # X#X####X # XX X#X #### #### ##", "# ##X X# X### #X# X X# ### #XX# #X # X# # ##", "##### X # X#XX X#X X #X#X# X X X # XXX #E#", "#XXX##X# X ## XX # ## X## ##X#X XX# X # X #", "#X X# XX## X# #X #X X XX X X # # XX # X # ###", "##XX ### XX # # ###X### ## ## #X ##XXX #X##", "#X X# # # ##X ##### # #X #X#X# # X #", "#X # # ##X X #XX###X#X ##X # #X XX###X ## #X#", "# # ##XX # ## XX# X# ## #### ##X X##X# #", "## # ## ##X #X#X## #XX# X #X#X X# X ### #X #", "## ##X#### XX# #X X X #XX #X XX ##XX # X X #", "## # X ## X X # X# #X XX# X## XX #X #", "# X # ####X# # #X ###X XX#X # # X X X# # ###", "#X## #### #X X # ## # X X## #XX###X X###### ##", "## # X # # # # XX ### X X X###X #########X# #", "###X# XX ## #X# # # X X#X # X# XX# ## XX #X ###", "# # X # #X# #X### ### ## X#X###X#XX ### X ##", "#X X # # ### #X X# # #X# # X#X # # #X X XX ###", "#### ## ##X #X ## X#X# #X X #XX## X#X### X#", "# # ##X ## XX# #X #X XXX# X #X #X# ## X #X #", "# #X# #X# XX# XX ## #X XX #X####X XXX X ## #", "# #XX##### X X #X# # ##XX # # #X# #X# #X #", "# # ## X X ## ## #X##### X## #X#### #X###X X #", "#XX#X # X###X# X# X #XX ###X X X ##X X# #", "# # ##X XX X# X### X ### X X# #XX ##XX X##", "### ##XX X # X#XX ## # ## #X#X #X X # ####X#", "# #XX# #X## #XX### # ## ### #X X X ## #", "#XX## XXX X## ## # # ### #X# X XX##X## X##X####", "##X ## ###X X # # ##XX# #X X X#X### X#X XXXX # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int pills = 3;
    int pspeed = 84;
    int dspeed = 1;
    int door = 187;
    vector<string> lab = {"##################################################", "##XX# X#X# # # X### X X#X# X### X X## X # XX##X#", "## ##X### #X # X## XX# # X ## #XXXX####X# #", "# # # # #X XX# X# # ### X#X### ## ##", "#XX ##XXX XX # X XXX X X # # XXX##X X#X#X###", "# X #X XX#X# #X# #X#X## # X# # #X#X #", "#X # # ### XX #X ## ## #X ###X #X ####X#X##", "# X ## X# X X X XX X# ## X X # X# #XX#", "# X## #X X##X## XX X # ## X#X####X###XX# #X #", "# # #XX #X#X## ###X X # X## X XX# XX#", "#X#X X XX X# X XX X #X ## X X X ### # # ##", "## X# # #XXX###XX ### X X# # # # X# ## #", "#X ### # # X #X## # # ## X # # X #XX# X## #", "#X#X XX# ## # #X X X#X# # ## #XX #", "# #### ######X #### ##X # X #X #X X#X#X #XX###", "#X #X# X # ## #X #X # XXX ##X# #X #X #", "## #XX ##### X # #X## XXX X XX#X#XX#XXX # X#", "## ## X X # X # # #X# ## ## X X##XX## #", "# # # ###X# X # ##X# ### X##X X## # X X#X ##", "# ##X XXX XXXXX# X### #X# #X# #### #X #", "# X# ###X## X # ## #XX ##XX #X#X # X ##X#X#", "#X #XX ##X #X# ###### # # # X ###X ##X# X##", "####E# #X #### X X ####X X# # # # XX##### X # #", "# # ## # ## X ## XX #X #X#X# # # ## X # XX#", "# # # X ### ### ##XX XX##X# # X#XX # XXX# X#X ##", "####X X# #X###X XX X ####X X# X X X # #XX# X#", "## #X#XXXX## ## X## # # XX##XX###X#X X #", "# X# X ## ## # ## X X#X #XXX ### X#XXX#X#", "#X # X# # ##X XX X #X#X ## # XX#X# ##XXX#X ####", "# X# XXX## X #X##X X## ###X ### ##X## #", "#X# X# # ####X# X X# X #X XX #X# ###X######", "## ##XX #X ## X ## ###X# X# #X##XX#X #X #X ## X#", "#X# # # X## #### ## # #X #X##X####X X# #XX #", "## # X# # ## X# # # #X #X#XX #XX # X# #", "# ## X X# ##X#XXX # X ######X X# X# #X# #", "##XX### #### X #X # X XX #XX#X #X X X #", "##XX##XX X#X#X #X#X XX X XX# X X # #X XX #X#", "# #X ##X XX # #X X#XX# XX #X X# #### X##", "# XX # #XX ### # #XX ##X XX X# ##XX ## X#", "#X# X#XX ## ###X## # # X#XX #X## XX XX#X # #", "#X # # ## #X##X X X # ## #X#", "# # XX#XX# #X ## # X X # #@ X # # X#", "# XX#X#X ## ##XXX# # ## X###X X# X#X X ## X#", "## X#XX## # X X X# #X## # #X #X XXX #X ## X X#", "#X # ## ##X #### #X# # X X### # ##X #", "# X X XX #X X # #XXX# # ###X X# #X # ##", "###X## # X X## XX#### ## # ###XX# # ### #XX#X###", "#X X# #X### X X #X X### X### X #", "# ##X # X## X # #X X X#X ## X # #X XXX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 89;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int pills = 1;
    int pspeed = 34;
    int dspeed = 5;
    int door = 73;
    vector<string> lab = {"##################################################", "# #X# XX #XX#X#XX## ##X#### X# # ## XX X#", "##XX#X # # X ## X# X# X X ## X# #X###X # ###", "###X# ## X# # X# ### X X#X X X ## #X # X X ###", "## X ####X ###X#XX#X X X##XX #XX# X#X X#X##", "#X XXX # #X ##X XX #X ## X ## XX### ## X#", "### # X### #X#X# ## #X## X # #X ####", "##XX #X#X X ## XX ###X #X ####X# X #X # ##X##", "## X###XX ## # XXX# ### # # X# ## XX #", "## ## X#X#X## XXX X# #X X##X# #XXX X XX # ##", "#X # # X#X XX XXX#####X ## X# XX##X#X#####X### #", "##X XX##X # X##X#X# ####XX #XX X#X#XX ## #", "# X # # #X # XX XX # X# # ###X # ## #X # # X##", "####XX X # # ###X ##X##X###XX#X# #X X### XXX#", "## #X# ##X## ### ###X#X#X# #X#X# ### X XX# #", "#### XX#XXX X# #X## # X XX# # X## # # #X X X #", "# ## XX #XX###X ### X #X##X# X # XXX X #", "##X####X### # X## # #X## X #X # #X#X# ## #", "# # ####X#X#### ### X#X # X ## #X # ## ###", "# ##XX ### X# #########X#X#XX #X # # XX#X X ##", "# #X#X #X#X## #X##XXXXXX## X X XX## ### # X#", "# ##X XXX # XX X ##X###X## X #X # # # #", "##XX ######X X#### ## X # # X# # X###X##X## X #", "## #XX #X XX # ## X # #X # X#X X X #XXXXX#X#", "# X ##X X # X #X# X#X#### XX XX# ## # X #", "## X# # XXXXX # X ### ## ###X ### XXX ####", "# ## # X # # # ##XXX ## XXX## ## ## #", "# ## ## ## XX### #X ## ##X#X X X###### X# ##", "# ### X# ## X### X# XXEX# ## ##X##X# ##X #", "# XX## #XX#X X X # X# ## X# ## # X# # X# #", "### #X # ##XX X ## ## XX ##### X # ## # # #", "#X # #X# X # # #X #X X X XX# # X### X###", "### ##XXX #X# #X # ##X ##X#X #X### #X XX #", "# #X# # # ## # X##X### ## ## X XX## X # X###X##", "###X## XX## #X XX##### #@X #X X # X# X## #", "# X #X# XX# ##X # # ## X X X# XXX X #", "## #XXX## # X##X#X X# # ## #X # ## XX XX#", "## # # X#X### # X X #X # ## # # #X# X# #", "#X### XXXXXX# X X#X##X X#XX### #X#X # ### X# #", "# # # XX#XXX # ### #X X# X XX# ####X# XX# #", "## # ## XX X#X# ##X# #X #### #X X X X #", "###XX# ####X# ###X X# X###X #X # #X # #X#", "# X# ###X ### ##XX# X## X XX# #XX ## X #", "# #####X# ### #X #### #X#####X # #X#### X#", "#XX## # XX#X XX#XX ###X X #XXX## # X # #X X##", "## # ## #X# #X ## ##X#X#X#X# # ##X###XXX #", "# # XX##X# XX# XX X # # X#X# X X # ## X## #", "# XXX##XXXX X #X##X#XX#X# X###X## XX ##X## XX#", "#X##X X X# X X #X#X # ##X # X# XX #X X##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int pills = 6;
    int pspeed = 27;
    int dspeed = 1;
    int door = 128;
    vector<string> lab = {"##################################################", "## # # ## X X##X X XX #X # ### #X # X# X####", "# X X X# # X## #####XX### X #X#XX #X#X ## X # #", "#X XXX # # X# ##X# X### #### X # #XXX XXX ##", "# #X## X## ##X# # ###X#X# #X# XX##X # XX# # #", "# X ##### #XXX## X#X #XX X# #X#X# # XX##", "#XX#XX### XX# XX #X # X### # # X #### XX## #X#", "#XX##X X ##X X## X # # ##X#X #X#X#X # # #X#", "# X # #X#X # XX# ###X X## ## #X# ## X####X#", "# X ### X ## ## X# # #XX ### X # #X# #@ # #", "# #X # ## XXX #X X### X## XX # #XX #X X# # #", "# X #X# X # X# #X # # ##X XXXX X XX X##", "###XX #X#X#X #X#XX #X #XX#X# X # X X# XXX#", "# ###XX#XX# X##X# # # X# X# ## ## X #X# # #", "#X# X X## X XX#X#X ### ## XX# # #X#X # X ##", "##XX ##X X X##XX# ## ### # #X# XX #XX## ##", "#X X# X# XX #X #X### XX# # X# X# ## # ###", "#X# #### X# #XXX X XX# # X #### # X #XX ####", "# # ## X XXX#X #X## XX# X XX# X X# #X# ###", "#XX # X## # ##X#X# # X ##X # # #XX X X # X##", "# X###X XX# X # ##### #X ### # X#XXXX# #XX##", "# XX#XX#####X # XXX X# X XXX# X #X ## ## X####", "## X # X X ## # #X #X #X # X #X # #X X #", "# ## #X# #X# X### X## ## X#X### X XX#", "#X X X## XX# X# #X XX ###X # ##X#X## X#X#X####", "#X##X ## # # X# XX ## # #XX# ###X # X#X ###XX# X#", "# ##XX # # ####### ## XXX #XX X## X# # XX#X#X#", "###XX# ###X#X# # # ## #### ##X # #XX#XXXX##XX#", "# # ## X# # ## ## XXX #X##X##X #X ##X#X X## #", "### X# X X # ### ## #XX#XX #X ## #XXXXX## X# X #", "# X #X#X ##X X # X # #X ###X # X# # X#", "## #X ## XXX ####X X # X#XXXX# #### #XX #X #", "## X ### X # X###X#X ## ## ## # ### # X##", "## X#X# X X # # XXX# #X ## #X X# ## #", "# #XXX##X#X #XXX###X X### # #X # ## # ## X# #", "# # X# ## # #X#### #X## X # # X#X #X# #", "##XX ## ###X # #X#X ##X# XX#X#X X #X# # XX# ##", "# # #X## #X XXXXXX # ## # XX# # #X XX# #", "# ####XX #XXX# X X X #X#X X#X# X#X## # ###XX##", "## X##X# X#X ### ####X# ##X# ##X #X # # X XX#", "#X# XXXXX XX#X X # # #XX# X #X# X #X # X ##", "# #X X XXX## X### ### ###X# X### ###### XX#", "# #XXX # X# X # ### ###X # X XXX###XX#", "# #X# #X ####X# # X#XXE ## X # X ## X#X#", "# X#X # #X # XX###X X # XX# X ## # X#X#XX## #", "# #XX X# X X# ### ###X X# X##XXX#X###X# X X ###", "# # #XX#X#X X # ##X #XX# # # ##X## X X###", "#X # XX# X# X#X #### # X XX # ###XXX XX X ###", "#X# XX X#X# ## #X ## XX #X# ##X XX##XXX#### ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int pills = 9;
    int pspeed = 99;
    int dspeed = 1;
    int door = 105;
    vector<string> lab = {"##################################################", "### # #XX X#X #XX# XXX X#### #X X # X#XX####", "# ##X X# #X####### X # X XX XXX#X X# ######", "# #X X ## X # ####X## ###X## ## #XX# X# #XX ##", "## X# # ###X# ## X# # X XX X# ## X####X# ### ##", "#X X ## #X# ### # ###X# X #X ## #XXX## #X ##", "#XX X # #X XX X###XX #X ###XXX #X X # ## X##", "##X # X X#X #X#XX # ### ### X# X #X #X#XX #", "# X X##XX # #X X XX # X ###X####XXXX ##X ##", "# ## # #X #XX #XX#X###X# XX###X #X XX##XXX X#X#", "# XXX#XX X# # X # # ### X # ## X X ## XX#", "# X# XX X# # #X XX#XXXX X # XXXX##X##X##", "## #X## X # ###X#X X#X### ##XX##X# # X # X# X #", "# X X X #X # XX#### # ##XX## # ###X X X#", "# XX # X # # #X # # ##X #### #### XX X## #", "## #X# X## #X###X #X# X ##X# # #X X#", "##X##XX ##X X# #X##X#### X# ## X#X ## #X# #XXX##", "#XX# X## # ## #XX # X#X # XX X ## ## ##", "# X##X # X## X##X #XX# X X# X###X X## #", "####X X# X##X#X X #X XXXXXX# X# # # X X X# #", "#X# ## ###### #X##XXXXXX#X # XX X #### # #X##", "#X## XX##X## # #X# X####X# X#X ####X X# # # #", "#XX XX###XX ## X XX# X#X#XX # #####XXXX###X X#", "# ## ## X# # ## ##XXXXX #X# X X####X## # #", "### X# ## # X # # X#X## # #X#XXX X #X ##", "#X# # # # X#X # X# #X# ## XX##X ## X#X ###", "#X## X ## X X #XX##### # ####XX###X X######", "### XX X X#X XXX X# # X## # #X## #", "##X ##XX#XX # X #X#X #X##X# XXXX #X##X # ## #X #", "# # # ####X ##XX # XX #XX# ## XX X ## ## #", "# XX X## # X #XX X## X X# ## #XXXX # X # ## X X#", "## X X XX### XX##X X#X# X #X# #X XXX# XX ##", "# #X## X #X## #X #####X # X XX#XX###@ ###XX X #", "## ##XX X # X#X #X # ## X X# # # ##XX ###", "# ## # # # # X# X ###X# ##XX ## # X ###X #", "#X ##X## X ##X X ### # ###X#X X# ##X##### ####", "## ##X#X# ##XXX#XX #### X# X#X X X # # #", "###XX #X#X### X# X# XX ###XX ##X ## #X # ##", "#X## X X# #XX#X#X #X X ###XX X # X## ##XX# X#", "# X## X X###XX X##XX # ## ## X#X#X# X X ##X X#", "### #X X##XX #X#X X## X#EX XX## ####X X X ## ##", "## ## #X # # XX X # # XX X### ## ##X#", "# ## # #X# X X## ### # XX# XX# # X## # #", "#XX##X# # X X# ## X# #XX # #X# XXXX ## XX#", "# ## # ###X### #X# X#####XX#X X # # X##X #", "# #X# # ##X ## X #X ##X X XX # X##", "# #XX XXX X ## ##X ## ## # X XXX ### X#", "# # ##X# X X###X ### # # ## ## XX#X## #X ## #", "#XX#X X # X#X# X #X #X X #### X# ##XX # XX# #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int pills = 7;
    int pspeed = 15;
    int dspeed = 10;
    int door = 73;
    vector<string> lab = {"##################################################", "#X ##XX## X X X # X#####X## ##XX X ##X#X ## #", "# #X XX##X X#XX# X####X # X# X # X ##", "# X ###X X#X ## # ###X #X X #####XX # X #", "# ###X# X ## X #X##X XXX X ## X## ## # #X#", "#X# X XX# ## X X ##X ## X# X## ### X# X #", "##X#X# # ##X# ###X##X # #XX#X# #XX ## #X #", "# X# X X X###X## X#X#### X#X#XX # X## X#X# #", "###XX # X#X#X #X # # # # ##X# ### #XX XX#", "#X #X### X # # # X# XXXX X###XXX X ##X# # # #", "# # X #X ## X ## X ##XX##### @XX# # #", "# ##X ##X #XX X X #### # X # X X#X# X##", "# ###X# ####X # # X X#X # X ## X # X #", "## ## XX X## ##XX # X ## # X## X# #X# #X#X#", "#X#X X# XX ##XXXX# X ###X X#X# X#X#E # #", "## X## ## ## XX # #X X# # #XX# # # ### #X#", "#XX## # X ## X XXX#XX## ###XX#X## #XX# # # # ###", "### ## # # #X# # # # #XX#####X ##X## X## X#", "## XX# # # # # ####XX# X #XX #XX# XX XXX# #", "#X### X #### #X# ## X XX #### XXXX X##X#", "# #X ##### XX# X #XX# ## XX# # ##XX XX ##X ##", "#X#X XX#X# # # X # # # X#X# #XX # # XX #XX XX##", "# # # # ## #XXXX#XX#XXXX X# XX X## XX##X #", "#XX X # X ## X# #X#X # X# ##X ##X # # X#", "##X #X X # X X #X#X##X X## # XX ##X## X# ##", "## X#XX# ## #X #X # X # #X #X# #XX# # #X##", "# #X# X# XX#XXXX X##X X XX #### #X X #", "#X# # # #X # X#### # # #XX#X # # # # #", "# XX#X #X # X#XX# X### X X# # #XX X#X#", "##### #X ## X X# X X X X## X ### # #X#", "##X X ## X# # X###### XX #XX # # # #X ##", "# ###X# ### #XX###X## X### X# # #### # #X#", "#X XX X# XX### # #X #X#X#X X## ## X # X # #", "##XXX# ## X X# #X XX#X#X# X X X ### # #X #X##", "# #X#X# X#X#X ## # XXXX####X#X## # X ## #X#", "# X X#X X## #X #XXX ##XX X X XX##X# X X ##", "#XXX ##X#X### ## XX ##X####X # XXXX##X#X##", "# X ### ##X ## ## X#X# X # # # X#X## X## #", "# # ### ###X XXXX # #XX# X## #### # XXX # XX##", "#### # XX##XXX # ##X # X# XX # X #### X ##X #", "# X## #XXX X X#####X# # #XX#X X #X# ##X XX #", "##X ## XX#X ##X### ## ###XX X#X## X #XX X XX##", "#X#X ### # X## ##X# #X # ##XX X# X## #XX# ### #", "## X # #XXX# #####XX #### XX##X#XX #X#", "#X#XXX# #X #X XX X #X## X# # #X # ##X # ####", "#X# X#XX#X# ## X ### X# ##XX X# ### # #X###", "# X ### X # X## #######X## ######X ## X# X ##", "# XX#X XX XXXX # ### ### # X#XX#X# # X# ###X #", "## ### X ## ## # #X## X ## #X X # X X####XXX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int pills = 8;
    int pspeed = 86;
    int dspeed = 1;
    int door = 51;
    vector<string> lab = {"##################################################", "# X XXXX## #####X###XX #X # # X X #X## # # #", "# ##X#X#XX# X XX# # ##X ##X X # X X ## X## #", "####X### X# XX# X # #X X## ## # #X # #X#X#", "# ## ## #### X ##XXX #X# X ## #X##XX X X X#", "#X #X # # X# XX X X X X XX X#XX # #X #X#", "#X#X# ####XX X## #X## ### #### ## X XX# #", "#X#X## # #X X#X # XX###X# #XX X#X#X X#XXX ## #X #", "##XX##XX X X # X# # # # X# X ## #### ###XX# #", "### # X## # XX# ####### X###XX #### X ##XXX#", "## X##X #X### # # XX #XX XX # X# # X X ##", "#X# ### #X # X# #X # X## X## #X ### ## #", "##X ####X## # #X #XXX## #X #XX X## ### X X#X# #", "# X X#### X # # X# ## #XX X ## X # # #X #XXX ##", "# X X X##X # ## ## X# # # X ### X # ####", "#### ### # #X # ### # ##X XX# ##X #X # X X#", "#X# #X#X XXX# X#X## ## X# X ## X# X #", "####X## # #X # ##X### X # XX ## # #####X X#", "#X# # #X# # XX# #X###XXX X XX#XX## # # ##", "## ## X# XX# XX#X #X ## # XX X # X#", "# #X##X# XXXXX# ###X# #X##X# #####X## # # # #", "# #XX # #XX#XX # # #X # ### X# X X X# #", "#X # XX # # #X #X X##X # # X ##X #X #XX #", "## X#X # ##X XX# #XX# # # #X X#X XX ### ##", "#X X## ###@#### # X X X#X## # X#", "#X ## ##X # ##X# X X#XXX XX X# XX X####XX #", "## ##X##X##X# # #XX# # ##XX#X ####X##X XXX##X #", "## #XX XX# X##X #X #XX# XX# X # XX X # #X#", "# #X## X## X##X # XE X ##XX#### X # # XX#XX ##", "#X#X## #XX### XXXX#XX X#XXX#X #XXX ## # #X ##X#", "#X#X##X# ### XX# XX # ##X##X #### X ## X#", "###X # #X# # X #X #X # # ##X# ###XXXXX# # ###", "## ## # X # XX# ##### #XX #X###X X# #", "# X##X ## #XX X X # ##X###X### # X# XX## # ##", "## XXX# ##X ##X ## ##X #X## # #X# X X###X# ##", "# X##### #X XX X# ##XX# X## #XX #X #X# ##X# #", "# # X XX XX # ## # ## #XX# X #X X### #", "## ### # # ##X# ## X # # XX# # X #", "## X# X # X# ##X# X# # # #X#X# #X X ## #", "#X# X# #X #XX #X####X X#X## X X X# #XX #", "### ## X X####X #X XX##### ## X # # X ##", "##X# # #### XX ### XX# XX X ###X ### #X X##", "## ###X # # ##X ####X### #X###XX# #X# X# #", "# X #X# X ## ##X## ##X#X#X###X X ## # # # X #", "#X XX # X## X####X X # #X X X #X ## #X ##", "#X X ##X ## # #X X#### ##X # ## # X ##X X ##", "#### ## # ## # # #X #X X XXX## ##X## # ###", "# # ## X## X X X### X# X##X ##### #X X ##", "# ## X ####### X##X## X X# XX#XXXXX## X #XXXX###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int pills = 5;
    int pspeed = 12;
    int dspeed = 2;
    int door = 174;
    vector<string> lab = {"##################################################", "# X XXX#X# ### XXX# ##X XX ## #X #XX X##", "#X# #XX# X# #XX#XX ##X # ## # # X X# XX XX #X#", "## # # X# # X # # ## # ##XX X X#XXX #XXX X #", "#XX X ######X # X XX## ## XX#XX###XX X## X #", "#XXX### #X# # #### #X #X X#X # X #X #X # #", "## # X# X## #X# #X #X#X# X X X X #", "# # X# X# X X# XX X## X XX ## # X X## #X# X#", "# X#X # X ##X## X X# ## XX#X# XX#X##X X## ### #", "#X# # X XX# # #XX XX #X#### # ### ###X ##X X#", "## ##### XX ### XX# X #X X X#X X #X#", "## #X#X#####XX# #### XX##X # ##X #### ## #", "##XX## # X##### #X#X #X### # #XX# X X# X X #X#", "# ## X#X XX# X XX#X### X ###X# X#XX # ##", "##X ## ## # # #XX### #X## # # XX#X# X # X X#", "# XX#X X# ## XX XX # ## X# X# ## XXX # X# ####", "#X X # # X#X# XXX X## X# X #X ## ## # X#", "#X X ## X# # X X # ##X #X ##X #X #XX X##", "#X X #X # XX#X##XX ##X#X #X XX # X X # X##", "# X# #X####X X X## X####X####X # E## #X X###XX #", "#X##X X X #X #X X### X#X X X X XX# ## #", "# # ###X# XX X X# ##X # X XX# #X#X#X# # #", "# # #### #X####X# # X#X## # # X#X X X ##", "# #### XXX ## X ####X# X # X# # ##X X###X###XX#", "##X ## #X X### #X# # ###XX # #X# XX ### X #", "##XX XX ## # X## #XX##XX XX X#X#X#####X #X # ##", "#X # # X #X #X#X X X#X # #XX X XX X XX ###", "#XXX ## X X##X##X X# X #X ##X#X# X # #X X##", "### ##X## # ## X ## X##X X # X### X## X X##", "#XX X X ### X # ## XX ###X# # # X# X #", "##X ## # #X ###X ### X## # XX XX#X #", "#@X# ####XXXX## # ### #XX##X## X## ##X X X# # X #", "## # # X##XX X ##X# ###X X ##### X#X #X X# X#", "###X#XXXXXX# # X # # X #X # #X # ##X X #", "# X X## # XX# ## ## ### # X#XX#### ### #### #", "#X########X ## # X#XX XX X#X #XX# X##X# XX# #", "# X # ##### #X XX#XX#X #X### X#### X # X X X #", "#X##XXXX #X # ##X# # ## X #XX## X # XX#X#", "# # ## # #XXXXX# ###X ## X#### X# #X #X #", "#X X#X### # X##X##X #X # X#X# # #XX ###X# X #", "#X X ### X#XX###X#### XX # ### ## XXXX#####", "#XXX X# # ###XXX###X#X# X# # X # XX # X X#", "#X### ##XX X##X X####XXX### ## ## ## X#XX##", "# ### XX#XXX#X X # #XX#X XXXX XX# XXXXX #", "# ## # X #XXXX # XX X #X #X# XX ##X#X#", "##X # ## # XX## XX# # X## ## X# #X # ##", "#X X# X X# X XX #XX #X#X#X## #X###X ## ##", "#XX ##XX # ###X ## # X#X X # X ##XXX####XX##", "# #X XX#X# XX XX# ## X #X # ##X XX# ## # XXX#X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 84;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int pills = 10;
    int pspeed = 43;
    int dspeed = 1;
    int door = 92;
    vector<string> lab = {"##################################################", "# #X # X X## X # ##X # # XX## # X #", "#X X X X X X # X## # # ###XXXX#X# X#", "# X # #X # X X## # ## # # # X# # #X## X# #", "# X#X #XX # # #X## X X#XX###### # # X # X####", "#X#XX X#X # # X X X#X## # #X# # X X # # XX#", "# ##X# X X ## ##X##X### # X# XX # # ###", "# # X# ### X # X# # X # X XXX# ##X ## # #", "# # X X ## #X X # X X# ##XXX X#X# X X##", "# ###XX X X X #XX ##X # ## ## X X # X #", "## #X# #X ## #X#####XX ### X X### ##XX##XXX #", "##X X #### X X # XX X X ##X XXX ##XX XX# X#", "#XX# X #X # X #X #X # # X## X # # XX##XX #", "# # X ### #XX X#X ### ##X XX#X # X # # ####", "# #X #X # XX X# ### # X ## #X #X#XXX # # ## #", "# # ##XX # XXX X# # X # X#XX####X # XX#", "## ## ##X ###X# # X# #X #X#X ## XEX# X## ##", "# # ## X# ## # #X ## # #X#@ #XX#X#X### ## # #", "### XX X# # ## # X# #X XX X X ###X X # ##", "## # XX##XXX# X# #X XXX###X# X #X#XX# X## X X#", "## X#X XX X X# X#X X X# X## XXXX##X# #", "# # # #X ## X#X# #X# #X## XXX#X# ## # # XXX# X#", "# #X# ##XX#XX#XX##X # X#X XX ### #X X #", "#XX # #X # X ####X # X X #XXX## XX # ## XXX#", "# # XX # ### ##X ### X #XXX#####XXX #X# X## #", "# X #X # #X# # # X## # ##### #X### # X#", "#X # # ## # # # X #XX # #X #XX # XX X X# #", "# X###XX # ##XX#### X#XX# #XX ##X### # X# #", "## ##X #X X XX# # ## # X # #XX## XX# X##", "## # #X# X# #XXX ### #X##X## XXX# ## #XXX #", "#### #X X##X# ##X ##X#XX# X##XX # XX ## #", "#X##X #X X XX## # X# # X## # XX X ## ## XX#", "##XX# X## # X #X#X #X#X X### # # X # ##", "##X # ## X XX# ## X # #XXXXX## # ### #X#", "# X X X # # ## #X XX##X# # X#", "####X## ##X X # X# #X X##X #X XX## #### # # #", "# X ### ##X # #X X X## # X X # X X X ###", "### ### # # ## XX#X### X# X### X #X X###### #", "# X### # #### # XX# X#X X # # # X X # # #X X##", "# ## ### # ##### X X #XX #X# X#### ## # ##", "##X ## X# ## ##X #XXX X# X# # #### X #", "##X### ## #XX# # ## ##X X# #X#X X X X X#", "# X## X ## XX# X### # # XXX#XX X# # # X ##", "# # #X #X ### # XX # ## X XXX### ## #X ##", "# ### X X X### X XX#X XX## XX # # #X # X###", "# # # # # X#X#X X# X#### ### # X# X# XX ##", "# # X# #X##X### X X# # ### ## ## X##XX XX #", "# #X # X # X## # #X# # ## X# ##X #", "#X## X#X# # X# ## # ###X X # #X XX#X# # ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int pills = 3;
    int pspeed = 16;
    int dspeed = 4;
    int door = 128;
    vector<string> lab = {"##################################################", "##XX####X# #XX#XX X# ## X #XX ## #X # X# # #X#", "## X## #X # X X# X XX X######## ##XX#X## #X##", "#X # # # ##XX # XX ## X X X# #XX X####X#", "# X# ##X #X# # ## XXX # #X # ## ## # XX#", "# X ###X ### #X # # XX # ### ### X X #", "# # #X X #X#XX X # X###X### ### ## X##X##X#", "# X X## ###X X X X # # X #X X # X X #", "#X##XX X#X ## # ## X#X ## #X #X# ## X## #X X#", "####XX### X# X X###XX X#X XX ##XX#X # #X ###XX#", "## X## X## ##X #X # X #### XX X X# X ## # #", "# X # # X X# # X# XX#XXX X##X## # ## # #", "# # X X# #X##### # # #X### #X X #XX#X #######", "#XX ### # # # # #X # # X #X #X### #X#X X #", "# XX# #X###X# XX# # # # # # # X# #X#X#X #X#", "##XX #X # ## X # X# ###X# X X#X###X# #XX # #", "#X # # #X#XX## X X# X # X ##### # #### #", "#XX X # # XX# X ### # X##XXX#X#X#X# # XX # #", "#X#XX#XX#X X #X X# #X ## ###XX### X # XXXXX #", "## X X X #XX #### X #### # XX# # X ## # #X# #", "# # ## # # X# # XX# #X ## #X# X# X #X #", "### X X #XX #X##XX ##### #X ## X #XXX### X#", "# #X # X X X ### X#X X### X# # #X#X X X# # ##", "## XX# #X XX # X #XXX XXX ## X X X X#X# # X#", "## ## X XX ##X X #XXX ### #X# ##XX#XX ## ##", "#X#### ## #X # ### XX# #X## #X# X######X#", "## # ## #X # # # X X# XX#XX XXX### # # X#", "# # #X ####X#X## # X### X XX ## X#XX#X#X ##", "# X## XX# #X## # ##X# X# X#X# X ###X # XX#", "#X # # ## X XX X##### # X X X# XXX# X #X #", "# #X# XX#####XX# # X X X X # #X #XX## X##X ##", "###X#X X# XXX#X @### ## #XXX## # #XX ###X ###", "##### ## ### XX #X#X# X#XX # X## XX## # ##", "#X# X#X# XX## # #X ## ##XX# XX X # X ### ## #", "# ## ## # X# ###X # XX# # # #X #X X#XX##XX #", "#X # X # #XX X ## ## X X# X XX# #### XXX#", "# X# X X #X# ### X# # #X# ## # # XX## ## X#", "## XX XX## # X ## ## # # # #X # XX X #X##", "# X XX### # #### #X # ##X# # ### XX## ###", "#### #X## # X#XX # #X# X# ## #X# X # # # XX#", "# ###### #XX# XX XXX # #X XX### X# # X X X##", "#X## # ## #X#X# XX # # #X# # #XXXX# X #X ## #", "#X# ## ## X## XX # #X# X # XXXX # X#", "#XX# X# X #X## # #X###X #XX X #X#XX # X#", "# # X# # #####X X#XXX # X## X# XX # ##X X #", "#X## X X ### X# X#XX#XX # X #X# ### ##X X #X#", "# XX # #####X## X X # ##XE X ## X## XX # #X#", "#X#X#XX X# X#X X## X#X## ### ## ### X#XX#XX#", "# ###XXX # X X # X###XXX# X XX # # X# X#X #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int pills = 10;
    int pspeed = 44;
    int dspeed = 8;
    int door = 68;
    vector<string> lab = {"##################################################", "####### # ##X# X ###X### #X### XX ###X# X #", "## # #X XXX # X### #XX # # X# X ## #", "# ## ## # #X#XX X ##X# # # X X## # # X#", "###X #X X# # # X#X XX ## X #X # X#X##X ##X#", "# # X#X#X### #X# # X ## XXX#X #X#X## XX#", "# X ## X # XX#### # ##X## X## #X ## # ##", "## X#X # # # ### X## X X # #X ##X X X # # #", "# #X X##XX X# XX #### #XX# X # #X X# X # # X##", "##X ##XXX XXX ## #XX#X# # X X# # X #X X# #", "# #X # # X#X #####X #X # #X#X# X# #", "#X### ##X X # X ## ## # X##X #X###### ##", "#XX# X X ##XX# X# # X # # X X X##", "###X#X# #X#X X # X##X##### # X#X### X#X #X X ##", "# # X # #XX###X#XX # X## ## #### # # #", "# # # X X## #X##X# #XX#X##XX X###X# ####X#X#", "# #XX ##X#X # # X### #X XXX# ## #XX #X## X#", "###XX# # #X # X X # X# ###X # #X## X##XX XX#", "#XX # #X XX #X # #X X X X # X ##X X ### X ##", "# #X# X#X X X## #X X## # # # ##X# X X# #X#", "#XX### XX # #### ## XX # # #### #XXX ## ##", "## X # #### # X XXX#X # #XX # XX X## #X X # ###", "### #X ##X X# #X X ####X #X XX# X X ## #", "# ## X# # #XX # X ### ### ## X #X#X #X #", "#X XX#XX XX# X # # X# ##XX#X ###X X##", "# #X# #X## X#X #X# ## ## X#X#X X#X XX### XX#", "#XX XX# #### X X## ## # X###XX X X X ##X # X# #", "# #X## ### X# ##X#### # # X#X# #####X# ##X # ##", "# X #X## # X ### #X # X # ## X#X XX###X## #", "#### ## # # XXX ###X## # # ## # #X### X##X#", "##XX## # # X# XXX#XX ##X#X #X# #X# #XXX##", "#X#X# ##X#### # ## X###X#XXX XX X X## # ## # ##", "# #XXX # ### X#X# #X # ## X ##X# #X# #", "#X X # X## #XXX X#X ## #XX### # ## XXXX X#", "#X# X## #X ### ## ## XXX###X# # X ##X# ##", "#### #X#X # ## # X#X X #X## ####X#### ## #", "## ##X #XXX XX XX ##X ##X ##X# E#X @X# # #", "# X ## # #X #X#X ## ##XX X X ### ##XX#", "# X #### ## ### ## #X# X# ##X# X# # X#XX##", "# ### X##XX # # X #X# XX# X# ##X X # #X ### #", "#X#### X #X X X#X X X###X## XX #XX X # ####", "# X # X## #X ## X#X X##X## XX X XXX # # XX #", "#X# X #X## ## ##XXXXX XX # X# ##X ### X #### #", "## X X # X X X#### ### # # # XX#X ## # # X #", "# X# # XX # #X X#X# # X##XX#X X# ## #", "# X# # #### X#### ## ## #X X X ###X# ## # #", "###XX# # ###X####XX# #X X #X# X# ### #X# #", "#X X# # X#X# X####X # XX# ## ## #XXX ## #", "## ##X## X### ## X ###X ## # ### ####X X###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int pills = 6;
    int pspeed = 99;
    int dspeed = 4;
    int door = 147;
    vector<string> lab = {"##################################################", "#### X# # X# X # ## ### # # #X ## #### #X #", "# ##XX##X #X## X##X##XX ## X#X# # # # # XXX##", "## X#X #XX#XX# #X X## # # X# X# ## ###", "# #X#XX XX### # XX#X## # X X# # # # ####", "#XX X X XX X # # #### X #X X ##X#", "# X # X # X X ##X # # XX XX # # X X XX XX#", "#### ## X ### X#X# X X# # X### X#X X#", "# X X# #X# X XX X## X # X X X ##XX # ## #X #", "## XX ### X# ## ### #X X X# X# # ## X ####", "# X ##XX ### # # X XXX #X # X#X#X X #### #", "## X# X#X# X# #X# ## #X#X##X XX #XX# X#", "# # X##X##X# X # X# # ## # # X# ##X#X#X # #X X#", "##X##XX# XX### # X #X X### X##XX X# #### #", "##X# # X X## X ##X#X X ### X#X X # #", "#XX# #X X #X## X ## X #### #X## ### XXX #X# #", "## XX ### #XXX ### ## ## XXXX #X#X #### # X#", "##X X#X # # ####X ## # # XX ##X#### X XX#", "##X### X# X#XX X###X ## ## X # X# # ### #", "# X## X X## ## # # #XX # # #XX# # X# #", "####XXX#X X## # ##X# # X#X#X # #X X XX#X#", "# XX ## ## ## X#X###X # # #### X X##X #X#", "### X#X #X XX#X X ## XX XX### ##### # #X##XX#", "# XX## X## # XX# ##X XX#X # # ### #XX ###XX##", "#X ## X X # # XX# #X ### X# # X# # #", "###X # # # X ## X## X## #X# X# X### # # #", "#X## ## #XX## X###X# #X XX## #X X# # ## # ##", "## #X # ### XX#X## X#X # X#XX# #X# # ## #", "##XXX #X##X X# ##XX ##X ##X## X # #X#XX####", "# ## X # X# #X# ### # ## X## X# ## X## X #X #", "# # ##X### #X# ## # ##XX# XX X##X XX# X X ### #", "# # X#X ## #XX# X X # X#X# ### X # XX #", "## # ## ### ### X#X # ## #X #### ##X ##", "#X# X X X###XX# # X#X#XX# X### ## # X ####", "##X#### X#X#XX XX X##X#XX#X # ### ##X# X X# #", "###XX## X# XX # ######X#XXX#X X# X# #X# # #X X #", "# ##X# #X##X# X# # X## # # XX #X #XX#X ####", "## X # ### ##X ###X#X XX # XX##X X ##X XX# #", "#XX ###X#X #X ## X# ### ## ## X#X #X# X# #", "# X ##### ## ## # # X X##E ## # ##XX# X# #", "# # X ## X # X X # # # X # X X# #X#X#", "#X# # ## ## X X XX# X# X# ##XX# #### XXX#X ##", "#X # # ##X # X X#X # XXX# # ## X #X## XX#", "## X#X# # # # X#X#X XXX #X########X## XX### X#", "##X# X XXX# # XX # ### X #X# #X ##XX## ## #", "# # # ### X X###XXX##XX##X#X # X ##X #XX # ## #", "# #X X### # ###@ XX XX XXX## X#XX## # ## ##", "# X # X XX #X #XX ## X##X #XX X## XX## X # ##", "## ##### # X# XX ###X # ### ### X#X## X# # # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int pills = 4;
    int pspeed = 39;
    int dspeed = 3;
    int door = 172;
    vector<string> lab = {"##################################################", "# # X # X### X # X##X X X# # # ##### # XX#", "# X XX # # #X ##X# XX #XX #X## #X ##X X##", "## X##X# X# XX #X# # # ## #X##X# # # XX X#", "#X # X#X## X##X X## # ### X# X XX##X##X# #", "#X###XX # #X#X XX# # # # # XX#X# # ###X# X# X#", "### # ## #X XX#X X# #X X ### # XX X##XX X X#", "# #X ##X###X## #X # ## XX## #X XX## # # ### #", "##X X X# # ## #XX# # X # # # ## XXX #XX #XXX##", "# #XX X## X X # X # ## # ### XX#X #X# # X#", "#X XX X ## ##### XX # XX# ## ## ##X ## # ##", "##X# # #X ##X X ## X#X ## #XX#X XXX###X#####", "# XX# #X X XX# X # # ### XX#X## X##X#####", "#XXX # #X## X # # #X# # # X #### X X #", "### XX #X ##X X#X ### X X ### X X# ## #", "## XXX X# ###XX#X # # X #X # X X X X # X# #", "# # X X # ## XXX## XX#### X### XX####X# #", "# ## #X## ## #X# X# # #X### X X # # ## #", "# # X### X# X# X#X # X ## ## # # # XX XX#", "#X ## X###X ###X#X# ## #####X # ###### ### #", "#X#XX # XX## ## ## XX ## # # #X ## ##X ## #X#", "## # X # # X# # # ## XX X#X # # # #X # # # X X#", "## XX# #XXX##X# X X ## #X# # # XX ##X# X###", "# X# X #X #XX# # X # ####X# X## X###@ XXX #", "# #XXXX# # #X# ###X #XX## X XXX # # ### #", "# #X# #XXX# #X #X #E# #X# X ##X # # ######", "#X XX # XX #####XXX ##X XXX### # X## #X # #", "#X #X ###XX##X # ###X XXX X # # ##X ##X#####", "### X # X ## X# XXX ## X##X###X #X## #XX# X #X#", "# ###X # ### #X#XX##XX # XX ##X X #X# ##", "##X## #X##X X#XX## # ## XXX#X### # # #X X##", "#X # XXX #### # X # # #X ####X ### X #", "#####X XXX # ### #X # # X #X #X # # X# X###", "# X X##X ###X### #X### ## # #X #XX X # # #", "#### # X X## # ## ## # #X X X# #X X ## #### #", "#X #X X##X XX# XXXX # XXX X ##X#X##X ##XX #", "#X#X###XX X# X X# X####X###X#X###X# X#X # X##", "## ###XX #X# ##X X ## # X#X# # # # # X# #X#", "# ### X X # ##X X ## ## #X XX ## X# ## ##", "# X# #X #X#X X# X#XX # #X # # X##X###X #XX# #X##", "# # X X # #X##XX#XX# X ##XX X ## X #X ##X X##", "# XX## # X# #X# X X## X ## ## ## # ####", "## X# ###X# X### X X X # # ## ## # XXX#X X ##", "#######X#XX# XX#XXX # XX# XXX# # #XXXX#XX##X #", "# ## ###X #X## #XX#X #X ### X #XX# XX ##X#", "# XX #X X## #X ## # ##X### #XX# #X ## # X#", "#X X#X XX# ##X####XX# X XX XX # XX XX###X#", "#X # #X X X # X #XX #X # #X# #X#X # X #", "#X#XX # X#X# X# ## #### # # X ##X X#X #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int pills = 8;
    int pspeed = 8;
    int dspeed = 1;
    int door = 59;
    vector<string> lab = {"##################################################", "# # ### ## #XX ## # X X#X X XX##X ##X XX#", "## X X#X ###X # X# #X# X #X # X# #######X#", "##X# # #XX #X ###X ## # X#X XX##", "## # X## # ## X# # #X # X #XX#XXX X#X ####", "### XXX # X# X #X# #X # X X X # X# #X## XX# #", "###X## X #XX#X## # #### X # XXX# #X## # ###", "#X# # X# ###X# X#XX ## X # # X## # #X XX #", "#X # X#### #X X #XX##X# # X#X ##X# # X ##X#XX #", "# X#XX ###X # #X X ##X # ## X #X# X X###XX# ##", "#X# XX #XX## # #XX #X X ####X# # ###X ### #", "#XX X####X ##X ##X# X # X ###XX # #XXX ##", "#X# # # # ## X###X X# ## X XX X#X # # #", "### #X # X X XXX ###XX X# #XX# X X X X# ## #", "# ####XX X#X ## ###X#X#X X X# #XXXXXX XX#XX#", "# ## X XX #XX # # X #XX XX ## #X#X###### #", "##X# #X XXX# #X### #X ##X# ##X#####X#### X XX #", "# XXXX# # # ###X # # # ##X##X # ## X#", "## #XX### X## ## # # XX####X# XXX #X XX # X# X#", "### ## ##X#X # X # X### # ## ##X# X X## ##", "#X ## ##X XX## #######X # ### X #XX #####X#X###", "#### #XX XXX # # # X # #X# # #X#XX X###X #", "# ## #X## XX #### # # X # ## ####X ### #", "# #X ## XX@ ##XX## # X #### ### # #X#X#X X### #", "## # ### #XX ## XX## #X #X X # #X XX# # #", "##X ## X #X # ###X ##X # ##X # #X##X#X #", "### X#XX## X#XXX# #X X # X X# X ## # # ### X#", "## # # XX ## # X#X## # #X#X###X X# XX ###", "## #X#X #X## #X # X # #XXX#X # ## #X#X X # #", "## ### # # X# X ##X ### # XXXX X # ##X## X XX# #", "##### # # X # # XX XX XX###XX#### #X # # XX# #", "#X#X ### # X ## # #### XXXX # ##X## X##", "###XX ## # XX X## # X X#X # #X # # ##XX #X# # ###", "## # X#X XX # # # # X###XX # XX # #XXX#", "# #### #### #XX# # ##X# X # #X# ##X# ## X# # #", "# ####EXX # XX #X# X## XX#X X ## # X #X#", "# XX##X# #X# ##XX##XXX# X #X X X## #X ####X ##", "#X X ###X ##XX# X XX X # X X#X# ####X#X# ##", "# ### XXX ## X ###XX####### X# ## #### #X#", "##XX# ## X #X ###X ###X## X# X XX ## X XX #", "##### X ## ### # ## # #XX##### X X X## #", "#XX##X X # X#X# # # # #X #X#X#X X#XX ## XX##", "###X #XX ##X # ### XXX # ##X#X # X######X## X##", "# ##X# # X# X### #XXX # XX#####X # X XXX X#X# # #", "# # # XX##XX X #X X#X #X## # X # X##X XX #", "# ##XX # X# #### # # X## #X#XX ## ##X # X #", "#X # # X# # X## ##XX##X#X # XX##X# #X #", "## # XX#X#XX X#X X## X X X ##X# # # X XXXX##", "# XXX##X X # ##X ##X ###XX# X ##### ### ##X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int pills = 3;
    int pspeed = 96;
    int dspeed = 4;
    int door = 187;
    vector<string> lab = {"##################################################", "## X## X#X # ##X##XX# X X #X # X# #", "#X #X#X #X# ###X##XX## # # X# # XX ## #X#", "##X# ##XXX # ## # # X X X## X# ##X X# # # # # #", "#XX##### #XX# #XX #X @ X X# # X #X ###", "#XX # # # #X X X # X# X # ##", "### ##X# #X## # ##X # X##X ## #X# ##XXXXX##X#X#", "# #X#X ## ## ## XX#X X XX# XX # # #X### ##", "#X ### X# ##### ## #XXXX XX#X X # X ## # #", "# XX # ###X# X #X#X## # X X X#XX X###", "#X X# XX X X#XXX# XXXX## # # #X# X# X # ## #", "###XXX #X# # # XX# # #XXX ## # # X# ###", "#XX## X # ##X X X#X X # ##X ## X# X X#", "####X # #X # ###X# #X#XX ## XX#XX##X#X# XXX # #", "# XX# ##X X# X# XX X #XX # X # X #", "#X X### # #X# X#### # ##XX X# X ######", "# X# # X#X ## X# X#XX#XXX # ##XX #XX## #X # #", "# ##X## X#### X #X# XXX # # X # #XX X # ##", "#XX# #XXXX##X#X XXX#XX XX# X #X X XXXX#X## X#", "## ## ## X# ## # X### #XXX# X XX ###", "## X # ### ## #X X ## X # # #X# ##X X##", "#X X X#####X##X #X ## ## X#XXX#XX##X#XX #X#X##", "# #XXX #X# ##X### # #X X#X # ## #X # X#X#", "#X ### XXXX# X #X# # XXX ## ## # # #X ####", "#### X#X# ### X ##E # X ## XX # #XX X###", "# # # X X# #X X ## X # #X XX X ###X#X## ## #", "#X XXX X####XX# X#X## #XX##X ###X X# XX# #", "### X#X # ##XX ####### # X X ## X #X ##X ##", "##### #### #XXX#X #XXXX#####XX# XX X#XXX ### #", "## X ##### #XX## #XX X X##X ###X X X### ## ##", "## #X# X ## ##X#X##X# X #X #X#XX X # ##X #X#", "# X### ### #X# X# XX # X## XX#XX # X # ###", "##X ##X #X## X ##X ##X# ##X ##XX## #XX# X## #", "# #XX #X XX# #X XX##X # XX X X#X #X# #X # X#", "##XXX# ### X# # #X # X# XX XX#X # #XX #XX #####", "# X X # ## # ## X#X# #XXXX # X# ## X XX# X ##", "#X X#XXX ###X### ##XX# X## X # #X X# XX X## #", "#X#X# #X X## X XX X # X ## X X X#X# ###X# #X#", "# X# #X # X#XX X X #X X# X #X###X## X###", "##X ## X# ### XX##X# X #X X XX ## X#X ##X X#", "# #X #### X### ## X#### X ##XXX# # XX X#####", "# X#### XX#XX##X X##### X # # X#XX#XX# ## ##XX#X#", "# # #X#### #XX# #X####X #X X # ### XX # ###", "### ## X# X# X#X#X# X # ####X##X# X #XX## ####", "# #X# # XX ## X### # X X ## # X # # # # #", "##X#X X # #X X X # X XX # ######X## #X# X##", "# X#X X X # X#X### ## ### # #######X##X X#", "## # #X# ## # #X X## # ###XXX #X X ##X#X X##", "#X #X### X# #X X X## #### # # # X## #######", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int pills = 4;
    int pspeed = 49;
    int dspeed = 37;
    int door = 132;
    vector<string> lab = {"##################################################", "# # ####XX #X#X# # XX## X X##X## #X XX# X#", "# XX# # # # # # ## XX # # # #X ## # ##", "##X # ## XX X # ## X X#XX X ###X ##X#####X# X###", "### X X# #### # ### XX# X XXX X # X####X ####", "## X X # # #XX# X # XXX X #XX# # ###X#X# # ###", "#XX# #X##XX #X#X# # XX# X#X# XXX###X#X ## XXX##", "#X# ## ##X#X # ## # # X# # #X X #X# # #X##", "# X ## X# ###XX # #####X ## #XX# # X #XX###", "# XX X # ## XX#XX ####X## XX# X # X# X##", "#X# #X# # ## # ## ##X#X X# ##X #X X#", "#### # X#### X #### #XX### # ## #### # ##X ##", "#### # ## X# X ## #X# X# # X### ## X # #X# #", "###X## # # # X X ## # X # ####X X ##", "#X XX##X###X#X #X ###XX X ##X X###X X# # X#X #", "# ###X #X#### # #X# X XXX#X ## # X X# X# X#", "#### ##X#XX ## # XXXX X # #XXX# # ## #", "#X # # X ## ### X #X #X # # X## #X ##XX ##", "# XX # # # ###XX X# #X X# # # X#X# ##X #X#X #", "#X # X# # X# ###X # ##XX #X# X ##X#X# # X##X ##", "# # ## X# #X# ## # ## # X# # XXX# # X ###", "# XX# ##X## ## # # ##X # X ## # XX #### # # ##", "# # X X ###X# X X ## ##X## #XX# #X#XXX ##", "# X ######X#E#X @ ##X X # ### XX #X X##X #", "# ## X #### X# # #X #X# X # X ##### ## ##", "#X ##X####X # X# X# X X #X ##X## X###### ### #", "## ## X X #X### XX##XXX ##XX#X##X#X XX###X##X#", "# X ## #X## # X#X#X#X# # #X#XXX#XX##XX#X#X#X #", "#X #X# ## ## X X ## # X# #X#X#X ### #X#X X##", "##X# # # # #### XX X# ## # ##XXX #X#X#### #X ####", "# ###### X# X#X# ## XX # ## ## #X ###X X #", "# # # # ###X## ## # ###X # X##X # ## #", "#X # # #X# ##X# # # X X X XX# ####XXX #", "## ### # XX#X# X X X X# # XX##X # X X#", "#### # XX##XX# XX #X X X# # X # X##X #X #", "# X ### ###X##X #### ## #X##X #XXXXXX X ## #", "# ###X # #X X#X XX X X# X XX ##", "#XXXX# # #X# XX#X#X ## X## X#XX # ##X# #", "# #X#X#X# X#X #XX##XX#X # X XX#XX XXX## X X#X #", "##X X XX #X ## ##X #X # XX# ##X# ### #X #", "#X### # ####XX#X XX XX# X####X X### X# ## XX X#", "### ##X# # X ##X# #X#X# ## # # X # # #XX#", "# #X #### XX## X# X###X # # # ## XX #X #XXX#", "#X# XX# XX# X#X ## # XX ### X # #XX #", "# # #X## # ##XX #XX#X# ##X X#####X X## X# #", "# ##XX X # #X # ### X X# #### ## X #", "## # ## X ###X# #XX # ##X#X # ## X # X X###", "# # # X ##XX#XX #X#X# ##X## X# ## # X#X # X##X#", "# # XX #X# # # #X X X#X# ### #X##X #X# ##XX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int pills = 5;
    int pspeed = 8;
    int dspeed = 9;
    int door = 166;
    vector<string> lab = {"##################################################", "# X X## # #X #X#XXX ## X# ###X X#X # ###", "# X# # ###X X # X # X## X # ## # X #", "## X#X# # XX ### # X ##X X##X# XXX#XX #", "# X # X## # # #X#X###X # # # X#X #X## ##X #", "# ## # XXXX X ## X# #X####XX# X # # XX#X #", "#X # # XX ## ##X # X#X X X#X# # X# #X#X####X X##X#", "# ####X # XX ###X # ### XX # X## X ### X###", "####X #X# # X## X# XXX # #X # ##X#X######X #", "#XXX#X### X # X X X ### X### # X XXX## X#", "##X X #### #X###X X X## X#### XX#X # # XX##", "#X# XX #XX# ## # #XX # # #X##X X#X# #### ## ###", "# # ##X XX # X## X # X# XX#X # #X#X # #", "### X##X#X#X #X#X ## ###X# # XXX #X####", "#### #XX X X ##X#XX## #XXXX X# ##XX X#X #X#", "# ##X## # X# X XX# #X X # # X### # #", "####X## XX##X X##XXX# #X X# #X# ##X#X#", "# X# # ##XX X ## ## X X X ##XXX## X## #X XX ##", "## ## # X X#X X X### X X #### X # ## X###", "#X # X## XX # X# ##X# ## ## #X # XX X###", "#X ###XXX#X #XX## XX X#X ## ##X ##X #X# #", "#X#X XX# ## ###X # XX X# #XXX## X###XX# #", "# # ###X## XXXX X##X X#X X # X ## #XX #XX# X#", "# # ## # #X ## ##X X X # ## X#X # #X #", "# ####X # # #X# # ### X# #X# X ## X # XX ###", "## ## #X## #X # #X X X## # XXX XX #", "# #XX## ## ## #XX ##X# ### X # X### # ## X#X#", "# # # # X X X# #X##X X X###XX##### XX #", "## ### ####X X # ###X X X## X# # # ##X#X# ###", "# #X# # X# #####XX X# #X X #X # XX# X ## #", "#X# XX X XXX #X# XX# #XX XXX X# ### #X##", "#### XX##XX X# # XX##X##XX X # #X# # X# X#", "#X ## ##X##X # #### ## X###X#XXXXX # # ####", "#X # #X#X X##X ###X# X## ##XX # # # E # ##", "# X ##X ## # XX## X X# X## X# X X X#X#XXXX#", "# # #####X #### #XX # ## # ## X ####X#X###X##", "## #XX### X# ##X# X##### X XXX# # @## X #X#X##", "###### ## ## ##X X#X ### XX #XXX # #", "# X##X #X#X# # ## X X ##XXXX# #X #XX# #", "#X X#X #X##XXXX ##### ##X# XX XX ## # X X X#", "# #### #####X X XX#XX# #X#X X#XX ### X X ##X### #", "# ## # X#XX# X #X#X # # #XX## X# X # XX### X#", "#### # X#X #X # X X XX# ## ### #XX# X #X# ###", "#X##XX #X## ##X X # X# ####X## ## XX## ##", "# # # XX####X #X X # X #X### XX# ## X XXX X# #", "#X ####X#X XX# # X###X ##X#X# ### #X X ##X##", "#X#X ## X ### ## ## ##X X## X X X #", "##XX X # ## #XX X### #### X# X#X#X X#X## ##", "# X ##XX # # ####X# #XX#X#X#X###X # ##XX# X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
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
    int pills = 8;
    int pspeed = 57;
    int dspeed = 9;
    int door = 152;
    vector<string> lab = {"##################################################", "# ## # ## X### XX# ## X #X ## # ### X#X#", "# X # XX #X#XX# ## X## X ##X ## ## #X##", "# #X # XXX X ##X #XX#X X## #X## #XX #X# X #", "# # X X# X ## # ##X#X ####XXX# XXXX### X #", "# X ##### # X#X#XX XX# X #X X X##### ## #X#", "# # X# #XX#X### ####XX X X# # ## #X# # # #", "# ### XX ##X#XX # X X## X # X ## X ####X# X # #", "# # X #X#X # # X #X # ## # XXX # X # ### X#", "#X #X X##X# XX##X####XX##X X# # ##XX #X # ##X#", "##### #X##X X # X X X## ## ###XX#X # X ## #", "# # # ## # # # #X #X ## X X##X #X # # #", "# #X ## ## X XX # # # #XX###X #X X##XXX# # # #", "## #XX # XX X###X X XX# X X ##X ###", "# #X# X X#XX #X## X# # X XX ##X## # X ### X# #", "#### # #X # # X X XX##X#X## X X#X X# # #", "# # ## ## X ##X X#X#X##XXX# #X# #X# # # #", "# X # #X X# ## # #X ### X # XX X###X # #X #", "### X# #X ## ### ##XXX# #X #### XX# X X #", "# X ## ## ## X # #XXX###X ###X #X XX ###X# # #", "#XX###XX X##XXX #X # X#X## # # X X#X#X #XXX#X#", "# X## X# #X # # ##X###X ## ##### ## # # #", "# # ## X X## # X# # # XX ## X## ## X ##X ##", "# # ##XX ##XX#X# X #X XX X X##XX ##X# # X#X# ##", "### X #X#X X X## ## # X#####X# X# ##X #", "#X ###XXX # XXX X XXX # #### ## XX## X# X#", "###XX # ##X# # #X#X XX X# # XX##X # # ##X #X#", "#X##X# ##X # X X# ##X X# X###XX ##XXX #X#X# #", "# ## X XXX# X### ## XX# XX ##X# ## ## ## # ## #", "#X# #XX#X# X##X #X ## # X##X # ###X# X #X###", "#XXXXX# ## X #X## X #X# X #X XX### ## X# ###", "# X# X#X X# # # ## XX ### X#X###X## ###X #", "# XX ## #X #XXX X####X #X # X#XX# # # X # #", "#X##XX ##X# # X#X # # ##X X X#X ## ##X XXXX#", "# # ### # XX #X X # X # X ###X# ## ##", "# #### XX# XX#### #X# X XXX ##X X# ##X# ## X# #", "# # ##### # XX##XX #XX # # #XX## X#####X#", "# X## # X XX X##XX #XX #####X # #XX XX #X### #", "##### ##X# # ##XXX ####X# XX #### #X #X#####", "##X X# #X XX# # #X# ###X#X#X# # XX# X #X ##", "# #X # # EX # # # XXX # # XX XX X## #", "##X#X X X## ##X#### # # XX# X# X### # ###", "### ## # X ## X X ##XX#X # XXX## X# ### #", "# # X #X##XX### X X # XXX##X ##XXX##X #XX# # ####", "## X###X X@X# # ##XX # # ##X # ## X## ## #", "# X X#X ###XX ##X# #X##XX ###X # #X # # #X#", "# ##XX#X #X#X#X # # X # ## #X ##X #X X##X #", "# # X XX # ##X ##XX #X XX X#### ## # XX##", "# X# # X ##X X###X# XX##X X XX## XX # # ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int pills = 7;
    int pspeed = 68;
    int dspeed = 9;
    int door = 97;
    vector<string> lab = {"##################################################", "# #X# # X XX######X # X # # XX ##### ## X # ##", "# #X # # #X ##X#XX##X# X#X## X # ##X### ## #", "#XX XX # X# ##X #X## # X ## X### #XX ### ## #", "# X #X## #X#X ## X## # X# # XX # XX # # #", "# X XX#X # X #X ##X### # # #X #X X## # XX #", "#X#XX # #X###X X###### X###XX#X # X X ## # #", "#X X X# ## #X# # ### X X# X#XXX# # X# #X#", "# #X### ##X # ####XXX ### ## #X ## X ## #", "####### # ##X# XXXX#X X# X ### X X ##### X#X X#", "# X## # # X # X# ##XX X XX # # X#X## X #X #", "# X X##X XX##X# X# ####X #X # X # # # # XXX#", "# #X#X##X ###XXX # X ## XXX# #### #X ##", "# # # X ## X# X#X# ##X## # #X X XX### #", "#X#XX#X #X X# ### ## ## # #X X ##X # #X #X###", "# # #X # XX# #XX #X# #X X X ##XX## X##X# #", "# X ## X # ### ## # XXX # #X # X# XX#", "## X X ### X# #X# X # X X#X #X####X X#", "# X##X###X # X## # X # #X X #### X # X ##", "# X#X X# #X # # XEX## XX # X # X#X X ### #", "# X XXX X#X X####X ##X# X## # #X# XX ## X#", "#X XX X## ## X ###@#XX##XX# XX#X##X #X X X #", "# XX ##X X# X X # ####X# X #X #X X X#", "##X XX XX# # #X ## X# # ###X X# # X XX ### #", "# #X# #####X# X XX#X # # # # ###X#X#X# XXX# #", "##### # X X #X #X X##X##XX# # # #XXX####", "#XXX### X# XX## # X X ##XX ##X XX #XX###X XX###", "# # X X # # #XXX#X # #X #X X X X# XX XX# #", "#### XXX## ## X#X# ## #X## # X ##X #XX# # # X#", "#X X # # # ### #X ##X X# #X###### ## X# #X#", "#XXX# # X# X##X #X X XXX ##X## # X X## # X ###", "## # ##XXX## X # # X## X ##X### X # #", "###X## XX## # # #### #XX #X# # # #X#X## ##", "# ## #X# # ##X X #XX#X# #X##### X X##", "## #X## #XX# # XX ## #####X##X #####X## #XX#", "### X #### X #X### # X # X # #X # X# #", "###X XX ## ## # X ## # #XX# # #X X# X ##", "### X####X# X# #X ###X#### # X # X#X X #", "#XXX # # X XXXX ### # XX## ### XX X X# #", "#X XXX XX# X ### ###XX X X ## # X # # X ##", "#####XXXX#X # X# X## #X ## # # # ## X XXX# #", "# XXX XXX#X X X #X #XX # #X# ### #X## #", "#XX#XXX# ## ###XX### # #X##XX X X XX # #", "# #X#X X # # ## ##X #X # # X# # ### #X #", "# XX #X# ##X##X# X# #X ##X#X#X X #XX# ##XX X #", "# X XX# # X## # # #X # ### X# #### X#", "# XX#X X # X X #XX X XXX ## # XX #X #X # #", "### ## # # ###XX# X#X### #XXX XXXX ## X#", "# ### # X ## ## X XX X # #X ##XX X# # ##", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int pills = 6;
    int pspeed = 12;
    int dspeed = 7;
    int door = 168;
    vector<string> lab = {"##################################################", "#X### # #X #X# ## X ### X ##X##XX ## # #", "#X X XXX X XX ###X # X X ###X #X## X##XX#X #X#X#", "# X#X##X X## # X # ## ##X###X # # ###", "# ### XX X# XX X# # ##X X # ### X# # X # X#X #", "## XX## # X## X## #### # X #XX X## #### ## ##", "# # #X# #X###XX#X# # #X# XX#XX ### X# #XX #", "# ### ## #X # # X# X # # XX# # X X### X#X##X#", "###X #XX # #X## ## X# X###XX XX# ## X #X## X X##", "##XX #X# ## #X X X X# ##### X#X#X#X X##X X #X#", "# ## X # X#XXX XX##XX ## X# X #XX## #X #", "#X #E #XX X XX X X@# # ###X#XX# X# ##XX # #", "# XX## X X X XXX### X# # # #X# X# X X X # ##", "#X # # XX # X # # ####X XX# #XX #X X ### X XX#", "## # # ## X XX#XX#X# # X ## X #X ## XX## XX #", "# X # XX# #X## X# X X XXX # X #### X X####", "#XX#X XX#### X#X# #### # ## X#X#X # XX##X #", "# #X # # # # X## ## #X # #XXX # X X #X# #", "##### X X #### ### X #X # ##XX# X# X# # X#", "#X## # ## X XX#XXX# # X X# X# ##XXXX X# # #XX #", "##X#####X XXX XX## X # # #### XXXX## # X#", "#X X #### # # #X # # XXX # X ### XX X ## X ##", "## X#X ## X X## # XX # XX#X # XXX## ### #", "# # X#X #X ## X# #XX #X XX# ### X## ##X X X#", "# X#X # X ### X# X #X## # X#X# #XX## #XXXX##X #", "# XXX ### ##### ## X XX ## ## ###XX X ##X #", "# ## ##X# X XX XX#X#X## ## ##X ##X#", "#X# # #X XXX XX#X#X#X ## # ## #X#XX##### #", "# ##X# XX # X##X #X#X # XX## # ##XX X#### #", "### ## X #X#### #X # X# XX # ###X # X X#", "# ## X ## #X# # X# X#X # # # X# #X## # ##X#", "## ### XX#X#XXX#X## ### ### #XX # ## X ##", "# # ## X X#X#X# X X ## #X##X #### X X #XXX ##", "##X## X## # #XX# X##### XX# X ##XXX# # X #X #", "## ###XX##X X## #X# ## ### # ##X#X X ##XXX #X##", "# #XX ##### X #X X# X # ## XXX#X XX XX X# ###", "###XXX##### X##X ## X##X #X ### X # #### # X X#", "# X X#### X##X#X X# #X X#XX# #X # # XX##X # #", "# #X #XX# #X ## X## # XX# #X####X #X# X ## #X#", "#X #X#X X ##X X # ##### X# # #X#X#X# X #X #", "##XX XXXX #X X X ##X # # XX # ##X X# # X#", "# ##XX ###### ####XX #XX#### #X # XXX # # ##", "##### # X## X XX# X#X X XX ##X #### X # X ##X X#", "# # # ##X# X##### X X### ## # #X#X# # #XX X ##", "####X# X#XX# # X## X #X## # X# ## # ##X## XX #", "# XXX#X # # # XX#X # X# # XXX#X X XX #X ## #", "# ## X ##XXX# # X X ## # #X X##X X # #X##X ##", "## #X# # #X##XX###XX##X #XXX#X #XX# #X#####", "# XX## ###X ##X###X ##### XX # # # ## # X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int pills = 5;
    int pspeed = 28;
    int dspeed = 4;
    int door = 88;
    vector<string> lab = {"##################################################", "# #X # ## X# X#X XXX X#X## ## #X X X#### # #", "###### #### X######XX#X# # # # #X#X## ##XX ###", "#XX # #XX#XX # #XX# ## X#X# X# ####X#XXX ####", "# # XX#X # #X # X# # XX X #X #X # XX##X##", "#X ###X# X ### X##X##X ## # X## # #", "#X #XXX#X X# X# XX ### XXX # #XX ## X###", "#X# ## X# ## X## X# X#X # # ##X X #", "#X XXX #X # ##X# #X#X ## X X XX#X#", "##X #X## XX## ## X X X#XXX#X# # X ## # XX#", "###X#XXXXX ###X###X XX ###X# XXXX X X#X ## #", "### # #X# X #EXX # #X X #X ### ##X X #X #", "#X ##XX X### #X#X X XXX # XX#X XX## #X ###", "# ## @ XX XX #X #X# XX# ### # ##X## # ###", "#X #XX# ## ## #X#X#X# ##X ### # X ##XX#XX#", "#XX # #X # #XX # ## #X#X ##X ## X### # #X # # #", "# ## ##XX # # ##X# X X# # ##### X # XX#X#X X #", "# ## #X # # ### X # X X # #X#X # X #XXX#X# #X#X#", "## # ##XX # X#X# # ### #XX X# ###X XXX #", "#X X # ## ### #XX# # ##X##XX XX # # ###X#X X #", "#### X #X # # X# X## ##XXX # #XXX# # XX#", "# X## X ##X# #XXXX ## # # # X XX#X #X # ##", "#X#XX X XX X# # XXXX# # # X# X#X # #X ## X###", "#X# #X# ## XX X X XXX#X#X # # X X#X# ##", "#X #XXX XXX# X#X#XX#X## X # XXXX # X #X#X #X##", "#XX# XX#X##XX### # # X##X#X#XX X # XX#X # #", "# X X # XXX###X #X# ##X X X ##X # #X X # # #", "## ## # #XX# X X## # # #X X #X# ####X#", "##X# ## X# X XX X ## X#XXXX# ## # # X## XXX#", "# #XX# ## # X# ## X#XXX #XX X# # # X#X X##X #", "# XXX#XX #X X X ## # # XX ##XX# X X X## #", "# # # X#### ###X## ###X### #X## XX #X # ##X#X#", "# #XX # # X# X X # #X# # XX# # ##", "##X# XX X X ##XX##X # # # XXX# # # #X## X#", "# #X# # #XX# #XXX ## ###X# X# XXX##X # ##", "# # #### X## X XXX #XX#X X X## #XXX # # #XX ##", "## X #X# ## #X X # ## #### X #X #XXXX## X #", "# X ## ### #XX X X#### ## X # X X##X # ##", "##X### X## X#X ## XX #XX###X X X # #X# #X X###", "#XX ## X # X# ## XX## ## X# X X#X# X# #X #", "# X #X X # X# #XX X#XXX #XXX# # #XX# X ##", "## #X# X #XX##XX# # # # # ## # X## #X ##", "#XX#XX X#X#### X# X X ## X## ## #X ##XXX ##", "##X XX#X## # XX XX # XX X#X # #X # X#", "# XX #X # X # ## ## #X # X# # ##X### #", "## #X #X X# # # # # X XX## # # ## # XXXXX# ##", "#### ##XX###X# ## #X#XXX#X X# ## # ####X## ##", "##XX# # # XXX#X X# #X### # ##X#X### ###", "# # ###X#X# # X # # ##### XX#X # X #X###X XXX#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int pills = 2;
    int pspeed = 85;
    int dspeed = 11;
    int door = 188;
    vector<string> lab = {"##################################################", "# X# XX X## X# # X# X# XXX## XX XX XX##", "##XX X X # X## ##X X # ## XX # #X# ## # #X#", "#XX # # # X X X# X X# X ### #####X #X #X##", "# ### ##X#X XX # ####X X## ## X ## XX## ##", "###XXX #XX# X# X X #X#X # # # # ##XXXX#X X #", "## # #X### # X# # #### #X#X# # X# # X #", "### X#X# #X#XX## #### XX#X #X ##X X##X####X#X #", "# #X# #X ## XX XX# #X #X## # X ### ## X X # ##", "## X # ####X # # ##X # X # #X#X X### X X #", "#XX # X ## X## #XX## X # X # #X ## X#### X X#", "# X#X# # X X ##XX#X# X X X# #X# #XXXX## # #", "# # X ## X X# # # # #X ###X# ## X X#", "# X ### #X ## X ### ## @X #X### # X ## XX XX#", "##X XXX#X XXX## # XX #X X #XXXX # X# #X# #", "# X ## ### XX #X#X#X # # #X# ##X X###", "##X # #X# #### XX# X #X # # # ## X #X#X ## # #", "# X # X## X# # X#XXX##X X X ## X# X # ## #", "# ##X## #X # XX X X##X #X# ## XEX #X# ## XXX#", "# #X #XX####X###### X ###X##X# # X#X ##X #", "### # # X #X# X X# ## # # X X X## # ####", "## #X #X # XX###### ##X ##X # # X## XX##", "# ##X # # X#X X ## ##X#X## #X #XX#X # # ##", "#X# #X##X###X X # #X # # # # ### XX #X #X #", "#X# ## X ## # ### #X # XX###XX# # X #X # ##X# #", "# # ### ### X###X # X ## # X X## X # X#", "# X #XX### #X## X X### # # X #X##XXX# # #", "#X X X X X# X# ## X # XXX##X##X ## #X## #", "## X# # # # X## ## #X XX X ## # # # #", "## XX###X # X# X #XX # # X# XXX #X #X# X#", "# X##X# X X X## ## #XX ##X X# ##X # ##", "## X #XX# XX#XX## # # # XXX X X## # XX##", "# ## X # # ##X XX# ### ## X XX # X# # ### # #", "# X X X XX XXX#X##X X## ### X #X# #X ## ##", "#XXX# ###X# XX X# XX ##XX## #X # # # ## X #", "# ##XX ##X# # #X X#X#X# XX #####XX X ##X## #X #", "###XXX ## #X#X ### ##X#X X X## X X X #X ##", "## #X# X###X# # XX X X X# ## ## # #X#XX##", "# X#XX XX ##X X #X X#X# ##X ##XX# ##X# #X X #", "# X X # #X #XX # ### # #### X # #XX XXX XX X##", "# XX X##X# X# ### # # X# X#XXXXXX #X# #X#", "# #X #XXX# # X##X # X X X ##X# X###X# # ##X##", "##X #X# # X X ## # # ## X# X #XX ## ## ## #", "## XX#X###X X###X# X X###X ##X #X## ###X X ###X#", "# #XX#X##X## #X###X X# # # X# X #### # ### X #", "# # ## # X # XX X# XXX# XX ### #X ##", "#X## # X # # # ####XX#XX# ###XX XXX # X #", "#XXX## #X# #XX# ## X#X #X# X X## XX ##XX#", "#X X # # X X #XXX#### # #X X#X ## ## ## #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int pills = 5;
    int pspeed = 40;
    int dspeed = 31;
    int door = 186;
    vector<string> lab = {"##################################################", "# # X##X X# XX XX #X X## # # # X X#XX##", "#XX X X###X X## ####X## ## #XX#X# #XX X #X#####", "# X#XX X # # # X# #X X## #X X### # #X#X#", "###X # X## ###X# ### X ## # X ### X X## #X X###", "###XX ## #X ### #X #X X # # X##X##XX# # #", "#X # #X#XX# # ###X # # ###X ## # # # #", "### X#XX### X #X ##XX # X #X# X # ## X#X#", "####X ####XX# X# X #XXX X## # ####XX# XX#", "# XXXX XX##X # # #XX ## X## X## XX # X# X## #", "# ## # XX # X X# #XXX # # #XX ##X # ##", "# X### # XX# ### XX # # XX# X#### # X # X#", "###### X#X## # # #X # ## ## ## #X#X X#XX X# #", "# X# #X#X #X# XX##X#X ### X#XX# # X####XX X##X#", "#X#X # XX # #XX # ## # #X ##XX X# X X ## ##", "#X# ##XX#X XX ## #X EX# X # # XX X ##X # X ##", "# ### X X# X # X# X X ## # # X# XXX # X##", "# # # #X### @ XX# # # # X ## # X XX ## X##X#", "##X## XXX# ##X #XXX X X ## X#X# ### #X X XX#", "#X X#X # X## ### X#X X # #XX# XX X ##X# X X#", "#X###XX#X# X XX # #X#X XX# # # # # XX# #", "# ##X ##X #X XXXXX ###X###X# # # #### ### #X#", "### # #XX X # ##X# XX# X#X#XX X# XX# ## ##X#", "# X#XX ## # #X# X#X # XXX# # ## XX ###", "# XX #X# ## ##### # # # #X# ##X X X# # ##", "#XXX # #X# XX# # # X X XX#####X#X # # #XX # #", "##XX # XXXX# XX#X#### ## #X ## #XXXX XX#", "# ##X # # # X#XX X #X # # X##X#####X X#X# #", "# XX ## X # X# ### ## X X # X#X #X X#", "## ### # ## # X# #X### #XX# # #X#XX# ###", "# #X## XX # X #X#X#X ##X #XX## # # X## X## #", "#X## #### # X X X####X##X#X #XX## X# # X # #", "# #X # X ### ## # X#X#X X##X#XX## X X# #X XXXX#", "#X # X#X #XX XX ## X X#X# #X #XX# # ##X# ###", "## # # #X### X##X ### # X#X X X # ## XX# X# X#", "## #XX# # # #X ##XX# #X # #X X # X # # #XX#", "# X## ##XXX##### # #XXX #X #X#X X# # X# X##", "# #X# ## #XX X#XX## ## # X # # X# # # XX# ####", "# X## XX ##X ### # X## ## X# ## X ##X###", "# ## # ## XX## ### X### XX # ### XX #####X#", "#X# # ## ## X # X#X X # X #XX ##X XX X#", "## X X ##X #X # #X# ##X ## # # X# #X# X###XX#", "#### X X## #X #X##X # # ### #X##XX # # ## XX#X#", "# ### XXX # #XX### #X # X #X X # # ## ###", "# ## XX # #X### X X # # X #X#X ## # # ##", "###X #XXX# #X #X X#X### # X #X#X## # X# X##", "# #X X X#X## #X## X X### # XX # # X## #", "# ## X# # # #X #X## X# # ## X # # # X##", "# X## X #X XXX# ## ##X # XXXX ## X# ##X###", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int pills = 9;
    int pspeed = 27;
    int dspeed = 6;
    int door = 147;
    vector<string> lab = {"##################################################", "### # ##X X# X XX # XXX# X#X XX# # #### ## X# X#", "##X #X## # X # #X X##X# XX X# X####", "# # #X # ## #X#X ## X XX#X# #### # #", "### X#X # #X #XXX #XX## ##X# # ## X###X#", "### ##### ##### X#X # X# XX X##X#### X #X ###", "# # X ##XXX ##X# X#X #X## # # # X# X### XX # ##", "#X #X#X X## ####X##X X X# X# ## X###X# X##X##", "# # ## # X##X # X ####X # XX ##X# #X# # # X##", "## X ### # X # # ### #### X##X# # X### X####", "# #X XX XX### #X ## ##X##### #X# #X ##X## ##X#", "### X X# X # ###X# ## X # ##X#X# #XX# ## #", "# ## # XX# ##X X XX ### #X##XX## X ## #", "# # ###XX XX### # X XX### # # # X X ## XX#", "# #X# #X X X# X## XXX# # # X ##X XXX###X##", "# # # ## #X## # #XX## XX X# ## X X #XXX ###X ##", "# # ##X XX#### ## # # XXX ## X ##X # ##", "#X X X # # X # XX X X### ## X# XXXX# # # #X##", "# # ## # X#X# X X # # X#X X X#X # X# X#", "# # X # # ## # XX#XX ## X ###X##X# ## X#", "## X# X#XX XXXX# X#X ##X ##X# #X X#X# ###", "#XX # #XXXXX@XX# ## XX # ## X##XXX# ##X #XX#", "# XX## X# X# XX ## X# #X# ###X#XX##X###", "#X ## # XX X#XXX X ## X####X # #XX #X # #X##", "# #X##X X # #X##XX### # ## XX##X XX# X# # X#", "#X# X#X## X ##### X# XX# # X X X##XXX ###X# ##", "# # #X # X X #XEXXXX ## ###XX## X # ## XXX#", "#X# ###XX## #XX # # ## #X ##X # # XX X XX XX##", "#X # ##X# # # ## X# # X## # XX # X X X ##X#", "### #XX### X X ## #X# XXX #### # X X# # X##", "# #X ##X X # X#X #X##X# #XXX ##X X# X X##X ##", "# #XXX X X#### # #XXX #XX# ## ###", "# # # # X ## X XXX##X#X # X #X X# ##", "#X# # X######X### ##XX #X# # X #X##X XX## #XX#", "#X# X X#XX## # #XX ###XX ## X XXXX# ## #X#", "#XX# #X # XXX X ### X # X X ##X###X### X##", "#X X ###XXX X # ## # ##X #### # # # XX # #X #", "## # # # XX ## X## X ##X##### XX# # X #X#", "### # #XX XXXX# #X # #X## #XX X ####X ###", "#X#X # ##X# X X## X#X# #X ## #### ##XX # XXX ##", "##XXX# XX# ## # X# ##X X X #X #XX# X##", "## X # X## # X#X # #X # ###XX XX# #XX#X###", "##X X# X X# # # X #X # ##X X# X# XX# ###", "# XX ### # ## X ### X ## ##X#X X## X##", "#X# # # ## ##XX ###XX ###X XX XX X#", "##X#### # X #XX#####XXX#X## ##XXX#X###X## X # X##", "# # #XX #X## # #XX X#### # ## # X# X# X# #", "# XX# X###X X # # ## # ## #X#XX #XX# ## #", "#X## # X X #### X ##X# ##X # X ######## X #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int pills = 10;
    int pspeed = 93;
    int dspeed = 4;
    int door = 165;
    vector<string> lab = {"##################################################", "# XX # X# # ##X XXX#X X## # X# ## X X #XX #", "## X# #XX## #X # ##X##X##X# # ## X#X X #XXX# ##", "## ## ## XXX## ##X X# X #####X X# X #XX #XX# X#", "# X # X #X#X# X #X X# # # X### ##X#X ###", "# X# #X#X X# # X XX ###X#X #X # ## X## #", "## X X#X X# XX # #X##XE #X X#X#X XX# XX#X ####", "## ##X # ## X# ## X### # # X #X# #X #X #", "## # X## X#XX# X X # X XX##X# X# X## #X X ##", "##X # #X# ###### # XX#X # X X X# #XXX ## #X #", "# ## X# ## # # ### ## ##X X X# # X# ## ## ##", "### # XX X #XX ### #X#XXX##X#X X X#X# ## #X#X X#", "# ###X## # @ # #X# X# # ###X ## ##X #", "## ## XX# #X#X# # ###X# X#XXX XX#X # # # X##", "# ##XX# X ###X#XX### # X X # XX ##XXX #", "# X ##X# # X XX ### # X # # ## X X # X ###", "## X# # #X X# ##X # # ###X#X# #X #####X X#", "## # XXXX##X XX XX XX##X X#X # ### # ##X#", "# #X# ## X #X ##XXX # # #X##X ## X X X#X #XX#", "# # X#XX# # #X# #XX##XX # # # XX# ### ## ##X X#", "# ## ### ## ## XX ##X### X X#X #XX X ##", "#X X ### X #X # X XXX # ## #X # X XX# ####", "##X ## #X##X X## # X# ##X###X# #X X#X#####X###", "#X# X#X##X # # X# #X## ##X ## #X# #XXX#XX X ##", "##XX#X XX # #XX # X# X XX # # XX XX ## X#", "## ##X#X #X ###### ## X XX X # #X # X##XX X ##", "# ## #XX# X# X###X X#XX X X ##X## ## #X # X X #", "##X ## ####X#XXX X## #### XX # # ##X X# X#X #", "# ### # ##XXX##X#XX #X XX# X#X#XX #XX XX # # #", "# # ##X X X #X #X X# X#X## X # ## X# #XXX #", "### # # X XX ## X #XX # ##XX# #### ## #", "#X # XX ###XX X##X ## X## # X## X X#### #", "#X X X# ##X# X ####X ##X # #X ## # #", "#X##X## X### # # # X# ### XXX ## #X # # X #", "# ####X X # #X#X X#X X # # X# # #X # ##", "#X ## #X #X## #### # ###### # XX # ##XX # X#", "##X### ##X #X # # XX# XX X XX#XX # ##X #X#", "#X ## XX#XX XX##X## # # #X X# XXXXX X# ## X#", "#X ##### #X# ## # XX X### #### ### # # X #", "#X### ##XX ##### ######XX ### X# #X # X###", "# X ######X X ## XX# # # #X #X X# #X##### X# #", "# ### X ##X X# #X#X X# X # XX # ##X XX #", "# #X### ## X # X #### X##X ### # # ####XX # X#", "#X###XX# XXXXX # # X X XX## X # X#X ##", "# X# #XX X# XX #X X### #X X##X #X# X XX## X ##", "#### #X#X### #X##X# XX X### #X###X ## XX###X# #", "## X# #X### X######X##X#X X X#### X XXXX##", "# # # # #X###X# # # # # # X #XX### # # X ## #", "#X #X X# #### X X#X#X ##X X ##XX X## ## X#X#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int pills = 10;
    int pspeed = 16;
    int dspeed = 8;
    int door = 184;
    vector<string> lab = {"##################################################", "##### # ## # # X #XX XX# # # X #X##X# XXXX#", "#XX ###X# X### X### XX# #X #X X # ##X XX X# X ##", "#### X#XX XX X# X # ##XX###XX# ## XXX #X# #", "#X X# # X###X # #X #####X# #X X ## #X ##X# #X#", "# X XX####X# X## # X ## #### X X ##X### ## #", "## # #X# #X# XX # X#### X# XX#X##X#XXXXX## ###", "##X#XX #X # X XX# X #X### XX# XX X##XXXXXX# #X#", "#X # #X####X##### # # #XX# ## # X##XXX##X # ##", "## X#X XX X XX #### # #### # X X## #### XX###", "#X X# #XXXXX # # # #X #X #X X# X# X X ##XXX #", "### ## #X #### X # X #X #X#X #X# # X# X#", "#X XX# # X#X##XX X #XX #X ## X X#X##XX##", "# X# X # XX# XX X X####X# #X # #XX ###### ##", "###X##XX ## # ## X # X###XXX ##X X# ##X#X X#", "## XX## X#X XX X X#X # #X#X #X X#####X #", "####XX XX XX# ####XX X # # ### ##X##### #### ##", "# #X## # X ##X# #XXX ##XX #X X X###XX# X #", "# #XX X ## X# X X X X# XX# X # X #X#", "# # X X#X X E### ## # XXX# # ## X#X X# ###", "# # ## X # X # # X # #X#X X #X ## XX XX #", "##XX########X## # ## X # # ## #XX## #XXXX# #", "#X X# # #X# XX#X# #X ## #X## ## XX##X # ##", "## ### # ## ## X#X##X X # #XX##X## ## ## # #X#", "## ## # XX## XX ###XXX X#X # X# ##X ##X#", "#XX # # ###### # #X # X# ####X# X X# ## #", "#X##X X X X # ##X#X # X# XXX XX# X# #X XX#X# #", "# X# X#X# #XXXXXXX ###X # # X X ## # X#", "# # ###X## X# X X# # #X#X### #XX # X # ###", "# #X##X ####XX##X X X X # X X XX## # ## # #", "# #X # #XX@X #### ###XX X ##X X## XX X#X XX###", "# ## ## ##XX # # # #X# # # X # #XX#X ##", "### ### # X## # ## #### X#X X####X X###XX##", "#X #X #XX# ## # ## XX ##X#### #X # XX # #X##", "# # #X X##X XX #X#X X#XX#X # #X XX# ## #X#", "# # ## ## ## # ## #XX###XX ## X X# # X#", "## # # ## #X# #X#X #X# X ### X#X#### #X ####X # #", "##X X### X ## #X#X### ##X # # # X X X## X##X ##", "## X# # ## X#X X## X## ## ## #XX X#### ### #", "# #X # ###XX#X X#X## # ###XX X ##XXX X ##", "#X XX# ## X# XXXX X##XX # # # X ## ## X# #", "#X##X X # X # X#X X ## # XX#XXX# # # #XX##", "## X X##X# ## # X# X ##X # XX # X X X ## X #", "##X# # X## XX ## #XX### X ### XX X X X#", "## #### X X#X #### ##X#X# #X## # X# X X X#", "## # # ### ##X# X## ## X# #### ## X# XX###", "# X ##X## #XX## ## XX#X XX ## # # # X # ##", "##X XX # #X## #XXX X## # XXX# ###X#XX X#X#", "### # #X ## XX#X# ###X X##X# # #X## X X # #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int pills = 10;
    int pspeed = 1;
    int dspeed = 1;
    int door = 200;
    vector<string> lab = {"##################################################", "# # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # #X# # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "# # # # # # # # # # # # # # # # # # # # # # # # #", "#@# # # # # # # # # # # # E#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 1175;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int pills = 1;
    int pspeed = 10;
    int dspeed = 1;
    int door = 55;
    vector<string> lab = {"#####", "#@XE#", "#####"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int pills = 1;
    int pspeed = 1;
    int dspeed = 10;
    int door = 120;
    vector<string> lab = {"#########", "#XX@XXXE#", "# ##### #", "# #", "#########"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int pills = 10;
    int pspeed = 10;
    int dspeed = 1;
    int door = 55;
    vector<string> lab = {"##################################################", "#E#@ #", "## #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "# #", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
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
    int pills = 10;
    int pspeed = 1;
    int dspeed = 5;
    int door = 5;
    vector<string> lab = {"#################################################", "#E #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "# #", "# ###############################################", "# #", "############################################### #", "#@ #", "#################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 1150;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int pills = 10;
    int pspeed = 1;
    int dspeed = 1;
    int door = 100;
    vector<string> lab = {"##################################################", "# E#", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "################################################ #", "# #", "# ################################################", "# #", "# @#", "##################################################"};
    ShrinkingPills* pObj = new ShrinkingPills();
    clock_t start = clock();
    int result = pObj->escape(pills, pspeed, dspeed, door, lab);
    clock_t end = clock();
    delete pObj;
    int expected = 1175;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=9810&pm=5904
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <queue>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<int>::iterator vi_i;
typedef vector<string> vs;
typedef vector<string>::iterator vs_i;
typedef pair<int, int> pii;
 
template<class T>
void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    T tmp;
 
    out.clear();
    while (in >> tmp) out.push_back(tmp);
}
 
class ShrinkingPills
{
public:
    int escape(int pills, int pspeed, int dspeed, int door, vector <string> lab);
};
 
struct state
{
    int p;
    int h;
    int r;
    int c;
};
 
static const int dr[5] = {0, 1, 0, -1, 0};
static const int dc[5] = {1, 0, -1, 0, 0};
static int best[11][101][51][51];
 
int ShrinkingPills::escape(int pills, int pspeed, int dspeed, int door, vector <string> lab)
{
    int R = lab.size();
    int C = lab[0].size();
    queue<state> q;
    int sx = 0, sy = 0, ex = 0, ey = 0;
 
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
        {
            switch (lab[i][j])
            {
            case '@':
                sx = i;
                sy = j;
                break;
            case 'E':
                ex = i;
                ey = j;
                break;
            }
        }
 
    q.push((state) {pills, 100, sx, sy});
    memset(best, 0x3f, sizeof(best));
    best[pills][100][sx][sy] = 0;
    while (!q.empty())
    {
        state cur = q.front();
        int t = best[cur.p][cur.h][cur.r][cur.c] + 1;
        q.pop();
 
        for (int take = 0; take < 2; take++)
        {
            if (take && (cur.p == 0 || cur.h < 100)) continue;
            state nxt = cur;
            if (take || nxt.h < 100) nxt.h -= pspeed;
            if (nxt.h <= 0) nxt.h = 100;
            if (take) nxt.p--;
 
            for (int d = 0; d < 5; d++)
            {
                nxt.r = cur.r + dr[d];
                nxt.c = cur.c + dc[d];
                if (lab[nxt.r][nxt.c] == '#') continue;
                if (lab[nxt.r][nxt.c] == 'X' && door - dspeed * t < nxt.h) continue;
                if (lab[nxt.r][nxt.c] == 'E') return t;
                if (t < best[nxt.p][nxt.h][nxt.r][nxt.c])
                {
                    best[nxt.p][nxt.h][nxt.r][nxt.c] = t;
                    q.push(nxt);
                }
            }
        }
    }
    return -1;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/