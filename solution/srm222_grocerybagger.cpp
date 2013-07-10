/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3450
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

class GroceryBagger {
public:
    int minimumBags(int strength, vector<string> itemType);
};

int GroceryBagger::minimumBags(int strength, vector<string> itemType) {
    int ret;
    return ret;
}


int test0() {
    int strength = 2;
    vector<string> itemType = {"DAIRY", "DAIRY", "PRODUCE", "PRODUCE", "PRODUCE", "MEAT"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
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
    int strength = 3;
    vector<string> itemType = {"DAIRY", "DAIRY", "PRODUCE", "PRODUCE", "PRODUCE", "MEAT"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int strength = 10;
    vector<string> itemType = {};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int strength = 5;
    vector<string> itemType = {"CANNED", "CANNED", "PRODUCE", "DAIRY", "MEAT", "BREAD", "HOUSEHOLD", "PRODUCE", "FROZEN", "PRODUCE", "DAIRY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
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
    int strength = 2;
    vector<string> itemType = {"CANNED", "CANNED", "PRODUCE", "DAIRY", "MEAT", "BREAD", "HOUSEHOLD", "PRODUCE", "FROZEN", "PRODUCE", "DAIRY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int strength = 11;
    vector<string> itemType = {"GTIIHVQ", "GTIIHVQ", "PFPDCBOEJ", "PFPDCBOEJ", "JFRIOPWZXTAWOBPSMLNFMBQATNVWC", "GTIIHVQ", "JFRIOPWZXTAWOBPSMLNFMBQATNVWC", "GTIIHVQ", "PFPDCBOEJ", "GTIIHVQ", "GTIIHVQ", "PFPDCBOEJ", "FXOKNOCHJPFKXOXZNBTQKFBSNBHAOGYQIGFDHNL", "GTIIHVQ", "GTIIHVQ", "PFPDCBOEJ", "GTIIHVQ", "PFPDCBOEJ", "JFRIOPWZXTAWOBPSMLNFMBQATNVWC", "GTIIHVQ", "GTIIHVQ", "GTIIHVQ", "PFPDCBOEJ", "GTIIHVQ", "GTIIHVQ", "GTIIHVQ", "GTIIHVQ", "GTIIHVQ", "PFPDCBOEJ", "GTIIHVQ", "PFPDCBOEJ", "PFPDCBOEJ"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int strength = 37;
    vector<string> itemType = {"VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT", "VSUGSVKPCPQWBXJPBKT"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int strength = 27;
    vector<string> itemType = {"WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "TNQAGBBDWOBVXIC", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "UVPXOPN", "TNQAGBBDWOBVXIC", "ECNAUROLXFIJZWJSTJ", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "ECNAUROLXFIJZWJSTJ", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "OJBQHUQYRVXDFDNROLCDBIBIKWBSGUIAJNGFBZPMQYKWJRTOKM", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "TNQAGBBDWOBVXIC", "ECNAUROLXFIJZWJSTJ", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "TNQAGBBDWOBVXIC", "TNQAGBBDWOBVXIC", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "PFDCDKEEMCFXWHUAIVXUBRGK", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "TNQAGBBDWOBVXIC", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "AOLGNYQPVAPNYRZJNPLORJWQRXWCBKKHAHXM", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "WBYKLAISBNYQHGZLULPEURFPXRSYUMXI", "TNQAGBBDWOBVXIC", "OJBQHUQYRVXDFDNROLCDBIBIKWBSGUIAJNGFBZPMQYKWJRTOKM"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int strength = 19;
    vector<string> itemType = {"CTBNGESALQIGSYEPBYFQTRWJWQHNGEXHMJZC", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "NBOGFFSENJKVOKCRQSPAELQOXTSPF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "NBOGFFSENJKVOKCRQSPAELQOXTSPF", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "NBOGFFSENJKVOKCRQSPAELQOXTSPF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "CTBNGESALQIGSYEPBYFQTRWJWQHNGEXHMJZC", "CTBNGESALQIGSYEPBYFQTRWJWQHNGEXHMJZC", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "SNRVIRFILQWIASMWGQFOAYIDSBWNZF", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX", "FGXAFVMMGPXEMEMZSQXPPGLAMJEWGMPIRTMAUKYKMYSCQBUX"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int strength = 14;
    vector<string> itemType = {"GIY", "GIY", "GDKEUGBSDLVIQBYFIHYTPBVNHJXOTMJYIQOOBYGZSNCWXWSK", "C", "GIY", "GIY", "C", "C", "GIY", "C", "C", "C", "GIY", "GIY", "GIY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int strength = 45;
    vector<string> itemType = {"XEUXDJXUYMWCXQUKTYMMCFAGDLPAQXUEFFWAWAKTSLHXCET", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "RUKJASCCIGF", "HVIIZKRLPFTYBCO", "RUKJASCCIGF", "XEUXDJXUYMWCXQUKTYMMCFAGDLPAQXUEFFWAWAKTSLHXCET", "RUKJASCCIGF", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "UEWDPQBHJ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "RUKJASCCIGF", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ", "XQERREFZWJKEAZPRITSQCYVLNKPZOOUVDVBQRJFESWFZ"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int strength = 6;
    vector<string> itemType = {"FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "BVAEUFCHUVYCKYVAKZV", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "YEPDMDYH", "YEPDMDYH", "WUOWLXYQNTKQOOKNQQMSBQVTBMCOUDVWTULGBOFCLXYXD", "BVAEUFCHUVYCKYVAKZV", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "YEPDMDYH", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "YEPDMDYH", "BVAEUFCHUVYCKYVAKZV", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "BVAEUFCHUVYCKYVAKZV", "FLGULCPGRLQHJHSLCVEFQVJBAJA", "YEPDMDYH", "YEPDMDYH", "YEPDMDYH", "BVAEUFCHUVYCKYVAKZV", "BVAEUFCHUVYCKYVAKZV"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int strength = 6;
    vector<string> itemType = {"WNOZQPDWMCAHZJDMGMIMNAXKCIZOSSNZRJGGX", "WNOZQPDWMCAHZJDMGMIMNAXKCIZOSSNZRJGGX", "WNOZQPDWMCAHZJDMGMIMNAXKCIZOSSNZRJGGX", "WNOZQPDWMCAHZJDMGMIMNAXKCIZOSSNZRJGGX", "WNOZQPDWMCAHZJDMGMIMNAXKCIZOSSNZRJGGX"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
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
    int strength = 24;
    vector<string> itemType = {"TOJRFIDS", "DXJHGHYMLDUDWRWFGZRMNHPNDKXCGQJJRYBTLDHVDOYOFUYRT", "TOJRFIDS", "TOJRFIDS", "DXJHGHYMLDUDWRWFGZRMNHPNDKXCGQJJRYBTLDHVDOYOFUYRT", "DRPQYQWVSQHITYHZGK", "PGLJNCANRZUIFTJZGTFFOINMLXKPGCDQSHZVUFBDPAJOTIEF", "TOJRFIDS", "DVTBJRYSGUMPABCWJCEFUTPCQ", "DFQ", "TOJRFIDS", "DFQ", "DFQ", "DRPQYQWVSQHITYHZGK", "TOJRFIDS", "DFQ", "GBVRPLKY", "TOJRFIDS", "TOJRFIDS", "PGLJNCANRZUIFTJZGTFFOINMLXKPGCDQSHZVUFBDPAJOTIEF", "DXJHGHYMLDUDWRWFGZRMNHPNDKXCGQJJRYBTLDHVDOYOFUYRT", "DFQ", "DXJHGHYMLDUDWRWFGZRMNHPNDKXCGQJJRYBTLDHVDOYOFUYRT", "TOJRFIDS", "TOJRFIDS", "DVTBJRYSGUMPABCWJCEFUTPCQ", "TOJRFIDS", "DFQ", "DFQ", "DFQ", "DRPQYQWVSQHITYHZGK", "PGLJNCANRZUIFTJZGTFFOINMLXKPGCDQSHZVUFBDPAJOTIEF", "DFQ", "DFQ", "TOJRFIDS", "DXJHGHYMLDUDWRWFGZRMNHPNDKXCGQJJRYBTLDHVDOYOFUYRT", "TOJRFIDS", "TOJRFIDS", "PGLJNCANRZUIFTJZGTFFOINMLXKPGCDQSHZVUFBDPAJOTIEF", "TOJRFIDS", "TOJRFIDS"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int strength = 7;
    vector<string> itemType = {"KHZF", "KHZF", "KHZF", "KHZF", "KHZF", "KHZF", "KHZF", "GQYQEMSYWWL", "KHZF", "GQYQEMSYWWL", "GQYQEMSYWWL", "GQYQEMSYWWL", "KHZF", "KHZF", "KHZF", "KHZF", "KHZF", "KHZF", "GQYQEMSYWWL"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int strength = 3;
    vector<string> itemType = {"TGQYBCTPETXB", "TGQYBCTPETXB", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "TGQYBCTPETXB", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "TGQYBCTPETXB", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "TGQYBCTPETXB", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "ZIUIRQZRDEUHLDQRQMTZZBTG", "YDEUSXZLTAFNVICQINK", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD", "AISRSLIGANJQJFIWSLCLMTODPEFRVEEZKAJRTCALRXFEOYBBD"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
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
    int strength = 7;
    vector<string> itemType = {"OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ", "OHYQDNLTEJFPFVSBLQTPDUZ"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int strength = 15;
    vector<string> itemType = {"KVREIURMMGTKRDYNQNFPPBRLXZP", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ", "TUULOLANMRPGATGVAEAMMOUSFJNEEO", "LXVMSITFOKFZXIRHDNUZ", "DCNPRDMK", "TUULOLANMRPGATGVAEAMMOUSFJNEEO", "LXVMSITFOKFZXIRHDNUZ", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ", "LXVMSITFOKFZXIRHDNUZ", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ", "LXVMSITFOKFZXIRHDNUZ", "KVREIURMMGTKRDYNQNFPPBRLXZP", "KVREIURMMGTKRDYNQNFPPBRLXZP", "TUULOLANMRPGATGVAEAMMOUSFJNEEO", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ", "KVREIURMMGTKRDYNQNFPPBRLXZP", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ", "LXVMSITFOKFZXIRHDNUZ", "LXVMSITFOKFZXIRHDNUZ", "KVREIURMMGTKRDYNQNFPPBRLXZP", "LXVMSITFOKFZXIRHDNUZ"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int strength = 41;
    vector<string> itemType = {"EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "GTGLSOJQRFDQDTAMHQTSTAJQXXWUOZ", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "BKTMDDEUYXJVCUUQOUYAEDRS", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "BKTMDDEUYXJVCUUQOUYAEDRS", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO", "EBFCQZUOWSLHYWYFDNQQSSWUXGSUOVXSHBBDSDCOFPYLLIO"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int strength = 12;
    vector<string> itemType = {"WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "NTFMGVFYQONSIQKDGPLJPQNZPKWGBILINDSZKGKDSCPKNDIW", "ZLSYRWDEXVNEMJITBESKSKMXERER", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW", "WKPDXGOCQRWUCTJIQVAQABR", "GRYIPVSKPRIQAJQTSFJXJBOHNBIYZSRCGEW"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int strength = 39;
    vector<string> itemType = {"ARYQRTRPIMVSUYGFFEHFYTMGM", "FJ", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "ARYQRTRPIMVSUYGFFEHFYTMGM", "GLABAMYFUOYWJPMMY", "GLABAMYFUOYWJPMMY", "ARYQRTRPIMVSUYGFFEHFYTMGM", "ARYQRTRPIMVSUYGFFEHFYTMGM", "FJ", "ARYQRTRPIMVSUYGFFEHFYTMGM", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "FDBTFNCMZVRRTJNVQBYLKKAZULQG", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "UBCHVHKLIEW", "QLXCBHDBKRWNKCTNLSTKRXYVRHTO", "ARYQRTRPIMVSUYGFFEHFYTMGM", "LQWQZABGNJIQEMFQNMBRSGERIXUDAUXWWI", "FJ", "TJJWIWIWTMDSYXEZAHEXBGPUWQGONVJPVCHS", "UBCHVHKLIEW", "TJJWIWIWTMDSYXEZAHEXBGPUWQGONVJPVCHS", "AYQVHTAMSGILWFJRBAC", "ARYQRTRPIMVSUYGFFEHFYTMGM", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "ARYQRTRPIMVSUYGFFEHFYTMGM", "TJJWIWIWTMDSYXEZAHEXBGPUWQGONVJPVCHS", "UBCHVHKLIEW", "UBCHVHKLIEW", "ARYQRTRPIMVSUYGFFEHFYTMGM", "ARYQRTRPIMVSUYGFFEHFYTMGM", "ARYQRTRPIMVSUYGFFEHFYTMGM", "ARYQRTRPIMVSUYGFFEHFYTMGM", "GLABAMYFUOYWJPMMY", "ARYQRTRPIMVSUYGFFEHFYTMGM", "GLABAMYFUOYWJPMMY", "UBCHVHKLIEW", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "GLABAMYFUOYWJPMMY", "UBCHVHKLIEW", "TJJWIWIWTMDSYXEZAHEXBGPUWQGONVJPVCHS", "UBCHVHKLIEW", "GLABAMYFUOYWJPMMY", "GLABAMYFUOYWJPMMY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int strength = 27;
    vector<string> itemType = {"MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX", "MGCMX"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int strength = 10;
    vector<string> itemType = {"WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "ITC", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP", "WOVDHMTQLGADAGZXESBNWHQBRTTKXWJSRSSKPZXEOUXGMP"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int strength = 16;
    vector<string> itemType = {"CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "WEYCYJGNSEYNWSOGJNQUOTRORACEQB", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS", "CPILIIDEYNUUQTCBKCKKWLONEAOS"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
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
    int strength = 4;
    vector<string> itemType = {"TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "CGNEPQCMWHPPUYUZHQHAOZYAYZ", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "FPPZBRYSVOSBZUE", "CGNEPQCMWHPPUYUZHQHAOZYAYZ", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "EGACKTEUCTBVHRMLUBTUYKMNDWECSPRTKXBFNANMVAASKYPMY", "EGACKTEUCTBVHRMLUBTUYKMNDWECSPRTKXBFNANMVAASKYPMY", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "CGNEPQCMWHPPUYUZHQHAOZYAYZ", "FMMJLRNPDVNLFVDBHLJOPHOUMC", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "CGNEPQCMWHPPUYUZHQHAOZYAYZ", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH", "TEYWTWCXHKJTCBEDVQNBDOLSKJKMH"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int strength = 2;
    vector<string> itemType = {"CANNED", "CANNED", "PRODUCE", "DAIRY", "MEAT", "BREAD", "HOUSEHOLD", "PRODUCE", "FROZEN", "PRODUCE", "DAIRY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int strength = 5;
    vector<string> itemType = {"A", "A", "A", "A", "A", "A", "A", "A"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int strength = 3;
    vector<string> itemType = {"A", "A", "A", "A", "A"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int strength = 3;
    vector<string> itemType = {"DAIRY", "PRODUCE", "WHEAT", "DAIRY", "PRODUCE", "WHEAT", "DAIRY", "PRODUCE", "WHEAT"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int strength = 3;
    vector<string> itemType = {"A", "A", "A", "A", "B", "B", "B", "B", "C", "C", "C", "C"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int strength = 10;
    vector<string> itemType = {};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int strength = 50;
    vector<string> itemType = {"DAIRY", "DAIRY", "DAIRY"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int strength = 1;
    vector<string> itemType = {"A", "A", "A", "A", "B", "B", "B"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int strength = 2;
    vector<string> itemType = {"A", "A", "A", "A", "A", "B"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int strength = 1;
    vector<string> itemType = {"A"};
    GroceryBagger* pObj = new GroceryBagger();
    clock_t start = clock();
    int result = pObj->minimumBags(strength, itemType);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=287105&rd=5868&pm=3450
********************************************************************************
#include <algorithm>
#include <climits>
#include <cmath>
#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <queue>
#include <deque>
#include <functional>
#include <complex>
#include <map>
#include <set>
using namespace std;
#define fu(i,n) for( int i = 0; i < (n); ++i )
#define fr(i,S,E) for( typeof(E) i = (S); i != (E); ++i )
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
typedef long long i64;
typedef vector<int> VI; typedef vector<VI> VVI;
typedef vector<string> VS; typedef pair<int,int> PII;
 
map<string,int> mp;
 
struct GroceryBagger {
int minimumBags( int strength, vector <string> itemType ) 
{
    int r = 0;
    fu(i,itemType.size()) mp[itemType[i]]++;
    
    for( map<string,int>::iterator it = mp.begin(); it != mp.end(); ++it ) {
        r += (it->second + strength - 1) / strength;
    }
 
    return r;
}
 
};

********************************************************************************
*******************************************************************************/