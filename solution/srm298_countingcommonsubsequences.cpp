/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6158
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

class CountingCommonSubsequences {
public:
    long countCommonSubsequences(string a, string b, string c);
};

long CountingCommonSubsequences::countCommonSubsequences(string a, string b, string c) {
    long ret;
    return ret;
}


int test0() {
    string a = "call";
    string b = "accelerate";
    string c = "candle";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string a = "topcoder";
    string b = "topcoder";
    string c = "topcoder";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 239;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string a = "no";
    string b = "correct";
    string c = "answer";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string a = "aabbaabbaabbaabbaabbaabbaabbaabbaabbaabbaabb";
    string b = "abababababababababababababababababababab";
    string c = "aaaabbbbaaaabbbbaaaabbbbaaaabbbbaaaabbbb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1725660;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string b = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string c = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string b = "a";
    string c = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string a = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string b = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    string c = "azazazazazazazazazazazazazazazazazazazazazazazazaz";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string a = "dlafjofjaoeijflakjefoiewjfo";
    string b = "asdlifjaoievmoaiwemcoaiwemcaoeiw";
    string c = "asdkjfsaocmaweicmaoiewmcoaiwemcoaec";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 13988;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string a = "asdlifjaoievmoaiwemcoaiwemcaoeiw";
    string b = "asdlifjaoievmoaiwemcoaiwemcaoeiw";
    string c = "asdlifjaoievmoaiwemcoaiwemcaoeiw";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3815014845;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string a = "qwertyuioplkjhgfdsazxcvbnmqwertyuioplkjhgfdsazxcvb";
    string b = "qwertyuioplkjhgfdsazxcvbqwertyuioplkjhgfdsazxcvbnm";
    string c = "ertyuioplkjhgfdsazxcvbnmqwertyuioplkjhgfdsazxcvbnm";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 70368748371967;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string a = "qazwsxedcrfvtgbyhnujmikolpqazwsxedcrfvtgbyhnujmiko";
    string b = "poiuytrewqsdfhjklmnbvcxzpoiuytrewqadfhjklmnbvcxz";
    string c = "qertyuiopasdfghjklzxcvbnmqwrtyuiopasdfghjklzxcvbnm";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 773429;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string a = "qazwsxedcrfvtgbyhnujmikolpqazwsxedcrfvtgbyhnujmiko";
    string b = "qazwsxedcrfvtgbyhnujmikolpqazwsxedcrfvtgbyhnujmiko";
    string c = "qazwsxedcrfvtgbyhnujmikolpqazwsxedcrfvtgbyhnujmiko";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899705516031;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string a = "z";
    string b = "z";
    string c = "z";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string a = "ujmikolp";
    string b = "rtyfghvbn";
    string c = "wsxedcqaz";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string a = "rtyfghvbnujmikolp";
    string b = "ujmikolpwsxedcqaz";
    string c = "wsxedcqazrtyfghvbn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string a = "abc";
    string b = "bac";
    string c = "cab";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string a = "zhz";
    string b = "zzh";
    string c = "hzz";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string a = "sduvniesurkl";
    string b = "fdlxrdxursduvniesurkl";
    string c = "fdlxrdxur";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string a = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy";
    string b = "abcdefghijklmnopqrstuvwxyyxwvutsrqponmlkjihgfedcba";
    string c = "yxwvutsrqponmlkjihgfedcbayxwvutsrqponmlkjihgfedcba";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 5550;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string a = "hqghumeaylnlfdxfircvscxggbwkfnqduxwfnfozvs";
    string b = "tkjprepggxrpnrvystmwcysyycqpevikef";
    string c = "mznimkkasvwsrenzkycxfxtlsgypsfadpooefxzbcoej";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 282;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string a = "vpvaboygpoeylfpbnpljvrvipyamyehwqnqrq";
    string b = "mxujjloova";
    string c = "wuxwhmsncbxcoksfzkvatxdkn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string a = "yjyhfixjswnkku";
    string b = "nuxxzrzbmn";
    string c = "gqooketlyhnkoaugzqrcddiuteiojwayyzpvscmpsajlfvgub";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string a = "aaovlzylntrkdcpwsrtesjwhdi";
    string b = "cobzcnfwlqijtvdwvxhrcbldvgylwg";
    string c = "usbmbo";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string a = "xtlhcsmpxohgmg";
    string b = "keufdxotogbgxpeyanfetcukepzshklj";
    string c = "gggekjdqzjenpev";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string a = "gxiepjsrdzjazujllch";
    string b = "bfqmkimwzobiwybxduunfsksrsrtekmqdcyzjeeuhmsr";
    string c = "cozijipfion";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string a = "eddpszrnavymmtatbdzqsoemuvnpppsua";
    string b = "bazuxmhecthlegrpunkdmbppweqtgjoparmowzd";
    string c = "yoxytjb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string a = "hawdydcprjbxphoohpkw";
    string b = "yuhrqzhnbnfuvqnqqlrzjpxiogvliexdzuz";
    string c = "srkrusvojbrzmwzpowkjilefraamdigpnpu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string a = "hgxpqnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzx";
    string b = "glsdsmzcnockvfajfrmxothowkbjzwucwljfrimpmyh";
    string c = "hzriwkbarxbgfcb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string a = "eyhjugixw";
    string b = "bvtrehbbcpxifb";
    string c = "vfbcgkcfqc";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string a = "cotzgkubmjrmbsztsshfroefwsjrxjhguzyupzw";
    string b = "eiqurpixiqflduuveoowqcudhnefnjhaimuczfskuidubur";
    string c = "swtbrec";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string a = "ykabfcvkdzeztoidukuhjzefczzzbfk";
    string b = "dpqzikfobucdhthxdjgkjelrlpaxamceroswitdptpc";
    string c = "lifkeljytihrcqaybnefxnxvgzedyyhngycdrudmphmeckotr";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 825;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string a = "ospofghfozqvlqf";
    string b = "wwkmfxdyygmdcaszsgovsodkjghcwmbm";
    string c = "rmhuyfyqgajqkcklznay";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string a = "qkqoyzwm";
    string b = "ubzazcpkhktkydzivcuypurfmbisgekyr";
    string c = "zvxdhpoamvafyrarxsvkhtqdihersigbhzjzujx";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string a = "myspnaraewkegjc";
    string b = "vhhrjvbjtsqdjootgpknfpfyc";
    string c = "fieowqrww";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string a = "pzsqmetogepspxnvjiupalyynmkmnuvkl";
    string b = "secdwracgf";
    string c = "zkgipdfodkjmjqwiqpuoqhimvfvuzwyvijgfullkjdu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string a = "sjafbtlkmfqrmyjfjnhhssqctydteamdcjbprhtnegyiwx";
    string b = "cjwlgrsmeaearwtvjsjba";
    string c = "iojlwhypnvruiho";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string a = "wkifygtydhacwyhsgewzmtgonzltjhg";
    string b = "uhnihreqgjfwk";
    string c = "smtpjhaefqzaauldrchjccdyrfvvrivu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string a = "eegfivdrcygurqdredakubnfgup";
    string b = "oqylobcwqxkzmausjgmhcmhgdnmphnqkam";
    string c = "urktrffaclvgrzkkldacllteojomon";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 44;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string a = "rqyjzginrnnzwacxxa";
    string b = "drwudxzrfusew";
    string c = "tboxvynfhkst";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string a = "enaumnddxfdmvzcautdcckxaaydzsxtto";
    string b = "bgqngv";
    string c = "pjgojoglmkxgbfcpypckqc";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string a = "bd";
    string b = "zwrxbz";
    string c = "qrlxvobtwhxginfgfrcclmznm";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string a = "ugwwbsqfcihubsjollmsqsghmcphelsotflbgsfnpcuz";
    string b = "rupchynvzhc";
    string c = "qugriwniqxdfjpwpxfblkpnpeelf";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string a = "mtkuqpzomwnlmbupmktlpt";
    string b = "dmpdsydsgv";
    string c = "penemwborifsuqhceskmkhssmv";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string a = "onwafxwhgbibabvqopqfoviussqfqwehtxdzujtlntxmrjxx";
    string b = "tlggkytbiolydnilqadojskkvfxahhjmbocljarintd";
    string c = "cldvdxropbyjzwyyojuothwmlvrglfzdzdbtubxuo";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 511;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string a = "fv";
    string b = "crswsaznmoijoivvgobqpnckwvnhkebmtdhvygkjisux";
    string c = "atmuud";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string a = "bhmknhfxaxqxkjlzzqtsjfaeedfuujkol";
    string b = "jo";
    string c = "kdvfepvlhvhrwtfdukxffjpss";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string a = "yxlijjhevryxozbafpfmowgrgonuatdqlahyggy";
    string b = "jddjhmltedzl";
    string c = "dsrkeutgtnkntarjkpxinovgzdt";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string a = "unwooxvjjmpsvknhkwjopmmleb";
    string b = "sucvzqlyqnwcmbvbhrmlowpjbwyvwtgtoqnmicxap";
    string c = "arknnxtuufarzr";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string a = "sdqwsmtcjghecqudosrtjxy";
    string b = "ayk";
    string c = "rxycrxuwjxnpqjnbkcpdmok";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string a = "timnohsski";
    string b = "zvpiczzvk";
    string c = "fexqflcvwf";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string a = "gxdqrrxulefhuuvsyyxlwadyjviwrusy";
    string b = "ntszsynyatatdvzucbwlsoaukbkazzmh";
    string c = "ocdvkdxwbllkrlvprbgaxrquedjcwtswx";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 76;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string a = "opiprolmvximofhtpxissfvsrdzrubkrsmpyswslxbbh";
    string b = "wsodjbssjxmnbpbhvzpdnreqgwimyexawsjccjkazuncfm";
    string c = "rpnlbetnqksyewefmxucjcjkztewiydozebldgvdg";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 219;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string a = "viyot";
    string b = "pzjienu";
    string c = "zikwhajvu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string a = "oaxmemhdezebpsmaydiueqfjosbd";
    string b = "kdkwkqimidywopotbhanghan";
    string c = "bxlilrcixorardrucstoijr";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string a = "bfjobxqzfjstrkfbiijbxijweh";
    string b = "pqdtlbviasunmiwseouwnr";
    string c = "lcjxuyyqxiakrsqbrwxuuiunugs";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string a = "zpevxlujyjjtcfwuzifgojxcmgelzekbvchqtvgndlyf";
    string b = "fynebmmsgfyycxypevqfdlnurpscdsqlqghrhbj";
    string c = "gxlvyjpikenhwptqzxedxjtwkspexaqitqeceosm";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 216;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string a = "sbwrtenisxjljbtbqcfjtyeubdqqkbyiodz";
    string b = "ojndbzitrinvrutsaqjvjbqslprlywkza";
    string c = "cjdbgteipfsblpnirjnwrwambepndggai";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 151;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string a = "lwlxijrsnltiiazobpjqreoumkgwyoidnacdaqfesphkxzwr";
    string b = "vfifucvcltlbyxsnrxatnkvrhvwsauhdqmrbzuzatwdclygpn";
    string c = "nwqgofjhlrrltnwzdxbwqyeqegsgabofxrblglmvbnan";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3492;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string a = "dsblsvphltlzhlzpskhhluodsevnfti";
    string b = "pyzkwnijljaddfghpfkbhpmdqbujh";
    string c = "uhkhcnnyijkzwyuqmhutbrzubprkvt";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 41;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string a = "opbvsuoloow";
    string b = "xncxodjvd";
    string c = "aebphllamemq";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string a = "aslwzuhdckysilpdgvgzkleyixwlknbrnqjtyk";
    string b = "hlvibrmwzhmdcvxtrzlcswvlxfrxlxhqgwju";
    string c = "ffjxjrvzlvpforcprioupfskxtsxrxyukxsq";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 233;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string a = "ksblmfcriplqyvtuflnj";
    string b = "yuhgtvmbruvgoeqfvdnzg";
    string c = "yfjklegqvyzuvzubqyi";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string a = "lvehevcafginwacbglnukgbmljoquv";
    string b = "eyynrtwifmhcwfqebafnnuguenvef";
    string c = "kqxjvlyyiixxexhalrpoubsslvlfogxec";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string a = "ridcljheuwqqwlcwjmesilpzihuxorke";
    string b = "whamudwxbkzjjoijstnofalsslkbbmunpxbj";
    string c = "bdenxkttqgsrigxyguvjaonvlhljtuhjdt";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 110;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string a = "fbyv";
    string b = "tyimm";
    string c = "moyvb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string a = "kcevavodumtgsfpmcjbtwzwcfdyrlio";
    string b = "kaoahlmuzmilvmphksblmcvyuqvzrchbif";
    string c = "ucrmltejfltcwfgujpzeyqnzvosontqk";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 70;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string a = "ueqkyubsxnetlx";
    string b = "yeiuzqnhdzjwddhb";
    string c = "vnvmktnuzvgzetb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string a = "eoxtzbyetyzebdnygqgljwtdflrutyb";
    string b = "qawnbozefmzlakezultgyordcjtlsunxhrrp";
    string c = "dseggppxcgqqgpfxxyabfxpeeqgwgonbwthl";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 122;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string a = "gngzfzedaivgmsnznqcppkyrtuoxcturebtpg";
    string b = "wvpfffrivrrcvivadwbzfxivlutspxtrdrez";
    string c = "evqvbtgsqzxunsmkhtkzcdedrzrztmllhxjyull";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 219;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string a = "qgxmamusppumvihabnwzgtovaieegecpbamjdpxge";
    string b = "npsimbwafjelprkatdbpacnwhymhwxvofdhgrckb";
    string c = "uuowxzsshqmkchexlcemhmmesgxonjdumysktdsge";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 428;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string a = "zpejmzrsnazpxqhwozwhhyjqmoprjykvcnsyy";
    string b = "rcqsrardxaqjoujlktmbbhrdsyvefkejzgeor";
    string c = "yessozuthpcybibcxecywdasdtrrlspclukisag";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 146;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string a = "smafisvrcrkiwrdhgbuorhu";
    string b = "zawfimetqfztbodhtqtyhas";
    string c = "ibntqobukwycteaipokyteodk";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 18;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string a = "uuuneuomzfeywplxwjibdmwbgaxcql";
    string b = "arfjjuizhjgtkoehdoquqpykzsaqub";
    string c = "ngaogsjzkgxkgwjhcwqyklihas";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 38;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string a = "vuerusphvoallomynlkmfeozexnu";
    string b = "rdkuvslbfpbakybsoqgiidoohnugm";
    string c = "ftxyrzlsowfldkrgjyqcxiakpqoyxcbq";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string a = "fifeiyvqszndbdbrljlxwlqphrzsgsvkuzlbinnxwruoqjfd";
    string b = "dceeretnpzkyohtgdrgvdgfbcmdhoergjatziblbvrjofwak";
    string c = "hdyjfxatdqwnguisrgkolfafhkdnbekcnkkwtdnvxkqns";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1393;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string a = "lnuoauxhsipmfefofrycepqq";
    string b = "htgaxhwyifaumwddvil";
    string c = "qprlyuycygjrzfbjhbtfd";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string a = "pxw";
    string b = "aykfvxd";
    string c = "go";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string a = "lgdvpsyermtjhofwmdtgaadsatnvoqxmrqqv";
    string b = "hpayoannqzhxvciqtxkxybgwsuoakvwpgxw";
    string c = "tfbpspzznreuluebuyilvdohiwfwzcgjjr";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 99;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string a = "gcdlx";
    string b = "ackzph";
    string c = "jrb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string a = "echhgddefdhhcdefdgfeedeegfegcdchfghcg";
    string b = "eggecefddggdehghdecfeeehfdchegffedhe";
    string c = "eehhedfdgddgceheffhecdehdcefgfehccdh";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 510710;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string a = "rqqpqtpppsrspqrrtrqrsqrrtsrqtsqpsoqpprptpts";
    string b = "rrprqtoproqrsootqptrtspspospqsrqqtqtrrt";
    string c = "tptpstssroooqossotprtospootropstrtssopsoso";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 209460;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string a = "kinminlninlnnjkjkkilikmjkjklknmknkjnjnjililnjjjmi";
    string b = "jjkinjjmmimnjnmlljniillimkijjjjkimilmlkiljimmil";
    string c = "lkmkjkklmkkkimiimjnilnnlilinljkmmimljjmnnimlmikk";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2951503;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string a = "kkjlijmmkjnnkjiilkkjklk";
    string b = "lkljkkmmknjjmmkmilkjnjml";
    string c = "ilmjmkkjjmlmmlkjllniknmnlji";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4534;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string a = "ustpsrrrupqtppusqttqqspsusrqpsprruqrtpqtuusqttr";
    string b = "ruutqrsrrqprrtrrrqqqssurtrrusqtptsurqttrptprqqs";
    string c = "utspqrtrsrrtusrqqqurtrqsqsqtuqttrrtptrtsqstp";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 14186343;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string a = "defgiggfgheiedigifdigddideeiffhfieiggfgdeidfid";
    string b = "iiiffieeiidigheeieeiidiehedfeiidehggifihigefff";
    string c = "ehgieggehfifdegefgdedehghffedifhgeedeiiheegife";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2527138;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string a = "gkgfif";
    string b = "iijkk";
    string c = "ji";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string a = "rss";
    string b = "qrsv";
    string c = "ruruq";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string a = "pnssrnqnnsnqpornoosnoq";
    string b = "nppsqnqppqronrssno";
    string c = "rqnqopoqrnpqoopossp";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 511;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string a = "ljoklkmmollolknjonkllklmnnkoknljkomomkmkjon";
    string b = "ollmljlonmlnnjjnknlloomjjmjmljnkknmmmlkj";
    string c = "onjolljmkmnknmjnlknnlmnjmokoojkljlkkllokklk";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 445882;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string a = "pqsrrqqoorspqorspqqorrp";
    string b = "rrroosqnpnrossprnronosn";
    string c = "opopnqnosrprrsnnosnponnn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 808;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string a = "pmmpoollnlpmommlopnponpoplp";
    string b = "lokolknplmmpppnoomllkomlnkmkpn";
    string c = "koomnmnnnpmmpmmmnlppkollnpp";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4126;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string a = "rqoqprnprnmqqnqooomqnp";
    string b = "nnmpoopooomrrnmrmnmo";
    string c = "qonqmnmnrpppmmnqro";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 164;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string a = "utvvvutvurwuvtrsuststrruvrsuwrtvrsstv";
    string b = "trtwuutttuutwrttrvwursrrwssstrrrtsvws";
    string c = "stvvuuvrvsuuvssvvrrswswuvtvtsrwsvtvuuwus";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 92293;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string a = "zxuvwvvxyuzyyzyzvvvwuuvxyxxyuywwuxvuvwxxwxyxv";
    string b = "xxyxvuvvyxxzzzvuvzvwwvvuvuxwuxyzzzyuzwxuxxzywwv";
    string c = "yyyxuyyxwzwyyyyuxxxuuuvxuzuwywwwxuxwyxxyuuwwzxzzw";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 816464;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string a = "qppmmq";
    string b = "qqrmpp";
    string c = "pmmnqnqrn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string a = "hhfifehhhgigghffigheeihe";
    string b = "feijefeheijhhefjefjf";
    string c = "hieijeefjjeefhgfgihffh";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 344;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string a = "xvwstvwtssusvsstvsxtutxxxxuxtsvxuu";
    string b = "tvusstutvsuxsuvttvutuvwuxvtsssxtwtwvuv";
    string c = "wwtsvwvtvwvxsttxtwswvsxsxuwusuxuvxxtwst";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 50757;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string a = "wxxttuswtxxxxttsvu";
    string b = "vtxwvuxuvvuvusvvtuv";
    string c = "xuxxuuxuuwstxxsvtuxu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 185;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string a = "nrprnoqmprqqnqnqpppnmmrmrorpprqnoqnpmomqpmoq";
    string b = "nrqpmqmqnrrmnppoomonpmrppoprqnpmmqmnpnpqrnrq";
    string c = "mooqmppmqpoopnrrmmoqrmqnnonrnnrrqormmonqnrqoprqn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 955485;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string a = "nokoppmlkllppmklokmok";
    string b = "pokllnonkmnlpknlpkmnnll";
    string c = "kmpolnkpllopoppmnmn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 531;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string a = "iml";
    string b = "nmijjn";
    string c = "jik";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string a = "eehdhhegdfehggfdhhdhhgddhghede";
    string b = "hiedhfghiefeehdghgehfggiiiei";
    string c = "heiegeddediighifhedgghheihgfdh";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 11383;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string a = "jjikkffiggkjihfgjggfkkffhifh";
    string b = "fkghjghfgjhijfjihjhjfkjifjfkj";
    string c = "fjggggkkkgkjfjkkkfghfjhk";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 2033;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string a = "nnlpk";
    string b = "lkookmkon";
    string c = "olmlkolp";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string a = "qrpuputsssqqsspqtqptquttstutrqurp";
    string b = "qurussttssssqtstuppturttsususqpprr";
    string c = "qtqqqtsqpqtpsutqrptusqssqrstputu";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 32757;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string a = "moororqm";
    string b = "nopq";
    string c = "nnnn";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string a = "ikmlkilijmmnkllnjjjnliimimj";
    string b = "mlnljmnkmkljmlnnklnlkinmin";
    string c = "lljmljmmkiiimjijjikklli";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1213;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string a = "utuwttuxvyxwtuyvxu";
    string b = "ttvvxyuywywytvxutuwyyw";
    string c = "wytyytxuxywxvwxtutvxxv";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 935;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string a = "ggheiefgehhiih";
    string b = "ieiefdhdfddeehhfhig";
    string c = "ehhfefidgifihhf";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 83;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string a = "aabbaabbaabbaabbaabbaabbaabbaabbaabbaabaaaa";
    string b = "abababababababababababababababababababab";
    string c = "aaaabbbbaaaabbbbaaaabbbbaaaabbbbaaaabbbb";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1509767;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string a = "ababababababababababababababababababababababababab";
    string b = "bababababababababababababababababababababababababa";
    string c = "abcabcabcabcabcabcabcabcabcabcabcabcabcabcabcabcab";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 24157815;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string a = "abcdefghijklmnopqrstuwxyzabcdefghijklmnopqrstuwxyz";
    string b = "abcdefghijklmnopqrstuwxyzabcdefghijklmnopqrstuwxyz";
    string c = "abcdefghijklmnopqrstuwxyzabcdefghijklmnopqrstuwxyz";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899487412223;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string a = "aabbaaccaaddaaeeaaffaaggaahhaaiiaajjaakkaallaammaa";
    string b = "aabbaaccaaddaaeeaaffaaggaahhaaiiaajjaakkaallaammaa";
    string c = "aabbaaccaaddaaeeaaffaaggaahhaaiiaajjaakkaallaammaa";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 113332600026;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string a = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    string b = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    string c = "abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwx";
    CountingCommonSubsequences* pObj = new CountingCommonSubsequences();
    clock_t start = clock();
    long result = pObj->countCommonSubsequences(a, b, c);
    clock_t end = clock();
    delete pObj;
    long expected = 1125899705516031;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9964455&rd=9819&pm=6158
********************************************************************************
#include <vector> 
#include <string> 
#include <map> 
#include <set> 
#include <cstdio> 
#include <algorithm> 
#include <queue> 
#include <sstream> 
#include <iostream> 
#include <math.h> 
 
using namespace std; 
 
#define VT vector 
typedef VT<int> VI; 
typedef VT<VI> VVI; 
typedef VT<string> VS; 
typedef VT<double> VD; 
typedef pair<int,int> PII; 
#define REP(i,n) for(int i = 0; i < (n); i++) 
#define ALL(c) c.begin(),c.end() 
#define pb push_back 
#define mp make_pair 
#define fs first 
#define sc second 
#define sz size() 
 
 
 
typedef long long ll; 
ll was[64][64][64]; 
 
class CountingCommonSubsequences 
{  
  string a,b,c; 
 
  ll go(int d, int e, int f) 
  { 
    ll& res = was[d][e][f]; 
    if (res > -1L) return res; 
    res = 1; 
    for (char ch = 'a'; ch <= 'z'; ch++) 
    { 
      int i, j, k; 
      for (i = d; i < a.sz; i++) 
        if (a[i] == ch) break; 
      if (i >= a.sz) continue; 
      for (j = e; j < b.sz; j++) 
        if (b[j] == ch) break; 
      if (j >= b.sz) continue; 
      for (k = f; k < c.sz; k++) 
        if (c[k] == ch) break; 
      if (k >= c.sz) continue; 
      res += go(i+1,j+1,k+1); 
    } 
    return res; 
  } 
 
  public : 
  long long countCommonSubsequences(string as, string bs, string cs)  
  {  
     a = as; b = bs; c = cs; 
     memset(was,-1,sizeof(was)); 
     return go(0,0,0)-1; 
 
  }  
 
         
  
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/