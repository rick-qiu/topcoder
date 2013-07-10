/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7279
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

class Palindromize {
public:
    string minAdds(string s);
};

string Palindromize::minAdds(string s) {
    string ret;
    return ret;
}


int test0() {
    string s = "add";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "adda";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "cigartragic";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cigartragic";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "redocpot";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "redocpotopcoder";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "acaba";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "acabaca";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "z";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "z";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "fg";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fgf";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "aa";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aa";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "plw";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "plwlp";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "qcc";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "qccq";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "ibi";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ibi";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "mmz";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mmzmm";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "abczyxyz";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abczyxyzcba";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "gmekkywzhoaqytntskrczvcnjoojncvzcr";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "gmekkywzhoaqytntskrczvcnjoojncvzcrkstntyqaohzwykkemg";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "cxbmzhzqyrfituraaghzkqmmzsjevssve";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "cxbmzhzqyrfituraaghzkqmmzsjevssvejszmmqkzhgaarutifryqzhzmbxc";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "ypyelbxwwtisundqyjttlcclttjyq";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ypyelbxwwtisundqyjttlcclttjyqdnusitwwxbleypy";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "tnfxecyhmvpnseokabfrbrqpnzdphmfwdw";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tnfxecyhmvpnseokabfrbrqpnzdphmfwdwfmhpdznpqrbrfbakoesnpvmhycexfnt";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "ruvsrwrklmxfiyxusvbaojvklsjzgoqflhbxikrcwipgrmvaa";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ruvsrwrklmxfiyxusvbaojvklsjzgoqflhbxikrcwipgrmvaavmrgpiwcrkixbhlfqogzjslkvjoabvsuxyifxmlkrwrsvur";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "jsqpxbdntndbxp";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "jsqpxbdntndbxpqsj";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "lxgkfbtxupxbogrddlzbgroocvssvcoorgbz";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lxgkfbtxupxbogrddlzbgroocvssvcoorgbzlddrgobxpuxtbfkgxl";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "oetomccyeppqglbaauoejeouaablgqppey";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "oetomccyeppqglbaauoejeouaablgqppeyccmoteo";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "uolhcqbmsbmhyordofaqjhagsxvxzdmowtftwomdzxvxsg";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "uolhcqbmsbmhyordofaqjhagsxvxzdmowtftwomdzxvxsgahjqafodroyhmbsmbqchlou";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "zmoymxhlilfedhtgjdefgxyqoishvebgiigbevhsioqyxgfedj";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zmoymxhlilfedhtgjdefgxyqoishvebgiigbevhsioqyxgfedjgthdeflilhxmyomz";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "ftvejqxlmphklftactrhydltmmtl";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ftvejqxlmphklftactrhydltmmtldyhrtcatflkhpmlxqjevtf";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "wvsklbifgyccvvadimfxffxfmidavvccygfib";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wvsklbifgyccvvadimfxffxfmidavvccygfiblksvw";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "ogszbrdzkgttgkzdrbzsg";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ogszbrdzkgttgkzdrbzsgo";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "thrreplwfsvsfwl";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "thrreplwfsvsfwlperrht";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "faocdvvdmgpfzzfducxlikrjhbsxyhkacrwkharnaqqqqanra";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "faocdvvdmgpfzzfducxlikrjhbsxyhkacrwkharnaqqqqanrahkwrcakhyxsbhjrkilxcudfzzfpgmdvvdcoaf";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "fcaxegypczzcpy";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fcaxegypczzcpygexacf";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "pypefvfep";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "pypefvfepyp";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "bchhyijngruooefeoourgn";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bchhyijngruooefeoourgnjiyhhcb";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "zebreejoosuncrmdlpxjrnjsmglhnytjkekgafhlyibiylhfag";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zebreejoosuncrmdlpxjrnjsmglhnytjkekgafhlyibiylhfagkekjtynhlgmsjnrjxpldmrcnusoojeerbez";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "fusuabieseokwjsfuwzomfbqlqcxpxwwixqzbscppcsbzqxiww";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fusuabieseokwjsfuwzomfbqlqcxpxwwixqzbscppcsbzqxiwwxpxcqlqbfmozwufsjwkoeseibausuf";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "zaradspnbhiwaezzeaw";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zaradspnbhiwaezzeawihbnpsdaraz";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "blbftnqrkqcxoiyjjofspyzzypsfo";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "blbftnqrkqcxoiyjjofspyzzypsfojjyioxcqkrqntfblb";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "leqhifitcwkhfvtwryynevzpeiqqiepzvenyyrwtvfhkwc";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "leqhifitcwkhfvtwryynevzpeiqqiepzvenyyrwtvfhkwctifihqel";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "lccwwhjzjsekefjgxxgjf";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "lccwwhjzjsekefjgxxgjfekesjzjhwwccl";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "zixxlfeyjtplwqvugbpzxtexhvxudljrbdnvezvzevndbrjld";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zixxlfeyjtplwqvugbpzxtexhvxudljrbdnvezvzevndbrjlduxvhxetxzpbguvqwlptjyeflxxiz";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "taenhdefqpuwwgjmoxwdkkxnxxpqyhjhxsmigeyhqndbzwauua";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "taenhdefqpuwwgjmoxwdkkxnxxpqyhjhxsmigeyhqndbzwauuawzbdnqhyegimsxhjhyqpxxnxkkdwxomjgwwupqfedhneat";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "tnamglzfkopmrfrkdisulusvicggpkgvmiocgxfxrrxfx";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tnamglzfkopmrfrkdisulusvicggpkgvmiocgxfxrrxfxgcoimvgkpggcivsulusidkrfrmpokfzlgmant";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "ieluwjsonobzdoibslbl";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ieluwjsonobzdoibslblsbiodzbonosjwulei";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "mdujqrmoznyzo";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "mdujqrmoznyzozynzomrqjudm";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "ysyzqkteljrepqxptyfqkuzzukqfytpxqper";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ysyzqkteljrepqxptyfqkuzzukqfytpxqperjletkqzysy";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "gtlhptwszqicucwmmbchzuhiqklnsddqqsltdijvvtxuhfiif";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "gtlhptwszqicucwmmbchzuhiqklnsddqqsltdijvvtxuhfiifhuxtvvjidtlsqqddsnlkqihuzhcbmmwcuciqzswtphltg";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "ykrnbunmnmqhagzixnxapzgrprrprgzpaxnxizgahqmnmnubnr";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ykrnbunmnmqhagzixnxapzgrprrprgzpaxnxizgahqmnmnubnrky";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "xlnalvarbvvbravlanl";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xlnalvarbvvbravlanlx";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "tascoocsa";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "tascoocsat";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "hjqgvlixqyhfwwocldjsbbsjdlcowwfhyqx";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hjqgvlixqyhfwwocldjsbbsjdlcowwfhyqxilvgqjh";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "zenxcyveazewufjfuwezaevycxn";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "zenxcyveazewufjfuwezaevycxnez";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "wvsuwunwarfstvvgtdwfrhxdmjbjmdxhrfwdtgvvtsfrawnuw";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "wvsuwunwarfstvvgtdwfrhxdmjbjmdxhrfwdtgvvtsfrawnuwusvw";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "frbibaivpihswtrluptitbunmjacjxeapkpkjwuxzwwmqktxbt";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "frbibaivpihswtrluptitbunmjacjxeapkpkjwuxzwwmqktxbtbxtkqmwwzxuwjkpkpaexjcajmnubtitpulrtwshipviabibrf";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "hbyxnzlkynagtkrkwprhggrqeiunagxffyfghuygk";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hbyxnzlkynagtkrkwprhggrqeiunagxffyfghuygkgyuhgfyffxganuieqrgghrpwkrktganyklznxybh";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "gukfcbdw";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "gukfcbdwdbcfkug";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "srhhtdhanutov";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "srhhtdhanutovotunahdthhrs";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "kjkxrduzgxscjsbmnqegzqr";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "kjkxrduzgxscjsbmnqegzqrqzgeqnmbsjcsxgzudrxkjk";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "rokidabyrlozrmvdpfdduwopfyqymsaeotehqykmreojycamx";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "rokidabyrlozrmvdpfdduwopfyqymsaeotehqykmreojycamxmacyjoermkyqhetoeasmyqyfpowuddfpdvmrzolrybadikor";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "avxsfzskfcapvvcrmtzgcqmwoowmqcgztmrcvvpacfkszfsxva";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "avxsfzskfcapvvcrmtzgcqmwoowmqcgztmrcvvpacfkszfsxva";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "bopiposetkmjubehhaphblrcrlbhpahhebujmktesopipob";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "bopiposetkmjubehhaphblrcrlbhpahhebujmktesopipob";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "xpcwjkqqkjwcpx";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "xpcwjkqqkjwcpx";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "dcwuzzuwcd";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dcwuzzuwcd";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "dyaoyvameahjhaemavyoayd";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dyaoyvameahjhaemavyoayd";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "dwdzrozjzjixjqmrumblzvglylgvzlbmurmqjxijzjzorzdwd";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "dwdzrozjzjixjqmrumblzvglylgvzlbmurmqjxijzjzorzdwd";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "hnakhtuvjmyjoqvoyqeazqfamccpgljgssjxxjssgjlgpccmaf";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "hnakhtuvjmyjoqvoyqeazqfamccpgljgssjxxjssgjlgpccmafqzaeqyovqojymjvuthkanh";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "redocpot";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "redocpotopcoder";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "add";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "adda";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "ababba";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "ababbaba";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "a";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string s = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxy";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrstuvwxyabcdefghijklmnopqrstuvwxyxwvutsrqponmlkjihgfedcbayxwvutsrqponmlkjihgfedcba";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string s = "abca";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcacba";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string s = "abcdcb";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdcba";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string s = "abc";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcba";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string s = "adbbd";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "adbbda";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string s = "fgwlehfasdkjlhcewhfkewhfkhfkljdshkldshfkldhlks";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "fgwlehfasdkjlhcewhfkewhfkhfkljdshkldshfkldhlksklhdlkfhsdlkhsdjlkfhkfhwekfhwechljkdsafhelwgf";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string s = "abbacabba";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abbacabba";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string s = "abcdeff";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeffedcba";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string s = "aaab";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "aaabaaa";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string s = "adddd";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "adddda";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string s = "araa";
    Palindromize* pObj = new Palindromize();
    clock_t start = clock();
    string result = pObj->minAdds(s);
    clock_t end = clock();
    delete pObj;
    string expected = "araara";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22628258&rd=10659&pm=7279
********************************************************************************
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <cctype>
#include <algorithm>
#include <vector>
#include <queue>
#include <map>
#include <list>
#include <string>
#include <iostream>
#include <map>
#include <stack>
#include <sstream>
 
using namespace std;
 
typedef vector<int> vi ;
typedef vector<string> vs ;
typedef vector<double> vd ;
#define PB push_back
#define ll long long
#define For(i,n) for (i = 0 ; i < n ; i ++)
#define bend(v) v.begin (), v.end ()
vs split (string s, string delim = " ") {vs res; string t; unsigned int i ; For (i, s.size ()) {if (delim.find (s [i]) != string::npos) {if (! t.empty ()) {res.PB (t); t = "" ;}} else {t += s [i] ; }} if (! t.empty ()) {res.PB (t) ;} return res ;}
 
// 7an7ot 3aleehom ya monnn
 
class Palindromize {
public:
  string minAdds(string);
};
 
bool ispal (string s)
{
  int i ;
  int n = s.size () ;
  For (i, n / 2)
  {
    if (s [i] != s [n - i - 1]) return false ;
  }
  return true ;
}
 
string Palindromize::minAdds(string s) {
  string t, ret ;
  while (! ispal (s))
  {
    t += s [0] ;
    s.erase (s.begin ()) ;
  }
  ret = t + s ;
  reverse (bend (t)) ;
  ret += t ;
  return ret ;
}
 
 
//Powered by [KawigiEdit] 2.0!
//7an7ot 3aleehom ya Monnn

********************************************************************************
*******************************************************************************/