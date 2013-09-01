/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1700
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

class PrefixCode {
public:
    string isOne(vector<string> words);
};

string PrefixCode::isOne(vector<string> words) {
    if(words.size() <= 1) return "Yes";
    for(auto i = 0; i < words.size(); ++i) {
	for(auto j = 0; j < words.size(); ++j) {
	    if(i == j) continue;
	    if(words[j].find(words[i]) == 0) {
		char buf[10]{0};
		sprintf(buf, "No, %d", i);
		return string(buf);
	    }
	}
    }
    return "Yes";
}


int test0() {
    vector<string> words = {"trivial"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> words = {"10001", "011", "100", "001", "10"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> words = {"no", "nosy", "neighbors", "needed"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> words = {"1010", "11", "100", "0", "1011"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> words = {"When", "shall", "we", "three", "meet", "again"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> words = {"So", "foul", "and", "fair", "a", "day", "I", "have", "not", "seen"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 4";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> words = {"Is", "this", "a", "dagger", "which", "I", "see", "before", "me"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 5";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> words = {"x5Wpx2fzq8", "1GsC"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> words = {"u9", "A", "u"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> words = {"FDaI", "PFj3", "FDa", "P"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> words = {"4zIw6j", "PO7wDf", "PO", "P", "PO7wD"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> words = {"mfNC66E3", "BA6IZS", "Uf235qDnOn", "eNoR9Tm", "ZtYbGjlK1I", "OmSOo"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> words = {"1Jd", "1FApgJG", "doKBPas8sr", "eF94b", "ap", "tQluf", "iMEynp"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> words = {"6G9Lnpzw", "kA", "SyW9fFaF", "k", "SyW9fFa", "6G", "6", "SyW9f"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 3";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> words = {"N8T", "6Ot", "Y6HXa", "Aq0PSxumR", "b", "L2V6g", "F", "0JWu7", "yMZ"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> words = {"kPn7pi1b8", "DQxDv", "tmH1m", "Xef", "d29CmrZXz", "E0yMc9maM", "eFPvFATmm6", "P8UZvJ6QI", "eHP0", "YkTuO57n0M"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> words = {"7iaP", "gtfZBj0T", "eiZdc7L", "zj97V7", "QZY67yCn", "pLyYJSjv", "I", "kOu", "Nbv", "62uXb", "diM"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> words = {"A", "p896Y", "1h8aRWSDu", "6MA7", "fghGP12rB", "e", "nksdl", "mJzIlAAn", "XvMlY2Qo", "SqGdTu", "Gc", "uOLef"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> words = {"T5Cia72L", "4k", "UAGi", "hbhxDT", "ZmRF", "MeWRoEztGK", "I2x", "C", "Ty", "I2", "UAG", "I", "MeWR"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 9";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> words = {"tPc", "oQbnJp5p", "8kqIwJEoL", "cZtEMi", "MbeyzQ", "aDf", "IUUOEKf", "e", "xxhXWajs", "yCqa8", "0W", "B9lSbFooaT", "CLr", "2Nea6Ur3fh"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> words = {"UaIr", "RbB3o0rMTl", "mdgo0", "P4kE7PvhD", "HVE2upEx", "CmyfW", "S99E", "Rb99pF", "iwm7DFKD", "7P5j", "pg", "LBhS", "tZj", "hqKwP3", "985OSIYYi"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> words = {"1dKXSK6Og", "QaerODAt4", "3EWJXk57", "ZJ0C", "Xcvd", "coPAQG", "d", "OgJRupkPa", "UZLnZ", "O65Ii4", "UR2ufZY3v", "MM6A5Wi", "0HCoof", "ukSan", "2CNvsuT", "pfG9jOEF65"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> words = {"bsU", "wtpv", "6jW87o9mC", "KpwjPfZxs", "YMSQrLMi", "FjFwFM41Vo", "T80Q", "N3PIvGqGg", "5", "alBqUOmhk", "Y", "6jW87o9", "bs", "wtp", "N3PIv", "YMSQrL", "alBqU"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 10";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> words = {"scLsC63", "ZQnGA", "zM", "u3r", "6Q", "EOaEYwUQ", "nJkuK", "RkWh", "3fFDXG4KKS", "Wo", "lMqDnO146", "MrK7", "1y", "gDcBRf", "l5pHuh0GVE", "rF5x8SnSX6", "E", "Mr"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 16";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> words = {"uZYUg1", "uhgeQyC", "q9ev43J", "Km8tV", "97Ogf", "LeDFJ", "tj", "5egCIZGM", "zee7Y7b", "Cy", "r", "fTzukqm", "ep6K2OrIi", "q9ev4", "uh", "u", "zee", "t", "ze"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 13";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> words = {"h6SrdyJxAinSeuuWIh1", "Ph9AOJk", "9V6qbYhFWyCggy", "Js1pAhqe6VlEr5ypCTv25R", "IwdSaIQhbGhQOOE3SiogZr", "36H39hiRdMrDcGtDWabtynuOVi45Y", "ZmhdvOJKzdCAFS3Qwd1p", "njxIQzNyenVQU6KqQen3", "JGzhDaj0AWi5m8384hvZ5NgP", "ZmhdvOJKzdCAFS", "Iw", "Js1pAhqe6VlE", "Ph9AO", "Js1pAh", "Zmhd", "9V6", "IwdSaIQhb", "ZmhdvOJKzdCA", "ZmhdvOJKz", "Js1pA"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 9";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> words = {"K4mQPQpYUrUZmMy", "A2HZnb62", "j3oMD1fFn3dBqBfigCS0A", "8AagvB", "pT1eqCfTRQW4bMEE2sQUqZ", "hPedZRaOsZ0", "ld9B3dDc0Ro", "HFV7mI4Rgi4F7dd0Ccg", "o5JRItPiiQzvv5hD98tpB6xo", "vyKZsZN", "pEiEu", "tLXw0j56atFho1Pj0hGqEcm5R0nduBGlUlgUSjY3coiQp59", "Ocy0O3PMo0ExGzR0dtSNSTzE9Q3EXpyvRxtpyIB", "JPiXM8Xy1yLRPKfZ", "hlGWk9xf3kd", "tMcG3A", "BfYAbtc1CFYuwJ8Q1ILgJ3Icw", "CfNnq0JzcDZbPo9HjQQ9SgT6zWOZT1", "g7OV8iSkv1LIpSZWsxgKd9RadnA6mukT26wAoMsh", "xAdXhTULm6SBg5yoCljuCl06tnSl", "pwQxXxe0PxmTPxATwydff", "pQVvHGL2j8y9", "4iURfGv3E5W819lhea57TNOoP7uMEzpIfJjJYeMmhqsjzdQbBT", "q4QEBKYPHLf", "NED1"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> words = {"o1Jl8VRViXFmG", "K", "UDpTZh89LfjSx0Gy", "6mRaTwnDAmXq314qTbYbkrHRJC", "BiWFTvpupb70NcqObsF4Rlg9cvbt50QGhu", "oJ2", "s9bDjQcKGpPia3rA", "11RPG8JmG53IjwPK98ijSzYph6qWGmxHmOg2Uymk3p0kj", "3tVlcv", "lPFbwUMrj6DO6hMsPNfP6Pm9", "sq", "bzv0FXwhrnQv0o1f8r4WWRctD", "Ub0fCzaDC57twtIpr6qXFh", "C1J5E2FhdDMoCwzN24EwxWmnbaIoGrXSqqV3qiiR", "bzv0FX", "C1J5E2FhdDMoCwzN24Ew", "o1", "C1J5E2FhdD", "11RPG8JmG53IjwPK98ijSzYph6qWGmxHmOg2Uymk", "b", "o", "bzv0FXwhrnQv0o1f8r4W", "C1J5E2FhdDMoCwzN2", "11RPG8JmG", "bzv0FXwhrnQv0o1f", "C1J5E2FhdDMoC", "3", "bz", "C1J", "bzv0FXwhrnQv0o1f8"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 14";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> words = {"XYbmDUxN7u6JAdkDda6Tx1", "dFzIa4v5cUq", "nB4fILnt60Xg50b68bhLZzvduy", "m4MZDOFTk2No1sS6q3AwcrHBrAnj", "6t5QRI", "mXe7JfxljlmtiMjzYY8JH", "MO8PmZhbDR6sWPVT8DFu", "Hnsn", "06dFQzOp", "WL7wPxSnSuvd", "k27VusrvySAOPWD8QhRXdrU4euyZY5PG7", "jzMauI03gNXrWxZxSAo", "CQnA0LDNZIqIIAr", "TpD", "lzhgWe9eR1rrozp7DDgV", "xnBmycZ9kksjRZD6", "XhiMWgCbtNIMODAZx6CWDwH6", "idomHfHyMeS2q4tDKFZVN8SR", "f", "BlnsMbedFuZZY0ZM2SXMh6p", "FUVB9", "NsTFC2rpFlPoHNNb", "n8jTCYWPn0sy", "V", "wWBzM0E5N1NkMy9A5sdHO9eB7U8F0PCwwNtGN6Lj7gT", "dbbiRCxqLa1R47e2Xq", "RDohZu2IzhjPKK00kD", "WXZvahaaEOV", "KK9CKPA16ZJPXJ9iHjDmI8KxgvB", "Oofi6mtR93QDakc73joKS1", "9PgoIqtheWNjGGANHaarKBxMulgNmj4t7ihPYY4B", "uIg4dycEnvPkHJTveDdi5kPk7xJC8Jc0cI2DEfR2Yokp8EikP", "U5qFDnWNupzuPFxdUa4W8tEvzSbjsxAK0yZBm3YetV", "IjTvD1yh7pv2m", "FUV"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 34";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> words = {"ZcWXa", "M7Fy0jXHSyAd06K7tF8fbk9n", "IoLMVgTjeSS9hs6rV6ypBr2HVc1ePINh5g1aMTHzvh6a", "CR2GNp", "Dsh", "UjKrzhX4LWdizsfsalS9yuAEF", "SpM8J3S927e5TAg9AYo28ZTGVNQiaNK", "DgBUhcdihHnASRHaz5", "6d3K6Oioz", "92InBnVlQDTgyb6PteMw", "QZIkegSSdYZdqNpdqY211", "zdmMWQgQc70urcZ", "AqcoexbIn9ImByjoi5I6jiiqgbgI8", "LIox6SshifryP0w8ocB4iukPl", "yRf6P0OBvTdnAKQzIpzDvln6", "1Ytkxr9cvWbHhUkIGtcgstUq6PbtWPLVvEFs3OS", "u3EZWyr", "SSiLuWPK7GoU", "Po", "suiomj2LFzA1ocSUvM0Ke8", "aBj0x", "n7vctfcCub", "QzOutivDN1kpbtXZrmneuiE", "rwGSJCqGYj9EcLbb5PAzwkqgVUYDhKbYGryX", "lXWvl6", "hJipIcX6I2ZrGG9poNemsdXd83", "7mCm6scMU9TlC2cQIjD46rowSMZaN8", "VscHySrJx1miBmIb41", "5du15EYdcg25XeKV5Co2BYiMK0vMzjS2KL1NZZ09E2Elf", "Ekj1kuZSEsQ9EP", "P80QVXxVhBVvuAS9u98e1h4DXUMktA", "INenscGZlmTeutnn1vP2aUG8yaqqjF41ajnSJ10", "TigKTTLMqOvKc1HCr5t49tese4Bf4ERVw5qOWBkM", "f9ewMV1DZA6B3kGCQIQpoNsejOpRiN5NWjJq", "4kTAwUvAgJS78GSysBMia45fQbN", "Qa2UKVeEzZOdqrkw5Cuy", "ewJjbjIwQiWQApvp3sM", "WDHE9KR4I", "Iwg", "GGuCfaj5lWzaZruzL7EaFXzHpjXkQ5LgLDs0oZ4Z537ds1"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> words = {"dxTeiqKoahrxlm21X4Y5gUPCesKZr6QV3t7jkRVI6MGr7G", "KPhyr6AWxT5oZTJcNQM5ppNwCblJscvA1c7riFNfiQSHt", "GACJz", "ftDGfU6HPFH1M8ibTL", "tlZmVP1fbIcdxUoC9JGOi", "ipjOPChh5TEqyepbD7Dq5fdHowVBc1oKoYgDkOsor5enjTOu", "ldFMs3IOCuN1DBZtNHFD54Ihrz8F", "pdI4zB5HXI9uHK3qEO5Rc9", "sqNsxbmeQNwSM5Xbc", "iW43YsFwygW5CPtYHq91SXON", "SUH5IzZM25FH2ByYG8x9eCylDQIZnFHEkYH2WoMYuZqwkoS", "uQ6Zc4IoSbNEqdSa9", "afVx", "P", "2JFomDiAJ", "kL", "Yo7u0vVSUc74GczS0WUJjI5wy", "ECyXiWLnOLitlCWsFmTEET", "mRyqMu3a615mWRZukGoUQIKf4nuGGcw12spOmqwrs1dMQ", "9P2dp", "VMjPazzWy1OlN9cJ0SJbojk2q93TzLPUi8", "5on2o9nBIPT", "rksdRcg", "rksd", "pdI4zB5HXI9uHK3qE", "5o", "af", "ipjOPChh5T", "SUH5IzZM25FH2ByYG8x9eCy", "ipj", "ipjO", "afV", "ip", "9P", "Yo7u0vVSUc74GczS0WUJjI", "i", "ldFMs3IOCuN1D", "a", "2JFom", "pdI4z", "ECyXiWLnO", "ECyXiWLnOLitlCWsF", "ftDGfU6HPFH1M8ibT", "ft", "pdI4zB5H"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 23";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> words = {"BLgnSm", "24wahXN389NQOViMZTGmirBr", "scdeOgeQa", "5a8DjTc6yKSVngFTXRLgHxJtJxWhVjnY", "m3NM", "gZpSE4tlTCRk8ieRd896rwfApPBAlIUPsHp6JjpnvFX3v9TX", "cd8WIJJfSSQluobBdfUMUHGh", "Hdwk", "KlKq2b8h4a6nUuOdX37", "N8BAPm48uGSfZJfARN", "zTzRNL4sM9iqWq1eEnhMhvoKU", "dULnTmlu96wzR6iHaWIDi3u", "pr0Iw0vPJgq5RjCWfCxjsCKMUX5", "P7DCyD", "tCNIV48", "TrlzVxuEn6", "Aa3F3SMGfJS7C", "S7XYg0OS", "Nu7BzgJZhWb8qrl9HsJtLl1s", "rg7pZThg", "KvE2Rp8HetPwlin5SovkSmQXZz0HdcxyVByuy6AdzZXiFKn", "7hRZTp63m5IQhFOB", "5LQFyNmV5", "zTzRNL4sM9iqWq1eEnhM", "P7D", "rg7p", "gZpSE4tlTCRk8ieR", "zTzRNL4sM9iqWq1e", "cd8WIJJf", "scd", "N8BAPm48uGSfZJf", "24w", "pr0", "rg7", "P", "S7X", "Nu7", "Nu7BzgJZhWb8qrl9H", "N8BAPm48uG", "Aa3", "zTzRNL4sM9iqWq1eEnhMhvoK", "24", "Kv", "N", "dULnTmlu96wzR6iHaWID", "scdeOg", "Nu7BzgJZhWb8qrl", "BL", "pr0Iw0vPJgq", "pr0Iw0v"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 23";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> words = {"No", "not"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> words = {"trivua"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> words = {"1010", "11", "100", "0", "1011"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> words = {"word"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> words = {"10001", "011", "100", "001", "10"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> words = {"no", "nosy"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> words = {"12345", "23456", "234", "123"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> words = {"tr", "ab", "a", "t"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> words = {"trivial"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> words = {"no", "not"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> words = {"bb", "ab", "a", "b"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> words = {"11", "1", "111"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> words = {"a", "ab", "abc", "abcd"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> words = {"1010", "10"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 1";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> words = {"no", "none", "n"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> words = {"not", "no"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 1";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> words = {"no", "not", "nosy"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> words = {"no", "not", "abcd", "abcdefg"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> words = {"trivua"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> words = {"1010", "11", "100", "0", "1011"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> words = {"word"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> words = {"10001", "011", "100", "001", "10"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> words = {"no", "nosy"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> words = {"12345", "23456", "234", "123"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> words = {"tr", "ab", "a", "t"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> words = {"trivial"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "Yes";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> words = {"no", "not"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> words = {"bb", "ab", "a", "b"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 2";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> words = {"11", "1", "111"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> words = {"a", "ab", "abc", "abcd"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> words = {"1010", "10"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 1";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> words = {"no", "none", "n"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> words = {"not", "no"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 1";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> words = {"no", "not", "nosy"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> words = {"no", "not", "abcd", "abcdefg"};
    PrefixCode* pObj = new PrefixCode();
    clock_t start = clock();
    string result = pObj->isOne(words);
    clock_t end = clock();
    delete pObj;
    string expected = "No, 0";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7226349&rd=4560&pm=1700
********************************************************************************
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
 
using namespace std;
 
class PrefixCode
{
public:
  string isOne(vector <string> words)
  {
    for (int i = 0; i < words.size(); i++)
    {
      for (int j = 0; j < words.size(); j++)
      {
        if (i != j)
        {
          if (words[j].substr(0, words[i].length()) == words[i])
          {
            string ret = "No, ";
            stringstream ret2;
            ret2 << i;
            ret += ret2.str();
            return ret;
          }
        }
      }
    }
 
    return "Yes";
  }
};

********************************************************************************
*******************************************************************************/
