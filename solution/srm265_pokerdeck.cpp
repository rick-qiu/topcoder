/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1981
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

class PokerDeck {
public:
    vector<string> getRanking(vector<string> decks);
};

vector<string> PokerDeck::getRanking(vector<string> decks) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> decks = {"AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D 6D 7D 8D 9D 10D JD QD KD", "AH 2H 3H 4H 5H 6H 7H 8H 9H 10H JH QH KH", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "FLUSH", "STRAIGHT", "THREE OF A KIND", "TWO PAIR", "ONE PAIR", "NOTHING"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> decks = {"AS 2C 3C 4C 5C 7D 7H 8C 8D 8H 10S JS QS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FLUSH", "FULL HOUSE", "ROYAL FLUSH", "STRAIGHT", "TWO PAIR", "THREE OF A KIND", "ONE PAIR", "NOTHING"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> decks = {"10S 10S 10S 10S 10S 10S 10S 10S 10S 10S 10S 10S", "JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS", "QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS", "KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> decks = {"2C 10S 10S 10S 10S 10S 10S 10S 10S 10S 10S 10S 10S", "JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS JS", "QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS QS", "KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS KS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FOUR OF A KIND", "FIVE OF A KIND", "TWO PAIR", "THREE OF A KIND", "NOTHING", "ONE PAIR", "ROYAL FLUSH", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> decks = {"AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "2C 4C 6C 8C"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NOTHING", "ONE PAIR", "THREE OF A KIND", "FOUR OF A KIND", "FIVE OF A KIND"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> decks = {"AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D 6D 7D 8D 9D 10D JD QD KD", "AH 2H 3H 4H 5H 6H 7H 8H 9H 10H JH QH KH", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D 6D 7D 8D 9D 10D JD QD KD", "AH 2H 3H 4H 5H 6H 7H 8H 9H 10H JH QH KH", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "FLUSH", "STRAIGHT", "THREE OF A KIND", "TWO PAIR", "ONE PAIR", "NOTHING"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> decks = {"AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D 6D 7D 8D 9D 10D JD QD KD", "AH 2H 3H 4H 5H 6H 7H 8H 9H 10H JH QH KH", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "STRAIGHT", "FLUSH", "THREE OF A KIND", "TWO PAIR", "ONE PAIR", "NOTHING"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> decks = {"AS AS AS 2S 3S 4S 5S 10S JS QS KS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT FLUSH", "ROYAL FLUSH", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> decks = {"QC QH QD 6S 6H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FULL HOUSE"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> decks = {"3D JH 6S 4S 9D 2H 5D 3S AC 2H KD 8D 3S 6D JS KD 7H", "JH 4H 5C 2S 6S 3D AS 7C 5D 6C 7H JS 5D AC AD KH 8D", "KS 6H 5H AD 6H 9H 4S KH QC 4S 6S 9D 8C 9H 2S 2S 9C", "QS 8S KS 4S 3C 6S 9D QH 7D 8S 7D 8H 8H AC 3C 7D 2H", "2H 6H 6H QD 9C QC 6D QH QC QH QC 5C AD 9C 9D 8H 6C", "QH AD 5C 7H QH 6H 8D AD AH 9D 7H 5S 6S 7C 2C 3H AC", "6S 6S KD 4H 9D 3S JC 9S AH 4S 8H 6D QC 5D 6H 8D JD", "AH QC 6C 3S KD 6C 6H KD 2C QH 4H KS 5S 4D JD KS KC", "6C 2D AC 9D 4D 2H JD 3C 4D 3C KS 5C 2D 9H 9H 5S QD", "QC 6D 9D 3C 3D 9S AS 3C QD JC 9S 9D KH 4S 8C 6C 2C", "9H JC 4D JH 2H KC KC 8H AD 7C KC 8D 2H 9D QD 8H 4S", "QC 5C AH 3H AC 6S AS 3S 8D 4D AS 8D KS 6H 7S 9D 3D", "4D QD 9S JS QH KC 2H AD QH 4D 7D 7C 3D 4S 4C AD 3S", "AS 9C KC 2H 9S KC 2H 4C KC 5H KC 6C JC 7S 2D AS 2D", "3C JD 6S 6S 8C 2D KS 7H 4D 4C 8H 5S 5C 5C 5H 3H 7D", "KC 7S 8H JC 4H 3H 9S 8H 6D AH 2H KD 6D 5S 4C 9C 5C", "2H 9H JH QC 5C QS 7H JC 4H AD JS AH 6H 7D 3H 2S AD", "5S 3D 5H 5C 3D 4H 4H KC QH 8D 5D 3C 3H 5C AC 2D 2H", "9S 4H 3H 3D QH 9D JH JS 9H 4C QD 5D 7C 6C 8S QC 7D", "4S QD QS 3C 7H 3C 9D 4H 4S JS 4C 8C KD KD 9S QC 5D", "KD KC AC 7S 4S 6S JD 2C 5C 8D AH 4H 7C 6H 5D 8H 4D", "JS JH AS 7H 9D 2H 3S AH 7H 9C 6S 8D 9S 5H 9D 8D 7H", "QH 2C AH 9D 7D KC 5D 3H 5D 6H 3C 7D 6H 3H 7H AD KD", "6S 4C 2C QC 4D AD 3D 5S JD 2S KD KH 9H 6C 3C AC 9H", "8H 2S 7H 9C 3S AH 2S 8C 3C 3D 9C 4H 7S JC KH 6D 4D", "3D 3S 8H QS 8S JH QD 4S JS 8H 7S 8S QH QC 7D QS 8S", "5D 4C 2H 8C QC JS 9C 5H 8S 8C KH AH 8D 6D 6H 6S KC", "KD 6D AS 6C 6H 8C JH 9S AS JD JS JH JC JD QC 9H 7H", "KH 3S 7D 2D 5C AH 5H KD 3D 4H KC 6H JS 7S 6H JS 2C", "3S 8C AC AD 9C 5S 4H 6H 7D 9H KD 3C AS 8C JD 4C AS", "7H 7S 4D QC 5D 5H 2D 4D 5H 5S KS 9D AS 8D JS 5D 6S", "QS 8S JS 6S 7S 3C 9H 4D 7S JD JH 8D 2S 7S 8D 4S 2H", "7H AH 2D 5D 9H 3S 6C 9D 3C 9H 9S 4D 5C AC 6H 7D 5H", "5H 5C KH QH 4H KS 7C 3C 2D 8C 6D 7C 2S 4D QS 2S 9H", "3H 4S JD 9C 3S 3C 2D JH 2H 4D 7H 6C 8S 7H 4D 8C QC", "4H QC 6H 9C 7C 9H 7H 3C 2D 8H 7H 9D JD 8S 6C 6C 6D", "AH 7H 2S 9S 3D AH 3C KC KS KD KC 9C 8H 5H 7C QH 8S", "AD 8S 4D 5S 9D KS KH KD KC KS 3D 3S 4H 9C JD JC 8H", "JD 2S 2C 9C 3C QS 8S 2S 4S 2D 2S AD AD 3D 8H 6S AS", "8S 2D 7S QD 5H JD KS AH QD AH AH 6S 7C 7C 5S AS 9D", "KD 7H 3C KD JS KS 2C QH 7D KH 6H KC JC JC 2D 3S 4C", "8D 3H 4C JD QD 9S JC 7S JH 9D KS JH QD JD 7H 4S 9S", "AS AD 8C 7H 6D JS 8S KD 6S 5S KH QC 6H 4C 8S AC 6H", "9S 5C KC 9S JD 7C KC QH 9H 3C 6D 4D 7H AH 8D JD JH", "5H AC 6D 4C 9D 3S JD 6D 8S QH 5H 6H AS 4H KD 5H 9D", "9H 5C 5S QH 8S 3D 9C 9H 9S 4S 2D KS JH 2S 5D 9D KS", "2S AD 7D 8D 2H 7D AD 5H KH 5H 3H 2C 8S KS 7S 3S 5D", "6D 4H QS 3C 8S AS JH 5D AD 9D 4S 8D 5H 8S 5H 7S KD", "3D 6D KH 2S 7D QD 9C KS 8S AH QD 6D JD 6C 7H 7H QC", "KD 6D 5C KD QC 3D KH 6S 2H 9H 3S 7D 9D AC 9D 9S 4C"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT FLUSH", "FIVE OF A KIND", "STRAIGHT", "FOUR OF A KIND", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> decks = {"8S JS KD 5S AS JH 9C KC 7C AH KH AD JH 2D JH 5D KC", "4C AH QS 9H QS 5D 4C JD 4S 3D JH 7S 8S 5H 7H 3C 3S", "7H 4H 8D 2D JH 7C 7S 4H KD 4C 6D 5D KD KH 3C 9H 6C", "5D 3H 9C AS QS 4C KC 9H 8H 5H AD QD 3H 7D 6C 2H 9S", "6D QC 8D 7D 9H QS 8S 6C 4H 3H 6C 9D 7S JS QS 9S 8D", "6H JS AS 9C 8C KH KC JD 9D QC AD KH 6H 5C 6D 7S 7D", "AC 5D 3S 8H QD AD KS 5C AH 3S JH 7C 9D 6S 8D 4H 3D", "JD 2S 2H 2C 2S QS 8C 6D 5S AS 7H 9S 5C JH 4C 3C 9S", "AS 6D 2D JC 2H 2H 9C 5S 2S 9D 4S 7D JD KD 7H 9H 2C", "7D JC 8D 2H JH 5D 3H 4C QD 9D 6H 8S 3S KH QD 4D 8H", "8D AS KD 7D 8C 2D 6H KD 7S AD 9C 4S 3H KC 8C 4H AD", "2H 9H 4H KH 6H 2D 7C JD 7D 9C 5H 3C 8C 7S QS 3C AD", "8D 3C JS 4H 5H KH QC AD JD 6H AS JD 6S 8D JH 9H 9S", "6D JH 8C 3H KD 5C QC AC 5H 2C 6S 2C QH 5S 4H JH AD", "4H 8S KC JH 9S 3S KH KC 7C 8S 7S 8C 3H 5C 4H 6D 8D", "7D 9S AS 5H 4D 6S 9C 4S 8D 4C 4D 9H 6H 8D 9H 3C KS", "5S 5C 9D QD 2D 7D QH 7H 6H JC 9D 3D 5D 4S 2S QC AH", "9S 2C 8D 4C 7C 6S 9C 9S 5S AD 3C 2H 3D 5H QD QC 6D", "2S 8C KH QC KS 3S KC KD 7H 6S 5D 2C 6C 9H 2C 9C KH", "JH 9C 8S AS 8D 6H AS AC 2S 9C 8S 4C 6H 5C 3S 9D QC", "4C AC 8D 9H 3C 3D KD 4H 2H 9H 7H 3C JS 6C 6H AD JS", "3S 4D AC 9H 2C JS QS QC JH 8C KD 5H 4D 7S 5D AD QC", "AD 3D 5C 4D 4H 6S 5D 7H 5D 7S 4H AH 6S 7H QD 3D JH", "9D 5S 9S AC QS 3S 6S 6H 2D 9C 2D KC AH 3S 4D 2S 9H", "4H 9S 7S 4D JC 3H JD 8S KD 5C 8H 7D AH QS 4H 8S 4C", "6H 6D 5D AC 8C 4C AC 5S 4D QD 5C 7D 5D 2C 2C 7H 5D", "8C 4H QC 8H 9C QC 4C JD JD 5S QH JD 9S 6S 8C QS KH", "JS 3C 8D QS KC 4S QD 4H 2C AD 9D AS 8D 9C 5C 5D QH", "5S 4C 6S KH 6S AS JD AC 8C 4S 7C 7H 8D 7D KC 9C QS", "JH AH 2D JH 5D 3S KH 3S QH QC JS QD QS AD 6C 4D 8D", "JS 7S 5C 8H 5D 5H 4S 8C KC 9C 9H 5D 6C 8H 4C 4C 2D", "6H AC 7H AH 2D 7C 6D 7S AH 9D 9S 9D 9S 7C 4D 7C 7D", "KC 5C QD 8C 3D 4D 5C QD 2S 2H QS KC JC 8D 2H 5D 2S", "2D 4S QS 4H 6C 9S AH JH 5C 3S 2D 2D 4S 7H KH 7H 4S", "KH AD 3D 5C 6C JS 7H 4H 7C 4D AS 2H 5C 7C 5D 6H 3C", "4S 5C 7D 7C 5D AC 8S 9S QD 3D 7H 4S JD 4S AH 6C JH", "8D 9D 8S 5S AS 9S KC JS 6D 9D 3C QD 9S QS 6H JD 2C", "5D 7C JH 9C 6H QC 4H 6S QH JD 8D AS 6S 5H 2S 3D 5H", "2C 6D QC 8D QC 6C 6D 8D KC JS JS 6S 2H 7D AS JC 5C", "7S QS 7D 3S 5C QS 7H 3S 8C 2S 4C 2S 6H 8S 7D 5H JD", "3H 4C JC 4C 9C 8C 6C 9H 7D QS 7H 7H 6C 4C 3H 3D 8C", "7D 2H 7C AH 3H QC 3S AC KC KH 8H 8H 6D 6S 9H KS JH", "4H JC 6D 2S 3S 2C 2C 5C QD 2S 9C KS 3C KD 7S 3D 8S", "7H 5D 6C KC QD 6C 9S 2D 8H 3S QH 2S JH 4H JH KC AS", "9S 6C 8C AH 7D 2S QD QD 6C 3C 9D 7H 8C QD AC 3C 9S", "4H 2D JH JS 9D 3C 2C 3H 2H 2C KC JS 4D 3D AD 7C 6D", "4C AC 6S 7D KH 4H 9S 8H 6D QC AH 8S KH AS 3C 9C 6H", "KS QC 7C 7C 9H 5S QC 9H QH 3H 6S QD KH 7S 6C 9H QC", "3C 5H 8D QC 7C 6D AS 3C JC 9C KD 3H AD QC 4D 8S 4D", "6H 2H 2S 7H 7H 6D AC QD 7H 4S 8D AS 6S 8H 7C 4S 5H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> decks = {"AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS AS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> decks = {"3H 4C 5D 9S 6H JH KD 4C 4C", "JC JS 5S 10D 4D 7S 4D QD AC 7H KS", "6S KD 5S 8D 6C 5H QC 9S 6H AS QH", "7D KD KC 4S 8H 7D 2D 2D 10C 10H", "2C 9C 3D JD 10D 10H AS JD 7S 6H 5C", "8S 8D 2S 2C AD 4D 10C QD 6H 2D JS KS 7H AD 8H", "KS 2S 9D 5H 8S 8C 2C QH 2C 10H JH KS KS KC", "8S 5H JH 8C 5C 6H KC 5C 2H", "6D 4H QC 5D QH 3C JS 3C 5C AH", "3S QC KH KD 6D 5S QS 6C 6D 7D 2S JC AS QC 9H 8C", "QC KC 9C 9D 5D", "5D 7H 6D KS AC 8C 7H 2D JH 10S 8D AC KC 5D QH 8C", "AC 5S 4C 10S 8S 2C 9H 2S 2C KC 10D 4D", "5C 5D QS 6S 9D", "6D 9D KD QC 2H KS 9C 9H", "7C JD AC 4C 9C 6D", "9D 6S 4H JS 10H KC AH 4D", "2S 6C 4H 4D 8D", "9C 2D 3D 6D 5D 7H 6H", "7S JD KS 6S KC", "8H AH 5C AC 10S AH 10H QH 9D 5D", "6C AD 7C 3S 8D KD JC JC 4C 7C 8H", "JH 3C 7D 3H KH 4S", "JS 4D 8D KH AD 10H 5D AC 4C AC 6H AC 2C 5C 8H 5D", "3H 7S KS 10D 6D 9C QH KS 4S 2H JS JH QS JC"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> decks = {"8S 9H 10S JC JH", "KS 8C 10D 4H 3H KS 2C 2C KC JD", "10S KH 7C 6H 10C 4C", "7C 4H 7D 9C 7S 5D 2D AD AS 4C KS 2C AS 5S JD 10D", "4C QD QS KS QD 4D AC 9D AD JC 8D AC 8H 10S 2H", "KH 5S 5S QC 9S AC JH AC JH KH 9C", "7S AH 3C 5S 3D 10S 8H 9C 9H", "9H 6S 6H 2C JS KS 3C 3D 2S 9C 6D JC 2H 9S KH", "KD 6S 3S 2S 9D 6D 9C 4S 5H 9H 9C", "5S AS 10S JC 10C 7C JD 2S 4D 6D 8C AS 4D QD AH", "QH 4S 6H AS 7D 10H 4D 5S", "5H 5C QC QH QD 4C 8C 7D JS", "AC KS 4H 6H KC 3S JH AS AS 7D 2H 7S 7H QC", "QH 4H 6H 9S AH 6H", "4S 10S KS 2H 3C QC 8C 2S 10D 2S KC JD", "4H AD QS 6H 3H 9S 3D 9D 8H JC 5D 7C 2C", "8S JD 4C 7C 6C QH KS 2D QD 4S 4S 3D AD 7H AH 10S", "5D 10C 4D 6S 8D QS KS 7D 4C 3D 4D 10S", "9H QD 2S 5H 3C 3D QC 2S JC 9C 5H", "KD 5D 3D 2H 2H 2C KS", "QD 9S 7D 6D 4D 10H 4H 9H 5S QS 6H 5S AC AC KC", "KH AS 9H QC 6C 5H AC 8C 8C", "5D 3C QS 4S 6C 5D QC AS JD 10S AS 7S", "2S 6H 5H 3H 3C 3S 5S 5D KH", "2H 3S 8D 2C 4C AS AH 10S AH KC", "9D 9C 3D 6S 5D 10S QD 9H AC 10D 8H QS 10C QH", "JH 5H JC 9D 10C QS", "KC 5H 3D 8D 3H JH KS 3C 9H 4C 7D 7D 6H 4S"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> decks = {"KD 8C QS 7D QH 4C 10D 7S 5S 3D 5S 10S 2S AH", "6D 2S 8D 8D KC 6S", "7D 7H 10H 6S 9C 9H 2H AS 7C 7C JS 8C 3D 5H AH 9C", "7D 4S 4H 2D 7D QD KH", "5H 5H QD QC 10C 3S 4H 5D 5C JS", "9S QD 8D 5D 6S KC 9D 2H 10D 7C 10H 10D 3C", "AH 4H QH AC JD QD JD 4S KS", "10S 4H 4D KH AH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "FULL HOUSE", "STRAIGHT", "FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> decks = {"7C 7H AH 5H 8C 5S", "QD QS JC QS 3S 6D 2S 7D 9C 6D", "5C 4C 4C 8D 10D", "6C 9D AS KD 10C KC 10D", "5H JH QC 5D QH 10C", "3S 10H 7D 7H 5H 4H 6S", "2H 10C JS 7S 6D JC QH 5S KS 8D 4D KD 5D 9C 2C", "AD KC AH 10H KH 10C 3S 3D 5H 10S 2S 10S 6C 2D 5S", "7H 10H 9S 2S QH JD 10D AC QH AH 7H 2H 8H 5H", "7S 10S 9S AH 3H 6H 10H QD 4H 7D 9C JH 9C 9S", "4D 3S JS 6H KS 4H JD JC 5C 10H KD", "QS AH 6H 10D 7C 8H 7D 10C 7S 10S 8C 8H 8D", "10S 10S 9D 4H QS", "AH AD KH 5S AH JC", "4H 7H QC 9H KH 2C JS 3S 2C AS", "10S 2S 9S 3C 8D 4H 7D 7S 6S AD 5C 5H 6D 9S 5H AC", "KC 10H 4C AS KC 4H 7D AC KS 9H 4H QH 4S KC 10H QH", "JS JD 8D QS 5S QC 10C JD AC 8C JD 3D 4H AS 2C", "AC 5H QS 5D 2H 5D QD AD KH 4D 10C KC 5H", "KD 5C 2H JD 6S QC", "2D 6S 7C 9S 2S 7C", "6C 10C 10C QC 7S JS 10C QS JS QD QH JS 8C", "5S 2S KC JS 3S AS", "2S QD 2S 6H 9S 4S", "KH 8H QD 5D 8H 3S QD QS 6D KD 7D KS AH KD", "2S 4D 10H 4S JS 6H 8H KH", "JD 7C 7H KD 3H 4S AC 4H 9D 7S QS", "AH 7C AH 5D 5H JS 10C 10D 3H KC 9C 4S 6C 3D KH", "8S 8H KH 6S AC AS JD JC 5C 6D AH KC KS 10S", "10C 5H 5H 9S JC 6S 3C 10D 3D KC 7H 8D JS 2S 5S", "7D 5C 3S 8D 10H KH AC 3S", "QC 5D 10C 10D 5S 5H KH", "QH 8D KH 7S AC 10D JD 3C 10S 8H 6C 4H 8H", "3D 8C KH 10S 10H 3H 4C JH KD", "5C 2D 6C 3H 8H 4S 6S 7D 8H 10S 7C AH 9C 2D 9H", "4H 6S 10C KC JS 10H 7H AD 10D 5C 4C 4C 2C 2C 9S", "7H 9D 6H 10S 5D KS 4H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> decks = {"9D 5D 3H 3D QH 3D 9C 4D 8H QD KC 4D 4D 4H 2C AS", "7C 7H 9H 7S 6D AS 2S", "6D 3H 4C 6S 6D 3S 3D 6H 6C 8S 8D KD 4S QS 6S", "2D QD 4C 2C 2S 5D 5H KH", "5D 6H 6S 2D 7H 10S QD JD KC 3H", "7C 2S JC QD JD 8D KS 2S 9D 6C 3S JD AH", "7S AS 5C 9C JD 4C 10C 4H AD JH 2C 8H", "AS KC 4D KC 2C KC 5H QH AH 10S 8H 6H", "9C 10S 3C AS 9S 4D 3C KH 7H 2H 3D 8H 4H 2H JC", "JH 2C 10S 7S 3C 6S 10D 5C", "QD 3D 6H JS 10S QH JC 10C 9D KD 10D 3H AS", "5D 7S 8S 2H 4C", "5C 10C 9C JS KD 10H KD 5H 5H 5S 5S", "4D QC 8H JS 2D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "FLUSH", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> decks = {"8H 6D 9S QH JH QD JH AD 4S KH 9C JD 7C", "3D 10H JS 4H 5D QS 10C JD", "8D 8D 10H 8D 5C 8S KS", "AS 9C 8C QS 3C 9C JD", "5S 5S 7S 4C 3S 7D KS 5H JS QS 9C 10S JH QS KD 10D", "6S 9C QC 2D 6C 8D KC 7D 3D 7D 6D JS JH 2S 2H 9D", "2S 10D QH 2C 4S 4H KD 5C 9C 3C AD", "4D 10D 6D AC 5H AC JS 6D 7C KC 7D", "4D 6H 4H 5S 7C 3D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "STRAIGHT", "FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> decks = {"KC AC 10S 2C 9C 10D 5H KC 9S JC 4H", "6D 8D 6S 4C 3S 3H AC 6D 4H 6H", "3D AD 7D 8H 2D", "JC KD JH QS AH 3D KD JS", "9C 4D 3D JH 7D 6S 7S 6C KS KD 9H 7D 7H 8H 10D 8D", "10S 8S JH 6C KC 8H 3H 7S 6D 8S 2C 6D 6S", "QC 4S AH 10H 6H JH 10H JD 2H 10S JC 7C 4H 2D", "AC 3C 5S JD 5C 8S 5C JC JS 9C 7H 5D 9C", "4H 5H 6D JS 8D 8D 2S", "8S 3C 6H 5C 5D 6S 2C 6H 10D 10H 3C 6S QC 8S AH", "5S 8S JH 8S 3C KC QH 7D AS 2H", "3H 10C JS 7S 7D 8S JC AH KS QH 3C 7S 3H", "4H AS 2D QH 9H 10C 2H 8H 3S 3C KH 5D 6H JH", "4D 5C 10C 2H 7H QD 6D", "5C 2H 4S 3S JC 2S QS AD", "6D 4S 6C 6D 8S 9D 6D 7D KS 3C 7H KD JC", "QS 8D 10H 3H AD 9D 9C 3C 5D 9H KH 7C 10C QD 2D AC", "JD 4H 8C 2D JC 6S 7C", "3H 3D QS 5D JH AC 8D 9H 6H 2H QC 3S 4H JC", "6C 2C 7S 5S 8C KH 7H KH 8S 9D AH JH 7D 6H AD 5D", "7S 5D 10D JS 8C JD 3C 4D 9C AH 3S", "8H 3H 3H 5D 2C AS 3C 8S KC 8D 2D 5D 6C QC", "6H 8S 7C 5D 7C 3H 5H 8D", "KC 5H 4C 9C 8S 5D 10D 9C 9D 6C", "2D 7S 7C QC 7H 8S AS 2S 6C", "QS JD 8D 8H 4D 4C 3D QD 10D", "9D 4S 8S JC JC", "7C AD 5D 10D AS 3S 4C 2D 6S", "8D 5D 7C 2C 8H AS 2S 4C 3H 2H 2S 6D 9H", "4C 7H 8C AD JH 3S 6S 4S 6D AH", "9C JD 8D 4S JH 2D QH JC 2D KC 6C 4S 7S 2H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> decks = {"3D 5C 7S 4H 3S 9C 10D QC 4S KD 10D 2S AS 6D KH KH", "7C 5D 5H QH 6H KD", "5D 2D JS JD QS 6D 3D 7D 6C AS AD 5S", "2H JC 9H 3C 2C 4S", "KH 9D JD 9C 6C QD", "QC QH 6C 10H QH QS QS 5S 7H JC AC 7S 6H 9C", "KC 8D QC AH 9H 6C 6C", "7S 7H 6S QS 4C 3D 3C 2D 5S 5D QC 8C", "2H 5C 6D 10S 5H JC", "3H 2H JH QD 5D", "KD 6D 10D 10S 3H 2D 5C 6D 10S", "AC JH 5S KH 7H 9H 3H 7D AH 2H QH JC 8S JH", "7D 7H 2D 9D 8C 7C 10C 3S", "2C 3H 2H 3C JC 5S 9D 10H", "KC 7H 5D 4H 2D 10S QC 9D 7D 10H", "10S JH 3C JD 4S 4D 3H 6D AC 3S 3H QS 2S 4D 5H", "KC 6D 9H 8C JS 6C 9D QC 10D 7D 9C JS AH 8C", "KC 7D 6H 7D 7C 10D QH", "AC QC 3D 8S 2H 2H 3D 6C JS 8S 9C 9H 3D 9C", "3D KS 3D KS 9D 2H", "QD 5D 2H 3C 7H 6S 3S 4C KS KH", "3C AS 9D 5S 6C 7S 3H 7D 7H 10S QD", "7H 4H 7C KD 7D 6H 6H 5D 6D QC AH 6C 10S AC 3H 6H", "3S AC 10S 3C 2C 5H", "4S 6C 8H 4D 4H 5S 2H 6D AH QS 2S 9C 2S QD", "10H 3S JC 5S AH 7S 4D QH", "4D AC 9H 10C 8C 8D KC 8S AD", "JS 9H 3S JS 5D 10C 4C", "KC 4D 5C KD 2D", "2C 8H JH 6H 10D 6C 5D 9S 7D 8S 5D 4S", "10S 8S 2C QH 4C 4H JC 7S 4H 9H", "AH 5D AD AC 8D AD 8D 7H 4H JD JS AH AS JC 9H 5C", "8C QS 9D AH QS 4D 2H 5D KC 10H 10D 6D 2H QS 8S 7D", "JC JH 7C JD 3D", "JD AD JH 4H 5C AH 2H 4C 4H 4D 3S 10H 10H", "5C 3C JD 5H 2D AS 3S 10S 4H 9D 6H JD 2H", "9D 9D KH JC 9C", "2C 7D 2C QD 7C 7H KS AC 7H 9H 6H", "8D 7D JH 3D QC 3D JD 2C AC 6H 6S", "JS 4D 3H AH QC 6H 10S", "9D KS 2H 5S 5D KC QC QH 7D 8C JS JC", "3H JC 5D 4D 8D QC 6C", "2D 7D 9C 4C 9S 7C 5S 4S 10H QC 4C QC 6H AD", "7D 8C 10D 5S 4C 4S JD AH 10D 8H 7C 8S QS 8H KD", "9S QS 2D 8C 3C 3C 6C QC 5D 4C"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> decks = {"QC 6D 8H 8D QH 2S 5S AS 3D 9H 8C 7C 8C JC JH 5S", "6H 8C JS 4D 5C", "2H QH QH 9S 4D QH 8H 9D 10D 9S AD QD", "8H AC 4C 3S 3D", "2H 9D QC 2S 2H 7H QD 3H JD 6C 8S 8C AS", "KD 8S KD 3H QH 9C KC 7D 9D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FIVE OF A KIND", "STRAIGHT", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> decks = {"10H AH 5H AH JH QH 6H AH 6H", "AH 7S 2H 10H KH 9H 4H 9C 6H 8H 4S 9H 10H 10H JH", "7H 3H KH KH 2H 7H 6H KH KH QH AH 7C", "QS 9S 2H 10H 5C 8H 9H 6H KC 2H 9H QC", "3H 10H 10H 6H 6H JH JH 6H 8H 9H 10H 6H", "KH 4H AH JH 4H KH QH QH 8S 6H 6H 5H QH 7H", "8C 6H 5H KH AH 3H KH", "JH KH 10H KH JH 5H 10H 4H 4H 8H QH 3H", "3H 2H QH JH 6H 9H", "2H 5H QH 8H KH 8H 4H 9H 9H", "4H QH 2H 7H AH 8H AH JS JH AH 10H 10H QH AH 2H 6H", "KH 4H 4H JH 4H AH 2H 9H 8H 7H 4H 8H 9H 3S 4H", "5H 9H 2H 2H 3C AH 6H 10S QH 3H 4H", "JC QH 2H 5H QH", "9H 8H 2H 9H KH 6H", "10H AH 3H 5H JH", "2H KH AH JH 4H QH 10H", "2H JH 8H 10H 7H 5H 2H", "8H 2H 2S 9H 10H 7H 8H 4H", "AH 9H 10H 5H AH 3H 6H AH KH 10H", "AH 10H 8H KC 10H 2H AH 10H 6H AH", "4H 5H 7S AH QH 7H 8H 7H 6C 2H", "6D 4H KH 6H 10C 5H 6H 8S 10C 10D 9H 2S 8H", "2H AH 5S QH KH", "5C 8H QH QH QH 4H 5H 3S KH 2H 2S 2H 8H 4H JH", "6H 9H JH QH 6H 4D 7H", "5H 2H 5S 9H 10H QH 8H QH 7H 10H", "QH JH 8H AH 2H AD 10H JH 6H 4H 3H QH 3C 4H", "10C QH JH QH 10H 4H 5H 10H 2H 6H", "3H 5H AH 10H 5H", "2H 4H JH 2H 9D 7H AH JH 4H QH 6H JH JH 4H 6H 9C", "6H 3H 4H 7S 8H 3H 8H QH 8H 8H AH 2H 6H 2H 10H", "JH JH QH 4H 3H", "6H 8H 9H 4H 8H", "QH 5S 8H QD QH 9H", "4H JH AS 6H JD JH 8H KH AH 6H KH", "9H 4C 10H JS KS 7H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT FLUSH", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> decks = {"3H 2H 7H JH 10H 2H 2S AH 10H 2H AH 3C 4H 7H 7H", "9H 4H 5H QH QH", "AH 3H 4H 4H 8H JH QS", "JD QH 6H 5H 8H KH AH AH 9H 5C 2H 7H", "4H AH AH 3H 4H 8H 4H 7H QH", "10H KS 2H 9H 9H AH 8H QH 3H", "AH 7H AH JS QH 10S", "KH 3H AH QC 6H 6H 6H 7H 7H 8H", "7H KH 4H 6H 4H", "4H 7H 9S 7H 4H 5H JH KH 3D 5H", "5H 5H 2C QH 4H", "KH JH AH 4H 5C 3H 2S 3H 10H", "6H 10H 10H KH JH 6H 10H 2H AH 7H 10H 10H", "KH 10H 8C 9D KH 2H 6H AH KH AH 6H", "9H 10H AS 3C KH 10H 10H JH JH AH AH 9H AH 3H", "JH 5H 10H JH JD 8H JH 2H JH QH JH 5H 9H 7H 9S JH", "5H KH 4H KH 3H 3H 6H JH 3H 9H AH", "8H 6S 7H 9H AH 7H 5H AH KH 9H", "8H 5H 2H 6H JH 7H 2H 8H 8H 8H 6H QH", "4H QH 7H KH 8C", "5H 8H 2H 6H 5H QH AH 4H 4H JH 7H 9H", "10H 7H 7C 7H 5H JH 5H 3H 5H 4H", "5H 4H 2H JH KH 9H 2H 4H QH QH 6H 4H 3S 4S", "2H 3H 7D 4H KS 3H 2H JC 5C 8H 9H 2H 9H AH", "6H 2D 2H JH 5H KH 4H 6H JS 3H 5H", "5H 10H 3H 3H 6H QH", "3H 9H 2H 5H 10H 6H AH 8H QH", "10H 2H 3H 10H KH 5H JH", "3H QH 3H QH 6H", "10C 4H 5H KH KH 3H 2H 2H KH 2D 4H 6H 8S AD", "7D 4H 3H 5C 9H 5H AH JH 2H 2H 2H QH 10H 6D", "2H JH 3H 10S KH AH 2H 8H 6H 10H 2C AH 2H 8H KH", "2H AH 4H 2H QH 2S 7H AH 10H 2H 9H KH 6H JH 7D", "5H 3H 8H 7H 6H 3H 5H KH 10H 3H QH 4H 2C AD 8H", "JH JH 10H QH QH KH KH", "AS 7H 2H 3S 10H", "7S 6H AD 3H 7H 2H QH", "JH AH 8H 6H 8D 9H 5H 8H", "5H 3D 9H 5H 8H JH 8H 2H 8H 2H KH 9H 8H 5H AH 9H", "AH 7D 8H 4H QH 9H AD 3C 7H 3H 7H JS KH 9H AH", "KH 10H 2H 9H AH QH 6S AH 7H AS", "10S 4H JC 3H 9H JC 10H JH 2D 9H JH 4H QH", "7S 6H 10H 5H 9H 7D 10H KC AH 7H 8H AH 6H", "5H AH KH 8D 2H KH 5H 5H JH 3H 8H", "QH QH 4H 2H 2H 10C KD 10H KH 8S QS", "AH KH 2H 8D 2H 9H 4H QC 10H", "KH 10S 7H 3H QH 6H QH", "9H 9H 4C 6D 5D 9H QH 9H JH QD 5H 2H 9H 6H AD", "3S 9H 7H JS JH KH 6S KH 3H 8H AH", "6H 8H QH 4H 6D 7H 4H 5H 7C QH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "STRAIGHT FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> decks = {"9H 7H 4H 3H 2H KH 2D 3H AH 7H 7H 2H 7H 8H", "6S KH AH 2H JH 10H 5H 6H 2D KH", "AH AH 10H 9H QH 2H 3C 10H 7H", "2H 2H QH 5H 7H", "2H 8H 2H AH 9H JH KH JH JH 5H AH", "4H 6H 9H AH 5H 5H 8H", "7C 2H 7H 4H 4H 4C 4H 6H 4H 2H 3H 7H 10H 4C", "JH 8H 9C 10H 10H AC 2H", "3H 6D 5D KH AH JH 7H 4H 6H KH JH 10H 3H JH 4H 3H", "KH KH 3H 2H 7H 6H", "2H 7H 4H 3H 10H 5H JS 10H 9C", "QH 2H 5C JH 8H JH QH 6H QH 2H KH JH JS 9H QH 4H", "8H QH AH 8H 3H JH 7H KH 3H", "8H 2H 6H 9H 9H AS 9D 10H QH 9H 9H JH 8H KH 10H 7H", "8C 3H JH 6H JS 10H 10H 6H 7H 5H 3H 5H 3H 7H QS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT FLUSH", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> decks = {"10H 4H AH QH JH QH 9H 4D 7H", "9H AH 9H JH 5D", "JH 3H KH QH 5H", "10H 6H KH 7H 5H 7H 2H 5H QC AH 2H 8H", "8H JH 5H 8H 5H 7H JH", "QH 10H 7H AH AH 6H 2H", "2H 6H 6H 7H 7H QH 8H 2H JH 9H 10H", "JH KH 9H 5H 9H 2H 10D AH 6S QH KH 10H 9H", "10H 6H KH 9H 8H 5C 8H 2H 7H", "8H 4H 6H 7C 2H AH", "5H 6H KH 7D 8H 8C 8H 9H 7H", "7H 6H 3H 10H 2H 2H AH", "7H 10H KH 8H AC 8S 7H 8H QH 8H JH QH JH 9H KH", "QH 3H JH 10S 6H AH KH KH JD 9H 10H 5S", "10H 6H KH 6H 2S 8H 2H 8H 7H 4H 5H 3H", "2H JD AH 7H 5H QH AH 10H 8H 6H JH 6H 5H KH 6H 10S", "5H QH 7H 10S 7S JH 4S JH 6H 7H AH 5H 6H 5H", "3H 9H 2H AS AH 9H 9H 8H 4H 2H JH AH JH", "10H AH 6H 5H JH JH", "10H 10H 3C 8H 10H", "AH JH AH QH 6H", "AH 4H QH QS 7H 9H 9H KC 4H KH 6H 3H 6D 5H 3H", "QH 7H 4H AH 8H QH 5H QH 9H 4H", "AH 8H 8H 4H 4C 5H KH", "7H AH JH 2C AH 5H", "6D 7H 3H 10H 6C 8H 5S 3H 8H 10H KH", "AH 10H 8H 3C JH 10H 5H 10H 6H KH 3H 10H 8S", "4D 4H 4H 5H 6H 5H AH QH KH 5H QH AS KH", "JH QD 5H AH 3H QH 5H 2D 3H 4H 3H 4H JH AH QH", "QH 7H 6H QC KH 3H JC 3H", "3H 10H 3H KH 6H AH QH KH 10H 3H", "8H 8H 2H 3H 8H 6C QH 2H KH 9H JH 3H", "2H QH 2D 9S AH 8H 2H AH 3H 7H KD JH 7H", "JH 3H QC 9H QH QH 2H 6H 2H QH 8H", "10H 2H 9H 7H 4H KH 6H 6C 6H 7H QH 4H 7H", "KH QH 4H 2H 6H 6H AH 9H JH 2H 10H", "10H 10H 2H QH 4H QH 9H KH 8H KH JH", "6H 10H 6H 8H AH 9H 4H 10H 3H QH 9H", "2H 7H 5H 2H 9H 4H AH 5H KH", "2H KH 3H 10H 3H 9D 9C 3H 5H 2H", "5H AH 4H 6H 6H", "AH KH 7H QH 9H AC 9H JH QH 6H AC 7H KH 5H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT", "STRAIGHT FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> decks = {"4H JH KS 7H JH JH", "JH 8H AH 10H KH 7H 3H 6H QH 4H 10H 6H JH", "QH KH JH 5H 7H KH QH 8H", "6H KH 9H 7H 4H AH 7H 10S", "AC 4H JH 4H 2H 3H AH 5H 3H", "5H 6H 8H KH 9H AH JH QH 3H", "JH QH 6H 2H QH 10H 9H 2H KH", "QH 3C 7S KH 4H JH 8H 6H", "2H 9H 9H 2H 3H 8H 2H KH QH 7H KH 10D", "6H 3H 2H AH 10H KH 5H AH", "3H 10H KH 3H 9H 9H 6H", "6H 10H 10H KH 6H", "6H AH 3H JH 5H 5H 5H 10H 9S 9H QH 10H 7H JH", "4H 8H 9H AH QH 4H 6H AH QH 8H QH 6H 4H", "4H 4S 7H 3H JH JD 9H 7H 3H 2H QH 8H 10H 8H", "KH QH 7H 9H 8H", "2H 10H 8H 3C 3C AH 6H 3H 5H", "10H 3H 9H 3H AH AH 7H", "QD 4D AH 9H 3H KC 8H 2H KH AH AH", "4H 3H 5H 8H AH QH 9H 9D 9H 4H 8H 2H 4H", "9H 6H 8H 10H 3H 4H 4H 10H 6H", "KC 8H 2H JH AH 6H JH 9H 3H 8H 5H QH 8H", "JH 7S 6H 10C 7H 4H 2H 4H 3D QH AD 2H 5H 10H 5H", "JC 6H 9S 9H AH 9H 9H 2H 2H 4H 6D AD 10H", "4H JD 5H AC 5D JS", "10H 9H 2H 5H 8S QH 3H 9H 5H AD 6H 9H JH", "5H 2H 5H 10H 5H 8H AH", "AH KH AH AH 3H JH 8H", "6H 10H 8H 7H 10H 4H 3H QH 8H", "4H 4C 10H 5H JH 6H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT", "STRAIGHT FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> decks = {"9H AH 3H KH 6H KH 4H 3H 2D 8S", "QH 8H 10H QH 2H 8H 4D KH 10H", "10C 7H KH 9H 5H 10H 5H 6H 4H QH 5H 5H 2H", "9H 9H 2H 2H JH", "4H 8H AH JH 3D 2D JH 8H 6H 6H 9H 3H 9H AH", "AD 2H QH 4H 6H 6S 5H QH 5H 4H KH 3C", "2H 8H JH JH 7H 4H 10S 8H 6D KH", "QH KD 3H KH 3H 5C 8H 6H QH 5S 3H KS", "10C 6H JC 10H 5H 10D QH", "10H 9H KH 10H 6H AH JS 6S 9C 7H", "3H 4H 5H 10D 5H 4H QH 6H 5C 5H", "QH 8H 2H 5H 5C KH 6H AH 8H 8S", "KH AD 9H 4H 7H 4H 5H 6H", "9H JH JH JH 3H AS", "AH AH 9H 6H JH 9H AH 10H JH", "6H 9H 3H QH 8H 2H 5H AH AH 7H 2H 3H 10H 7H 2H", "8H 3H KH 9H 6H JH 6H 4H 9S 8H", "8H 10S JH 6H KH 8H KD 10H 3H 3H JD AH KH", "10H QH 9H AS 9H 2H QH", "10H 10H 7H 5H 3H 7H JH", "7H 4H AH 7H JH AH 2H 2H 7H 5H 4H 2H KH AH AH QH", "8H AH JH 2H AH AH 3H 8H 4H 2C 10H", "3H JH 4H 7H 3H AH 6H KH 9H 9H 9S JH", "2H QH KH 3H AH 2H 8H 7H 10H 5S 4C 3D 9H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT FLUSH", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> decks = {"5H 9H 10H KH 5H 3C JH 10H 3H 2H", "3H 8H AH KH 10H QH 7H", "AH QH 10H 3D AH QH JH 2H 9H 5D QH", "5H 4H KS 8H 9H AC AH 9H 3H", "4H AH 4H JH AH 9H JH KH 9H 3H 9H JD", "AS 6H 5H 8H QH", "3H JH 7H 6H AH QH 6H 5H 7C QH QH 6H 2H 4C JD 8H", "2H 3H 5H 2D 4H QH 5H KH 5H 3C 10H 7C 9H 3H 7H", "5H 5H 3H 9H 5H 3H", "6H JH 3H 9H JH KS 10H 2C KH", "8H AH 3H 5H 5H 6H", "AH 5H 10H 3C JH 9H KH JH 7H QH AS 3H KH 10H 3H 4H", "QH JH 10H KH AH", "10H 4H 6H 5H 9H AD 9H 5H KH JH", "3H KH 10H 4H QH 9H 9H JH KH KH 3H 9H", "9H AH 10H 10H 10H QH JH 6H 5H 4H 6S 8H 10S 10H 8H", "4H 3H 9H 3H 3H 6H 8H AH 7H 4H 6H 6H 8H QH JH", "QH 10H 4H JH QH 8H 10C", "5H 3H 7H 2S QH JH", "QH AH 2H QH 3H AH 9H JH", "10H JH 5H 7H 3H 3H 7H 9H 10H", "3H 7H QH 8H 2H KH 5H 6H", "10H 3H AH 4C 9H 6H 7H 2H JH 3H", "5H 8H JH 3H QH 7H KH QH 4H JH AH", "4H JH 4H 10C 9H", "5H 4H 8H 9H 4C JH 3H 8D", "6H 3H QH 9H QH JH 6S 5H 9H JH JH 4H 6H 3H 6S", "KC KH QH 9H AH QH 3H JH AH", "KH QH 2H 3H 5S 3H AH 3H AH 6H 3H KD 2H JH 10H 8H", "JH AH 3S 7H 8H 5H 5H 8H 6D 6H KH 2H AS 2H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT", "STRAIGHT FLUSH", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> decks = {"7H 9H 8H 9H 3H 10H", "QC 3H 8H 2H AH 3H 2H 3H 10H 8H KS 10H 8H QD 8H", "2H 4H 9H AH 3H 6H QH AH 10H 6H", "4H 3H 5H 2H 3H QC 10H 9H 3H", "2H 6H 5H KH 6H 6D 8H 6H 3H 4H", "8H 7H AH 10H 7H 7H 3H 2H 7H", "8H 5H 10S AH 7H 10H 7H 4H 6H AH 9D 2H 4H", "7H 4H 7H JH QH JH 8C AS 8H KC 8H 6H", "AH 6H 5H QH QH 7S 3H 6H KD 9H AC 4H QH QH 5H", "3H 4H QH 9H AH AH KH 5H 2H 6H 7H AH QH 2H 6H", "8H KC 7H 3H 2H 6H 8H 8H AH 5H", "4H 6H 2H 7D 7H AD 3H 5H 9H 3H 3H JH", "4H 8H 8H 3H 4C 10H KH 7H 3S 9H 8H 5H 9H KH 7H 9H", "9H JH QH 10C 4H 2H 9S 7H 5H 8H 2H 4H KC 6H 10H", "7H 6H 3H 6H 10H 10H 9H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "STRAIGHT FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> decks = {"QH JH JH 2H 8H 7H QH 10H 6H 6H 7D 8H 3H", "9H 6H 8H 9H 7H 9H 4H 6H", "2H 10H JH 6H 6H AH KH KS 9H QH KH KH 2H AC 4H", "7H 6H AH 8H 7H AH 6H 6H 10H 5H KH 7H 5H AH KS", "3H 2H 9H QH 9H", "3C 4H 4D 5H JH 2H 4H 5H 4H 10H 5H", "2H JH 2H KH 8H 9H KH 9D QH 2H 8H AS 8H 8H 10H 2H", "8H 4H JH AH 3H 4H 7H 8H AH 2H 5S AH AH 3H", "8H 3H 10H AS QH 6H 3H 2H 6S 8H 7H", "6C KS QH 5H 3H 2H 5H 10H JH 9D 9H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "STRAIGHT FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> decks = {"10C QS KH QH 10D AH AH AD 10H JH 10C 10S JC KS", "QC JS QS AC AD QS KS KD JH KC QC AC", "QC QC 10S 10S AH QS QH AC QH KC AD", "10S AS QS JC KH QH QH 10D KD JC AD QC 10S QC QH QD", "KD JH KC KC KS AC AS JS 10D AH JD", "10C JH QH 10S AD AC KD KD AS AD", "KS JS KH QD JS 10S KH JD KC AS JD JH KD JD", "JH QC 10D JH JD QH JH AD AS 10D QC KD KC AH", "KC 10S 10S JS JS KS JH QC QH", "KH AS AH 10H KC JC KS KS JD QD 10C JH 10D QD AC", "AC 10H QC 10C 10C 10S", "10H JC QC QS JS 10S KS", "QS 10C KH 10D JC 10C KH JD", "KD KH 10C QS QH 10H 10S AC JC QH QC JC JS AH 10D", "10H AC KD JH AS JC", "10D 10D KC QS KD QH KD QC 10D AS", "JS QC AS JH QD AS KH 10D 10H KH QH JS KH", "KC QH JH QH 10C", "QC AH JS AH AS JC KS", "10H JS QC JC KS", "AH QS AH JC JH KH KS QS AD AD QC KC QS 10S", "10H QS JD 10D QH", "AD 10H JH KD 10S"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> decks = {"AH AH AS KC KS", "AD JD QC 10D 10H 10C QC AH 10S JS QS JD AH JD", "KS 10H QD KC JS JH KS 10H JH AH AD AD", "AH JS QH JH KH KD 10C QC JS 10D KC QS 10S 10D", "JC 10C QC QS JH 10C JH JC AH QH JC QS", "KC 10D JS QS QS AD KD AC", "10C JD 10C JD 10H 10H KH KD KC AS", "JC QH QC JC QS 10S", "QH KD 10C QC 10D QC 10S AD 10H KS 10C", "10C QC JS JC AS QD 10S QC 10D 10S", "10H 10D AD AC KH 10S JD AS QD", "KS JC 10C AC JD QC KC JS AD KD 10S", "AS QD 10S 10H AS 10S AS AC KD QH KH AD QD JD AS", "JH 10D 10C JS AS QS 10H QH 10C JC JD 10H KD", "KH 10C QD 10D QS QH AH AS QH JD JH", "JD AD JS JS QS QC AD JC QS 10D AD KH JC JH", "AC 10S KC KH KD KC QH KS JD KC QD", "JH 10S QC JS QD QH KC QH", "JS JS QH AD QS AH JC JD AD", "KH JS JC JD 10C KS AS 10C JC QS KS AC", "AC QC JD AC QS AS JH QH", "KD JC 10S 10C AD JH AC AS JC 10H JH QD AS JS KS", "AS KC QC JD AC AD JS KD 10H JH AS AD JH KC", "10H KC KH 10S AS AC QS JH AC KH", "10C QS JD KD KH 10S 10H", "QS KS QC JC 10C 10H 10D AS KC JD AC JS 10S", "AD QS KC 10S JC", "10C QS JH 10C QH KH AC QS KH KD KS JC QH QS", "JH QC KC QC AH 10C AD QH AD JC KS 10S", "KH AC JC 10D JD AD JH KD QS AD", "KC AC QH KH AH QS QS KD", "AC AS AS AH KH 10D", "KD JH QH QH AD 10H QH KH 10S JD", "KD JC KH JH KC QC QS JD 10S QH KC", "KD QH 10C JH AD KD JH", "AH KC AH JS KC AC 10D", "QD KD JS KS JS KH JD KS QS", "KH QH QC QD KC AC JS 10S AC AC AC", "10D 10S 10H 10C KS AS 10H AC", "QC AC 10S JS QS 10D KD AH JC AC AD JC KS", "JD QD QD AC 10C AS JD AD", "10C AC KC JS QH 10H KS AH JD KC KS KD", "JC QH 10D QH JS 10S KS KC 10C QC AD", "KS 10D JS KD KD 10D QS AD AS QD KH 10S QS", "KS AD 10H AS 10D JC JC QS KD", "JC QD QC 10D QH JC KH JD KC KS AH JS AC AC", "JS AH KD KS AS JC AS 10D QH", "QD JC QD AD KH QD JC QH AS AD KD QC AC KH AC", "JC KD KD AH AD KS KC AS QS JS", "QS KH KS KD JS KH JD JC JD QD KC"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> decks = {"10S KD KD 10H KD QC QH JS 10H JS QC 10S", "AS QH AS QS 10C AS QC JS AC JH KH", "AC QH AD 10H QC QD KS JC QC JC 10S QH QS AH KD", "10H QC QS JH 10C AH KC 10S 10H 10C QH JC JH", "10D QD QS AD JH JC 10H JS JH KH 10C AS JH QC KC", "JD JD QC AH KC QH QS QH 10H", "QC 10C AD KH JC 10D AD QD KC AC KC AH QH KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> decks = {"JH JD QD 10D AH 10C JH KC JC AS", "KH AH AC QH JD QD 10S QC JD", "10C KC 10S 10D 10D KD QS JS KS KS", "KS KS 10C JS KS 10D JS 10C 10S JD QS 10H JD KS AD", "AC AH QC JD 10S QS JS QH 10S AS JH KS AS AH", "KH JS JD AS KD KC KC QS QC QD", "JH JC 10D 10C KD 10D QC 10H QS KH", "10S JS QH 10D JS AS JH QC QS 10S JS QS JD QH KD JH", "10C JS KD QS QS", "KH 10H 10C KD QS KS AC JH AC JS KS", "JH 10S JC JH KH KD QD", "10D 10S JD JC AC QS AD JS KD QS QC 10H QC", "AS JC JS JH AS JS QD JD JD AC KH 10D 10C QD", "QC AD QH KH KC AH AH QH 10C KS QS QD AC", "KD JS QD 10H KC JD AH AH 10S 10S JS 10C", "KH 10H QC 10C JD QS AS 10S 10D", "QS 10C JD KD KD KC QH QS 10D JD 10D", "KS KC AH 10H 10C JC AC 10S KC QD KS JD 10C", "JS JH AC 10H QH KC KS KC JS 10H 10C 10D AC KS JS", "KD QS JC KD QS JS 10D", "AH JC JD 10S JD JS 10C QC QS 10S 10S 10H QC KH QD", "KD KD AH KD AD KC", "JH KD JH 10D 10H JC QC JC QS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> decks = {"KD JC KH AC 10H QD AC JS 10C QS KH 10D JD JH", "KH QH QD KD KH QS QS QH AS AH", "AS KC KD KS JD KH 10D JD JS JD", "QC JC 10C KH 10C QS JD JC JC QH QC KD AH AS", "KC 10C 10H 10S QH 10S QH KH KH AC QH KH", "KS QC QD QD JH QD", "KS 10H JD QH JD JD KC AS QH KD AS JH QS AC QS", "QH QD AS JH AC 10H QC KC QH", "AS 10S 10S 10S AC AS JS KH", "KD 10C JC KD QC QS 10D KD QD", "JS AD AH JC 10D AD JS JC QS KD 10S QH AD KH 10C", "10S JD QS JD KH QS 10D KD AH JC", "AS AH JS KS 10H", "AH JD AS QS KD QH JD", "10H AH QH JC QC QC KS JD AS QD JH", "AC JD QH QS JC 10D", "KC 10D 10D QH KS AS QS 10S AS AC QD AC QS", "AH 10D AH QS KS JS KC KC 10C 10D QC", "QC QH QS QC JH JC 10D AD JH AC 10S AH 10H QD JD", "10H KC AC QD AC QD", "JH KD KH 10C AD KC JD QS QS AS AS 10C JS QC AD", "JS AH KD KS 10H", "AH JS AC QS AC QH QD AD 10H QH QD 10D KS", "KS 10S QC JH 10D AS QS 10C QH JS 10D QD 10C 10S", "AS KS AD QH 10S JD QC JH QH 10C 10D KS JH 10C AS", "10S 10S AH 10D KS KD KS JH AC", "KD 10H KS AS AS JH 10S AD JS AC AH JH JS 10H", "QC JD QH KC 10H 10C", "JD 10S AD JH QC QC QH AC", "QD JS AC 10C JS JS KC KD KD QC JC AC AC QS AH QD", "QD AH KH 10H JH QS KH", "JH KD 10S QH JC", "AH QD JH JS AH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> decks = {"KC 10S 10S AD AS AS", "KC JC KH QS 10D", "QD QH QD QS 10C JH AH 10D", "QD JS JH JC 10H 10H KC QS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> decks = {"AC QC KH QS AD AD AC 10D JH JD", "10D 10H 10H 10C KC", "KH KS JH KH AS JC 10C QD QS 10H 10H KC KH", "10S JC AC AH JH QC 10H AD", "KH QD AS JS QC 10D QH KH JH 10H 10D JH AD JD KS AS", "JS JH JC QC AC 10H JD", "JH 10S 10S 10C KD 10S AS JH AS AH QC 10C 10S 10H", "AD 10H KC JD JC QS QD KC 10C 10C QD 10H KS AC KC", "QC KC AC 10D JH 10S KD 10D 10H", "QH KD QC 10H JD KH QS JC AH JC AH", "JC 10D 10S AD QH 10S AC AC KS AC QD KS", "JC KC JD 10H 10H 10H QC AC JD QC 10S QC AH AS AH", "JC 10H AC QS AC KD KD KD QC AS AS 10C 10S", "KC 10S AD QH KS 10H QD 10S JS JH QS", "AH KC KC KH KD KH KC 10D QS QH KC 10C", "KD JC KS 10C QH AC 10D KC 10S 10S AD 10D QD QS KC", "QH 10C JS AC 10D KH JS AC JC AH AC QH 10D JC", "KH AD AH JS 10S 10D KC KD KS JD 10C JC 10H", "QC AD JH AC JH AD QD KS", "AH QS JD QH 10C QH JD AH QC KS QC JH AH KD JD", "KD KD QD 10C JS JD KC", "KD KH 10S AC JS 10D KH QH AD QC QC AH", "KH AH KD 10C JH QC 10C QC", "JD KD JD AS 10S KD KD KH 10C KH AS AC QH KH KC KS", "AD AS KH AH JS", "QC QS KS QS JC AC QH JD QC 10D KC", "KC 10H QD JC AS AH JS JD", "JS KS QC 10D 10C", "10H KD KD QC AD QS AS KD", "JC AH KC QC AH AH AD QC JH", "KH JS KH QH KD 10H 10H 10D JH KH", "KD AC KC 10C KC AC KS AD 10C 10H", "10H JC 10S AH KC KH AC 10D QD QS 10D JH QH KH JD", "KS JC QH QD AS 10C 10D 10D AC", "QD AD AS AH QH KS QD QC KC", "QD AC KH 10H KS QH", "10C KD JS AC KH QC QH KC", "KS QH KD 10D QH JH QS QH KS JH QC KH QH 10H", "QC JD 10H KD 10D JC AH KH 10S KC", "AS QS 10D KC QC QC 10D 10S QD 10H JD AS 10S", "KC JH AC KD 10C KS QD AS 10C", "AH KC QH 10D AD QH 10D", "AC AD 10S KH KH JC 10C QS KD JH AS JD 10S JS AC", "KD 10H JD QH KH 10C", "KD AS QC JD JH QD 10D AS 10H KC 10C QC 10S 10D", "AS KC KS AC QH KC JH 10C 10C 10C", "JD AH 10C JD 10S QD 10H JS KS", "AH 10D AC JS KD AC 10D 10H JD 10D", "JS JS JH 10C 10D QD 10D KC JH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> decks = {"JC QC AC 10D KH 10D QH 10D JS KH JC KD JC", "QC QS QH QH AD KC 10D AH QD JS JD", "QD JH 10D QD 10C QS AC 10H 10S JC KS QD KH 10H AC", "KH QH 10D AS QS AD JD QH KD 10S 10D JH KH", "10D KS JS 10C QC 10H QD", "KD JH 10S JD KH", "KH JS QH KH KH 10C KD JC 10C 10H", "QH 10H QH JH QC KD 10D KS KS QS 10C QD JD", "AC QC QD KD JH 10S 10H QD JC QS", "AS AD QC AD AD JS 10C KD JD JC 10H JD AS 10C", "JD QD 10H AD KS", "QH AD AD 10D AD KH", "JC JH QH 10C 10D KC KH 10H QD", "JC QD JH JC KC JD QD 10S KD KH AD QD QC", "JC QH QD AD AH QD KS JD QH 10S JD QD 10H JH", "QC JH KD QC JC", "10S AH AC 10H 10H QD 10S JC JD", "JH 10C QS KS QC QC AH QD QC AS QS QD QS AC", "QC AD QS QC QH 10C", "KH KD KH AS AD QD JD 10D KS QD KD KD AD 10D JC", "QH KH AD 10H QC QS 10H QC JD 10D 10H QD JC KC JS", "QC 10S AD AC KS QH QD 10C JH", "JD 10D JC KC 10S KD 10D 10C 10S", "AD KS 10D AS QS QC 10H AD KS 10S AD 10C AD KS KD", "JC KC QC JC JS AD KC JS QH 10H", "KH KC 10H 10S QH KH JH 10S QC JC 10S 10S AH 10H AC", "QS 10D KH 10C QH KC JS QD 10S AD QC AD JD KC", "JD QC AC AS AH JS KC AS JC 10C AH QC QS JD", "10H QC KC QD AC QS 10D 10D AS 10S KS", "10D KS JD AS 10C KH JH KC KD QC 10D AC", "KC AH 10D QS AS JC JH KH AH QH 10D QS AD AH", "AC KH AD QS JD 10C AC JH", "KS KC KD KC JD JC KC AC 10D 10S JS 10S JD QH QC", "JS QD AD 10D AD KS 10H AC KS QS AH QC JS 10H 10S"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> decks = {"QS 10S KC JS 10D QD AD KS 10S JS 10H KD JC KS AH", "JS JC AH 10D AS AD AD KD AS 10C", "QC 10D 10S KC JD KS QH KH 10H JH 10S", "JC KH JH KC KS AD KC JH", "KH KD AD 10H QH KH KH 10C 10S 10H KD 10C KS JH QD", "JD 10H AH AD JS 10H 10S QD KD", "10S AD JH QD AS JH AS KH AC 10H KD JS KH KS AH", "QC JH QD 10H AC JC 10D JS 10S AH", "QD 10S KC JH QD AC KC JH QC 10C", "QD KS QD JC KH 10D", "AD 10H KS JD QC AH JC KS KS JH JH QD JC QC", "QH AC KH 10C 10H 10C AS QH 10C AC AH KC QD QD 10S", "AC KH KC 10S QD KS KS", "AS JD KC QD QC 10C JH JD KD AH QC", "QC JC JC QH QC JC 10C QD AH AC 10S AH AH QC", "JS 10H QD QD KH AH KC JD JH JH KD"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> decks = {"8S 6S 6C 10D QH 2D 10C QS 4S QS 6D 2H QH JS 2D 2D", "4D 2C 2S 8C 4D 10S 8C", "QH QD AC 4D 8S AD 2C", "AD 8D 6C 2D 10S 8S 4D AD 4H", "9C AC QC AC 4D 2C 10H 2H 10S QD 8C 8D 2H", "4D QS QH 4C 8D 2H 10C", "10D 4H 10C 8S AH 8D 2D", "8H 8H 6S 6S QH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> decks = {"6H 4H 8S 10D 2H 10S 8D QC 8C 4S 6C 10D 8H 4S", "QC QC AS QS 2H 9H 4H 4D 6S", "2C KD AH AS 2S AC AH", "AH AD AC 6C 2S 4H 10S 3C 8H AC", "3S AS 8H AC 2S AD 6C 4C 2C AH 4H 8C AD 10S", "10C QC 2H QH QH 2H 6H 8C AD 8H", "2C AH QC AS 8H 10H 2C AC AH 8C AD AC 4D", "4H 2C 8H 4S 8C 2S", "AD AS AS AD 6H 2D AC AD 6C 4C 2D AS 8H QC 10H AC", "4D 8D AH 8C 4S 10S 8H 10S 6H 6D 4S 2S 6C 2H 6C", "4D 2H 4S 2C 4S 4C", "2S AC 8S JH QS", "2H 8D 2D AS 6D 6S 4C", "QC 4S 6H AS QD 6H 8S", "10C QS 4C QS 9S 2D 8C", "2C QC QS 8H 4S", "10S 8S 6D 4C AD 8S 10H", "2D 8H 6D 4D 2C 4H AD 10C", "AS 6S 6S 4H QD 2S 5H 10S 10D 8S 4C 2H 8D 6D 6D 6C", "QS QS 6H QD 2D QH", "10C AS 4D 2D QD AD 8D 8S", "8S 8C AC 6H QH 10C 8C 6D 2S", "8S QH QH 8S QS 2C 6S QH 4D 10C QH 6H 8H 8D", "10S AS 10S 4S AH", "3S 6D 2D 6D 6D 4C 10D 4S 2S 2H", "4H 10H 5D 6D 10C 8C QC QH 4D 2H", "AD 6S AS 6D AC", "2S 4H 2H 2S 4S 2C 8S 10D 8H AS AD AS 2S AD 3C QH", "AS 5H 4D AD 10S 6H QH", "2C 4D AC AH AD 10S QS 10C 6H 6C 8H 8H 2S 10S QD 4H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> decks = {"10H 4D 4D 6H 2C QC 6S 9C", "8D 10S 8H 8D AC 4D 4S 10C 8D 10H 6D 6S", "KC JC QC QH AH 4S 8C", "6C 4S 6S AC AH AD 8S AS 6C QD 2H QS 2S QH 6C", "2D 6S AH 2S QD 5H 6C 6C 10C QD 6D 2D 6H 4H 10D", "4H 6S QS QC 6S 10D 4D QS", "4H 2H QH 10S 10H 3H 2S AC 6C QS 4S 6H 8S", "8S 8C 8D 4H AH", "8H 6H QS 8D 8C 4C 10H 6D AD 2S 8D 8C 10S 8D 4C", "4S AS 2D 6D QS 8C AC 6C", "8S 10C 6C 10C 10H 4S 2C 6D 4H 8S", "10C 10H 6C 6H AS 2D QH QH AH QS AD 8S AC 4H", "KC 6H 10S 3S QH 10C 6H AS 2C QS 6D 8D", "QH 2S AC 6D 8S 6C AS AS AC 4H 10H QH", "8C QS 10D 10S 6H AD", "8H QH 6S 8D QS AS 2D 4D 4D 2C 6S", "6D 10S 10D 2C AD QS 4D 8C", "10H 8H QC 2H 8C QH 6C 2C 4H 10C 6H 2H", "4H 2H 8H 6C QS 6H 6S 2S QC AH 4C 4D 2D AC", "6D 2C AD 8S 6D AS 10C 10D 10D AD 10S 6D", "QD AD QD 8S 10D 10C 2C AH 4D AC 4D QC AD", "6D AC 4S 8H 4D QC 2S", "10H QD 4C QS 3H 10H QH 2H 10D 2D 10S", "4D 6C 10D 8H 4D QS QH AH", "8C 2D 8S JD 2D 6S 6C 6H 6D 4C 4D QH 10H", "AH 7S 6D 2S AH 6H 4S 8S QS 2D 8H 10D QC", "KS 2H 4D AC AS 10S 2C 10C 6S", "AC 8C 4H AC 10D 10D 6H 10S 8H", "8D 2H 2C 6D 4H 4H 10C QC 10D 10D 6D QH 6S", "AD AD 4H 4H 4C 6C 8C 8S 4S 4C 10H AD 6C 8D 6H 6C", "4S 2D 2H 6D 2D 2C 6S 4C 6D 4S 8C 6D 2S AD 4C 4H", "AH 8C 6H QS 8D 10D 10C 6C 2H 2C 2D QD 4D 6C 6D", "QD 8H QS 3C 2S 10H 4C AC 6S 10C 6S AC 6S", "QH 8H QC 6D 2H AH 2H 10H 8S 2S 10H QC 8H QC 6S AD", "9D 10D 2H QH 6S 10C AH 6C 2D 7S", "4S 6C QD 2H QS QD 2H 8H 2S 4H 4D QC 6D AS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> decks = {"QH 8C AS 4H 4H 4H 10C 6D AH 6S", "AD 6S 2S 2H 8S 10H 2S 8S 8S 8H", "QC 2D 10H 8S 6C AD QC 10H 8D", "6C AC 10S 2S 2C 8H AC 2S 6D 8H 6D 4D AD AS 6H", "4C AD 2C 2H QC QS 6C 7S QH 2C QD AC 8H 4H", "6D 10H AS AS AD 2D", "2H QD 2D 10C 8S 2S QD AD 8H 4C 4H AS AH", "2D 2H 2D 10C 2H 4C 4S 2H 2H 8D 4C 10H 8C 2C 2S 8D", "4C 8D 8S 5H 4H 5D 10D", "2S JD 2C 2C 8C 10D 6C AS 6C 6S 4C 10H QS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> decks = {"AS 2D AH 8H 10D 2C 6S 4C 4C 2H 10C", "8S 8C AD 10S AS KD 6D QS 2D 10D", "2C AH AC QC 10S 8S 10S 2C QD", "QS AS 8C 8C 3H AH 10D AC QD 8D", "AS 10D QS 10C QD 4H 8S 6S 2C AC", "2H 6H 10D 10H AD 2D 4H 6H 10D 6D 4D 8C 10C 2C 2D", "QH 8S QC 6H 2C KD KS 2S AC 10H 2D 8D 8S", "6D 4D 6C 4C QH 2C 10H 6S 10D 5D 4H 6C 2D 8D QH QD", "QH 6C 2S 4C AD 6C QD 2C 4C 4C 2S", "3D 8H 10C AD AC AH AS 10C AD 6H 10C QS 2C", "AS 4C 10H 2S 8C KH 10S 10C 6C 2H 6H 10S 4D", "2H 6C 7C 8C 6C 8C 6S 4C 5S 2D", "2S 6S 8D 5S 8S 10S QD 10S 8H 8D", "6D AC 2S 10H AH 6S 6C 4S 4C QH 8H 6H QD 8C 2H", "2D AD AC 10S AD 6D AS 8C QH", "8S 6S 4C 10D 9C 7C AS QS", "7C 10H 4H QC 4H 4C 8D", "10D QC 8D QD 4S AH 4S 6C 10D 2D", "4C 10H 2C 10C 6D 2D 6D 8C 4D 4D", "6S 8S 6D 8C 2H 10S 2S 2C 8S AC 10D 4D 4C 2D 8H", "AH 8H 8S 8S QH 5S 8H 10C AD JS", "6C 2C QC 9H 10S 3H 4D 6S QS 4H AS QH", "8C AS 10D 4D QD 10D 2H", "6S AS QD 10D AC 5D", "2D AH QD QH 4S 10H 8D QC", "4C 10C 2D 6S 4H QS 4H 8D 8D 2H", "AH 6C 3C 4S 10C 10S", "2C QH AC 4C AH 4H 10D 4H", "8H 6H 2C 10H 2S 4C 4S AS", "2H 10D 6C 5C 8S 10S 4D 8C 10H 8C 8S 10H AH 3D 8H", "2S 4S AS 4C QC 8S AC 8C 8D AS 8H 4C AH 10S", "AC 2H 2H 2S 10C 2H 4H 4C AD 6H 4H 4C AD", "10H 4C AS QS 4H 8C 4S 10S 4S 4C 2C 10C 8C 6S QD", "6H AH 2D 6H 8C 2C 4S 10C 10D KS", "5C 4S QS 2H 9S QH 2D 4D 6S 10H 6D 6S AS", "8C QH 8D QS 6C QD 10H 2H 10C 6S 4C AS", "4C 2C 10H QD AC QD AC 8S", "6D 8D AC 4H QH", "6C 6C AC 6S AS 10H", "9C 6D QS 6H 8H 8H 2S QH 2H 2H 10H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> decks = {"6S QH 6S 7S 10D 2D 4C 10C 4S AH 10H QD 4S 8C 8D QH", "7H AH 4D 2D QS 8C AC 2C QS 10H 2D QC 2D 2C 4C", "4D 8S QC AC QC QC 2C AD 10D 4D QC QD JD 6C 8H", "6H QD QD 2C 6D 10S", "8C 8H QD 8S 10C 8C 2D QC AC 4H 8H 10D AC AH QH", "QH 6C 10D 2S 4S AC 10S QD QD 6D 10S 8S QC 9S 4D", "4D 4C QC 5S AS 8H 8C 10H 10C 10D 10S", "8C 6D 8S 8C QD 10H AD QH 10H AC 6C 4H QC 10C 2C 2D", "8S QH QS 4H 8D 2C 2D 10D 4D AC 2S 6H", "6H 4H 10D 3C 6S 10H 2C 4C 6D 2C 2C 10H 6H", "6C QD 6C 8D QH AH 6S", "QC QH 4S 6S AD 10S QH AC 6D AC 4H 2C 4S 5S 8H", "4D 6C 8H 2S 8S 10C 4S 4S 10H 10D 2C", "10S QH QD 10H 6C 6H 8S", "6D AC QD QC 4S 4D QS 10H 4H QD 8S 8S", "2S QH 10H 4H 6H 6S 8C", "3C QH 10C AS 6C 2C 4C QH 8C", "10D 10H 8C 10H 6D QD QD 6H 10C 10C 2C", "2H 8S QS 10S 6S 8H 4C 4D 8S 4C QD", "2H JS QS QD QC 2H 4D QD 8D 4D AC 10S 2H", "QC 8D 8D 8H 8S", "AS JC AH 6S QC 4D 2D 8H 4H AH", "2S 6H 10H AC 2H 6C", "AC 10H QS 10D QS 2S AH 2H 2D AD 6H", "AC QH 10C 7D 2S AH 7S 4D 6S 10D AD", "AC 2H 4S 6H AS AD 6D QD 6D 6S AS", "10H QS 4H AH 8H QS QD 6H 8C QH 10H", "8D 8S 8H AH AH 10S", "2S QH QH 4C QD 8D 8H 4H QD 6C 8C 6S 6S AH 8D 4S", "10C QC 8S 10C 4C 10S", "10D 4S 2D 10H 6D 2S 10D 2C AC AC 4H 10H 6S QS", "2D 10S 4D 4D 6S AS 6H 2D 8S 10H QD 6D", "QS QC 6S 6H 2H 10S", "10C QS 4D AS 7D", "QD 6H 8H 8C 10H 4S 2H", "5H 4C AD 10H 4S QS QS 6S 10D 8H", "AC 4S 2S 2D AS 8D QH AD QC 10D 4H 4S", "2H 2S 10H AC 2C QD 4H AC 2D 4C 2H 2H 6C QD 10S QS", "QH 2S 2H 10D 2S QS 3D 8H QC KS QC 2C AC AC 6S 6D", "6H 8H 8S QS 6C 9C 6D 2C 2D QC 2D QS 10D 2D", "2H 4S QC 2H 10C 8H", "2D AH 8D 6D 8S QC 10D 10C AS QC", "QH 10D 2S 6D 10C 2C 2D", "AH 8D AD 6D 10H QH 6C AH 2C 8S 2D AC 10C", "AH 6D 10C AD 6D 4H 6D AD", "6C 2H 6C 2C 4H AC QD 10H AD AC 4D 8H", "2D 8S 4S 8D QD KC AC 6D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> decks = {"QS 10C KH QD 2C QS AC 4H 4D 6C QS 6S JC QC 6C", "8H AH AC 8S AD 8H 6D 4H 10C JH 10D 8C QC", "QH 8S 4H 6H KS", "4D 4H 2C AS 8C 10D 10C 6S 3D 4H AC AS 2D JC", "10C 6S 4C 10C QD AH 10D", "10D 10S 10C AH AD 8D 10S 8S", "6D 10C 2C 8C 8D 4C 8H", "2C QH 8S QH 4D 6H AC 8C QC AS 4S 6H 8C 10D 6S 10S", "2S 4S 8C 8H 3D 4C 10H 10D 8S AC 2S 4D", "10D QC QC 6S 2S", "4D 8S QC 3S 4D 6D 4D", "4S 8S 2C 4S AD 2H AC 10H 2S 4H 4D 6C 8H QH 4D", "10C 8H 8C 7H 6C 4H 10S", "10C 4C QC 4D 2S 6C 8D 2C AH 8H AS QH AH 9H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> decks = {"AH 4S 2H 8D 2C 2H 6S", "2S AC 10C 2C 4C 10S", "6S QH 10C 4C 2S 10S 6H AH 2D 2D", "QS 4D 4H 6C 8D 2H 2S 4D AH 4S AC 4H 10S 10S 4H", "10S QC QC 6S AD AD 2C 6H", "6S 4S 2S 10H QC", "JD QH AS 10S 9C 2D 10D 6S 6H 4C 10C QH", "10C 4D 4D 10S QC QS 8C 10C 2H 2D 4H 2H AS", "4C 8S 2H 8S 2D 10H 2S 2D", "6H KC 8C 3S 6C QH 8C QC 2S 2D AH", "4D 6S 2H AH QD", "QD 10C QC 10D 6D 10D AD 6H 8C 4H", "4D 9D 10H 2H 10S 2C 9C", "4H 2H 6C 2H QD 4D 10H 10D 10S 8D 6C 8S 4H", "AD 10D QD 4S 8D AS 10D 6S QC QS 3D 8D QH 4S 2H", "6D 6D 2H 8D QH JH 10C 6D 6C 8D 4C 10D QH", "2S 6D 8D 8H QD QD 8H 10C AD 6H 8D AH 6S 4H", "QD 9S 8H 6C 6H", "8S 8H 4S 6C 10C 2H 2S 2S AH 4H", "6D 10H 10H 4D 10H KD 6S 8H 10H", "QD 4C 10H QH AH 6H 4C QD AC 2D 6H 6D 10D AC 2D 8D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> decks = {"4S 6C 8S QD JH 4C AH QS 6D 8D 2H AS AS", "4S 6H QH 8H AD 8H 8D 10C", "4S 4D QD QH 8C 6D", "4D QS AH AC AH 10C AD 4D 10H QD 2S QS 10D", "AS 2H 4D QD 10H AS 8S QH 4D", "8D 10D 2D QH 6S 4C 2H 4H 8H AH 4H 4C 8C AD 6C 4D", "6S 10H 8H 2C QS QH 8D 10H 2C 2C AS 10C QC", "2H 8D 6H 6H 8H 8H QS QD AH AH QH 10D QC QD 2C AS", "JH 10S 2D 10D 9C AD 2C QD 2S", "2S 2S 10H AH AH AS", "10D 2H 10D 8D 2D QS 6D", "8D 8D AC 4D 2H QH AC JH 10C 4D QD QH AC 2C 3D", "AS QH 6D 6S 8H 10C QD QS 6D 8S 8H 8H QD 2H", "AC 6C 6S 7D 4H 6H 8H 8H 3C 4C JD QC 8C 2H", "3C 4D 8C 10C AD 4C QC 10S 2S 6D", "2C 4D 4H 8D 4C 6C 4C 10S 6C QS 10D QH 2D 4H 2C", "QH 4D 8D 6D 4H QD 4C 2C AD 4H AH 8C 4S 8D 6S", "4S 2S 8C 6C 8S 10C 6S JD 8C 10S 2C 8D 4S", "AD QS 2C AC 8C 10S QC", "8D 9D 4D 8H 10H 4S 8S 8D 8H 6S QH QD QH QH 10C AD", "QH 2S 10S 10D 8D 6H QH 10H 10D 8S 2S QD 6S QD 4D", "AC 4S 2H 10S 6C 4C 2H 2C", "QD 2H KH 6S 2S 10C", "10S 6D 10S AS 10S", "10C 4S 10D AS 8H QC 2D QD 6S QS 4H 8H 5D QD 2C", "QD AD 2C QH 4H 10C 4D", "7C 2S AS 4S 10S 2D AS 4H AH 10D QS AC QC", "AS 8S AD 6D QC 5D 4C 4S AD 6H 4H QH 8S QH 4S 10H", "2D 6S AH 4S 2H QH 6S QH 4C", "8D QC QH AH 2C 2H 10C QD 6S QH 6S QH 6S QC AH", "6D 8H AH 4C 6S QD 6C 6D 10C 10D 2C", "AC QH AD QC AH 4D AS 6S 2H 2H 6D 9C 2C 6D 6S", "6S KS QC 6S 8C AD 2H 10C AC 6H QC AS QS 10H", "2C 4H 10D 6D AH 2S QS 6S 2C QS 4H 4C 8S 8H 10D QD", "AH 6S 10C 4C 2H 6H AD 10C 10H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> decks = {"2C 2C 3C 3C 4C 4C 5C 5C"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FLUSH"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> decks = {"10S 10H 6H AS 2S AS AH QS 8H AS 3H 6S AS QD", "2C 10D 10H 2C JS 4H QC QS 2C 2S AH QC 10C 8H", "4S QC 10H 6C 4D 8D 8C 4S 2C 4D QH AD QD KC", "AH 2C 6S 2C QH 9S 10H 2C AC QC QS 4C 2C 4D", "6D 2D QD 2S 8H 8C 9S 10S 10D 5D QS 2S 8D AS", "4H 10C 7D 10C AS 8H 6C 6S 8H 8D AD QS QS 6H", "6S 6S 4S 2S QH 6C 6H QH QS 6H 6S 2S 10C 6D", "QD 10D 10C 6D 6D 10D 10D AH 10H 10D 2D 10D QS 6S", "10D 4D 6D AD QS QD 6C 8H 3S QC 4H JC AD 10C", "QC 2H 2H 8H 6H 4S 4D 2C 7S QC 2D AC 6D 6H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> decks = {"6C 10H AD KH QC 2D QH 2S 4C 3S 2S 8D 2D AS", "8C 2H 8C 6H QH 8C QD QD 8H QC QS 4H 8S 6S", "4H 10D 8D 4D QD 10S 10S 10D QH 8H 6H 10D 6D AH", "2D 8S 2D QS 10D AC 4D 10D 4S QS 10S 8C 6S 8H", "6S 8D 4C 4D 2C AH 2H 10S 4H 6S 8H 8S 6D 6H", "6C AS 4D 4C AH 10H JC AS 4C 2D QS AC 10S AC", "2C 6S AH QD QD 2S AC 4C 8S 6C 8S QS AH 6C", "6D 4C AD 8C 8D 8D QS 8H 8D 4H QD 10S 10C 8C", "6H 8C 4D 4C 4C 2C QS 6C 6S 8H 4H 4D 4S 8D", "10D 2D AD 10S 2D 8H 8D 3H QS AS 6D 10S 2H 2C", "6H AD JH AD 9C 6S 6D 4S 4S 6C 4D 6D 4D 6D", "2S 5C 6H 10D 6D 2S 6D 4S 10S 2D QC 8D QS 2H", "QC AD 6H QC 2S 6D 4D AD 6S 8D 8C 6C 10C AD", "6S 8C 4S QC QS 10C AS 4D 2H 10S AH AS 2D 6C", "8C 6S AC 2H 4C 2S 4S QD AH AS 8C QH 2H 2S", "QC 2H 8S 2H 8S 8D 4S QD AS QS 2D 6D 8C 4D", "8H JS 10H 10S 4S 6C 10S 8H 4S KC 7H 6D 2H AH", "QC AD QD 8H 4S AS 10H 2H 6C 6C 6D 10D 8S AS", "10H QC QD 4S 10H 6S 2D QD 2H 8H 10H 6H 10S QS", "QS QD QD 4S 2S 2S 10H QH 8C 6C 6D 10C QD 6H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> decks = {"QS JH 9H QH AH 3S 7D 7H 3H 8H 10H 3H 8H 7S", "KH 8H 7H KS QH 8H 2H 2H 7H 7H 8S 6H 9H 2H", "6H AH 10H 4H 10H QH 8C 6H 8D AH 4H JH JH 5H", "10H 9H 4H 6C 5H QH 9H KH QH KH 6H KH AH 7H", "KH 7H 3H KH AH 10H 9H KH 6H KS 2H 5H 9H 9H", "QH 3C 5D AH 6H 6H 10H AH 7H 2H JC 2H 5H KC", "7H 6H 4H 3H QH 7H 5C 7H 7H 5H KH JH 4H 6H", "7C 2H AH 10D 2H 2C 6H JH 4H 8S 3H 9H 3H 8H", "9H 10H AH 3H 10H 7H 9H 4H JH 9H 6H KH 2D 6H", "2H AS AS 8H 9H 7C QH 6D KH JC JH 8H QH 5H", "10H 7H 6H AH 10H 6H 6H 9H AH 4H 3H 4H 3H 4H", "JH 6H 2H 6H 9D AH 7S AH 8H 7H JH 4H 10H 10H", "QH 3S 8H QC 2S JD 7H QH 3H AH 8H QH 3H AH", "2H 6H 3H 2H 9H QH AH 3H 10H AH 6H 4H 6H 5H", "4H KH 9H QH AH 2D 7S AH JH 10H 6D KH KH JD", "KC QH 9D 3H 5H KH 10H 3H 7H 10H QH 7H 2H 9H", "AH 4H KS QH 8D 9H 4H 3H 6H KH 7H 8H 8D 3H", "6H 3C JH 5H QD AH 8H 5H 4H JC 10H 10H 2H QH", "6H QH 9H KH 6H 8H 7H QH 7H 9D 10S 8H 7H 4H", "9H KH 6H 8D 5H 4H 5H 9H 5H 4H JH 6H 2H 3D"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "ROYAL FLUSH", "FOUR OF A KIND", "STRAIGHT FLUSH", "STRAIGHT", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> decks = {"4D 6C 6C AD 10H QS 10H 4S 4H QH 10D 2H 8C 6D", "2S 10C 3D 10D 4H KH 10H 10D 2D 6D AS 10H 8S 4C", "10D 10H 4H 6S 6H KS AH 6H 10C JS JH 2H 10H 2C", "4H 6D 8D AD 6H 4D 5H 2C AH 4H 10D 10H 10S QS", "5D 8C QH 8H 2H 6S 6S 6D 4D 4H AS 6C 10C QC", "QC QC 2D JS 8S 6H AS AC 6C 4C AC 10C 10D 10S", "8C 6H 10S 10C QC QD AH AS QS QH 6D 5S AH 2H", "6D 2C 6C 6C QH 10D AH 8S AD 6S 10C 6S 4H 10C", "6H 6C QH 6C 6D QS QD 8H 8D 10D 10D 6D 4S 8H", "QC 6C 6H 4H QD 8D 8C 8S QD QD 8D QD QD 8S", "4C 2H 10H 8C 10C 10C 2S 10C 2C 10D 7D JC 9H 2D", "AD QD 4D QD 8D 8H AC 2H QH 2D 6D 4C 6C 10H", "10C 4C QS QS 8H 6H 8C AH 2H 8S 8C 8S 6H AH", "2S 6C 2H JC QH 6C 8S AC QD QD 10H 8C 8S AH", "2C QS 4S QD QS 2H 6H 6D 8C 4C 2C 8S 2S 10H", "4S 2D AD AC 10H 8S 6H 2D 2H 2C 6H QD AH 2C", "4S 6D 10C AC AS AD 10H 8D 2D 6C 4D 2H 6S 10D", "4C 2S 2S QD 6C 8D 8C AD AC 6S 6S QC 10D QH", "4C 2H QH 10H QD 6S QH 2S 6H AC AS AD 6D 8S", "JH AS QS 4S 8S 10C AH 4S 4D 10C QS 4C 6D 6S", "8D 8C AC 10D 4S 4H 2C AD JH 10H 8H 10H 2S 6S", "6H 2H AC 8H 8H 4S 8C QH 5D 6C 6D 10D 2C 10S", "QC 4C AH 8H JD 6C KD AC 2C 8S QD AD 8S 4H", "2S 6D 10C AD 6D 8H 4D 4S 2D 6C 6S 8C 4C 10D", "6S 6H AS 6H 2S 8D QH 7S AS QS 4C AS 8S 6D", "2H 5H 2H 4C AC 4D 10H AH QS AD AS 2H AH AS", "8S 2H 10H 6H 10S 8S 10S 10C QS 10C AH 10D QS QD", "8D QS AS 4D 10C QS AC 4S 6H 2S 2S 6H 10C AC", "6H 6H QD QH 4H 10C 10D QH QD 8S 8D 2C AH AS", "10H QS JS AS 2H 2S 8C 6S 2D 6S AD QD 8H QD"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> decks = {"QS 8D 10C 10C AS 8H 6D 8D 2S AC 10D AD AS 5D", "10C 6H QS 4S QH 2S 8C 10C 10D 8H 2C 4C AD 4S", "AC 8C 6D 6H 10C 6S 6S QC 6H 10D 10D 7D 4H 2C", "2D 6D 10D 6C 4D AS QS 10D AC QS 10C 2H 4H 4H", "QC QD 4H AH 2H 3H 6S 8C 6S QH KC AS 8D 2S", "AD 2D AC 4S 4D QD 10C AD 2S AS AC 2D 8C QS", "2H 8D 7C QS 2H 2S 10S 8H 4H 3D 4D QS QC 8H", "8C 10C 8C 4S AS QC 8H 5S JD 10S KC 2D 10C QS", "2H 6D 8S 10S 4C 8S QH AC 4D QH 10D 6C AS 6D", "10C 8S 2S 10H QC 8S QS 4H 6D 8D 8H 8D 4C AC", "AC 8H 6D AC QC 6D AH QH 4D 4S QC 6D 4H 4S", "10H 4H KH 4S QD AS QC 2D JS 6C 6D QH QS JH", "7D 2D AD 4H QD 4H QS 6H JS AH 2S 4H QH AD", "8S 6C KH 10C 8H 10H 10S 10C QS 2D 2S 2D 4D 2C", "AC 10D 8H QS 10S 10H 2H AS 6D QS AS 2D QS 6H", "6D 6C 10S 6C 4H 8C 6S 4S AC 4D 4D AD 4H 2H", "8S QH 10C QS 10S 6D 10D AH 6H 4C 10D 6S AC QS", "6H QD QD 6D 4S QS QS 10D 2D QH AS QH 8C 8C", "QS 5S 10H 10S QD 6C AS 2H 6H AS 4D 2H 8D 2H", "10C AS 8S 8C 2H AH 6D 8H AD 6S 4C 2D 10S 7C", "10D 2H 2D 2S 8H 10D 2D QS 2S 10H 4H 2C 2H 2S", "6H 10S AD 4S AS 10D 6S 10S AH 4D QD 10S 4S 4S", "10D 2H 2D 6H QC 6S AD 4H 2D 6H QD QD 5S 6D", "2S QS 4D QS 2D 8C 2S 10D 6H AD 8H 10D 10C 8D", "QC 6D 7S 6C QS QD QH 8S 10S 2S QS 2S 10D 4H", "10S 2S 4S AD 8S AD 8C QD 2C 10D 6S QD 4H 8S", "8S 8D 4C 2S QS 10D 2C QC 4S 6C 8D AC 8S 10H", "10D 4C 8H QD 6H 4S 2D 8D QD 4S 8H 10H AD 8H", "4C 8S 2S 8H 6S 10C 8H 6H KD 2S AH 6C 4C AS", "4S 2C 4S 6H AH 10S KS AC 4C 4H 4S 2H 10C QH"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "STRAIGHT", "FIVE OF A KIND", "FLUSH", "FOUR OF A KIND", "FULL HOUSE", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> decks = {"10H 6S QC 6H AC QD AH 6H 10H QS 2D JH 8H 8C", "AC QS QH 10H 4H AS 4H 2D QC 2D 4D 2H 4H 4H", "2H 8H AS 4H AH AH 10H 4S 10H 9H 2H 10S 4C AC", "4H 8D QD 2C 8S 10H 10H 6H 8S 8C 9H 2H 10H 8S", "8H QH 8C QH 8C 6H 4H QC 6H QD AH 2C AH QC", "8C 4H 8H 4H 4D QH 6S AH AH KD 8S 6D 8H AC", "10H 3C 2S 10H QD 7C 2H 4H QD AH 7D AH 4H QH", "QS KH 2H QC QC 2D 2H 2H 6D 4D 8D 8H 6H 6C", "8H 10H 10C 10H 4H QD AS JH QH 4H AH AH 8C 6C", "10D AH 8H QS 6H 2S 4H 4H 4C QH 6H AH QD 4H", "AC 8H AC 10D AH AH 8H 6S QD 8H 2D AS 8C 4H", "QH 4S AH 8D QH 4H 8H 2H 2H 8H AH 6H 6D 2H", "10S 5D QH 4H AH 6H AS 10H 6C AH 6H 10D QH AH", "QH 10H 8C 6H 9H 8H 6C 8H QH 8C 10H 6H 4H AS", "QH 4S 3H AD AH 4H 4H KD 2H AH 4H AH 6H AH", "6H 4H 2D 8H 8C 4H 4H AH AH AH 6H 10H 2H 6H", "QS QC 10H QD 6H 10H 2H AC QH 10H QH 10D 8C 8H", "QH 2H 2H 8S 6D 4C AS 2S 8C 8H 6H AH 8H 2D", "8H QH 8H 10H AH QH 6C AH QD AC 2H 8H 6S 4H", "8S 8H AH 6H 10H QS 6S 4H 8D 8S QH 6S 6D QD", "2H 10D AH 10H 2H 6H AC QH QH 9C 4H AD 10H QS", "QH 6H 2H QH 2S 4H 10H 6D AH QH 6H 8H AH QD", "AH 10S QS 6H 10H 4D QH 10H AH 6C AH 6D 6D QH", "QS 4S QH AD AH 8C 8H 4C 10H 10C 6H 2H AH 2S", "6H 10D 8H 2H 10H 2S 8S 10D AH AD 10H AH 8H 8D", "2H 2H 2H 10D AH AH 10H QS 8S 6S 2S 4H AC 10H", "10H 4D 4H 4H QS QH 8H QC 6H 4H 2C KH 4H 8C", "5H AS QS 6D 10D 10C QS QS AD 6S 10H QH 10H 6H", "8C 6H 10H 4H 10H 10C 6D 6C 4S 4S AH QH 6D 2H", "AS 2H 6H 10H QS 6D 8H 2H 8H QH 2H 10D 2S 5C", "4H 4C 6H AD QH 2D 4H 2C 6H QC 8S AH 10H 2H", "6H QD QH 6D 10C 4S 4H 10H 8C 6S 2C 10H 2H KH", "2H 8D QH 6C 4C 4H 10H AH AH 6H 8C 8S 4H 8D", "8H 6H AH 4C 2H QC 6D QH 8H 6H AS 10S 6H 10C", "QH 8H 6H 2H QD 8H AS 2C 4H 4H AH 8H 6H QH", "10H 8H 4H JD QS 10S 6S QH 8C 2H QC 2D 8H 8S", "6H 4H 10C QC 10D 4D 6H QH AH QC 8C 6H 10H AH", "2H 10S 6C QH QD QH AH QD QH 4H 10C QH 6D 6S", "8H 8D QH 8H QH 10D 4S 10S 2D 6S 6H AH 10D QS", "10H AH QH 10H 2H AS 4S AH 4S 4H 10H 8C 10H QD"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"STRAIGHT FLUSH", "ROYAL FLUSH", "STRAIGHT", "FIVE OF A KIND", "FOUR OF A KIND", "FULL HOUSE", "FLUSH", "THREE OF A KIND", "TWO PAIR", "NOTHING", "ONE PAIR"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> decks = {"2H 5H 6H 4H 3H 4H 3H 6H 2H 4H 3H 4H 4H 3H 5H 6H 4H", "4H 3H 3H 2H 4H 5H 6H 2H 4H 5H 2H 6H 3H 5H 4H 2H 4H", "6H 4H 6H 4H 2H 4H 5H 4H 4H 4H 2H 5H 6H 4H 5H 4H 6H", "3H 2H 6H 3H 6H 4H 3H 6H 2H 3H 3H 3H 5H 2H 4H 5H 2H", "4H 4H 5H 3H 4H 4H 2H 2H 5H 2H 4H 6H 3H 4H 6H 4H 6H", "6H 3H 3H 4H 4H 6H 6H 2H 6H 5H 3H 3H 4H 2H 5H 4H 6H", "3H 3H 5H 2H 4H 5H 5H 6H 6H 6H 2H 6H 4H 4H 4H 2H 3H", "4H 2H 2H 3H 2H 2H 5H 2H 6H 4H 3H 3H 3H 3H 3H 2H 2H", "5H 3H 6H 4H 3H 6H 6H 3H 4H 5H 4H 5H 2H 2H 3H 5H 6H", "5H 2H 4H 3H 6H 5H 2H 5H 2H 4H 2H 3H 5H 3H 2H 5H 3H", "5H 3H 4H 4H 5H 2H 3H 3H 2H 5H 4H 6H 3H 5H 2H 2H 4H", "3H 5H 4H 4H 6H 5H 6H 2H 6H 5H 5H 3H 4H 5H 3H 5H 3H", "6H 4H 6H 6H 4H 2H 6H 5H 2H 3H 4H 2H 5H 3H 5H 3H 2H", "6H 6H 6H 5H 3H 2H 3H 5H 3H 5H 3H 3H 5H 6H 4H 3H 4H", "2H 3H 2H 4H 5H 3H 6H 5H 2H 4H 5H 5H 6H 6H 6H 3H 3H", "6H 6H 4H 6H 4H 3H 4H 5H 2H 4H 3H 6H 4H 4H 2H 6H 2H", "3H 5H 4H 5H 5H 3H 3H 6H 3H 3H 6H 6H 6H 6H 6H 5H 5H", "5H 5H 5H 2H 6H 6H 5H 5H 4H 5H 4H 3H 6H 5H 4H 5H 3H", "4H 3H 5H 2H 5H 5H 4H 6H 2H 3H 2H 3H 6H 6H 4H 5H 2H", "6H 2H 2H 3H 6H 3H 4H 3H 3H 3H 5H 2H 3H 2H 2H 6H 3H", "2H 3H 3H 6H 6H 3H 4H 5H 2H 6H 2H 6H 2H 6H 3H 6H 6H", "3H 6H 3H 5H 2H 6H 5H 6H 2H 2H 3H 2H 5H 5H 4H 6H 5H", "6H 2H 6H 4H 6H 2H 4H 4H 2H 6H 4H 5H 3H 6H 2H 3H 5H", "2H 2H 4H 5H 5H 2H 4H 2H 2H 2H 3H 4H 4H 3H 2H 5H 3H", "5H 3H 3H 2H 6H 2H 3H 4H 6H 4H 6H 4H 6H 6H 4H 4H 4H", "5H 2H 4H 3H 3H 5H 5H 4H 2H 3H 5H 4H 4H 4H 5H 3H 5H", "4H 4H 6H 6H 3H 2H 4H 3H 4H 4H 2H 2H 5H 4H 6H 3H 4H", "4H 2H 3H 2H 5H 3H 4H 3H 5H 3H 6H 3H 4H 3H 5H 5H 5H", "6H 6H 4H 4H 2H 5H 2H 5H 5H 2H 5H 4H 6H 3H 2H 5H 5H", "6H 3H 2H 3H 3H 4H 4H 6H 3H 2H 2H 6H 6H 2H 5H 4H 4H", "3H 6H 6H 4H 4H 5H 6H 6H 5H 3H 4H 6H 4H 5H 2H 3H 2H", "3H 5H 2H 6H 4H 5H 4H 4H 6H 5H 3H 6H 2H 2H 3H 4H 3H", "4H 6H 6H 5H 6H 2H 5H 6H 3H 6H 6H 6H 6H 4H 4H 3H 2H", "6H 6H 6H 4H 6H 3H 4H 4H 6H 2H 6H 5H 5H 3H 3H 6H 5H", "6H 6H 6H 4H 6H 2H 5H 4H 5H 6H 6H 2H 6H 5H 2H 5H 3H", "5H 5H 2H 3H 2H 6H 4H 6H 5H 5H 5H 4H 3H 6H 6H 6H 2H", "2H 6H 2H 4H 2H 6H 6H 4H 6H 2H 6H 4H 5H 4H 5H 5H 5H", "2H 2H 2H 3H 6H 2H 5H 5H 3H 3H 3H 5H 6H 3H 4H 2H 2H", "5H 6H 5H 4H 6H 5H 3H 3H 5H 2H 5H 4H 2H 6H 6H 3H 4H", "3H 3H 2H 4H 5H 3H 4H 3H 3H 5H 3H 3H 5H 5H 4H 2H 4H", "3H 6H 6H 5H 5H 3H 5H 4H 3H 2H 6H 6H 5H 5H 4H 5H 3H", "2H 2H 2H 3H 4H 4H 5H 5H 3H 6H 4H 2H 2H 3H 3H 4H 5H", "4H 4H 3H 3H 2H 6H 2H 3H 2H 4H 6H 3H 6H 2H 2H 3H 2H", "6H 3H 4H 2H 4H 2H 2H 6H 2H 4H 6H 5H 6H 3H 6H 4H 2H", "4H 5H 4H 5H 3H 6H 6H 6H 2H 3H 6H 2H 6H 3H 6H 5H 5H", "2H 2H 2H 3H 3H 3H 6H 3H 3H 5H 6H 2H 5H 3H 4H 4H 5H", "3H 5H 2H 4H 5H 6H 3H 5H 3H 6H 3H 4H 5H 2H 2H 4H 2H", "2H 2H 4H 2H 2H 2H 5H 3H 4H 4H 6H 4H 4H 2H 5H 3H 4H", "3H 5H 5H 2H 5H 6H 5H 6H 6H 2H 5H 6H 3H 4H 4H 3H 6H", "6H 2H 2H 5H 3H 6H 6H 4H 4H 3H 2H 4H 6H 2H 5H 5H 5H"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "STRAIGHT FLUSH", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> decks = {"AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D 6D 7D 8D 9D 10D JD QD KD", "AH 2H 3H 4H 5H 6H 7H 8H 9H 10H JH QH KH", "AS 2S 3S 4S 5S 6S 7S 8S 9S 10S JS QS KS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ROYAL FLUSH", "STRAIGHT FLUSH", "FOUR OF A KIND", "FULL HOUSE", "FLUSH", "STRAIGHT", "THREE OF A KIND", "TWO PAIR", "ONE PAIR", "NOTHING"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> decks = {"AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS", "AS AS AS AS AS AS AS AS AS AS AS"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> decks = {"AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AD 2D 3D 4D 5D", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "9C", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC", "AC 2C 3C 4C 5C 6C 7C 8C 9C 10C JC QC KC"};
    PokerDeck* pObj = new PokerDeck();
    clock_t start = clock();
    vector<string> result = pObj->getRanking(decks);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FIVE OF A KIND", "FOUR OF A KIND", "STRAIGHT", "FULL HOUSE", "ROYAL FLUSH", "THREE OF A KIND", "TWO PAIR", "STRAIGHT FLUSH", "NOTHING", "ONE PAIR", "FLUSH"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=8007&pm=1981
********************************************************************************
// another fine solution by misof
#include <algorithm>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cassert>
using namespace std;
 
#define REP(i,n) for(int i=0;i<(n);++i)
#define FOR(i,a,b) for(int i=(a);i<=(b);++i)
#define CLEAR(t) memset((t),0,sizeof(t))
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
#define VALUE(x) ( (x) >> 2 )
#define SUIT(x) ( (x) & 3 )
 
int counts[64]; 
long long N;
long long all;
long long pocty[16];
int mam=0;
int sel[8];
long long curposs = 1;
 
void evalhand() {
  int typ = 0;
 
  int vals[14];
  REP(i,13) vals[i]=0;
  REP(i,5) vals[ VALUE( sel[i] ) ]++;
  
  REP(i,13) if (vals[i]==2) typ++;
  REP(i,13) if (vals[i]==3) typ=3;
  REP(i,13) if (vals[i]==4) typ=4;
  if (typ==3) REP(i,13) if (vals[i]==2) typ=5;
 
  int su[4];
  REP(i,4) su[i]=0;
  REP(i,5) su[ SUIT( sel[i] ) ]++;
  REP(i,4) if (su[i]==5) typ=6;
 
  int isstraight = 1; 
  int A[8];
  REP(i,5) A[i] = VALUE( sel[i] );
  REP(i,5) FOR(j,i+1,4) if (A[i] > A[j]) swap(A[i],A[j]);
  FOR(i,1,4) if (A[i] != A[0]+i) { isstraight=0; break; }
 
  if (!isstraight) {
    // este eso na zaciatok
    isstraight = 1;
    REP(i,5) A[i] = VALUE( sel[i] );
    REP(i,5) if (A[i] == 12) A[i]=-1;
    REP(i,5) FOR(j,i+1,4) if (A[i] > A[j]) swap(A[i],A[j]);
    FOR(i,1,4) if (A[i] != A[0]+i) { isstraight=0; break; }
  }
 
  if (isstraight) { 
    if (typ==6) typ=8; else typ=7; 
    if (typ==8) {
      if (vals[8] && vals[12]) typ=9;
    }
  }
  REP(i,13) if (vals[i]==5) typ=10;
 
  pocty[typ] += curposs;
}
 
void skus(int kde, int kelo) {
  long long poss = 1;
  REP(i,kelo) poss *= counts[kde]-i;
  REP(i,kelo) poss /= i+1;
 
  curposs *= poss;
  REP(i,kelo) sel[mam+i] = kde;
  mam += kelo;
 
  if (mam == 5) {
    evalhand();
  } else {
    int nkde = kde;
    nkde++;
    while (counts[nkde]==0) { nkde++; if (nkde>=52) break; }
    if (counts[nkde]) {
      int nkelo = min( counts[nkde], 5-mam );
      FOR(i,0,nkelo) skus(nkde,i);
    }
  }
  
  mam -= kelo;
  curposs /= poss;
}
 
class PokerDeck {
public:
  vector <string> getRanking(vector <string> decks) {
    CLEAR(counts);
    CLEAR(pocty);
    N=0;
    
    REP(i,int(decks.size())) {
      string T;
      stringstream SS(decks[i]);
      while (SS >> T) {
        string S = T;
        if (T[0]=='J') S = string("11") + T[1];
        if (T[0]=='Q') S = string("12") + T[1];
        if (T[0]=='K') S = string("13") + T[1];
        if (T[0]=='A') S = string("14") + T[1];
        int x; char c; sscanf(S.c_str(),"%d%c",&x,&c);
        int type = x-2; 
        int color;
        if (c=='C') color = 0;
        if (c=='D') color = 1;
        if (c=='H') color = 2;
        if (c=='S') color = 3;
        counts[ 4*type + color ]++;
        N++;
      }
    }
    all = N * (N-1) * (N-2) * (N-3) * (N-4);
 
    int kde=0; while (!counts[kde]) kde++;
    int kelo = counts[kde]; kelo <?= 5;
    FOR(i,0,kelo) skus(kde,i);
 
    FOR(i,0,10) cout << pocty[i] << endl;
 
    vector<string> names;
    names.push_back("NOTHING");
    names.push_back("ONE PAIR");
    names.push_back("TWO PAIR");
    names.push_back("THREE OF A KIND");
    names.push_back("FOUR OF A KIND");
    names.push_back("FULL HOUSE");
    names.push_back("FLUSH");
    names.push_back("STRAIGHT");
    names.push_back("STRAIGHT FLUSH");
    names.push_back("ROYAL FLUSH");
    names.push_back("FIVE OF A KIND");
 
    vector <string> res;
    map<string, long long> M;
    REP(i,11) if (pocty[i]) res.push_back( names[i] );
    REP(i,11) M[names[i]] = pocty[i];
 
    int xx = res.size();
    REP(i,xx) FOR(j,i+1,xx-1) {
      int z=0;
      if (M[res[i]] > M[ res[j] ] ) z=1;
      if (M[res[i]] == M[ res[j] ] ) if ( res[i] > res[j]) z=1;
      if (z) swap( res[i], res[j] );
    }
    
    return res;
  }
 
 
};
// Unused code automatically removed, but the UCR still sucks
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/