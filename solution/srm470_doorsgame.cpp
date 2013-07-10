/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10915
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

class DoorsGame {
public:
    int determineOutcome(string doors, int trophy);
};

int DoorsGame::determineOutcome(string doors, int trophy) {
    int ret;
    return ret;
}


int test0() {
    string doors = "ABCD";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABCC";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string doors = "ABABAB";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABAPDCAA";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string doors = "MOCFDCE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string doors = "ABCCDE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ACC";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABCDEFGHIJKLMNOP";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string doors = "ABCDEFGHIJKLMNOP";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string doors = "ABCDEFGHIJKLMNOP";
    int trophy = 9;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string doors = "ABCDEFGHIJKLMNOP";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 16;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 9;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 24;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "PNKCMCHKPBAGAOHACNGAFEPOKGABHMBKHNHJBAHKLPDOJLNPFC";
    int trophy = 40;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABCDEF";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "PDBGECCBAGBE";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string doors = "JKANOBFNGPHOCLBCJCAKEPEIPKAICPKECKKKDPEADMCPDAMIAP";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "JOJJJOOJJOOJOJJJOJJJOOJJONNJJJJJNJJJJNJNNNJJJNNNJJ";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string doors = "NIAEGMBJOKPCLHDFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string doors = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIJELFBHNOMCPDGAK";
    int trophy = 35;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string doors = "JPJPHGFJMIEELJKBOPNGABCEDBCHJAEPDKGIBCMIEFDIPFGNLO";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string doors = "JMPLADFNIKODPMECJGIB";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string doors = "PHHNBBNHGPNFIOHHFOJBEHOJOLKMDHDLEPDMLIAAPAAHHDHAJK";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string doors = "KDHHFIMECBHDBINLLKPLALALDKKAOJPPPLAOKLLPIOKEGIPIAP";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string doors = "FJLNGJMGCENHEAFBFLHAMBMKDKBBKEJMOJBBKOMMJOMJBBMIKD";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string doors = "HNJDJEMJCMEHFPIMKKOLGNBINBABIGAIGGDNGNAGDLNNAIBANB";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string doors = "DHODKMNBNDKOHIKKNHHKMPJLFGACBAPEIKKIA";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string doors = "ABDFBBLBACJJFDDDLCDJFMJMPNHCEOGKNAEI";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string doors = "HHPDLALMJNOEACMKGDMGNMHPFCEBILCJDB";
    int trophy = 17;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "JNJMEEMBBKNCPCNKKMNMEBPKNGIDDHHAGOAAIHGFHLGFFODDLL";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string doors = "GIMOCNAPDLKLDFJDHFHLFKJKFJDKKBLLKJDDJDDLFBDEFLKEKB";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string doors = "OJHBPEKMNFCLDLCDGCLAIAADDDACICCGFFGKAICKLKIFKKDDII";
    int trophy = 9;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string doors = "NCJIFEHPGDBKHODHKADHBOMHMABLDBOALDDHLDDMHBOLMKAHLO";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 6;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 9;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 11;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 12;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 13;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 16;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 17;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 18;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string doors = "LBKPFOANFCACMDHGIEJK";
    int trophy = 19;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 6;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 9;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 11;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 12;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 13;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 16;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 17;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 18;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 19;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 20;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 21;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 22;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 23;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 24;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -10;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 26;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 27;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 28;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 29;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 30;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string doors = "ACFAPCKKBNNLOOLOJKAAKGCCMHIDHDEI";
    int trophy = 31;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string doors = "ACFAPCKKBNNLLLLOJKAAKGCCMHIDHDEI";
    int trophy = 13;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string doors = "ACFAPCKKBNNLLLLOJKAAKGCCMHIDHDEI";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string doors = "ACFAPCKKBNNLLLLOJKAAKGCCMHIDHDEI";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string doors = "ACFAPCKKBNNLLLLOJKAAKGCCMHIDHDEI";
    int trophy = 16;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string doors = "DOLPHINIGLE";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string doors = "DOLPHINIGLE";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -8;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string doors = "DOLPHINIGLE";
    int trophy = 6;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string doors = "DOLPHINIGLE";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string doors = "ABCDE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string doors = "ABCCD";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string doors = "ABCCDEFG";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string doors = "OP";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string doors = "PP";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string doors = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    int trophy = 37;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string doors = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string doors = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII";
    int trophy = 49;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string doors = "ABGAABCD";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string doors = "ABCEFABD";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string doors = "ABCDEFGHIJKLMOPEFGHIJKLMOPHIJKLMOAAAAAAAALLMOPEFGH";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string doors = "ABDCEFGHIJKLMNOPOPAKBJMNFEHI";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string doors = "ABCDDDDDAPABCDDDDAPABCDDABDAPABCDDDEAPABCDDDDDAP";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOP";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string doors = "AAABCD";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string doors = "ABCDEHPABCDLMNO";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string doors = "ABAC";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string doors = "IPMOFECNMELGIGELPEPLDLLFFPNKHELNDBLCNAMMAGCDHKDJEE";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string doors = "AJHIDDENMLBJEFFPODFGLMNGHEIJFJBMNLBCDDEDAGFE";
    int trophy = 23;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string doors = "AB";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
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
    string doors = "ABCDEDEFGHK";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    string doors = "ABCDEFCBA";
    int trophy = 6;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    string doors = "ABCDEFGHIJKLABCDEFGHIJKLMN";
    int trophy = 12;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    string doors = "ABCDEFGHIJKLMNPPNMLKJIHGFEDCBA";
    int trophy = 16;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    string doors = "CCCCCCCCCCCCCCABAPDCAACCCCCCCDDDDDDDDDDDCCCCCCCCCC";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -4;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    string doors = "ABCA";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    string doors = "OCAJBBLJLDGLMHMOJEONMGHHODCNIDLLGPDKNJIFP";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    string doors = "ABCDAB";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    string doors = "ADBCIFGFGDE";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    string doors = "ABCDBCDEF";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    string doors = "ABCDEFGHIJKLMNOLKJIHGFEDCBA";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    string doors = "ADCCB";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    string doors = "ABCDEFGHIJKLMNOAAAAAABCDEFGHIJKLMNOP";
    int trophy = 18;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    string doors = "DOEBMGOCAJBBLJLDGLMHMOJEONMGHHODCNIDLLGPDKN";
    int trophy = 34;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -14;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    string doors = "AAAAAAACCCCCCCCCCAAABBDEFHIJKLMOPACBBBBBBBB";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    string doors = "ABABC";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    string doors = "ABCDAAAE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    string doors = "ABAPDEACCCCAAABCDFHIJKLAABB";
    int trophy = 13;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    string doors = "ABCDECDE";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    string doors = "PCGDPBNCCHMGNHIJOGFCCOGGIAEAFNOOJHAMCDHFPCDGIAOFNM";
    int trophy = 24;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    string doors = "ABCDEFGHIIIIIIIIABCDEFGHIJKLMNOP";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    string doors = "ABCABCD";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    string doors = "ABCDEFGHIJKLMNOPPONMLKJIHGFEDCBAPMNABCDJKIPMED";
    int trophy = 8;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    string doors = "ABCDEFGHIJKLMNABCDEFGHIJKLMNOP";
    int trophy = 14;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    string doors = "ABDEDEC";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    string doors = "AAAAAAAA";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    string doors = "DABCD";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -2;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    string doors = "ABCDEFGABCD";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    string doors = "ABDEDECFG";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    string doors = "ABA";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    string doors = "NGLEEBOCEBBNMHAJOBBBMHOBOHKMLGPIMKMALLCPMEMILMC";
    int trophy = 32;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    string doors = "ABCDCDEFG";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    string doors = "ABGHIIHGCDEF";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    string doors = "ABCBCDE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    string doors = "ABCDEC";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    string doors = "DEPIPJIMAJMAKCHDKJDOLLEHIHFEEDNDGBGBCEDFKMEPLIPOML";
    int trophy = 41;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -12;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    string doors = "AAAAADBAC";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    string doors = "AAAAAAA";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    string doors = "ABCDEDCE";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    string doors = "ABCDDEFGHI";
    int trophy = 4;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    string doors = "ABCDEFGHIJJIH";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    string doors = "ABACBA";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    string doors = "BCDEFGHIJKLMNONOHIJKJOCBCBDJA";
    int trophy = 15;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    string doors = "ABA";
    int trophy = 1;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    string doors = "ABDCFGFGDE";
    int trophy = 7;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    string doors = "ABCAB";
    int trophy = 2;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    string doors = "ABCCEFPD";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = -6;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    string doors = "ABCCBDE";
    int trophy = 3;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    string doors = "ABPAKLABKLAKLFEKLALBKGKLHG";
    int trophy = 10;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    string doors = "ABCDEABPPPP";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    string doors = "ABCDEFGHIJKLMNOPABCDEFGHIJKLMNOPABCDEFGHIJKLMNOPAB";
    int trophy = 25;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    string doors = "AIKMMJPEECBOMKDNCMIMBBHGGAHCJHCGFALADHOPFDNCBMGMNM";
    int trophy = 5;
    DoorsGame* pObj = new DoorsGame();
    clock_t start = clock();
    int result = pObj->determineOutcome(doors, trophy);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22861529&rd=14153&pm=10915
********************************************************************************
#include <string> 
#include <set> 
 
using namespace std; 
 
class DoorsGame 
{ 
  public: int determineOutcome( string doors, int trophy ) 
  { 
    int i, n = doors.size(), sizeJohn, sizeGogo, sizeSaerto; 
    set <char> stJohn, stGogo, stSaerto; set <char>::iterator it; 
    for ( i = 0; i < trophy; i++ ) 
      stJohn.insert( doors[i] ); 
    for ( ; i < n; i++ ) 
      stGogo.insert( doors[i] ); 
    for ( it = stGogo.begin(); it != stGogo.end(); it++ ) 
      if ( stJohn.count( *it ) ) stSaerto.insert( *it ); 
    sizeJohn = stJohn.size(); 
    sizeGogo = stGogo.size(); 
    sizeSaerto = stSaerto.size(); 
    if ( sizeJohn <= sizeGogo )  
      if ( sizeGogo - sizeJohn >= sizeSaerto ) return 2 * sizeJohn - 1; 
    if ( sizeGogo < sizeJohn && sizeJohn - sizeGogo > sizeSaerto ) return -2 * sizeGogo; 
    return 0;   
  } 
};

********************************************************************************
*******************************************************************************/