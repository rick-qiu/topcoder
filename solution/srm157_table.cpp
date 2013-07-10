/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1781
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

class Table {
public:
    vector<string> layout(vector<string> tbl);
};

vector<string> Table::layout(vector<string> tbl) {
    vector<string> ret;
    return ret;
}


int test0() {
    vector<string> tbl = {"(1,1,A)(2,1,B)(1,1,C)(1,1,D)", "(1,1,E)(1,1,F)(1,1,G)(1,1,H)(1,1,I)", "(1,3,J)(1,1,K)(3,2,L)", "(1,1,M)", "(1,1,N)(1,1,O)(1,1,P)(1,1,Q)", "(1,1,R)(1,1,S)(1,1,T)(1,1,U)(1,1,V)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ABBCD", "EFGHI", "JKLLL", "JMLLL", "JNOPQ", "RSTUV"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tbl = {"(1,3,N)(3,2,E)(3,1,M)(1,1,Q)", "(1,1,T)(3,1,U)", "(1,1,Y)(4,5,A)(1,2,V)(1,2,W)", "(1,3,G)(1,3,Z)", "(1,2,S)(1,3,D)", "", "(1,2,P)(1,2,F)(1,3,J)", "(1,1,L)(3,3,K)(1,1,R)", "(3,2,B)(1,1,D)", "(2,1,A)", "(2,3,O)(4,1,X)(1,1,I)(1,1,B)", "(3,2,H)(3,2,C)", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NEEEMMMQ", "NEEETUUU", "NYAAAAVW", "GZAAAAVW", "GZAAAASD", "GZAAAASD", "PFAAAAJD", "PFLKKKJR", "BBBKKKJD", "BBBKKKAA", "OOXXXXIB", "OOHHHCCC", "OOHHHCCC"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tbl = {"(3,5,Q)(6,1,Q)(5,1,L)(1,4,M)", "(7,9,N)(4,2,A)", "", "(1,2,A)(2,3,S)(1,1,S)", "(2,7,B)", "(3,2,A)(1,1,X)", "(2,1,Y)(1,1,S)", "(3,1,Q)(3,4,Z)", "(1,1,Q)(1,9,K)(1,1,Q)", "(1,4,S)(1,1,K)", "(2,2,A)(1,3,W)(1,8,Q)(1,3,Q)(1,1,Q)(2,1,Z)", "(8,3,I)", "(1,2,W)(1,1,W)", "(1,2,M)(2,4,I)(1,5,S)", "(1,1,D)(2,6,C)(6,3,I)", "(1,2,K)(1,3,K)", "", "(2,4,T)(1,1,K)(1,1,W)(1,1,S)(2,2,D)(2,1,O)(1,5,N)", "(3,1,S)(2,1,W)(1,1,W)(1,2,N)(1,2,O)", "(5,1,I)(1,3,N)(2,2,J)", "(3,2,R)(4,1,U)(2,1,T)", "(1,1,U)(1,1,R)(4,1,R)(2,1,L)(1,1,N)(1,1,V)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QQQQQQQQQLLLLLM", "QQQNNNNNNNAAAAM", "QQQNNNNNNNAAAAM", "QQQNNNNNNNASSSM", "QQQNNNNNNNASSBB", "AAANNNNNNNXSSBB", "AAANNNNNNNYYSBB", "QQQNNNNNNNZZZBB", "QKQNNNNNNNZZZBB", "SKKNNNNNNNZZZBB", "SKAAWQQQZZZZZBB", "SKAAWQQIIIIIIII", "SKWWWQQIIIIIIII", "MKWIIQSIIIIIIII", "MKDIIQSCCIIIIII", "KKKIIQSCCIIIIII", "KKKIIQSCCIIIIII", "TTKKWQSCCSDDOON", "TTSSSWWCCWDDNON", "TTIIIIICCNJJNON", "TTRRRUUUUNJJTTN", "URRRRRRRRNLLNVN"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tbl = {"(5,9,O)(2,3,P)(3,8,Y)(2,1,D)(1,1,C)", "(3,8,T)", "", "(2,1,A)", "(2,2,G)", "", "(2,8,F)", "", "(1,6,F)(1,1,G)(1,1,Y)", "(5,5,S)(5,5,P)", "", "", "", "", "(1,2,C)(1,5,E)(1,1,E)(7,9,X)(2,4,P)(1,9,A)", "(1,9,R)", "(1,1,J)", "(1,1,O)", "(1,2,M)(1,5,K)(1,5,R)", "(1,1,M)", "(1,8,Y)(1,1,Y)", "(1,9,N)", "", "(1,1,R)(2,1,C)(1,3,X)(1,3,A)(2,3,E)(2,4,X)(1,5,G)", "(1,2,N)(2,2,K)(1,2,U)", "", "(7,4,T)(1,1,E)", "(1,7,B)(2,3,Y)", "(1,5,T)(1,5,M)", "", "(3,3,T)(2,3,D)(1,3,X)(2,3,B)(2,5,X)", "", "", "(9,4,A)(1,2,S)", "(1,2,X)", "(3,2,J)", "(1,1,D)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOPPYYYDDC", "OOOOOPPYYYTTT", "OOOOOPPYYYTTT", "OOOOOAAYYYTTT", "OOOOOGGYYYTTT", "OOOOOGGYYYTTT", "OOOOOFFYYYTTT", "OOOOOFFYYYTTT", "OOOOOFFFGYTTT", "SSSSSFFFPPPPP", "SSSSSFFFPPPPP", "SSSSSFFFPPPPP", "SSSSSFFFPPPPP", "SSSSSFFFPPPPP", "CEEXXXXXXXPPA", "CERXXXXXXXPPA", "JERXXXXXXXPPA", "OERXXXXXXXPPA", "MERXXXXXXXKRA", "MMRXXXXXXXKRA", "YYRXXXXXXXKRA", "YNRXXXXXXXKRA", "YNRXXXXXXXKRA", "YNRRCCXAEEXXG", "YNNKKUXAEEXXG", "YNNKKUXAEEXXG", "YNTTTTTTTEXXG", "YNTTTTTTTBYYG", "TNTTTTTTTBYYM", "TNTTTTTTTBYYM", "TTTTDDXBBBXXM", "TTTTDDXBBBXXM", "TTTTDDXBBBXXM", "AAAAAAAAABXXS", "AAAAAAAAAXXXS", "AAAAAAAAAXJJJ", "AAAAAAAAADJJJ"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tbl = {"(9,2,W)(3,3,N)", "", "(2,8,X)(1,1,X)(5,7,C)(1,1,C)", "(1,2,P)(1,7,E)(1,8,P)(1,3,P)(1,3,N)", "", "(1,5,L)", "(1,1,H)(1,4,O)", "(1,1,Z)", "(1,2,H)", "(5,1,P)", "(9,9,K)(1,5,T)(1,9,V)", "(1,1,M)", "(1,6,N)", "", "", "(1,3,M)", "", "", "(2,2,J)", "(7,2,U)(2,2,A)(1,1,J)", "(2,1,S)(1,1,C)", "(2,1,J)(2,1,F)(8,1,B)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWWWWWWWWNNN", "WWWWWWWWWNNN", "XXXCCCCCCNNN", "XXPCCCCCEPPN", "XXPCCCCCEPPN", "XXLCCCCCEPPN", "XXLCCCCCEPHO", "XXLCCCCCEPZO", "XXLCCCCCEPHO", "XXLPPPPPEPHO", "KKKKKKKKKPTV", "KKKKKKKKKMTV", "KKKKKKKKKNTV", "KKKKKKKKKNTV", "KKKKKKKKKNTV", "KKKKKKKKKNMV", "KKKKKKKKKNMV", "KKKKKKKKKNMV", "KKKKKKKKKJJV", "UUUUUUUAAJJJ", "UUUUUUUAASSC", "JJFFBBBBBBBB"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tbl = {"(1,5,U)(1,1,K)(4,5,I)(1,9,N)", "(1,4,I)", "", "", "", "(1,7,E)(1,8,R)(4,2,N)", "", "(1,3,G)(3,2,N)", "", "(1,1,G)(1,1,A)(1,3,I)(1,2,K)", "(1,3,N)(1,6,U)(1,2,I)", "(1,1,I)", "(1,1,F)(1,1,N)(1,1,R)(1,3,V)", "(3,4,A)(2,2,E)", "", "(3,1,Q)", "(1,1,A)(3,1,D)", "(1,1,H)(1,1,O)(3,1,I)(2,1,D)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"UKIIIIN", "UIIIIIN", "UIIIIIN", "UIIIIIN", "UIIIIIN", "ERNNNNN", "ERNNNNN", "ERGNNNN", "ERGNNNN", "ERGGAIK", "ERNUIIK", "ERNUIII", "FRNUNRV", "AAAUEEV", "AAAUEEV", "AAAUQQQ", "AAAADDD", "HOIIIDD"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tbl = {"(1,9,C)(2,1,Y)(3,4,B)(2,1,B)(1,1,D)", "(1,2,V)(1,1,Y)(3,3,W)", "(1,1,U)", "(1,1,G)(1,1,B)", "(2,3,W)(6,6,O)", "", "", "(2,4,V)", "", "(1,2,V)", "(6,1,V)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"CYYBBBBBD", "CVYBBBWWW", "CVUBBBWWW", "CGBBBBWWW", "CWWOOOOOO", "CWWOOOOOO", "CWWOOOOOO", "CVVOOOOOO", "CVVOOOOOO", "VVVOOOOOO", "VVVVVVVVV"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tbl = {"(3,9,F)(2,3,S)(5,1,R)(8,8,G)(2,9,K)(2,1,K)", "(1,3,S)(4,1,R)(2,1,B)", "(1,2,R)(2,2,W)(1,2,O)(2,1,U)", "(1,2,C)(1,1,S)(1,7,N)(1,7,R)", "(6,1,N)", "(1,1,N)(4,1,Y)(1,1,N)(1,1,Q)", "(3,9,H)(4,2,H)", "", "(9,9,N)(3,1,G)", "(1,1,N)(1,1,S)(1,6,H)(1,5,R)(2,1,D)(2,1,K)", "(1,1,H)(1,1,Q)(4,1,X)(2,9,J)", "(1,6,U)(1,9,L)(1,9,G)(3,8,X)", "", "", "(1,6,G)", "(1,5,L)(3,6,G)", "", "(1,6,H)(5,4,G)(4,2,X)", "", "(1,2,G)(3,2,Q)(1,1,Y)(2,1,U)(1,1,H)(1,1,U)", "(2,2,H)(2,1,Y)(5,7,I)", "(1,1,G)(6,1,B)(6,1,V)(1,1,Y)", "(1,1,H)(7,9,U)(2,2,U)(5,8,V)(1,3,C)", "(1,2,L)(1,2,N)", "(2,9,H)", "(2,3,C)(1,2,T)", "", "(1,9,C)(2,2,I)(2,9,S)(1,2,I)", "(2,9,U)", "(1,5,X)(1,5,Y)(1,3,R)", "(1,2,O)(2,1,A)(2,2,C)", "(7,6,U)(2,1,D)", "(4,2,L)(1,5,C)(1,8,P)", "(2,1,L)", "(5,3,D)(1,3,C)(2,3,C)", "", "(1,1,C)(1,4,P)(1,5,S)", "(3,6,Z)(2,9,L)(4,2,D)(9,5,X)(1,3,C)", "", "(4,1,C)", "(1,1,C)(2,3,Z)(1,1,C)(2,2,E)(1,6,S)", "(1,4,M)(1,4,M)(1,1,E)", "(1,2,M)(4,2,Q)(5,1,C)(2,4,S)", "(1,2,A)(1,2,I)(1,1,W)(2,2,M)(2,1,Q)(3,3,S)", "(1,1,I)(7,2,Z)", "(1,1,B)(2,1,W)(2,1,O)(2,1,U)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"FFFSSRRRRRGGGGGGGGKKKK", "FFFSSSRRRRGGGGGGGGKKBB", "FFFSSSRWWOGGGGGGGGKKUU", "FFFCSSRWWOGGGGGGGGKKNR", "FFFCNNNNNNGGGGGGGGKKNR", "FFFNYYYYNQGGGGGGGGKKNR", "FFFHHHHHHHGGGGGGGGKKNR", "FFFHHHHHHHGGGGGGGGKKNR", "FFFHHHNNNNNNNNNGGGKKNR", "NSHHHHNNNNNNNNNRDDKKNR", "HQHHHHNNNNNNNNNRXXXXJJ", "ULHHHHNNNNNNNNNRGXXXJJ", "ULHHHHNNNNNNNNNRGXXXJJ", "ULHHHHNNNNNNNNNRGXXXJJ", "ULHHHHNNNNNNNNNGGXXXJJ", "ULLGGGNNNNNNNNNGGXXXJJ", "ULLGGGNNNNNNNNNGGXXXJJ", "HLLGGGGGGGGXXXXGGXXXJJ", "HLLGGGGGGGGXXXXGGXXXJJ", "HLLGGGGGGGGGQQQGGYUUHU", "HHHGGGGGGGGGQQQYYIIIII", "HHHGBBBBBBVVVVVVYIIIII", "HHUUUUUUUUUVVVVVCIIIII", "LNUUUUUUUUUVVVVVCIIIII", "LNUUUUUUUHHVVVVVCIIIII", "CCUUUUUUUHHVVVVVTIIIII", "CCUUUUUUUHHVVVVVTIIIII", "CCUUUUUUUHHVVVVVCIISSI", "UUUUUUUUUHHVVVVVCIISSI", "UUUUUUUUUHHVVVVVCXYSSR", "UUUUUUUUUHHOAACCCXYSSR", "UUUUUUUUUHHODDCCCXYSSR", "UUUUUUUUUHHLLLLCCXYSSP", "UUUUUUUUULLLLLLCCXYSSP", "UUUUUUUUUDDDDDCCCCCSSP", "UUUUUUUUUDDDDDCCCCCSSP", "UUUUUUUUUDDDDDCCCCCPSP", "ZZZLLDDDDXXXXXXXXXCPSP", "ZZZLLDDDDXXXXXXXXXCPSP", "ZZZLLCCCCXXXXXXXXXCPSP", "ZZZLLCZZCXXXXXXXXXEESS", "ZZZLLMZZMXXXXXXXXXEEES", "ZZZLLMZZMMQQQQCCCCCSSS", "AIWLLMMMMMQQQQQQSSSSSS", "AIILLMMMMZZZZZZZSSSSSS", "BWWLLOOUUZZZZZZZSSSSSS"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tbl = {"(2,6,M)(1,1,F)(2,1,A)(1,1,G)(1,2,Q)", "(4,4,L)", "(1,3,Y)", "", "", "(1,5,Y)(1,5,X)(2,2,A)(1,9,W)", "(1,1,E)(1,4,Y)", "(1,6,I)(1,1,A)(1,3,B)", "(1,2,P)", "", "(1,2,U)(1,2,A)(2,2,Q)(1,1,W)", "(1,3,P)", "(4,1,C)", "(3,9,R)(2,6,Q)", "(1,9,V)(1,2,O)", "", "(1,3,U)", "", "", "(2,3,R)(1,5,H)", "", "", "(2,3,K)(3,1,G)", "(3,2,K)(1,1,D)", "(2,1,C)", "(2,4,C)(5,7,B)", "", "", "", "(2,4,V)", "", "", "(1,1,V)(1,1,O)(1,1,V)(2,1,R)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MMFAAGQ", "MMLLLLQ", "MMLLLLY", "MMLLLLY", "MMLLLLY", "MMYXAAW", "EYYXAAW", "IYYXABW", "IYYXPBW", "IYYXPBW", "IUAQQWW", "IUAQQPW", "ICCCCPW", "RRRQQPW", "RRRQQVO", "RRRQQVO", "RRRQQVU", "RRRQQVU", "RRRQQVU", "RRRRRVH", "RRRRRVH", "RRRRRVH", "KKGGGVH", "KKKKKDH", "KKKKKCC", "CCBBBBB", "CCBBBBB", "CCBBBBB", "CCBBBBB", "VVBBBBB", "VVBBBBB", "VVBBBBB", "VVVOVRR"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tbl = {"(1,1,I)(1,1,X)(2,1,A)(3,5,K)(4,3,R)(1,9,G)", "(3,2,J)(1,1,A)", "(1,1,Q)", "(1,9,W)(2,1,W)(1,2,C)(1,1,R)(1,1,H)(2,4,T)", "(1,1,I)(1,1,W)(1,1,C)(1,1,S)", "(7,2,D)(1,1,R)", "(1,1,E)", "(9,4,F)(1,3,T)", "", "(1,3,W)", "(1,9,P)", "(2,5,F)(3,9,H)(4,5,F)", "(1,7,O)(1,3,J)", "", "", "(1,5,C)", "(2,3,H)(4,3,Z)", "", "", "(3,2,N)(5,9,B)", "(3,8,B)(1,9,A)", "(1,4,E)(2,4,H)", "", "", "", "(2,1,P)(1,1,W)", "(1,9,B)(2,1,E)", "(2,9,K)", "(2,7,K)(6,6,W)", "(1,5,W)", "", "", "", "", "(6,1,F)(1,1,D)", "(1,5,U)(3,1,I)(3,5,P)(2,1,F)(1,5,P)", "(2,1,U)(1,1,N)(2,4,P)(2,4,P)", "(3,1,P)", "(2,2,U)(1,2,Z)", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"IXAAKKKRRRRG", "JJJAKKKRRRRG", "JJJQKKKRRRRG", "WWWCKKKRHTTG", "WIWCKKKCSTTG", "WDDDDDDDRTTG", "WDDDDDDDETTG", "WFFFFFFFFFTG", "WFFFFFFFFFTG", "WFFFFFFFFFTW", "WFFFFFFFFFPW", "WFFHHHFFFFPW", "OFFHHHFFFFPJ", "OFFHHHFFFFPJ", "OFFHHHFFFFPJ", "OFFHHHFFFFPC", "OHHHHHZZZZPC", "OHHHHHZZZZPC", "OHHHHHZZZZPC", "NNNHHHBBBBBC", "NNNBBBBBBBBA", "EHHBBBBBBBBA", "EHHBBBBBBBBA", "EHHBBBBBBBBA", "EHHBBBBBBBBA", "PPWBBBBBBBBA", "BEEBBBBBBBBA", "BKKBBBBBBBBA", "BKKKKWWWWWWA", "BKKKKWWWWWWW", "BKKKKWWWWWWW", "BKKKKWWWWWWW", "BKKKKWWWWWWW", "BKKKKWWWWWWW", "BKKKKFFFFFFD", "UKKIIIPPPFFP", "UUUNPPPPPPPP", "UPPPPPPPPPPP", "UUUZPPPPPPPP", "UUUZPPPPPPPP"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tbl = {"(9,6,R)(1,1,J)(1,1,F)", "(2,4,O)", "", "", "", "(2,1,P)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RRRRRRRRRJF", "RRRRRRRRROO", "RRRRRRRRROO", "RRRRRRRRROO", "RRRRRRRRROO", "RRRRRRRRRPP"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tbl = {"(4,2,L)(7,4,W)(1,2,U)", "", "(4,8,C)(1,7,T)", "", "(1,5,W)(2,9,F)(4,5,W)", "", "", "", "", "(1,1,C)(2,1,N)(1,1,M)(1,3,E)(1,1,N)", "(3,1,C)(2,2,E)(3,2,E)(1,3,S)", "(1,2,N)(2,1,E)", "(4,1,F)(1,1,R)(1,1,F)(1,1,M)(1,1,K)", "(9,2,W)(3,2,W)", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LLLLWWWWWWWU", "LLLLWWWWWWWU", "CCCCWWWWWWWT", "CCCCWWWWWWWT", "CCCCWFFWWWWT", "CCCCWFFWWWWT", "CCCCWFFWWWWT", "CCCCWFFWWWWT", "CCCCWFFWWWWT", "CCCCCFFNNMEN", "CCCEEFFEEEES", "NEEEEFFEEEES", "NFFFFFFRFMKS", "WWWWWWWWWWWW", "WWWWWWWWWWWW"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tbl = {"(9,7,Q)(9,9,B)(1,1,L)(1,3,C)(1,1,C)(1,3,D)", "(1,2,T)(1,1,Q)", "(1,1,I)", "(2,1,I)(1,2,M)(1,4,Z)", "(1,9,P)(1,1,P)", "(2,9,Z)", "", "(6,9,U)(3,2,Q)(1,8,Y)", "", "(2,1,M)(8,2,Z)(2,4,P)", "(2,2,C)", "(1,1,C)(2,5,N)(1,2,Z)(1,3,N)(3,1,P)", "(3,1,L)(1,2,N)(2,1,P)", "(1,4,N)(2,1,N)(1,1,N)(2,1,G)(2,1,U)(1,1,Q)", "(1,9,W)(1,2,N)(3,2,U)(4,2,M)(1,4,H)(1,1,R)(1,3,J)", "(1,3,H)(1,1,E)", "(6,3,T)(8,4,R)(2,7,M)(1,1,C)", "(1,2,J)(1,1,H)(1,2,I)", "(2,3,K)(1,2,S)", "(2,2,T)(1,9,D)(2,2,D)(2,9,U)(1,2,J)", "(2,8,U)(1,8,D)(2,1,K)(1,4,E)(2,3,M)(1,3,H)", "(1,2,K)(1,1,G)(2,7,T)(2,2,E)(2,1,H)(1,2,C)", "(1,1,K)(2,2,A)", "(1,2,A)(1,1,Z)(1,5,U)(2,1,Q)(2,1,E)(2,1,W)(2,2,N)", "(1,1,A)(5,4,I)(2,3,G)(2,4,H)", "(2,3,K)(1,2,H)(1,3,N)", "", "(1,2,Q)(1,1,G)(1,1,N)", "(3,3,W)(9,1,L)(2,1,I)(2,1,Y)(2,1,Q)(3,2,Y)", "(4,1,X)(8,2,P)(4,1,Y)", "(3,1,W)(1,1,L)(3,1,B)(1,1,Z)(1,1,W)(2,1,M)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QQQQQQQQQBBBBBBBBBLCCD", "QQQQQQQQQBBBBBBBBBTCQD", "QQQQQQQQQBBBBBBBBBTCID", "QQQQQQQQQBBBBBBBBBIIMZ", "QQQQQQQQQBBBBBBBBBPPMZ", "QQQQQQQQQBBBBBBBBBPZZZ", "QQQQQQQQQBBBBBBBBBPZZZ", "UUUUUUQQQBBBBBBBBBPZZY", "UUUUUUQQQBBBBBBBBBPZZY", "UUUUUUMMZZZZZZZZPPPZZY", "UUUUUUCCZZZZZZZZPPPZZY", "UUUUUUCCCNNZNPPPPPPZZY", "UUUUUULLLNNZNNPPPPPZZY", "UUUUUUNNNNNNNNGGUUQZZY", "UUUUUUNWNNNUUUMMMMHRJY", "UUUUUUNWNNNUUUMMMMHHJE", "TTTTTTNWRRRRRRRRMMHHJC", "TTTTTTJWRRRRRRRRMMHHHI", "TTTTTTJWRRRRRRRRMMKKSI", "TTDDDUUWRRRRRRRRMMKKSJ", "TTDDDUUWUUDKKEMMMMKKHJ", "KGDTTUUWUUDEEEMMMMHHHC", "KKDTTUUWUUDEEEMMMMAAHC", "AZDTTUUUUUDQQEEEWWAANN", "AADTTUUUUUDIIIIIGGHHNN", "KKDTTUUUUUDIIIIIGGHHHN", "KKDTTUUUUUDIIIIIGGHHHN", "KKDTTUUUUUDIIIIIQGHHNN", "WWWLLLLLLLLLIIYYQQQYYY", "WWWXXXXPPPPPPPPYYYYYYY", "WWWWWWLPPPPPPPPBBBZWMM"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tbl = {"(9,4,B)(5,1,C)(1,1,B)", "(5,2,H)(1,3,W)", "", "(3,1,L)(2,1,H)", "(2,5,O)(8,9,P)(1,9,M)(1,2,M)(3,1,V)", "(1,1,O)(2,2,V)", "(2,9,Y)", "(2,2,J)", "", "(2,6,P)(1,9,L)(1,3,J)", "", "", "(1,9,K)", "(1,2,P)(1,6,O)(1,1,X)(6,4,O)", "(1,5,I)", "(2,2,L)(1,5,O)(1,2,I)(1,3,L)", "", "(1,2,Z)(1,3,L)(6,2,I)(1,4,B)", "(2,2,B)", "(1,8,P)(4,5,G)(4,1,I)", "(1,8,W)(1,2,W)(1,1,W)(3,1,I)(1,1,X)(1,1,B)", "(3,4,X)(3,8,J)(1,3,O)(1,1,P)", "(1,2,Q)(1,1,D)", "(1,1,M)", "(3,3,W)(2,1,X)(1,1,X)(1,1,A)", "(3,2,W)(1,2,N)(1,2,U)(1,4,S)(1,1,V)", "(1,2,G)", "(1,2,S)(2,1,W)(6,2,R)", "(2,1,S)(1,1,W)(1,1,H)", "(6,3,V)(5,1,R)(1,3,O)(1,2,J)(1,3,Q)(1,3,G)", "(2,1,S)(1,1,G)(2,1,M)", "(5,1,N)(1,1,Q)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"BBBBBBBBBCCCCCB", "BBBBBBBBBHHHHHW", "BBBBBBBBBHHHHHW", "BBBBBBBBBLLLHHW", "OOPPPPPPPPMMVVV", "OOPPPPPPPPMMOVV", "OOPPPPPPPPMYYVV", "OOPPPPPPPPMYYJJ", "OOPPPPPPPPMYYJJ", "PPPPPPPPPPMYYLJ", "PPPPPPPPPPMYYLJ", "PPPPPPPPPPMYYLJ", "PPPPPPPPPPMYYLK", "PPPOXOOOOOOYYLK", "PPPOIOOOOOOYYLK", "LLOOIOOOOOOILLK", "LLOOIOOOOOOILLK", "ZLOOIIIIIIIBLLK", "ZLOOIIIIIIIBBBK", "PLOGGGGIIIIBBBK", "PWWGGGGWIIIBXBK", "PWWGGGGXXXJJJOP", "PWQGGGGXXXJJJOD", "PWQGGGGXXXJJJOM", "PWWWWXXXXXJJJXA", "PWWWWWWWNUJJJSV", "PWWWWWWWNUJJJSG", "SWWWRRRRRRJJJSG", "SSSWRRRRRRJJJSH", "VVVVVVRRRRROJQG", "VVVVVVSSGMMOJQG", "VVVVVVNNNNNOQQG"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tbl = {"(9,2,P)(2,1,R)(3,1,K)(5,1,E)(7,1,H)(3,1,U)(1,1,X)", "(4,5,N)(9,5,D)(2,1,H)(2,1,J)(2,1,V)(1,4,U)(1,3,W)", "(6,1,E)(3,4,N)(2,6,D)(4,1,H)", "(1,2,E)(5,3,N)(3,1,F)(1,5,D)", "(1,4,D)(2,1,D)(1,1,X)", "(1,1,H)(1,3,H)(1,3,D)(2,3,S)", "(9,4,O)(9,1,J)(4,1,D)", "(8,2,E)(5,2,X)", "(4,1,I)(1,1,W)(2,1,Y)(1,2,L)", "(6,1,K)(9,1,L)(2,1,I)(2,1,K)(1,1,Y)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"PPPPPPPPPRRKKKEEEEEHHHHHHHUUUX", "PPPPPPPPPNNNNDDDDDDDDDHHJJVVUW", "EEEEEENNNNNNNDDDDDDDDDDDHHHHUW", "ENNNNNNNNNNNNDDDDDDDDDDDFFFDUW", "ENNNNNNNNNNNNDDDDDDDDDDDDDDDUX", "HNNNNNNNNNNNNDDDDDDDDDDDDHDDSS", "OOOOOOOOOJJJJJJJJJDDDDDDDHDDSS", "OOOOOOOOOEEEEEEEEXXXXXDDDHDDSS", "OOOOOOOOOEEEEEEEEXXXXXIIIIWYYL", "OOOOOOOOOKKKKKKLLLLLLLLLIIKKYL"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tbl = {"(5,3,M)(4,1,M)(3,1,I)(3,1,U)(3,1,R)(4,2,F)(2,1,U)", "(2,3,V)(7,5,D)(2,1,D)(2,1,R)(1,2,R)(1,1,R)", "(5,5,T)(3,2,F)(1,1,B)", "(1,8,A)(1,4,A)(1,1,A)(2,1,C)(2,1,C)", "(3,3,T)(2,3,N)(1,5,O)(2,5,F)(1,9,B)(1,1,C)", "(1,5,V)", "(4,2,D)(3,2,Y)", "(6,4,W)(5,1,Y)", "(9,1,A)(3,1,Y)", "(4,1,D)(5,1,Y)(1,9,V)(4,1,V)(1,4,B)", "(3,5,E)(6,3,J)(3,9,D)(1,8,V)(1,9,T)", "(2,9,P)(5,3,T)", "", "(1,2,J)(1,9,X)(1,2,J)(3,3,Y)(1,6,Y)(1,6,J)", "(2,9,L)(1,6,L)(2,1,L)", "(4,4,M)(2,1,M)(1,1,M)", "(2,2,G)(4,2,G)", "", "(2,1,M)(1,1,M)(4,4,Y)(1,4,Y)", "(1,1,L)(5,1,N)(1,1,N)(3,3,Y)(2,9,W)(1,4,N)", "(1,9,G)(1,5,L)(7,9,V)(1,9,V)", "", "(1,7,V)(1,8,N)(1,1,T)(1,1,B)(5,1,K)", "(1,5,E)(1,1,E)(7,2,N)(1,2,Y)", "(1,4,T)", "(1,4,G)(1,5,N)(5,5,W)(1,4,W)(1,8,W)", "", "", "(2,2,Y)(2,5,W)", "(1,5,L)(1,2,J)(6,3,H)(3,1,H)(1,8,L)", "(2,2,T)(2,5,G)(7,5,X)(1,2,W)", "(1,2,L)", "(5,1,O)(2,1,J)(1,1,T)(1,3,D)", "(9,2,F)(2,1,Z)(1,1,P)", "(1,1,R)(3,2,I)", "(9,3,N)(1,1,F)(1,1,T)(1,1,B)(1,2,M)(6,3,A)(1,1,I)", "(3,2,P)(1,2,X)(1,2,X)(1,2,I)(1,1,E)", "(1,1,P)(1,1,X)(1,1,R)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MMMMMMMMMIIIUUURRRFFFFUU", "MMMMMVVDDDDDDDDDRRFFFFRR", "MMMMMVVDDDDDDDTTTTTFFFRB", "AAACCVVDDDDDDDTTTTTFFFCC", "AATTTNNDDDDDDDTTTTTOFFBC", "AATTTNNDDDDDDDTTTTTOFFBV", "AATTTNNDDDDYYYTTTTTOFFBV", "AWWWWWWDDDDYYYYYYYYOFFBV", "AWWWWWWAAAAAAAAAYYYOFFBV", "AWWWWWWDDDDYYYYYVVVVVBBV", "AWWWWWWEEEJJJJJJVDDDVBBT", "PPTTTTTEEEJJJJJJVDDDVBBT", "PPTTTTTEEEJJJJJJVDDDVBBT", "PPTTTTTEEEJXJYYYVDDDVYJT", "PPLLLLLEEEJXJYYYVDDDVYJT", "PPLLLMMMMMMXMYYYVDDDVYJT", "PPLLLMMMMGGXGGGGVDDDVYJT", "PPLLLMMMMGGXGGGGVDDDVYJT", "PPLLLMMMMMMXMYYYYDDDYYJT", "PPLLLLNNNNNXNYYYYYYYYWWN", "GLLLVVVVVVVXVYYYYYYYYWWN", "GLLLVVVVVVVXVYYYYYYYYWWN", "GLLLVVVVVVVVVNTBKKKKKWWN", "GLEEVVVVVVVVVNNNNNNNNWWY", "GLETVVVVVVVVVNNNNNNNNWWY", "GGETVVVVVVVVVNNWWWWWWWWW", "GGETVVVVVVVVVNNWWWWWWWWW", "GGETVVVVVVVVVNNWWWWWWWWW", "GGYYVVVVVVVVVNNWWWWWWWWW", "LJYYHHHHHHHHHNNWWWWWLWWW", "LJTTHHHHHHGGXXXXXXXWLWWW", "LLTTHHHHHHGGXXXXXXXWLWWW", "LLOOOOOJJTGGXXXXXXXDLWWW", "LFFFFFFFFFGGXXXXXXXDLZZP", "RFFFFFFFFFGGXXXXXXXDLIII", "NNNNNNNNNFTBMAAAAAAILIII", "NNNNNNNNNPPPMAAAAAAXLXIE", "NNNNNNNNNPPPPAAAAAAXXXIR"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tbl = {"(8,1,V)(1,4,P)", "(1,3,V)(5,6,P)(2,3,V)", "", "", "(1,3,O)(1,1,V)(1,1,J)(1,4,S)", "(2,1,O)", "(1,2,L)(1,3,O)", "(5,2,M)(1,1,P)", "(1,1,B)(1,1,J)(1,1,T)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VVVVVVVVP", "VPPPPPVVP", "VPPPPPVVP", "VPPPPPVVP", "OPPPPPVJS", "OPPPPPOOS", "OPPPPPLOS", "MMMMMPLOS", "MMMMMBJOT"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tbl = {"(1,1,G)(4,9,X)(1,1,C)(1,1,F)", "(1,1,T)(2,2,P)", "(1,2,F)", "(1,9,G)(1,7,P)", "(1,5,P)", "", "", "", "", "(1,9,M)(1,2,D)(1,2,N)(1,2,Q)(1,2,G)", "(1,1,U)", "(4,9,S)(1,9,I)", "(1,9,L)", "", "", "", "", "", "(1,3,R)", "", "(2,4,D)(2,2,D)(1,3,D)", "(1,3,V)(1,2,L)", "(1,3,T)(1,1,D)", "(1,2,S)(1,2,E)(1,3,S)", "(1,5,Y)(1,9,W)(1,5,D)", "(3,1,Q)", "(2,9,K)(1,5,Q)(1,1,I)", "(1,4,S)", "", "(1,7,N)(1,2,Z)", "", "(1,3,H)(2,3,H)", "", "(1,1,H)", "(1,2,Y)(1,1,M)(2,1,M)", "(1,2,Y)(2,1,R)(1,7,V)(1,1,U)", "(2,1,H)(2,5,Y)(1,1,A)", "(2,1,T)(1,1,U)(1,1,L)", "(3,9,L)(1,3,V)", "", "", "(1,1,W)(1,3,Y)(1,1,B)", "(1,2,Y)(2,7,E)", "", "(2,2,S)", "", "(1,2,H)(1,3,C)", "(3,2,C)", "(1,1,C)", "(7,1,J)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GXXXXCF", "TXXXXPP", "FXXXXPP", "FXXXXGP", "PXXXXGP", "PXXXXGP", "PXXXXGP", "PXXXXGP", "PXXXXGP", "MDNQGGP", "MDNQGGU", "MSSSSGI", "MSSSSLI", "MSSSSLI", "MSSSSLI", "MSSSSLI", "MSSSSLI", "MSSSSLI", "RSSSSLI", "RSSSSLI", "RDDDDLD", "VDDDDLD", "VDDTDLD", "VDDTSES", "YWDTSES", "YWDQQQS", "YWDKKQI", "YWDKKQS", "YWDKKQS", "NWZKKQS", "NWZKKQS", "NWHKKHH", "NWHKKHH", "NHHKKHH", "NYMKKMM", "NYYRRVU", "HHYYYVA", "TTUYYVL", "LLLYYVV", "LLLYYVV", "LLLYYVV", "LLLWYVB", "LLLYYEE", "LLLYYEE", "LLLSSEE", "LLLSSEE", "LLLHCEE", "CCCHCEE", "CCCCCEE", "JJJJJJJ"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tbl = {"(8,9,O)(2,1,G)(4,2,L)(1,2,M)", "(2,1,P)", "(1,7,C)(5,5,R)(1,6,X)", "", "", "", "", "(1,2,Z)(4,2,L)", "(1,3,O)", "(1,6,Q)(9,3,Y)(3,3,Z)(1,2,O)", "", "(1,2,I)(1,1,I)", "(1,1,Y)(9,5,P)(2,2,Z)(1,2,Q)", "(1,3,A)(1,3,J)", "(1,8,J)(1,2,J)(1,2,J)", "(1,9,F)", "(1,1,J)(3,7,P)", "(9,5,Q)(1,4,P)", "", "", "", "(1,1,E)", "(4,4,Q)(7,3,Y)", "(2,3,E)(1,2,Z)", "(1,4,J)", "(5,1,Q)(2,1,G)(1,6,P)", "(1,2,J)(1,2,Q)(7,1,E)(4,6,P)", "(1,1,Q)(2,5,O)(2,5,E)(2,2,R)", "(1,6,W)(3,1,W)", "(3,5,O)(2,2,X)", "", "(2,5,C)(1,4,Y)", "(1,4,L)(1,1,O)(2,1,D)(2,2,G)(1,4,T)(1,3,Y)", "(1,1,W)(2,1,E)", "(1,1,J)(3,3,H)(1,1,J)(2,1,M)(2,2,C)", "(1,2,H)(2,2,H)(1,1,M)(2,1,C)", "(1,1,H)(6,1,F)(2,1,M)", "(8,1,W)(1,1,S)(1,1,B)(1,1,M)(2,1,B)(2,1,S)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"OOOOOOOOGGLLLLM", "OOOOOOOOPPLLLLM", "OOOOOOOOCRRRRRX", "OOOOOOOOCRRRRRX", "OOOOOOOOCRRRRRX", "OOOOOOOOCRRRRRX", "OOOOOOOOCRRRRRX", "OOOOOOOOCZLLLLX", "OOOOOOOOCZLLLLO", "QYYYYYYYYYZZZOO", "QYYYYYYYYYZZZOO", "QYYYYYYYYYZZZII", "QYPPPPPPPPPZZIQ", "QAPPPPPPPPPZZJQ", "QAPPPPPPPPPJJJJ", "FAPPPPPPPPPJJJJ", "FJPPPPPPPPPJPPP", "FQQQQQQQQQPJPPP", "FQQQQQQQQQPJPPP", "FQQQQQQQQQPJPPP", "FQQQQQQQQQPJPPP", "FQQQQQQQQQEJPPP", "FQQQQYYYYYYYPPP", "FQQQQYYYYYYYEEZ", "JQQQQYYYYYYYEEZ", "JQQQQQQQQQGGEEP", "JJQEEEEEEEPPPPP", "JJQQOOEERRPPPPP", "WWWWOOEERRPPPPP", "WOOOOOEEXXPPPPP", "WOOOOOEEXXPPPPP", "WOOOOOEECCPPPPY", "WOOOLODDCCGGTYY", "WOOOLWEECCGGTYY", "JHHHLJMMCCCCTYY", "HHHHLHHMCCCCTCC", "HHHHHHHFFFFFFMM", "WWWWWWWWSBMBBSS"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tbl = {"(7,3,M)(2,9,I)", "", "", "(1,1,F)(1,2,M)(5,2,H)", "(1,3,M)", "(4,2,G)(2,1,H)", "(2,1,K)", "(1,4,O)(6,1,J)", "(2,2,G)(2,1,G)(2,1,K)", "(1,5,N)(3,1,N)(1,1,R)(1,1,E)", "(2,7,K)(5,5,G)", "(1,1,M)", "(1,4,P)", "", "(1,3,K)", "(2,3,Y)(1,1,D)(1,1,R)(1,4,Y)", "(1,2,Q)(2,2,Y)", "(3,2,Y)", "(1,1,P)(1,1,Y)(2,1,G)(1,1,Y)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"MMMMMMMII", "MMMMMMMII", "MMMMMMMII", "FMHHHHHII", "MMHHHHHII", "MGGGGHHII", "MGGGGKKII", "OJJJJJJII", "OGGGGKKII", "OGGNNNNRE", "OKKNGGGGG", "MKKNGGGGG", "PKKNGGGGG", "PKKNGGGGG", "PKKKGGGGG", "PKKKYYDRY", "QKKKYYYYY", "QYYYYYYYY", "PYYYYGGYY"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tbl = {"(9,4,H)(2,2,D)(1,2,H)(1,1,U)", "(1,1,H)", "(2,2,N)(2,3,F)", "", "(1,3,O)(1,1,I)(9,1,E)", "(1,2,O)(1,1,H)(8,2,N)(1,2,F)(1,2,O)", "(1,1,E)", "(2,2,A)(9,1,F)(1,2,N)(1,2,H)", "(1,1,J)(8,1,N)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HHHHHHHHHDDHU", "HHHHHHHHHDDHH", "HHHHHHHHHNNFF", "HHHHHHHHHNNFF", "OIEEEEEEEEEFF", "OOHNNNNNNNNFO", "OOENNNNNNNNFO", "AAFFFFFFFFFNH", "AAJNNNNNNNNNH"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tbl = {"(9,9,Q)(4,2,B)(1,1,B)(5,3,F)(9,5,W)(2,1,G)", "(1,1,P)(2,5,X)", "(1,1,B)(3,5,T)(1,1,M)", "(1,1,V)(4,2,V)(2,2,F)", "(1,1,G)", "(1,2,V)(7,6,S)(8,2,W)", "(2,1,T)", "(2,5,U)(2,2,T)(2,5,V)(6,2,W)(1,1,V)(1,1,Z)", "(2,3,H)", "(5,1,V)(3,1,P)(1,3,U)(2,3,U)(6,2,H)", "(3,1,A)(5,2,Z)", "(2,1,H)(1,1,V)(2,1,U)(5,1,V)(3,1,T)(3,1,V)(2,1,T)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"QQQQQQQQQBBBBBFFFFFWWWWWWWWWGG", "QQQQQQQQQBBBBPFFFFFWWWWWWWWWXX", "QQQQQQQQQBTTTMFFFFFWWWWWWWWWXX", "QQQQQQQQQVTTTVVVVFFWWWWWWWWWXX", "QQQQQQQQQGTTTVVVVFFWWWWWWWWWXX", "QQQQQQQQQVTTTSSSSSSSWWWWWWWWXX", "QQQQQQQQQVTTTSSSSSSSWWWWWWWWTT", "QQQQQQQQQUUTTSSSSSSSVVWWWWWWVZ", "QQQQQQQQQUUTTSSSSSSSVVWWWWWWHH", "VVVVVPPPUUUUUSSSSSSSVVHHHHHHHH", "AAAZZZZZUUUUUSSSSSSSVVHHHHHHHH", "HHVZZZZZUUUUUUUVVVVVVVTTTVVVTT"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tbl = {"(1,6,V)(1,3,T)(1,1,T)(3,3,D)(1,2,D)(2,9,Q)", "(1,3,R)", "(1,2,J)", "(1,1,Q)(1,1,D)(2,1,I)", "(3,2,V)(3,1,V)", "(3,6,K)", "(2,2,Q)(2,4,V)", "", "(2,2,V)", "(1,5,K)(1,7,Z)", "(3,1,L)(1,1,V)", "(6,4,R)(1,3,K)", "", "", "(1,1,S)(1,2,Z)", "(3,1,R)(2,9,W)(2,4,W)", "(3,4,T)(2,1,F)", "(1,2,R)(1,2,D)", "", "(3,9,K)(1,1,S)", "(3,3,M)(1,4,U)", "", "", "(1,2,M)(2,1,A)", "(2,1,M)(2,1,F)(1,2,F)", "(2,3,W)(1,7,B)(2,1,B)", "(2,8,H)(1,2,I)", "", "(1,3,M)(1,4,Y)(1,4,B)(1,6,H)(1,4,B)(1,4,Y)", "", "", "(1,1,R)", "(3,1,M)(1,2,M)(1,1,W)(1,2,M)", "(1,1,M)(2,1,E)(1,1,O)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"VTTDDDDQQ", "VTRDDDDQQ", "VTRDDDJQQ", "VQRDIIJQQ", "VVVVVVVQQ", "VVVVKKKQQ", "QQVVKKKQQ", "QQVVKKKQQ", "VVVVKKKQQ", "VVVVKKKKZ", "LLLVKKKKZ", "RRRRRRKKZ", "RRRRRRKKZ", "RRRRRRKKZ", "RRRRRRSZZ", "RRRWWWWZZ", "TTTWWWWFF", "TTTWWWWRD", "TTTWWWWRD", "TTTWWKKKS", "MMMWWKKKU", "MMMWWKKKU", "MMMWWKKKU", "MAAWWKKKU", "MMMFFKKKF", "WWBBBKKKF", "WWBHHKKKI", "WWBHHKKKI", "MYBHHBHBY", "MYBHHBHBY", "MYBHHBHBY", "RYBHHBHBY", "MMMHHMHWM", "MEEHHMHOM"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tbl = {"(6,9,G)(3,5,B)", "", "", "", "", "(2,1,B)(1,1,E)", "(2,5,A)(1,3,A)", "", "", "(1,9,W)(2,6,A)(1,6,Z)(2,6,A)(1,5,R)", "", "(1,9,H)(1,2,A)", "", "(1,4,O)", "(1,3,O)", "(1,6,T)(1,2,X)(2,8,H)(1,8,J)", "", "(1,9,S)(2,8,V)", "(1,4,J)", "", "(1,1,J)", "(1,2,C)(1,6,H)", "(1,8,C)", "(1,5,S)(1,1,H)(2,7,L)", "(1,4,O)", "(1,2,H)(1,2,J)", "(1,1,J)", "(1,1,S)(3,9,Q)", "(2,2,C)(1,3,J)", "", "(3,5,V)(2,1,J)", "(2,4,V)(1,2,J)", "", "(1,2,O)", "", "(1,1,V)(5,1,Y)", "(1,2,N)(3,1,Z)(3,1,V)(1,2,O)(1,2,V)", "(2,1,N)(2,1,V)(1,1,P)(1,1,V)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GGGGGGBBB", "GGGGGGBBB", "GGGGGGBBB", "GGGGGGBBB", "GGGGGGBBB", "GGGGGGBBE", "GGGGGGAAA", "GGGGGGAAA", "GGGGGGAAA", "WAAZAAAAR", "WAAZAAAAR", "WAAZAAHAR", "WAAZAAHAR", "WAAZAAHOR", "WAAZAAHOO", "WTXHHJHOO", "WTXHHJHOO", "WTSHHJHVV", "JTSHHJHVV", "JTSHHJHVV", "JTSHHJJVV", "JCSHHJHVV", "CCSHHJHVV", "CSSHLLHVV", "CSSOLLHVV", "CSSOLLHHJ", "CSJOLLHHJ", "CSSOLLQQQ", "CCCJLLQQQ", "CCCJLLQQQ", "VVVJJJQQQ", "VVVVVJQQQ", "VVVVVJQQQ", "VVVVVOQQQ", "VVVVVOQQQ", "VYYYYYQQQ", "NZZZVVVOV", "NNNVVPVOV"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tbl = {"(1,9,X)(1,1,T)(1,1,B)(3,1,Y)(3,1,T)(2,1,A)(1,1,S)", "(5,4,P)(4,1,P)(1,1,K)(1,1,P)", "(6,7,O)", "", "", "(2,4,W)(3,2,R)", "", "(2,1,H)(1,3,R)", "(1,9,B)(1,2,B)", "(3,9,B)(1,2,R)(3,1,B)(1,2,J)(1,1,B)", "(2,2,H)(1,1,G)(2,1,X)(1,1,X)", "(1,8,Q)(1,4,U)(1,1,F)(3,1,U)", "(1,4,I)(1,3,H)(2,2,K)(2,5,U)", "", "(2,1,U)", "(1,4,F)(2,4,F)(1,2,U)", "(1,2,H)", "(1,1,B)(3,1,T)", "(1,3,I)(2,1,I)(2,3,C)(2,3,C)(1,3,T)", "(2,2,L)(4,2,C)", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"XTBYYYTTTAAS", "XPPPPPPPPPKP", "XPPPPPOOOOOO", "XPPPPPOOOOOO", "XPPPPPOOOOOO", "XWWRRROOOOOO", "XWWRRROOOOOO", "XWWHHROOOOOO", "XWWBBROOOOOO", "BBBBBRRBBBJB", "BBBBHHRGXXJX", "BBBBHHQUFUUU", "BBBBIHQUKKUU", "BBBBIHQUKKUU", "BBBBIHQUUUUU", "BBBBIFQFFUUU", "BBBBHFQFFUUU", "BBBBHFQFFTTT", "IIICCFQFFCCT", "ILLCCCCCCCCT", "ILLCCCCCCCCT"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tbl = {"(9,6,D)(2,1,Z)(1,1,A)(9,1,X)(1,1,T)(3,1,Q)(1,1,P)", "(9,1,Y)(2,2,I)(1,1,X)(2,1,J)(2,2,Q)(1,2,E)", "(5,2,I)(2,1,M)(2,1,Y)(3,1,W)", "(3,2,I)(4,3,R)(2,1,W)(1,1,G)(1,1,Q)(1,1,S)", "(2,6,R)(3,5,I)(5,7,R)", "(2,2,K)(1,1,R)", "(1,1,C)(1,1,W)(7,4,R)(2,3,X)(3,5,R)", "(1,1,W)(1,4,N)(2,2,X)", "(1,1,R)", "(1,1,W)(7,1,Z)", "(1,1,M)(3,1,N)(1,1,E)(6,1,F)(3,1,B)(3,1,R)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DDDDDDDDDZZAXXXXXXXXXTQQQP", "DDDDDDDDDYYYYYYYYYIIXJJQQE", "DDDDDDDDDIIIIIMMYYIIWWWQQE", "DDDDDDDDDIIIIIIIIRRRRWWGQS", "DDDDDDDDDRRIIIIIIRRRRRRRRR", "DDDDDDDDDRRIIIKKRRRRRRRRRR", "CWRRRRRRRRRIIIKKXXRRRRRRRR", "WNRRRRRRRRRIIIXXXXRRRRRRRR", "RNRRRRRRRRRIIIXXXXRRRRRRRR", "WNRRRRRRRRRZZZZZZZRRRRRRRR", "MNNNNEFFFFFFBBBRRRRRRRRRRR"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tbl = {"(5,9,G)(2,1,W)(2,1,A)(1,1,J)", "(3,5,H)(1,6,C)(1,1,Z)", "(1,2,P)", "", "(1,3,D)", "", "(2,4,R)(1,1,H)", "(1,6,E)(2,2,E)", "", "(1,1,S)(3,1,H)(1,1,E)(2,5,U)", "(1,5,M)(5,4,U)(1,5,R)", "", "", "(1,2,C)", "(2,1,H)(1,1,X)(1,2,R)(1,1,R)(1,1,C)(1,1,J)", "(3,7,B)(1,7,O)(1,7,O)(2,2,I)(1,2,O)(1,1,C)", "(1,9,O)(1,1,S)", "(1,1,I)(2,2,P)(1,1,G)", "(1,2,X)(1,2,S)", "(2,1,O)", "(3,4,L)(1,2,U)", "", "(2,2,B)(2,1,V)(1,3,J)(1,1,Q)", "(1,1,B)(1,2,S)(1,1,D)", "(1,2,I)(1,1,B)(1,2,E)(1,1,J)(3,2,Y)", "(1,1,I)(3,1,E)(1,1,X)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"GGGGGWWAAJ", "GGGGGHHHCZ", "GGGGGHHHCP", "GGGGGHHHCP", "GGGGGHHHCD", "GGGGGHHHCD", "GGGGGRRHCD", "GGGGGRREEE", "GGGGGRREEE", "SHHHERREUU", "MUUUUUREUU", "MUUUUUREUU", "MUUUUUREUU", "MUUUUURCUU", "MHHXRRRCCJ", "BBBOROIIOC", "BBBOOOIIOS", "BBBOOOIPPG", "BBBOOOXPPS", "BBBOOOXOOS", "BBBOOOLLLU", "BBBOOOLLLU", "BBVVOJLLLQ", "BBBSOJLLLD", "IBESOJJYYY", "IIEEEEXYYY"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tbl = {"(2,2,D)(2,1,P)(5,7,J)(1,9,P)(1,1,L)", "(1,1,B)(1,3,V)(1,6,G)", "(1,1,I)(2,3,K)", "(1,1,C)", "(1,1,H)(1,2,U)", "(3,2,Y)", "(1,2,B)", "(1,4,H)(2,1,W)(2,1,L)(3,1,J)(1,3,D)", "(2,2,L)(5,4,Q)(1,2,J)", "(1,1,P)", "(2,1,I)(3,1,A)", "(2,1,L)(1,1,Q)(2,1,Q)(1,1,D)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"DDPPJJJJJPL", "DDBVJJJJJPG", "IKKVJJJJJPG", "CKKVJJJJJPG", "HKKUJJJJJPG", "YYYUJJJJJPG", "YYYBJJJJJPG", "HWWBLLJJJPD", "HLLQQQQQJPD", "HLLQQQQQJPD", "HIIQQQQQAAA", "LLQQQQQQQQD"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tbl = {"(2,6,J)(1,5,D)(2,1,S)(2,2,N)", "(1,4,B)(1,4,S)", "(2,4,F)", "", "", "(2,8,P)(1,3,P)", "(2,8,P)(1,2,B)(1,2,F)", "", "(3,6,S)", "", "", "", "", "(2,5,H)", "(2,2,R)(3,2,R)", "", "(1,2,I)(1,2,T)(1,5,A)(2,1,F)", "(2,3,L)", "(2,3,B)(2,1,G)", "(2,2,B)", "(1,1,F)(1,1,N)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"JJDSSNN", "JJDBSNN", "JJDBSFF", "JJDBSFF", "JJDBSFF", "JJPPPFF", "PPPPPBF", "PPPPPBF", "PPPPSSS", "PPPPSSS", "PPPPSSS", "PPPPSSS", "PPPPSSS", "PPHHSSS", "RRHHRRR", "RRHHRRR", "ITHHAFF", "ITHHALL", "BBGGALL", "BBBBALL", "BBBBAFN"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tbl = {"(3,3,W)(1,1,Y)(7,2,T)", "(1,3,V)", "(2,2,I)(1,1,I)(2,1,T)(1,1,N)(1,1,H)", "(1,1,L)(1,2,V)(1,2,R)(4,8,Z)(1,7,I)", "(1,1,R)(1,3,Y)(2,1,Y)", "(1,2,P)(2,2,N)(2,2,L)", "", "(5,4,O)(1,1,O)", "(1,2,Z)", "", "(1,1,O)(1,1,Z)", "(1,1,D)(1,1,X)(4,1,R)(2,1,E)(3,1,C)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"WWWYTTTTTTT", "WWWVTTTTTTT", "WWWVIIITTNH", "LVRVIIZZZZI", "RVRYYYZZZZI", "PNNYLLZZZZI", "PNNYLLZZZZI", "OOOOOOZZZZI", "OOOOOZZZZZI", "OOOOOZZZZZI", "OOOOOOZZZZZ", "DXRRRREECCC"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tbl = {"(3,9,Z)(3,1,H)(9,6,U)(1,1,Z)(1,2,Y)", "(1,3,N)(2,3,G)(1,2,Y)", "(1,1,S)", "(1,2,Q)(1,4,D)", "(3,3,P)", "(1,7,I)", "(2,2,U)(6,8,J)(1,3,U)", "(2,7,K)(1,1,P)(1,5,Q)", "(2,1,E)(1,1,U)", "(1,1,N)(2,7,K)(2,5,B)(1,4,P)(1,2,Y)", "(1,6,O)", "(1,1,D)", "(1,2,Q)(2,8,D)", "(1,1,I)", "(2,3,P)(1,3,B)(3,3,Z)(2,2,T)(3,1,J)(1,3,N)", "(3,1,Q)", "(2,1,L)(1,2,B)(5,9,R)", "(2,1,P)(4,1,O)(2,1,Z)(1,4,Q)", "(1,1,L)(1,1,E)(1,2,Y)(6,1,X)", "(1,5,H)(1,1,H)(6,1,P)", "(2,4,T)(6,2,X)(1,2,J)(1,3,L)", "(1,1,X)", "(3,1,X)(3,1,W)(2,1,V)", "(1,1,T)(5,2,U)(1,5,X)(1,5,J)(1,6,I)", "(1,1,K)(1,1,T)(2,1,Q)", "(5,4,M)(5,1,I)(4,1,K)", "(4,1,O)(3,1,I)(1,1,K)(1,3,X)", "(3,2,S)(5,2,X)", "(1,2,O)(1,2,M)", "(9,2,O)(2,1,O)(2,2,M)(1,1,O)(1,2,M)", "(2,1,H)(1,1,L)(1,1,M)(1,1,E)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"ZZZHHHUUUUUUUUUZY", "ZZZNGGUUUUUUUUUYY", "ZZZNGGUUUUUUUUUYS", "ZZZNGGUUUUUUUUUQD", "ZZZPPPUUUUUUUUUQD", "ZZZPPPUUUUUUUUUID", "ZZZPPPUUJJJJJJUID", "ZZZKKPUUJJJJJJUIQ", "ZZZKKEEUJJJJJJUIQ", "NKKKKBBPJJJJJJYIQ", "OKKKKBBPJJJJJJYIQ", "OKKKKBBPJJJJJJDIQ", "OKKKKBBPJJJJJJQDD", "OKKKKBBIJJJJJJQDD", "OKKPPBZZZTTJJJNDD", "OKKPPBZZZTTQQQNDD", "LLBPPBZZZRRRRRNDD", "PPBOOOOZZRRRRRQDD", "LEYXXXXXXRRRRRQDD", "HHYPPPPPPRRRRRQDD", "HTTXXXXXXRRRRRQJL", "HTTXXXXXXRRRRRXJL", "HTTXXXWWWRRRRRVVL", "HTTTUUUUURRRRRXJI", "KTQQUUUUURRRRRXJI", "MMMMMIIIIIKKKKXJI", "MMMMMOOOOIIIKXXJI", "MMMMMSSSXXXXXXXJI", "MMMMMSSSXXXXXXOMI", "OOOOOOOOOOOMMOOMM", "OOOOOOOOOHHMMLMEM"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tbl = {"(9,9,L)(8,1,O)(1,2,G)(4,2,V)(9,3,C)(1,3,C)", "(8,1,G)", "(1,1,C)(9,1,H)(1,2,L)(2,1,V)", "(2,3,S)(8,3,H)(2,1,Z)(2,1,C)(8,4,M)", "(1,1,D)(4,1,O)", "(4,6,C)(1,2,C)", "(3,4,P)(7,2,H)", "(3,9,U)(6,1,M)", "(1,2,H)(4,9,N)(2,2,H)(1,4,M)(4,9,Z)(1,4,M)", "(1,1,Y)(1,1,D)(7,2,S)", "(2,9,L)(4,4,I)(1,3,I)(1,1,H)", "(3,1,S)(4,3,I)(1,2,C)(1,2,D)(1,2,Q)(2,1,O)", "(3,1,F)(2,1,K)(1,1,L)(1,1,T)", "(3,1,O)(1,1,R)(4,4,J)(1,1,K)(1,1,U)(1,9,Z)", "(9,2,V)(2,4,I)(1,3,N)(1,3,B)(1,4,Q)", "", "(5,1,V)(4,2,I)(3,2,Q)", "(4,1,O)(1,4,V)(3,1,I)(4,3,Y)(3,3,Z)(1,1,Q)(3,2,Z)", "(1,5,V)(3,3,F)(2,3,V)(2,2,M)(5,2,Y)(3,6,W)(2,1,W)", "(2,4,V)(4,5,F)(1,3,Z)", "(1,2,F)(1,1,N)(1,2,Y)(9,4,Q)(2,2,Z)", "(3,1,I)(3,1,F)(1,2,G)", "(5,1,V)(2,1,K)(1,1,G)(2,2,W)(2,2,J)", "(5,1,I)(3,1,P)(4,1,O)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"LLLLLLLLLOOOOOOOOGVVVVCCCCCCCCCC", "LLLLLLLLLGGGGGGGGGVVVVCCCCCCCCCC", "LLLLLLLLLCHHHHHHHHHLVVCCCCCCCCCC", "LLLLLLLLLSSHHHHHHHHLZZCCMMMMMMMM", "LLLLLLLLLSSHHHHHHHHDOOOOMMMMMMMM", "LLLLLLLLLSSHHHHHHHHCCCCCMMMMMMMM", "LLLLLLLLLPPPHHHHHHHCCCCCMMMMMMMM", "LLLLLLLLLPPPHHHHHHHCCCCUUUMMMMMM", "LLLLLLLLLPPPHNNNNHHCCCCUUUMZZZZM", "YDSSSSSSSPPPHNNNNHHCCCCUUUMZZZZM", "LLSSSSSSSIIIINNNNIHCCCCUUUMZZZZM", "LLSSSIIIIIIIINNNNICDQOOUUUMZZZZM", "LLFFFIIIIIIIINNNNICDQKKUUULZZZZT", "LLOOOIIIIIIIINNNNRJJJJKUUUUZZZZZ", "LLVVVVVVVVVIINNNNNJJJJBUUUQZZZZZ", "LLVVVVVVVVVIINNNNNJJJJBUUUQZZZZZ", "LLVVVVVIIIIIINNNNNJJJJBQQQQZZZZZ", "LLOOOOVIIIIIIIIIYYYYZZZQQQQQZZZZ", "LLVFFFVVVMMYYYYYYYYYZZZWWWWWZZZZ", "VVVFFFVVVMMYYYYYYYYYZZZWWWFFFFZZ", "VVVFFFVVVFNYQQQQQQQQQZZWWWFFFFZZ", "VVVIIIFFFFGYQQQQQQQQQZZWWWFFFFZZ", "VVVVVVVVKKGGQQQQQQQQQWWWWWFFFFJJ", "IIIIIPPPOOOOQQQQQQQQQWWWWWFFFFJJ"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tbl = {"(5,9,H)(4,5,E)(1,2,E)(1,4,G)", "", "(1,3,D)", "", "(1,1,C)", "(1,4,E)(5,9,N)", "", "", "", "(2,4,O)(1,2,E)(3,4,O)", "", "(1,2,O)", "", "(1,2,T)(5,1,B)", "(1,1,T)(4,1,D)(1,1,V)(1,1,D)(2,1,T)(1,1,U)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"HHHHHEEEEEG", "HHHHHEEEEEG", "HHHHHEEEEDG", "HHHHHEEEEDG", "HHHHHEEEEDC", "HHHHHENNNNN", "HHHHHENNNNN", "HHHHHENNNNN", "HHHHHENNNNN", "OOEOOONNNNN", "OOEOOONNNNN", "OOOOOONNNNN", "OOOOOONNNNN", "TBBBBBNNNNN", "TTDDDDVDTTU"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tbl = {"(2,2,R)(9,2,J)(1,1,N)", "(1,6,I)", "(2,1,B)(7,3,R)(2,3,J)", "(2,2,R)", "", "(9,6,P)(1,5,F)(1,4,J)", "", "(1,3,Z)", "", "(1,1,K)", "(3,1,Q)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"RRJJJJJJJJJN", "RRJJJJJJJJJI", "BBRRRRRRRJJI", "RRRRRRRRRJJI", "RRRRRRRRRJJI", "PPPPPPPPPFJI", "PPPPPPPPPFJI", "PPPPPPPPPFJZ", "PPPPPPPPPFJZ", "PPPPPPPPPFKZ", "PPPPPPPPPQQQ"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tbl = {"(9,9,A)(9,9,B)(9,9,C)(9,9,D)(9,9,E)(5,9,F)", "", "", "", "", "", "", "", "", "(9,9,G)(9,9,H)(9,9,I)(9,9,J)(9,9,K)(5,9,L)", "", "", "", "", "", "", "", "", "(9,9,A)(9,9,B)(9,9,C)(9,9,D)(9,9,E)(5,9,F)", "", "", "", "", "", "", "", "", "(9,9,G)(9,9,H)(9,9,I)(9,9,J)(9,9,K)(5,9,L)", "", "", "", "", "", "", "", "", "(9,9,A)(9,9,B)(9,9,C)(9,9,D)(9,9,E)(5,9,F)", "", "", "", "", "", "", "", "", "(9,5,G)(9,5,H)(9,5,I)(9,5,J)(9,5,K)(5,5,L)", "", "", "", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "AAAAAAAAABBBBBBBBBCCCCCCCCCDDDDDDDDDEEEEEEEEEFFFFF", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL", "GGGGGGGGGHHHHHHHHHIIIIIIIIIJJJJJJJJJKKKKKKKKKLLLLL"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tbl = {"(1,1,Z)"};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"Z"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tbl = {"(1,9,K)", "", "", "", "", "", "", "", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"K", "K", "K", "K", "K", "K", "K", "K", "K"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tbl = {"(1,3,N)(3,2,E)(3,1,M)(1,1,Q)", "(1,1,T)(3,1,U)", "(1,1,Y)(4,5,A)(1,2,V)(1,2,W)", "(1,3,G)(1,3,Z)", "(1,2,S)(1,3,D)", "", "(1,2,P)(1,2,F)(1,3,J)", "(1,1,L)(3,3,K)(1,1,R)", "(3,2,B)(1,1,D)", "(2,1,A)", "(2,3,O)(4,1,X)(1,1,I)(1,1,B)", "(3,2,H)(3,2,C)", ""};
    Table* pObj = new Table();
    clock_t start = clock();
    vector<string> result = pObj->layout(tbl);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NEEEMMMQ", "NEEETUUU", "NYAAAAVW", "GZAAAAVW", "GZAAAASD", "GZAAAASD", "PFAAAAJD", "PFLKKKJR", "BBBKKKJD", "BBBKKKAA", "OOXXXXIB", "OOHHHCCC", "OOHHHCCC"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4590&pm=1781
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
char t[51][51]; 
 
class Table { 
public: 
vector <string> layout(vector <string> a) { 
  int i, j, k, x, y, z, n, xd, yd, x2, y2; 
  int tx = 0, ty = 0; 
 
  for( i = 0; i < a.size(); i++ ) { 
    y = i; x = 0; 
    VS tok = tokenize(a[i], "(,)"); 
    for( j = 0; j < tok.size(); j += 3 ) { 
      while( t[y][x] ) x++; 
      xd = atoi(tok[j].c_str()); 
      yd = atoi(tok[j+1].c_str()); 
      for( x2 = x; x2 < x+xd; x2++ ) 
      for( y2 = y; y2 < y+yd; y2++ ) 
        t[y2][x2] = tok[j+2][0]; 
      tx >?= x+xd; 
      ty >?= y+yd; 
    } 
  } 
  vector <string> ret(ty); 
  for( i = 0; i < ty; i++ ) 
    for( j = 0; j < tx; j++ ) 
      ret[i] += t[i][j]; 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/