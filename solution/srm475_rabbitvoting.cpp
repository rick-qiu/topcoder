/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10881
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

class RabbitVoting {
public:
    string getWinner(vector<string> names, vector<string> votes);
};

string RabbitVoting::getWinner(vector<string> names, vector<string> votes) {
    string ret;
    return ret;
}


int test0() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Bill", "Dick", "Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Carol", "Carol", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Alice", "Alice", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> names = {"Alice", "Bill"};
    vector<string> votes = {"Alice", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> names = {"WhiteRabbit", "whiterabbit", "whiteRabbit", "Whiterabbit"};
    vector<string> votes = {"whiteRabbit", "whiteRabbit", "whiteRabbit", "WhiteRabbit"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "whiteRabbit";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "a", "a", "a", "a", "a", "a"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "i", "i", "i", "e", "e", "e"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "g", "g", "g", "h", "h", "h"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "g";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "e", "e", "e", "i", "i", "i"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "f", "f", "c", "c", "d", "d"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "a", "d", "d", "g", "g", "h", "h"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i"};
    vector<string> votes = {"a", "a", "c", "f", "d", "d", "h", "h", "h"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> names = {"Lapin", "Rabbit", "Triusiai", "Iepure", "Zets", "Kaniner", "Kinnen", "Cuniculus", "Keun", "Kanin", "Tho", "Kuniklo", "Ukaliatsiaq", "Cunich", "Hare", "Kroliki", "Lapaki", "Usagi", "Kralik", "Krolik", "Arnab", "Cwningen", "Conill", "Coning", "Counel", "Lapen", "Kuneho", "Konijn", "Kouneli", "Gah", "Tochtli", "Coelho", "Conilio", "Kelinci", "Cunigghiu", "Coniglio", "Thue", "Trus", "Lepus", "Kaninchen"};
    vector<string> votes = {"Usagi", "Gah", "Konijn", "Cwningen", "Ukaliatsiaq", "Kuniklo", "Kelinci", "Conill", "Cuniculus", "Conilio", "Lapen", "Kroliki", "Lapaki", "Thue", "Hare", "Kouneli", "Coniglio", "Cunigghiu", "Kaniner", "Usagi", "Tho", "Kanin", "Kuneho", "Zets", "Triusiai", "Lapin", "Lepus", "Trus", "Kralik", "Rabbit", "Kinnen", "Counel", "Krolik", "Keun", "Arnab", "Coning", "Iepure", "Coelho", "Cunich", "Tochtli"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Usagi";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> names = {"Alice", "Bill"};
    vector<string> votes = {"Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> names = {"Alice", "Bill"};
    vector<string> votes = {"Bill", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> names = {"Alice", "Bill"};
    vector<string> votes = {"Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Bill", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Bill", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Bill", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Carol", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Carol", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Carol", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Alice", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Alice", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Alice", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Carol", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Carol", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Carol", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Alice", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Alice", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Alice", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Bill", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Bill", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Bill", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Alice", "Carol", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Bill", "Carol", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> names = {"Alice", "Bill", "Carol"};
    vector<string> votes = {"Carol", "Carol", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> names = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrA", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrB", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrC", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrD", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrE", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrF", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrG", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrH", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrI", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrJ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrK", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrL", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrM", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrN", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrO", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrP", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrQ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrS", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrT", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrU", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrV", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrW", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrX", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrY", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrZ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrra", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrb", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrc", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrd", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrre", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrf", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrg", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrh", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrri", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrj", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrk", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrl", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrm", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrn", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrro", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrp", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrq", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrs", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrt", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrru", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrw", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx"};
    vector<string> votes = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> names = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrA", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrB", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrC", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrD", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrE", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrF", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrG", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrH", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrI", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrJ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrK", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrL", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrM", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrN", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrO", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrP", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrQ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrS", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrT", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrU", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrV", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrW", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrX", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrY", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrZ", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrra", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrb", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrc", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrd", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrre", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrf", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrg", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrh", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrri", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrj", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrk", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrl", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrm", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrn", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrro", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrp", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrq", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrs", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrt", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrru", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrw", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx"};
    vector<string> votes = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrx"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrv";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> names = {"gggggggggggggggggg", "G", "gggggggggggggggggggg", "ggggggggggggggggggg", "ggggggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGG", "gggggggggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ggggggggggggggggggggggggggggggggggggggggggg", "ggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGG", "g", "ggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "gggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "gggggggggg", "GGG", "gggggggggggggggggggggggg", "ggggggggggggg", "gggggggggggggg", "GGGGGGG", "gggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ggggggggggggggggg", "gggggggggggggggggggggggggggggg", "GGGGGGGG", "GGGGG", "gggggggggggg", "ggggggggggggggggggggggggggggggggg", "gggggggggggggggg", "ggggggggggggggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGG", "GGGGGG", "ggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggggggggggggggggggggg"};
    vector<string> votes = {"G", "G", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGG", "ggggggggggggggggggg", "gggggggggggggggggggg", "GGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "gggggggggggggggggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGG", "gggggggggggggggggggggggggggggggg", "ggggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "gggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ggggggggggggggggggggggggggggggggggggggggggg", "gggggggggggg", "gggggggggggg", "ggggggggggggggg", "ggggggggggggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGG", "gggggggggggggggggggggggggggggggg", "ggggggggggggggggggggggggggggggggg", "gggggggggggggggg", "g", "g", "GGGGG", "GGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGG", "ggggggggggggggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ggggggggggggggggggggggggggggggggg", "GGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "gggggggggggggggggggggggg", "gggggggggggg", "ggggggggggggggggggggggggg", "gggggggggg", "GGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGGG", "ggggggggggggggggggggggggggg"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "GGGGGGGGGGGGGGGGGGGGGGGG";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> names = {"rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrr", "RRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRR", "RRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRR", "rrrr", "rrrrrrrrrrrrrrrrrrrrrrrrr", "rr", "rrrrrrrrr", "r", "R", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrr", "rrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRR", "rrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrr", "RRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRR"};
    vector<string> votes = {"rrrrrrrrrrrrrrr", "R", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrr", "rr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rr", "RRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRR", "R", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr", "RRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "rrrrrr", "RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRRRRRR", "RRRRRRRRRRRRRRRRRRR", "RRR", "RRRRRRRRRRRRR", "rrrrrrrrrrrrrrrrrrrrr", "rrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrr"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "rrrrrrrrrrrrrrrrrrrrrrrrrrr";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> names = {"mmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMM", "MM", "MMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMM", "mmmmmmmmmm", "MMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"};
    vector<string> votes = {"mmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm", "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM", "MMMMMM", "mmmmmmmmmmm"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMMMMMMMMMMMMMMMMMMMMMMM";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> names = {"QQQQQQQQQQQQQQQ", "qqqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQQQQQ", "qqqqqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "qqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQ", "QQQQQQ", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ", "qqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQQQQQQQQ", "qqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqq"};
    vector<string> votes = {"QQQQQQQQQQQQQQQ", "qqqqqqqqqqqqqqqqqqq", "qqqqq", "QQQQQQQQQQQQQQQ", "QQQQQQ", "qqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "QQQQQQQQQQQQQQQQQQQQQQQ", "QQQQQQQQQQQQQQQQQQQQQQQQQQ", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqqqqqqqqq", "qqqqqqqqqqqq"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "qqqqqqqqqqqqqqqqqqq";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> names = {"JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJ", "JJJJ"};
    vector<string> votes = {"JJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjj", "JJJJ", "JJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> names = {"JJJJJJJJJJJJJJJJ", "jjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjj", "JJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "j", "jjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj"};
    vector<string> votes = {"jjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "j", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjj", "j", "JJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJJJJJJJ", "JJJJJJJJJJJJJJJJJJJJJJJJJ", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjj", "jjjjjjjjjjjjjjjjjjjjjjjjj", "j", "jjjjjjjjjjjjjjjjjjjjjjjjjjjjjj", "JJJJJJJJJJJ"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> names = {"BhpQfrPIlSQLBAnYKIhIYwWJCzlgMUTLKZNiFCHXGC", "XgaeKvqdwUqPMgxf", "iRfwcBuvAGDmTxSWYEMfmkwEaDZAYiFwQ", "RZGKAFZaaVFdpKrdyUURxVaulGCXrFYvOYZfRgsZIPQoquB", "XrTGzUbfgEUK", "oAz", "iwNTBDCspIivRjltkggYQbOJkVrJbd", "iBpDzBgmfbmVzGBnlFXTGUDmhmdYhXqoHoikkbhIPiJMvxLHrk"};
    vector<string> votes = {"XgaeKvqdwUqPMgxf", "iwNTBDCspIivRjltkggYQbOJkVrJbd", "BhpQfrPIlSQLBAnYKIhIYwWJCzlgMUTLKZNiFCHXGC", "iRfwcBuvAGDmTxSWYEMfmkwEaDZAYiFwQ", "XgaeKvqdwUqPMgxf", "iBpDzBgmfbmVzGBnlFXTGUDmhmdYhXqoHoikkbhIPiJMvxLHrk", "BhpQfrPIlSQLBAnYKIhIYwWJCzlgMUTLKZNiFCHXGC", "iRfwcBuvAGDmTxSWYEMfmkwEaDZAYiFwQ"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> names = {"jKfWBaMbLzPn", "HbqlpQohbFpxoXXmpxSBTEoCiOwUUNk", "ftWgZJEFtIXHSnyRVEKKRFEIFNogeeIg", "qKGAzVErdrlnpayYcjqzjtEn", "ffnCzgyCVYQhbzSiMFRBJriHpzT", "rfThoDhcbFIjXaj", "XyRqqnvMksSZYUWNJIeylMmYZnZxEirGvqyxRsCeuiFIMOoVGk", "LHCDoPhWTtXwUwqRXeCWvForNoVwYywzlUcmnfu", "AtcxoraKkGfnpyyfjuTehta", "Ea", "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ", "aYENduKVTpboYzCBW", "avuhG", "YLPyepTmqKwHLhnDKTWWypmJRBYrvmJCZyucOQIOpLSBLt", "PsZUqhQVYTCsLOWpYJBOoMrQbeXP", "oZXcufZkaBaWYPzgtZH", "cafvKkYCtSGtUucNGjMntZVxgHtfgvDGJ", "nPOuFMMXXUeswmdLLracTCWiapkhMJyWMuVUuCQFpb", "sNxicKQwRPMmSnrrpjxBzzzBXyuFNiA", "tCXQBvpyHBrjhBYioJpFeVKFOuanstWdQHkrJjPeHs", "n", "FcAVawxIqnQAmpjqcKcDLQveTkysNCSDreDl", "rENgQDLBLWQzvdplynJArlzgsSouDkJsiaPXPerkpGJbBGm", "HkHspVxUxgDBydikRxzstyjhcFmGxnWeINUyqHUONpiGqYJ", "zxPReQSmENgNQTszjmuqouLUQWlcqSt", "DEdqXYvaMRCEFCBBfhFNNNeQXWBoYmsouCtxObsIMHY", "KwFCgbPNtNZjpbYHcNSDpLC", "PFIyJjisOeEWvPQRKoVKkgbqsBsvBZNvcoNvhOdkBwHfe", "aVumSWKCOJLlpeVmwHnQNMjioJQjXYsaoOvPwQxKQYDJBLuuLJ", "eJdvITZhwoZfqXgZiwknzcgbVpzyQElwvDRfzXUNybpH", "ZbaGIgbellqZBnlMhgazqazDMGpUb", "csKEUgHmNokkhZvFrbqeOlgmycPG", "GNlnQqHminJhDLRMZVomhkWG", "iGwQSWjsrdOmZFUbwanNWlbsSxmKUOjFobwrZllOgxBMxhx", "uMHejHZi", "plzkdCWgBNyUZMZOHKcyrNwrdsKLiLVCjqxWpZKAY", "cKPvZwGuiHvNEVTxZFopsiUKalmLtWci", "dcfdIyAlSShb", "ltOoJUpKqwFwsZBvVDRbPt", "xhOrhWZgb", "DETo", "QzBdkcqPxGhjSaaSdzzWUJHfBCADNcTBNLCuuBCqOqsEBlQp", "xKavkkshBRNeUcZQbd", "mjeSjNAcoDHBnAQXUlaZappVFDgyLMKuvF", "GnkNoqKyAHYWXLeJYgeMP", "rmpuiNxwrEvEgDqrZEyCKWbSizwfSFH", "gmERQdDbZAwVrvplw"};
    vector<string> votes = {"DETo", "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ", "n", "KwFCgbPNtNZjpbYHcNSDpLC", "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ", "aVumSWKCOJLlpeVmwHnQNMjioJQjXYsaoOvPwQxKQYDJBLuuLJ", "csKEUgHmNokkhZvFrbqeOlgmycPG", "ffnCzgyCVYQhbzSiMFRBJriHpzT", "HkHspVxUxgDBydikRxzstyjhcFmGxnWeINUyqHUONpiGqYJ", "FcAVawxIqnQAmpjqcKcDLQveTkysNCSDreDl", "cafvKkYCtSGtUucNGjMntZVxgHtfgvDGJ", "iGwQSWjsrdOmZFUbwanNWlbsSxmKUOjFobwrZllOgxBMxhx", "ffnCzgyCVYQhbzSiMFRBJriHpzT", "nPOuFMMXXUeswmdLLracTCWiapkhMJyWMuVUuCQFpb", "PsZUqhQVYTCsLOWpYJBOoMrQbeXP", "GNlnQqHminJhDLRMZVomhkWG", "cKPvZwGuiHvNEVTxZFopsiUKalmLtWci", "DETo", "HkHspVxUxgDBydikRxzstyjhcFmGxnWeINUyqHUONpiGqYJ", "AtcxoraKkGfnpyyfjuTehta", "Ea", "ffnCzgyCVYQhbzSiMFRBJriHpzT", "dcfdIyAlSShb", "GNlnQqHminJhDLRMZVomhkWG", "ftWgZJEFtIXHSnyRVEKKRFEIFNogeeIg", "plzkdCWgBNyUZMZOHKcyrNwrdsKLiLVCjqxWpZKAY", "ZbaGIgbellqZBnlMhgazqazDMGpUb", "cKPvZwGuiHvNEVTxZFopsiUKalmLtWci", "iGwQSWjsrdOmZFUbwanNWlbsSxmKUOjFobwrZllOgxBMxhx", "PsZUqhQVYTCsLOWpYJBOoMrQbeXP", "LHCDoPhWTtXwUwqRXeCWvForNoVwYywzlUcmnfu", "YLPyepTmqKwHLhnDKTWWypmJRBYrvmJCZyucOQIOpLSBLt", "oZXcufZkaBaWYPzgtZH", "ZbaGIgbellqZBnlMhgazqazDMGpUb", "rfThoDhcbFIjXaj", "FcAVawxIqnQAmpjqcKcDLQveTkysNCSDreDl", "QzBdkcqPxGhjSaaSdzzWUJHfBCADNcTBNLCuuBCqOqsEBlQp", "zxPReQSmENgNQTszjmuqouLUQWlcqSt", "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ", "xhOrhWZgb", "QzBdkcqPxGhjSaaSdzzWUJHfBCADNcTBNLCuuBCqOqsEBlQp", "LHCDoPhWTtXwUwqRXeCWvForNoVwYywzlUcmnfu", "cafvKkYCtSGtUucNGjMntZVxgHtfgvDGJ", "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ", "YLPyepTmqKwHLhnDKTWWypmJRBYrvmJCZyucOQIOpLSBLt", "iGwQSWjsrdOmZFUbwanNWlbsSxmKUOjFobwrZllOgxBMxhx", "qKGAzVErdrlnpayYcjqzjtEn"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "nZoYfzkSFCpLUVaHcNQfOuvYGHhUZ";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> names = {"uftbVIhmcIIarNpVnTPuNDPbWlSNzGkHDk", "dAeLnhBY", "e", "XbHeUebZbEcgh", "SWCFoVQlAVmDWAaPDiYzoxvcCXgqZGPDcRWxgVq", "NqojnSHFISMdsLyrcrXaGdNfCxwJUuGFDVFsbo", "pNgPpvyrsxoieVxkqjaIBJW", "KVSRSLrUAITKzEFqABetQDQWtXimFPBQq", "cFMlCsdNBoljDrvBvVuIRuUfddJwzFCYUnOVEHZITQyHsc", "FnNxevHffCIhiEGpSeoKxrYwdAtFRshetm", "oOQdoVbftDgSiWEInjAtgPk", "ToZRnCzBvefqzMzuDBVOvgxSuXFf", "jFFnUXEBcSiLgzBGHcsi", "IF", "bWhLesRNVeXSmRJVybGqcixyFN", "CPivv", "eZJOodh", "AHlIVaG", "UZkEvM", "DzCehlMTlPkqLHEolIazYEYzkKwNdnstzWsnigYVIiYIMMwlaO", "ADkPqVlMBAWASeCfHMRcfRt", "hCSoiwGkscVODaernESHsGOOAydIj", "fDOaoiTOrYWBcfPehSUQDRytfAHL", "DkMMdHXVYklBrPlfPIrax", "CtuuldOjdZfDSYBvDKyCVMCWnmSBMWLBdIvhlALFw", "BzmUyV", "cEEAAPmyqmudQerudfuGUUIUssiKzs", "dfaSPbRRNj", "j", "KHOEKzJqktrFEQCcaQscUuhwKqLwzLQY", "wVxcpowkUBSGRiURixMEWqp", "fSuixMzOMPgqAbbkQjiyfsC"};
    vector<string> votes = {"uftbVIhmcIIarNpVnTPuNDPbWlSNzGkHDk", "NqojnSHFISMdsLyrcrXaGdNfCxwJUuGFDVFsbo", "eZJOodh", "ADkPqVlMBAWASeCfHMRcfRt", "XbHeUebZbEcgh", "AHlIVaG", "XbHeUebZbEcgh", "XbHeUebZbEcgh", "ADkPqVlMBAWASeCfHMRcfRt", "pNgPpvyrsxoieVxkqjaIBJW", "wVxcpowkUBSGRiURixMEWqp", "hCSoiwGkscVODaernESHsGOOAydIj", "jFFnUXEBcSiLgzBGHcsi", "DzCehlMTlPkqLHEolIazYEYzkKwNdnstzWsnigYVIiYIMMwlaO", "uftbVIhmcIIarNpVnTPuNDPbWlSNzGkHDk", "fDOaoiTOrYWBcfPehSUQDRytfAHL", "DzCehlMTlPkqLHEolIazYEYzkKwNdnstzWsnigYVIiYIMMwlaO", "dAeLnhBY", "bWhLesRNVeXSmRJVybGqcixyFN", "oOQdoVbftDgSiWEInjAtgPk", "DzCehlMTlPkqLHEolIazYEYzkKwNdnstzWsnigYVIiYIMMwlaO", "uftbVIhmcIIarNpVnTPuNDPbWlSNzGkHDk", "fDOaoiTOrYWBcfPehSUQDRytfAHL", "FnNxevHffCIhiEGpSeoKxrYwdAtFRshetm", "NqojnSHFISMdsLyrcrXaGdNfCxwJUuGFDVFsbo", "cEEAAPmyqmudQerudfuGUUIUssiKzs", "jFFnUXEBcSiLgzBGHcsi", "dfaSPbRRNj", "ADkPqVlMBAWASeCfHMRcfRt", "bWhLesRNVeXSmRJVybGqcixyFN", "SWCFoVQlAVmDWAaPDiYzoxvcCXgqZGPDcRWxgVq", "dAeLnhBY"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> names = {"pUYnsyVsDKAQIifvtsJBvFpikzIzFESpgKpBntkPA", "hMxKKhfjBZzbzNGxRLOEddYPnTo", "vCkvxkrZuulVrDsjVWJfha", "NyrAVuIvADsqeWqTAxZUWkwNDySGhFOfmUuTMliAjcC", "TznxdXWlVeQ", "SBtUoipkbDAjgcoXEcpdrWUAwbuBJhKhnjznYT", "BFAnttqwLKttGlqjWDkvXwKPlPXivwcvZ", "D", "qfwtfjtcUxYRceCyBxQgbjPYctGolUmiqcLRrBGSpZUA", "ntWQpMVoUutQHObSrbPlrJKWzsLrUMWKheXo", "oIONUtBbYsUDaLVT", "EbkAvTmUNnHWPfjDCrSJzTpz", "YhbgomTHUTGkdaEAntbo", "cubKkMxxqjiDJtJRkmFZZBYDF", "ammzkfvyraCODlVPPAMvYxYZIQUmHSeo"};
    vector<string> votes = {"ammzkfvyraCODlVPPAMvYxYZIQUmHSeo", "ammzkfvyraCODlVPPAMvYxYZIQUmHSeo", "ntWQpMVoUutQHObSrbPlrJKWzsLrUMWKheXo", "YhbgomTHUTGkdaEAntbo", "ntWQpMVoUutQHObSrbPlrJKWzsLrUMWKheXo", "NyrAVuIvADsqeWqTAxZUWkwNDySGhFOfmUuTMliAjcC", "EbkAvTmUNnHWPfjDCrSJzTpz", "D", "cubKkMxxqjiDJtJRkmFZZBYDF", "SBtUoipkbDAjgcoXEcpdrWUAwbuBJhKhnjznYT", "oIONUtBbYsUDaLVT", "D", "YhbgomTHUTGkdaEAntbo", "BFAnttqwLKttGlqjWDkvXwKPlPXivwcvZ", "cubKkMxxqjiDJtJRkmFZZBYDF"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> names = {"iSCVpoGyTuQRYOvyXbmQnslmdAcPiLCDArGUkth", "ERB", "kzUcpwhTTKZIKdKQqjVLRMKzQLUhSIOzEyacjoftQsw", "kBOkc", "xZ", "xsATswaNLJyjbbRttXUBKyv", "wCTCgL", "rqrYnuaLAhieqTX", "yUwqxsGgma", "W", "gXNBalLvUGPVDzltjZsOH", "ulCAxtpwexXMgMFXcsP", "XWVyeHpC", "cxWJZwlKaUpdCQJnIJxIoWWxHDXyeYzVnzYtcExnQrel", "fwaZprwWGDgAQ", "WOqgPVPchCDQKcg", "klOqZcorpgRwyNt", "aHjumCQBLMPOVexlYetSxnDthkVtTlQSeCrqFwWkbvH"};
    vector<string> votes = {"cxWJZwlKaUpdCQJnIJxIoWWxHDXyeYzVnzYtcExnQrel", "kzUcpwhTTKZIKdKQqjVLRMKzQLUhSIOzEyacjoftQsw", "yUwqxsGgma", "yUwqxsGgma", "ulCAxtpwexXMgMFXcsP", "ERB", "fwaZprwWGDgAQ", "WOqgPVPchCDQKcg", "rqrYnuaLAhieqTX", "xZ", "rqrYnuaLAhieqTX", "fwaZprwWGDgAQ", "fwaZprwWGDgAQ", "ulCAxtpwexXMgMFXcsP", "gXNBalLvUGPVDzltjZsOH", "xsATswaNLJyjbbRttXUBKyv", "wCTCgL", "xZ"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "fwaZprwWGDgAQ";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> names = {"gbaUEZYb", "DKjlzrimkXylKKMyvMhqG", "iuVJGPoYwPUuoiE", "RNUiOoxdNZUOtVIUwMNtkyPQBBK", "nBQNZdHlSniWkoMTljoYBRbR", "AQOQkeJRgxLAfUIlntVOCxqwkuNYMnrXw", "DKyzZxBkI", "nkJXtVPTlxiuGqtJJFgFklzaybRHuTsMNcWqwTlxJjAeQwNCa", "xeFnMOgVTzlETtYgVkMChfwbWMALBKTzjhDrW", "LRZfbsjkDpejvpzBMhoDxRwumkTeJVT", "xVhbkjjloCyMwax", "lwWUoDUkDVHEJtnOGGAsGmMScIqcILTrkVXFxSof", "rEnIwNzZylBUPSXktaKlDnbxgUqLRQ", "RHlhx", "x", "ExMJdHbUtxDmxOUaBu", "WMx", "HcucXPzetGmZAVMXwqzMMTLaZGkJcTha", "QNt", "JSdFdocQdhzMuM", "QYiDMIlIWLmCylmAIpTPPTWykcittSZyUOogvcoUznCRJJbR", "CHsKlgAG", "vkgIGhGscsfIlKXfFboBPGzjZDSqyXJJXdey", "yBHWXGnJuBLtFpSLnGEHbOUFoWxYgThVNSc", "OAFKWUHoxzSMerwuOIuEODkgZhkJLuHLngEteuJdItLiti", "ROKcJnbOEVgvCQa", "mezRrDEQlFKxkGuowGdlKWemqczsmTCRyfI", "hjOnKNNxeSolcu", "hEvlZh", "qtKnKVvaHlaRDebRKFSaMKvWNHIMAR", "PQTEpwoAgoyfLuQqzIzSULXN", "kEdrpZZNLiTujpufYEvSuMSMryf", "vMkwmPG", "BKrmrhhprVzu", "PDbLMBKPfasowWtHvijZrfQCoYxYSyM", "EPDMCJAINrZMrgwJUgegESNBePWgDeE", "BsUVcBAuvWv", "iDxHvnlbSCjkoLRSWQOXvzzBlfjlsefOrgIEY", "YyTsakTlvbDVOj", "RcbroMInAOVrABFwYYhZZGmPjYeGOUqzgwJjgeIzpQFbc", "lmq", "Gy", "lwUhxJYHwspiYhelcmKbMjFsGaYAdDIJbfdyXyRrftwKUTQf"};
    vector<string> votes = {"DKyzZxBkI", "PQTEpwoAgoyfLuQqzIzSULXN", "nkJXtVPTlxiuGqtJJFgFklzaybRHuTsMNcWqwTlxJjAeQwNCa", "lwWUoDUkDVHEJtnOGGAsGmMScIqcILTrkVXFxSof", "ROKcJnbOEVgvCQa", "EPDMCJAINrZMrgwJUgegESNBePWgDeE", "PQTEpwoAgoyfLuQqzIzSULXN", "HcucXPzetGmZAVMXwqzMMTLaZGkJcTha", "ROKcJnbOEVgvCQa", "QNt", "PDbLMBKPfasowWtHvijZrfQCoYxYSyM", "ExMJdHbUtxDmxOUaBu", "lmq", "ExMJdHbUtxDmxOUaBu", "QNt", "BsUVcBAuvWv", "lwUhxJYHwspiYhelcmKbMjFsGaYAdDIJbfdyXyRrftwKUTQf", "PDbLMBKPfasowWtHvijZrfQCoYxYSyM", "RHlhx", "lmq", "HcucXPzetGmZAVMXwqzMMTLaZGkJcTha", "yBHWXGnJuBLtFpSLnGEHbOUFoWxYgThVNSc", "DKjlzrimkXylKKMyvMhqG", "yBHWXGnJuBLtFpSLnGEHbOUFoWxYgThVNSc", "HcucXPzetGmZAVMXwqzMMTLaZGkJcTha", "yBHWXGnJuBLtFpSLnGEHbOUFoWxYgThVNSc", "AQOQkeJRgxLAfUIlntVOCxqwkuNYMnrXw", "kEdrpZZNLiTujpufYEvSuMSMryf", "CHsKlgAG", "hjOnKNNxeSolcu", "ExMJdHbUtxDmxOUaBu", "hEvlZh", "EPDMCJAINrZMrgwJUgegESNBePWgDeE", "gbaUEZYb", "nBQNZdHlSniWkoMTljoYBRbR", "WMx", "vMkwmPG", "iuVJGPoYwPUuoiE", "DKjlzrimkXylKKMyvMhqG", "RHlhx", "xeFnMOgVTzlETtYgVkMChfwbWMALBKTzjhDrW", "JSdFdocQdhzMuM", "JSdFdocQdhzMuM"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> names = {"akshay", "kaka"};
    vector<string> votes = {"kaka", "akshay"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Bill", "Dick", "Alice", "Alice"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Alice";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> names = {"Alice", "Bill"};
    vector<string> votes = {"Alice", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> names = {"aa", "bb", "cc"};
    vector<string> votes = {"aa", "aa", "aa"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> names = {"A", "B", "C", "D", "E"};
    vector<string> votes = {"B", "A", "D", "D", "D"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> names = {"WhiteRabbit", "whiterabbit", "whiteRabbit", "Whiterabbit"};
    vector<string> votes = {"whiteRabbit", "whiteRabbit", "whiteRabbit", "WhiteRabbit"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "whiteRabbit";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"};
    vector<string> votes = {"a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "a", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o", "o"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "o";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> names = {"Joe", "Don", "Diane", "Mael", "Chris"};
    vector<string> votes = {"Don", "Joe", "Mael", "Mael", "Mael"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Mael";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Alice", "Alice", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Bill";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> names = {"a", "b", "c", "d", "e"};
    vector<string> votes = {"b", "a", "d", "c", "c"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> votes = {"C", "A", "B", "C"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> names = {"AA", "BB"};
    vector<string> votes = {"BB", "BB"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "BB";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> names = {"a", "b", "c", "d", "e"};
    vector<string> votes = {"a", "a", "d", "c", "c"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> names = {"Bill", "Dick", "A", "B", "C"};
    vector<string> votes = {"Dick", "Bill", "A", "A", "A"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "A";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> names = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j", "k", "l", "m", "n", "A", "B", "C"};
    vector<string> votes = {"m", "a", "a", "e", "b", "c", "d", "e", "C", "C", "C", "C", "C", "b", "m", "B", "C"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> names = {"kansfkhvsbdvkjsbkjvfabskl", "a"};
    vector<string> votes = {"kansfkhvsbdvkjsbkjvfabskl", "a"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H"};
    vector<string> votes = {"B", "A", "D", "C", "E", "E", "E", "E"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> names = {"A", "B"};
    vector<string> votes = {"B", "A"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> votes = {"c", "a", "b", "c"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> names = {"A", "B", "C"};
    vector<string> votes = {"B", "A", "B"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> votes = {"B", "C", "A", "C"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "C";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> names = {"A", "B", "C", "D", "E"};
    vector<string> votes = {"B", "C", "E", "E", "D"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> votes = {"C", "C", "A", "A"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick", "a", "b", "c", "d"};
    vector<string> votes = {"Carol", "Carol", "Bill", "Bill", "a", "a", "a", "a"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> names = {"A", "B", "C", "E", "D"};
    vector<string> votes = {"B", "A", "D", "D", "D"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick", "A", "B", "C"};
    vector<string> votes = {"Bill", "Alice", "A", "Carol", "Carol", "Carol", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "Carol";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> names = {"aaa", "bbb", "ccc", "ddd", "eee", "fff"};
    vector<string> votes = {"fff", "eee", "aaa", "bbb", "ddd", "ddd"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "ddd";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> names = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};
    vector<string> votes = {"B", "A", "D", "C", "F", "E", "J", "J", "G", "I"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "J";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> names = {"a", "b", "c"};
    vector<string> votes = {"b", "a", "c"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> names = {"a", "b", "c", "d"};
    vector<string> votes = {"b", "a", "a", "b"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> names = {"aa", "cc", "bbb"};
    vector<string> votes = {"bbb", "aa", "aa"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Carol", "Carol", "Bill", "Bill"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> names = {"shit", "keno", "full", "vazgen"};
    vector<string> votes = {"vazgen", "shit", "shit", "shit"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "shit";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> names = {"A", "B", "C", "D", "E"};
    vector<string> votes = {"B", "B", "B", "E", "E"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "B";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> names = {"AA", "BB", "CC", "DD"};
    vector<string> votes = {"BB", "CC", "AA", "CC"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "CC";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> names = {"A", "B", "C", "D", "E", "F"};
    vector<string> votes = {"C", "C", "E", "E", "A", "A"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> names = {"teddy", "ashar", "aji", "arif", "berty"};
    vector<string> votes = {"ashar", "teddy", "arif", "aji", "arif"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "arif";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> names = {"Alice", "Bill", "Carol", "Dick"};
    vector<string> votes = {"Alice", "Dick", "Bill", "Carol"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> names = {"a", "b", "c"};
    vector<string> votes = {"c", "b", "c"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "c";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> names = {"A", "B", "C", "D"};
    vector<string> votes = {"D", "C", "D", "B"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "D";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> names = {"A", "B", "C", "D", "E"};
    vector<string> votes = {"B", "C", "E", "E", "E"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "E";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> names = {"rakib", "ansary", "saikot", "Ria", "Ireen", "Sonia"};
    vector<string> votes = {"ansary", "saikot", "ansary", "Ireen", "saikot", "Ireen"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> names = {"a", "b"};
    vector<string> votes = {"b", "a"};
    RabbitVoting* pObj = new RabbitVoting();
    clock_t start = clock();
    string result = pObj->getWinner(names, votes);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22884027&rd=14156&pm=10881
********************************************************************************
#include <map> 
#include <set> 
#include <sstream> 
#include <cstdio> 
#include <cmath> 
#include <iostream> 
#include <algorithm> 
#include <cstdlib> 
#include <queue> 
#include <iomanip> 
#include <cctype> 
#include <string> 
#include <cstring> 
#include <functional> 
#include <vector> 
 
typedef long long ll; 
#define sz(a) int((a).size()) 
 
using namespace std; 
 
class RabbitVoting { 
public: 
  string getWinner(vector <string> names, vector <string> votes); 
}; 
 
string RabbitVoting::getWinner(vector <string> names, vector <string> votes) { 
  map<string, int> mp; 
  int maxx = 0; 
  for (int i = 0; i < sz(votes); ++i) { 
    if (names[i] != votes[i]) { 
      ++mp[votes[i]]; 
      maxx = max(maxx, mp[votes[i]]); 
    } 
  } 
  if (maxx == 0) return ""; 
  int ct = 0; 
  for (map<string, int>::iterator mi = mp.begin(); mi != mp.end(); ++mi) { 
    if (mi->second == maxx) ++ct; 
  } 
  if (ct != 1) return ""; 
  for (map<string, int>::iterator mi = mp.begin(); mi != mp.end(); ++mi) { 
    if (mi->second == maxx) return mi->first; 
  } 
} 
 
 
 
// Powered by FileEdit
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/