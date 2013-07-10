/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1704
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

class BinaryCode {
public:
    vector<string> decode(string message);
};

vector<string> BinaryCode::decode(string message) {
    auto test = [](const string& s)->bool {
        if(s.size() < 2) return false;
        if(s[0] != '0' || s[s.size()-1] != '0') return false;
        for(int i = 0; i < s.size(); ++i) {
            if(s[i] != '0' && s[i] != '1') return false;
        }
        return true;
    };
    vector<string> ret;
    for(int i = 0; i < 2; ++i) {
        string s("0");
        s.push_back('0' + i);
        for(int j = 0; j < message.size(); ++j) {
            s.push_back(message[j] - s[j] - s[j+1] + '0' + '0');
        }
        if(test(s)) {
	    s.erase(s.begin());
            s.erase(s.begin() + s.size()-1);
            ret.push_back(s);
        } else {
            ret.push_back("NONE");
        }
    }
    return ret;
}


int test0() {
    string message = "123210122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"011100011", "NONE"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string message = "11";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01", "10"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string message = "22111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "11001"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string message = "123210120";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string message = "3";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string message = "12221112222221112221111111112221111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001101101001101001001001101001", "10110010110110010110010010010110010"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string message = "0";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "NONE"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string message = "1";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "1"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string message = "2";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string message = "00";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00", "NONE"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string message = "22";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "11"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string message = "000";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"000", "NONE"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string message = "011";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"001", "NONE"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string message = "111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"010", "NONE"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string message = "122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"011", "NONE"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string message = "121";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "101"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string message = "232";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "111"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string message = "11111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01001", "10010"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string message = "12221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101", "10110"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string message = "12221112221112222222222221112222221111112221112221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001101001101101101101001101101001001101001101", "10110010110010110110110110010110110010010110010110"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string message = "11112222222221112222221111112221111112221112221111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01001101101101001101101001001101001001101001101001", "10010110110110010110110010010110010010110010110010"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string message = "12221111111111112222221112221111111111111112222221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001001001001101101001101001001001001001101101", "10110010010010010110110010110010010010010010110110"};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string message = "12221112222222222222222221112221111112222221111111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001101101101101101101001101001001101101001001", "10110010110110110110110110010110010010110110010010"};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string message = "11111112222222222221112221111112221111112221111111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01001001101101101101001101001001101001001101001001", "10010010110110110110010110010010110010010110010010"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string message = "2211121100122223333332211000000123322111232222";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "1100101000011011111111010000000011110100111011"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string message = "2322222233321001221123210001232100001111233321000";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "1110110111110000110011100000111000000100111110000"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string message = "11211111000001233332222222222222212221122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01010010000000111111011011011011010110011", "NONE"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string message = "23222321112122333221112321122100011100122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "11101110010101111101001110011000001000011"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string message = "00001233321112222221001232223321001111222110";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"00000111110010110110000111011110000100110100", "NONE"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string message = "3322220301103123301212012200321013203020302120323";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string message = "111323012211013231000233331110223030100330";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string message = "30120230303312331303233023113010030303331011023";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string message = "2211121100122223333332211000000123322111232221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string message = "2322222233321001221123210001232100001111233321001";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string message = "11211111000001233332222222222222212221121";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string message = "23222321112122333221112321122100011100121";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string message = "00001233321112222221001232223321001111222111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string message = "11";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01", "10"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string message = "0";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "NONE"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string message = "123210120";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string message = "12311221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string message = "001";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string message = "3";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string message = "1";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "1"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string message = "1222111222221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0110100110110", "NONE"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string message = "2222";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string message = "132131021";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string message = "12221112222221112221111111112221111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001101101001101001001001101001", "10110010110110010110010010010110010"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string message = "10";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string message = "12";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string message = "2";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string message = "2322";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string message = "123210122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"011100011", "NONE"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string message = "11";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01", "10"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string message = "0";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0", "NONE"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string message = "123210120";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string message = "12311221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string message = "001";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string message = "3";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string message = "1";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "1"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string message = "1222111222221";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"0110100110110", "NONE"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string message = "2222";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string message = "132131021";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string message = "12221112222221112221111111112221111";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"01101001101101001101001001001101001", "10110010110110010110010010010110010"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string message = "10";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string message = "12";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string message = "2";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string message = "2322";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"NONE", "NONE"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string message = "123210122";
    BinaryCode* pObj = new BinaryCode();
    clock_t start = clock();
    vector<string> result = pObj->decode(message);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"011100011", "NONE"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4515&pm=1704
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
 
int test(string m, string s) { 
  s = "0"+s+"0"; 
  for( int i = 1; i < s.size()-1; i++ ) 
    if( m[i-1] != s[i-1]+s[i]-'0'+s[i+1]-'0' ) return 0; 
  for( int i = 1; i < s.size()-1; i++ ) 
    if( s[i] != '0' && s[i] != '1' ) return 0; 
  return 1; 
} 
 
class BinaryCode { 
public: 
vector <string> decode(string m) { 
  int i, j, k, x, y, z, n; 
  vector <string> ret; 
 
  string s = "0"; 
  for( i = 1; i < m.size(); i++ ) 
    s += m[i-1]-(i==1 ? '0' : s[i-2])+'0'-s[i-1]+'0'; 
  if( test(m, s) ) ret.push_back(s); else ret.push_back("NONE"); 
  s = "1"; 
  for( i = 1; i < m.size(); i++ ) 
    s += m[i-1]-(i==1 ? '0' : s[i-2])+'0'-s[i-1]+'0'; 
  if( test(m, s) ) ret.push_back(s); else ret.push_back("NONE"); 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/
